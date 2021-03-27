#pragma once

#if defined(ENABLE_PLAYFABADMIN_API)

#include <playfab/PlayFabAdminDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAbortTaskInstanceRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminActionsOnPlayersInSegmentTaskParameter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ActionId", input.actionId);
            JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminNameIdentifier& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminActionsOnPlayersInSegmentTaskSummary& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAdCampaignAttributionModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAdCampaignSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "CampaignSource", input.campaignSource);
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAddLocalizedNewsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Language", input.language);
            JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
            JsonUtils::ObjectAddMember(output, "Title", input.title);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAddLocalizedNewsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAddNewsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAddPlayerTagRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAddPlayerTagResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAddServerBuildRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminAllPlayersSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminApiCondition& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "HasSignatureOrEncryption", input.hasSignatureOrEncryption);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminBanInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Active", input.active);
            JsonUtils::ObjectAddMember(output, "BanId", input.banId);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
            JsonUtils::ObjectAddMember(output, "IPAddress", input.iPAddress);
            JsonUtils::ObjectAddMember(output, "MACAddress", input.mACAddress);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Reason", input.reason);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminBanPlayerSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanHours", input.banHours);
            JsonUtils::ObjectAddMember(output, "ReasonForBan", input.reasonForBan);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminBanRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DurationInHours", input.durationInHours);
            JsonUtils::ObjectAddMember(output, "IPAddress", input.iPAddress);
            JsonUtils::ObjectAddMember(output, "MACAddress", input.mACAddress);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Reason", input.reason);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminBanUsersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminBanUsersResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminBlankResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCatalogItemBundleInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
            JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
            JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCatalogItemConsumableInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
            JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
            JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCatalogItemContainerInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCheckLimitedEditionItemAvailabilityResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCloudScriptFile& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FileContents", input.fileContents);
            JsonUtils::ObjectAddMember(output, "Filename", input.filename);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCloudScriptTaskParameter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Argument", input.argument);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminScriptExecutionError& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLogStatement& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data);
            JsonUtils::ObjectAddMember(output, "Level", input.level);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminExecuteCloudScriptResult& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LatestRevision", input.latestRevision);
            JsonUtils::ObjectAddMember(output, "PublishedRevision", input.publishedRevision);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminContactEmailInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminContactEmailInfoModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminContentInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
            JsonUtils::ObjectAddMember(output, "Size", input.size);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Level", input.level);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerSharedSecretResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Statistic", input.statistic);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerStatisticSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminEmailNotificationSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
            JsonUtils::ObjectAddMember(output, "EmailTemplateName", input.emailTemplateName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminExecuteAzureFunctionSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AzureFunction", input.azureFunction);
            JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
            JsonUtils::ObjectAddMember(output, "GenerateFunctionExecutedEvents", input.generateFunctionExecutedEvents);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminExecuteCloudScriptSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatelogId", input.catelogId);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            JsonUtils::ObjectAddMember(output, "Quantity", input.quantity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGrantVirtualCurrencySegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IncrementValue", input.incrementValue);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPushNotificationSegmentAction& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSegmentTrigger& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanPlayerAction", input.banPlayerAction);
            JsonUtils::ObjectAddMember(output, "DeletePlayerAction", input.deletePlayerAction);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "LogInDate", input.logInDate, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminFirstLoginTimespanSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "DurationInMinutes", input.durationInMinutes);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLastLoginDateSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "LogInDate", input.logInDate, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLastLoginTimespanSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "DurationInMinutes", input.durationInMinutes);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLinkedUserAccountSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLinkedUserAccountHasEmailSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLocationSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPushNotificationSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PushNotificationDevicePlatform", input.pushNotificationDevicePlatform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminStatisticSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminTotalValueToDateInUSDSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserOriginationSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminValueToDateSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminVirtualCurrencyBalanceSegmentFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
            JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSegmentAndDefinition& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdCampaignFilter", input.adCampaignFilter);
            JsonUtils::ObjectAddMember(output, "AllPlayersFilter", input.allPlayersFilter);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SegmentAndDefinitions", input.segmentAndDefinitions, input.segmentAndDefinitionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSegmentModel& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SegmentModel", input.segmentModel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCreateSegmentResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
            JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminCreateTaskResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TaskId", input.taskId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteContentRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteMasterPlayerAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "MetaData", input.metaData);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteMasterPlayerAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "JobReceiptId", input.jobReceiptId);
            JsonUtils::ObjectAddMember(output, "TitleIds", input.titleIds, input.titleIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteOpenIdConnectionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerSharedSecretRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerSharedSecretResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteSegmentRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteSegmentsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteStoreRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteStoreResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteTaskRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteTitleDataOverrideRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteTitleDataOverrideResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteTitleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminDeleteTitleResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminEmptyResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminEntityKey& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminExportMasterPlayerDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminExportMasterPlayerDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "JobReceiptId", input.jobReceiptId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGameModeInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
            JsonUtils::ObjectAddMember(output, "Summary", input.summary);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetAllSegmentsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetSegmentResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetAllSegmentsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetCatalogItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetCatalogItemsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptRevisionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Revision", input.revision);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptRevisionResult& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
            JsonUtils::ObjectAddMember(output, "Summary", input.summary);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptVersionsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptVersionsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Versions", input.versions, input.versionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetContentListRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Prefix", input.prefix);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetContentListResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Contents", input.contents, input.contentsCount);
            JsonUtils::ObjectAddMember(output, "ItemCount", input.itemCount);
            JsonUtils::ObjectAddMember(output, "TotalSize", input.totalSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetContentUploadUrlRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ContentType", input.contentType);
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetContentUploadUrlResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "URL", input.uRL);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetDataReportRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DownloadUrl", input.downloadUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameInfoRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameInfoResult& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameModesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameModes", input.gameModes, input.gameModesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayedTitleListRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayedTitleListResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TitleIds", input.titleIds, input.titleIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Token", input.token);
            JsonUtils::ObjectAddMember(output, "TokenType", input.tokenType);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerIdFromAuthTokenResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPlayerProfileViewConstraints& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLinkedPlatformAccountModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLocationModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "City", input.city);
            JsonUtils::ObjectAddMember(output, "ContinentCode", input.continentCode);
            JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
            JsonUtils::ObjectAddMember(output, "Latitude", input.latitude);
            JsonUtils::ObjectAddMember(output, "Longitude", input.longitude);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSubscriptionModel& input)
        {
            UNREFERENCED_PARAMETER(input);
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
        inline JsonValue ToJson<>(const PlayFabAdminMembershipModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
            JsonUtils::ObjectAddMember(output, "MembershipExpiration", input.membershipExpiration, true);
            JsonUtils::ObjectAddMember(output, "MembershipId", input.membershipId);
            JsonUtils::ObjectAddMember(output, "OverrideExpiration", input.overrideExpiration, true);
            JsonUtils::ObjectAddMember(output, "Subscriptions", input.subscriptions, input.subscriptionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPushNotificationRegistrationModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminStatisticModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminTagModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminValueToDateModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
            JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPlayerProfileModel& input)
        {
            UNREFERENCED_PARAMETER(input);
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
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerProfileResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSegmentsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSharedSecretsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSharedSecret& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Disabled", input.disabled);
            JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
            JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSharedSecretsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SharedSecrets", input.sharedSecrets, input.sharedSecretsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayersInSegmentRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPlayerProfile& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
            JsonUtils::ObjectAddMember(output, "PlayerProfiles", input.playerProfiles, input.playerProfilesCount);
            JsonUtils::ObjectAddMember(output, "ProfilesInSegment", input.profilesInSegment);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayersSegmentsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticDefinitionsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticDefinitionsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticVersionsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPlayerStatisticVersion& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerTagsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPlayerTagsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPolicyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminPermissionStatement& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
            JsonUtils::ObjectAddMember(output, "PolicyVersion", input.policyVersion);
            JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPublisherDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetPublisherDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetRandomResultTablesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResultTableNode& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ResultItem", input.resultItem);
            JsonUtils::ObjectAddMember(output, "ResultItemType", input.resultItemType);
            JsonUtils::ObjectAddMember(output, "Weight", input.weight);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRandomResultTableListing& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
            JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetRandomResultTablesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetSegmentsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SegmentIds", input.segmentIds, input.segmentIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetSegmentsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
            JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildInfoRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildInfoResult& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildUploadURLResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "URL", input.uRL);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetStoreItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminStoreMarketingModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Description", input.description);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminStoreItem& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstancesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Summaries", input.summaries, input.summariesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetTasksRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminScheduledTask& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Tasks", input.tasks, input.tasksCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetTitleDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetTitleDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetUserBansRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetUserBansResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetUserDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserDataRecord& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetUserDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetUserInventoryRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminItemInstance& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
            JsonUtils::ObjectAddMember(output, "BundleContents", input.bundleContents, input.bundleContentsCount);
            JsonUtils::ObjectAddMember(output, "BundleParent", input.bundleParent);
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomData", input.customData, input.customDataCount);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
            JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
            JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
            JsonUtils::ObjectAddMember(output, "UnitCurrency", input.unitCurrency);
            JsonUtils::ObjectAddMember(output, "UnitPrice", input.unitPrice);
            JsonUtils::ObjectAddMember(output, "UsesIncrementedBy", input.usesIncrementedBy);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminVirtualCurrencyRechargeTime& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
            JsonUtils::ObjectAddMember(output, "RechargeTime", input.rechargeTime, true);
            JsonUtils::ObjectAddMember(output, "SecondsToRecharge", input.secondsToRecharge);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGetUserInventoryResult& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemGrants", input.itemGrants, input.itemGrantsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminGrantItemsToUsersResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminIncrementLimitedEditionItemAvailabilityResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticVersionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticVersionResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminListBuildsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminListBuildsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Builds", input.builds, input.buildsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminListOpenIdConnectionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminOpenIdConnection& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Connections", input.connections, input.connectionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminListVirtualCurrencyTypesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminListVirtualCurrencyTypesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLookupUserAccountInfoRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserAndroidDeviceInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserAppleIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AppleSubjectId", input.appleSubjectId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserCustomIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserFacebookInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
            JsonUtils::ObjectAddMember(output, "FullName", input.fullName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserFacebookInstantGamesIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserGameCenterInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserGoogleInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GoogleEmail", input.googleEmail);
            JsonUtils::ObjectAddMember(output, "GoogleGender", input.googleGender);
            JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
            JsonUtils::ObjectAddMember(output, "GoogleLocale", input.googleLocale);
            JsonUtils::ObjectAddMember(output, "GoogleName", input.googleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserIosDeviceInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IosDeviceId", input.iosDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserKongregateInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
            JsonUtils::ObjectAddMember(output, "KongregateName", input.kongregateName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserNintendoSwitchAccountIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountSubjectId", input.nintendoSwitchAccountSubjectId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserNintendoSwitchDeviceIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserOpenIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
            JsonUtils::ObjectAddMember(output, "Subject", input.subject);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserPrivateAccountInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserPsnInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PsnAccountId", input.psnAccountId);
            JsonUtils::ObjectAddMember(output, "PsnOnlineId", input.psnOnlineId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserSteamInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SteamActivationStatus", input.steamActivationStatus);
            JsonUtils::ObjectAddMember(output, "SteamCountry", input.steamCountry);
            JsonUtils::ObjectAddMember(output, "SteamCurrency", input.steamCurrency);
            JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
            JsonUtils::ObjectAddMember(output, "SteamName", input.steamName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserTitleInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "FirstLogin", input.firstLogin, true);
            JsonUtils::ObjectAddMember(output, "isBanned", input.isBanned);
            JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
            JsonUtils::ObjectAddMember(output, "Origination", input.origination);
            JsonUtils::ObjectAddMember(output, "TitlePlayerAccount", input.titlePlayerAccount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserTwitchInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
            JsonUtils::ObjectAddMember(output, "TwitchUserName", input.twitchUserName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserWindowsHelloInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "WindowsHelloDeviceName", input.windowsHelloDeviceName);
            JsonUtils::ObjectAddMember(output, "WindowsHelloPublicKeyHash", input.windowsHelloPublicKeyHash);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserXboxInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "XboxUserId", input.xboxUserId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUserAccountInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDeviceInfo", input.androidDeviceInfo);
            JsonUtils::ObjectAddMember(output, "AppleAccountInfo", input.appleAccountInfo);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "CustomIdInfo", input.customIdInfo);
            JsonUtils::ObjectAddMember(output, "FacebookInfo", input.facebookInfo);
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIdInfo", input.facebookInstantGamesIdInfo);
            JsonUtils::ObjectAddMember(output, "GameCenterInfo", input.gameCenterInfo);
            JsonUtils::ObjectAddMember(output, "GoogleInfo", input.googleInfo);
            JsonUtils::ObjectAddMember(output, "IosDeviceInfo", input.iosDeviceInfo);
            JsonUtils::ObjectAddMember(output, "KongregateInfo", input.kongregateInfo);
            JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountInfo", input.nintendoSwitchAccountInfo);
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIdInfo", input.nintendoSwitchDeviceIdInfo);
            JsonUtils::ObjectAddMember(output, "OpenIdInfo", input.openIdInfo, input.openIdInfoCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "PrivateInfo", input.privateInfo);
            JsonUtils::ObjectAddMember(output, "PsnInfo", input.psnInfo);
            JsonUtils::ObjectAddMember(output, "SteamInfo", input.steamInfo);
            JsonUtils::ObjectAddMember(output, "TitleInfo", input.titleInfo);
            JsonUtils::ObjectAddMember(output, "TwitchInfo", input.twitchInfo);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            JsonUtils::ObjectAddMember(output, "WindowsHelloInfo", input.windowsHelloInfo);
            JsonUtils::ObjectAddMember(output, "XboxInfo", input.xboxInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminLookupUserAccountInfoResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminModifyMatchmakerGameModesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            JsonUtils::ObjectAddMember(output, "GameModes", input.gameModes, input.gameModesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminModifyMatchmakerGameModesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminModifyServerBuildRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
            JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRefundPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Reason", input.reason);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRefundPurchaseResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PurchaseStatus", input.purchaseStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRemovePlayerTagRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRemovePlayerTagResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRemoveServerBuildRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRemoveServerBuildResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResetCharacterStatisticsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResetCharacterStatisticsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResetPasswordRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "Token", input.token);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResetPasswordResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResetUserStatisticsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResetUserStatisticsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminResolvePurchaseDisputeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PurchaseStatus", input.purchaseStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeAllBansForUserRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeAllBansForUserResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeBansRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanIds", input.banIds, input.banIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeBansResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItem& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeItemError& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Item", input.item);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Errors", input.errors, input.errorsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRunTaskRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminRunTaskResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSendAccountRecoveryEmailRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSendAccountRecoveryEmailResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetPlayerSecretRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetPlayerSecretResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetPublishedRevisionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Revision", input.revision);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetPublishedRevisionResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetPublisherDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetPublisherDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminTitleDataKeyValue& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataAndOverridesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "KeyValues", input.keyValues, input.keyValuesCount);
            JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataAndOverridesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSetupPushNotificationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ARN", input.aRN);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminSubtractUserVirtualCurrencyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Active", input.active);
            JsonUtils::ObjectAddMember(output, "BanId", input.banId);
            JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
            JsonUtils::ObjectAddMember(output, "IPAddress", input.iPAddress);
            JsonUtils::ObjectAddMember(output, "MACAddress", input.mACAddress);
            JsonUtils::ObjectAddMember(output, "Permanent", input.permanent);
            JsonUtils::ObjectAddMember(output, "Reason", input.reason);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateBansRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateBansResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateCatalogItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "SetAsDefaultCatalog", input.setAsDefaultCatalog);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateCatalogItemsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateCloudScriptRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Revision", input.revision);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateOpenIdConnectionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Disabled", input.disabled);
            JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
            JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerSharedSecretResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerStatisticDefinitionResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Statistic", input.statistic);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdatePolicyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
            JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateRandomResultTablesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateRandomResultTablesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateSegmentRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SegmentModel", input.segmentModel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateSegmentResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
            JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateStoreItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
            JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateStoreItemsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateTaskRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateUserInternalDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAdminUpdateUserTitleDisplayNameResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            return output;
        }

    }

    namespace AdminModels
    {
        // Admin Classes
        struct AbortTaskInstanceRequest : public PlayFabAdminAbortTaskInstanceRequest, public BaseRequest
        {
            AbortTaskInstanceRequest() : PlayFabAdminAbortTaskInstanceRequest{}
            {
            }

            AbortTaskInstanceRequest(const AbortTaskInstanceRequest& src) :
                PlayFabAdminAbortTaskInstanceRequest{ src },
                m_customTags{ src.m_customTags },
                m_taskInstanceId{ src.m_taskInstanceId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
            }

            ~AbortTaskInstanceRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAbortTaskInstanceRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_taskInstanceId;
        };

        struct ActionsOnPlayersInSegmentTaskParameter : public PlayFabAdminActionsOnPlayersInSegmentTaskParameter, public BaseModel
        {
            ActionsOnPlayersInSegmentTaskParameter() : PlayFabAdminActionsOnPlayersInSegmentTaskParameter{}
            {
            }

            ActionsOnPlayersInSegmentTaskParameter(const ActionsOnPlayersInSegmentTaskParameter& src) :
                PlayFabAdminActionsOnPlayersInSegmentTaskParameter{ src },
                m_actionId{ src.m_actionId },
                m_segmentId{ src.m_segmentId }
            {

                actionId = m_actionId.empty() ? nullptr : m_actionId.data();
                segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
            }

            ~ActionsOnPlayersInSegmentTaskParameter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActionId", m_actionId, actionId);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminActionsOnPlayersInSegmentTaskParameter>(*this);
            }

        private:
            String m_actionId;
            String m_segmentId;
        };

        struct NameIdentifier : public PlayFabAdminNameIdentifier, public BaseModel
        {
            NameIdentifier() : PlayFabAdminNameIdentifier{}
            {
            }

            NameIdentifier(const NameIdentifier& src) :
                PlayFabAdminNameIdentifier{ src },
                m_id{ src.m_id },
                m_name{ src.m_name }
            {

                id = m_id.empty() ? nullptr : m_id.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~NameIdentifier() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminNameIdentifier>(*this);
            }

        private:
            String m_id;
            String m_name;
        };

        struct ActionsOnPlayersInSegmentTaskSummary : public PlayFabAdminActionsOnPlayersInSegmentTaskSummary, public BaseModel
        {
            ActionsOnPlayersInSegmentTaskSummary() : PlayFabAdminActionsOnPlayersInSegmentTaskSummary{}
            {
            }

            ActionsOnPlayersInSegmentTaskSummary(const ActionsOnPlayersInSegmentTaskSummary& src) :
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

            ~ActionsOnPlayersInSegmentTaskSummary() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CompletedAt", m_completedAt, completedAt, true);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "ErrorWasFatal", m_errorWasFatal, errorWasFatal);
                JsonUtils:: ObjectGetMember(input, "EstimatedSecondsRemaining", m_estimatedSecondsRemaining, estimatedSecondsRemaining);
                JsonUtils:: ObjectGetMember(input, "PercentComplete", m_percentComplete, percentComplete);
                JsonUtils:: ObjectGetMember(input, "ScheduledByUserId", m_scheduledByUserId, scheduledByUserId);
                JsonUtils:: ObjectGetMember(input, "StartedAt", startedAt, true);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
                JsonUtils:: ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
                JsonUtils:: ObjectGetMember(input, "TotalPlayersInSegment", m_totalPlayersInSegment, totalPlayersInSegment);
                JsonUtils:: ObjectGetMember(input, "TotalPlayersProcessed", m_totalPlayersProcessed, totalPlayersProcessed);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminActionsOnPlayersInSegmentTaskSummary>(*this);
            }

        private:
            StdExtra::optional<time_t> m_completedAt;
            String m_errorMessage;
            StdExtra::optional<bool> m_errorWasFatal;
            StdExtra::optional<double> m_estimatedSecondsRemaining;
            StdExtra::optional<double> m_percentComplete;
            String m_scheduledByUserId;

            StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_status;
            StdExtra::optional<NameIdentifier> m_taskIdentifier;
            String m_taskInstanceId;
            StdExtra::optional<int32_t> m_totalPlayersInSegment;
            StdExtra::optional<int32_t> m_totalPlayersProcessed;
        };

        struct AdCampaignAttribution : public PlayFabAdminAdCampaignAttribution, public BaseModel
        {
            AdCampaignAttribution() : PlayFabAdminAdCampaignAttribution{}
            {
            }

            AdCampaignAttribution(const AdCampaignAttribution& src) :
                PlayFabAdminAdCampaignAttribution{ src },
                m_campaignId{ src.m_campaignId },
                m_platform{ src.m_platform }
            {

                campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
                platform = m_platform.empty() ? nullptr : m_platform.data();
            }

            ~AdCampaignAttribution() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AttributedAt", attributedAt, true);
                JsonUtils:: ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAdCampaignAttribution>(*this);
            }

        private:

            String m_campaignId;
            String m_platform;
        };

        struct AdCampaignAttributionModel : public PlayFabAdminAdCampaignAttributionModel, public BaseModel
        {
            AdCampaignAttributionModel() : PlayFabAdminAdCampaignAttributionModel{}
            {
            }

            AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
                PlayFabAdminAdCampaignAttributionModel{ src },
                m_campaignId{ src.m_campaignId },
                m_platform{ src.m_platform }
            {

                campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
                platform = m_platform.empty() ? nullptr : m_platform.data();
            }

            ~AdCampaignAttributionModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AttributedAt", attributedAt, true);
                JsonUtils:: ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAdCampaignAttributionModel>(*this);
            }

        private:

            String m_campaignId;
            String m_platform;
        };

        struct AdCampaignSegmentFilter : public PlayFabAdminAdCampaignSegmentFilter, public BaseModel
        {
            AdCampaignSegmentFilter() : PlayFabAdminAdCampaignSegmentFilter{}
            {
            }

            AdCampaignSegmentFilter(const AdCampaignSegmentFilter& src) :
                PlayFabAdminAdCampaignSegmentFilter{ src },
                m_campaignId{ src.m_campaignId },
                m_campaignSource{ src.m_campaignSource },
                m_comparison{ src.m_comparison }
            {

                campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
                campaignSource = m_campaignSource.empty() ? nullptr : m_campaignSource.data();
                comparison = m_comparison ? m_comparison.operator->() : nullptr;
            }

            ~AdCampaignSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
                JsonUtils:: ObjectGetMember(input, "CampaignSource", m_campaignSource, campaignSource);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAdCampaignSegmentFilter>(*this);
            }

        private:
            String m_campaignId;
            String m_campaignSource;
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
        };

        struct AddLocalizedNewsRequest : public PlayFabAdminAddLocalizedNewsRequest, public BaseRequest
        {
            AddLocalizedNewsRequest() : PlayFabAdminAddLocalizedNewsRequest{}
            {
            }

            AddLocalizedNewsRequest(const AddLocalizedNewsRequest& src) :
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

            ~AddLocalizedNewsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Language", m_language, language);
                JsonUtils:: ObjectGetMember(input, "NewsId", m_newsId, newsId);
                JsonUtils:: ObjectGetMember(input, "Title", m_title, title);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddLocalizedNewsRequest>(*this);
            }

        private:
            String m_body;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_language;
            String m_newsId;
            String m_title;
        };

        struct AddLocalizedNewsResult : public PlayFabAdminAddLocalizedNewsResult, public BaseResult
        {
            AddLocalizedNewsResult() : PlayFabAdminAddLocalizedNewsResult{}
            {
            }

            AddLocalizedNewsResult(const AddLocalizedNewsResult&) = default;

            ~AddLocalizedNewsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddLocalizedNewsResult>(*this);
            }

        private:
        };

        struct AddNewsRequest : public PlayFabAdminAddNewsRequest, public BaseRequest
        {
            AddNewsRequest() : PlayFabAdminAddNewsRequest{}
            {
            }

            AddNewsRequest(const AddNewsRequest& src) :
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

            ~AddNewsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
                JsonUtils:: ObjectGetMember(input, "Title", m_title, title);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddNewsRequest>(*this);
            }

        private:
            String m_body;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<time_t> m_timestamp;
            String m_title;
        };

        struct AddNewsResult : public PlayFabAdminAddNewsResult, public BaseResult
        {
            AddNewsResult() : PlayFabAdminAddNewsResult{}
            {
            }

            AddNewsResult(const AddNewsResult& src) :
                PlayFabAdminAddNewsResult{ src },
                m_newsId{ src.m_newsId }
            {

                newsId = m_newsId.empty() ? nullptr : m_newsId.data();
            }

            ~AddNewsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NewsId", m_newsId, newsId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddNewsResult>(*this);
            }

        private:
            String m_newsId;
        };

        struct AddPlayerTagRequest : public PlayFabAdminAddPlayerTagRequest, public BaseRequest
        {
            AddPlayerTagRequest() : PlayFabAdminAddPlayerTagRequest{}
            {
            }

            AddPlayerTagRequest(const AddPlayerTagRequest& src) :
                PlayFabAdminAddPlayerTagRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_tagName{ src.m_tagName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tagName = m_tagName.empty() ? nullptr : m_tagName.data();
            }

            ~AddPlayerTagRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "TagName", m_tagName, tagName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddPlayerTagRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_tagName;
        };

        struct AddPlayerTagResult : public PlayFabAdminAddPlayerTagResult, public BaseResult
        {
            AddPlayerTagResult() : PlayFabAdminAddPlayerTagResult{}
            {
            }

            AddPlayerTagResult(const AddPlayerTagResult&) = default;

            ~AddPlayerTagResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddPlayerTagResult>(*this);
            }

        private:
        };

        struct AddServerBuildRequest : public PlayFabAdminAddServerBuildRequest, public BaseRequest
        {
            AddServerBuildRequest() : PlayFabAdminAddServerBuildRequest{}
            {
            }

            AddServerBuildRequest(const AddServerBuildRequest& src) :
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

            ~AddServerBuildRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
                JsonUtils:: ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
                JsonUtils:: ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddServerBuildRequest>(*this);
            }

        private:
            Vector<PlayFabAdminRegion> m_activeRegions;
            String m_buildId;
            String m_commandLineTemplate;
            String m_comment;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_executablePath;


        };

        struct AddServerBuildResult : public PlayFabAdminAddServerBuildResult, public BaseResult
        {
            AddServerBuildResult() : PlayFabAdminAddServerBuildResult{}
            {
            }

            AddServerBuildResult(const AddServerBuildResult& src) :
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

            ~AddServerBuildResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
                JsonUtils:: ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
                JsonUtils:: ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "Timestamp", timestamp, true);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddServerBuildResult>(*this);
            }

        private:
            Vector<PlayFabAdminRegion> m_activeRegions;
            String m_buildId;
            String m_commandLineTemplate;
            String m_comment;
            String m_executablePath;


            StdExtra::optional<PlayFabAdminGameBuildStatus> m_status;

            String m_titleId;
        };

        struct AddUserVirtualCurrencyRequest : public PlayFabAdminAddUserVirtualCurrencyRequest, public BaseRequest
        {
            AddUserVirtualCurrencyRequest() : PlayFabAdminAddUserVirtualCurrencyRequest{}
            {
            }

            AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
                PlayFabAdminAddUserVirtualCurrencyRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~AddUserVirtualCurrencyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddUserVirtualCurrencyRequest>(*this);
            }

        private:

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct VirtualCurrencyData : public PlayFabAdminVirtualCurrencyData, public BaseModel
        {
            VirtualCurrencyData() : PlayFabAdminVirtualCurrencyData{}
            {
            }

            VirtualCurrencyData(const VirtualCurrencyData& src) :
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

            ~VirtualCurrencyData() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "InitialDeposit", m_initialDeposit, initialDeposit);
                JsonUtils:: ObjectGetMember(input, "RechargeMax", m_rechargeMax, rechargeMax);
                JsonUtils:: ObjectGetMember(input, "RechargeRate", m_rechargeRate, rechargeRate);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminVirtualCurrencyData>(*this);
            }

        private:
            String m_currencyCode;
            String m_displayName;
            StdExtra::optional<int32_t> m_initialDeposit;
            StdExtra::optional<int32_t> m_rechargeMax;
            StdExtra::optional<int32_t> m_rechargeRate;
        };

        struct AddVirtualCurrencyTypesRequest : public PlayFabAdminAddVirtualCurrencyTypesRequest, public BaseRequest
        {
            AddVirtualCurrencyTypesRequest() : PlayFabAdminAddVirtualCurrencyTypesRequest{}
            {
            }

            AddVirtualCurrencyTypesRequest(const AddVirtualCurrencyTypesRequest& src) :
                PlayFabAdminAddVirtualCurrencyTypesRequest{ src },
                m_virtualCurrencies{ src.m_virtualCurrencies }
            {

                virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
            }

            ~AddVirtualCurrencyTypesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAddVirtualCurrencyTypesRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
        };

        struct AllPlayersSegmentFilter : public PlayFabAdminAllPlayersSegmentFilter, public BaseModel
        {
            AllPlayersSegmentFilter() : PlayFabAdminAllPlayersSegmentFilter{}
            {
            }

            AllPlayersSegmentFilter(const AllPlayersSegmentFilter&) = default;

            ~AllPlayersSegmentFilter() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminAllPlayersSegmentFilter>(*this);
            }

        private:
        };

        struct ApiCondition : public PlayFabAdminApiCondition, public BaseModel
        {
            ApiCondition() : PlayFabAdminApiCondition{}
            {
            }

            ApiCondition(const ApiCondition& src) :
                PlayFabAdminApiCondition{ src },
                m_hasSignatureOrEncryption{ src.m_hasSignatureOrEncryption }
            {

                hasSignatureOrEncryption = m_hasSignatureOrEncryption ? m_hasSignatureOrEncryption.operator->() : nullptr;
            }

            ~ApiCondition() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "HasSignatureOrEncryption", m_hasSignatureOrEncryption, hasSignatureOrEncryption);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminApiCondition>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminConditionals> m_hasSignatureOrEncryption;
        };

        struct BanInfo : public PlayFabAdminBanInfo, public BaseModel
        {
            BanInfo() : PlayFabAdminBanInfo{}
            {
            }

            BanInfo(const BanInfo& src) :
                PlayFabAdminBanInfo{ src },
                m_banId{ src.m_banId },
                m_created{ src.m_created },
                m_expires{ src.m_expires },
                m_iPAddress{ src.m_iPAddress },
                m_mACAddress{ src.m_mACAddress },
                m_playFabId{ src.m_playFabId },
                m_reason{ src.m_reason }
            {

                banId = m_banId.empty() ? nullptr : m_banId.data();
                created = m_created ? m_created.operator->() : nullptr;
                expires = m_expires ? m_expires.operator->() : nullptr;
                iPAddress = m_iPAddress.empty() ? nullptr : m_iPAddress.data();
                mACAddress = m_mACAddress.empty() ? nullptr : m_mACAddress.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                reason = m_reason.empty() ? nullptr : m_reason.data();
            }

            ~BanInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Active", active);
                JsonUtils:: ObjectGetMember(input, "BanId", m_banId, banId);
                JsonUtils:: ObjectGetMember(input, "Created", m_created, created, true);
                JsonUtils:: ObjectGetMember(input, "Expires", m_expires, expires, true);
                JsonUtils:: ObjectGetMember(input, "IPAddress", m_iPAddress, iPAddress);
                JsonUtils:: ObjectGetMember(input, "MACAddress", m_mACAddress, mACAddress);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Reason", m_reason, reason);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminBanInfo>(*this);
            }

        private:

            String m_banId;
            StdExtra::optional<time_t> m_created;
            StdExtra::optional<time_t> m_expires;
            String m_iPAddress;
            String m_mACAddress;
            String m_playFabId;
            String m_reason;
        };

        struct BanPlayerSegmentAction : public PlayFabAdminBanPlayerSegmentAction, public BaseModel
        {
            BanPlayerSegmentAction() : PlayFabAdminBanPlayerSegmentAction{}
            {
            }

            BanPlayerSegmentAction(const BanPlayerSegmentAction& src) :
                PlayFabAdminBanPlayerSegmentAction{ src },
                m_banHours{ src.m_banHours },
                m_reasonForBan{ src.m_reasonForBan }
            {

                banHours = m_banHours ? m_banHours.operator->() : nullptr;
                reasonForBan = m_reasonForBan.empty() ? nullptr : m_reasonForBan.data();
            }

            ~BanPlayerSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanHours", m_banHours, banHours);
                JsonUtils:: ObjectGetMember(input, "ReasonForBan", m_reasonForBan, reasonForBan);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminBanPlayerSegmentAction>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_banHours;
            String m_reasonForBan;
        };

        struct BanRequest : public PlayFabAdminBanRequest, public BaseRequest
        {
            BanRequest() : PlayFabAdminBanRequest{}
            {
            }

            BanRequest(const BanRequest& src) :
                PlayFabAdminBanRequest{ src },
                m_durationInHours{ src.m_durationInHours },
                m_iPAddress{ src.m_iPAddress },
                m_mACAddress{ src.m_mACAddress },
                m_playFabId{ src.m_playFabId },
                m_reason{ src.m_reason }
            {

                durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
                iPAddress = m_iPAddress.empty() ? nullptr : m_iPAddress.data();
                mACAddress = m_mACAddress.empty() ? nullptr : m_mACAddress.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                reason = m_reason.empty() ? nullptr : m_reason.data();
            }

            ~BanRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DurationInHours", m_durationInHours, durationInHours);
                JsonUtils:: ObjectGetMember(input, "IPAddress", m_iPAddress, iPAddress);
                JsonUtils:: ObjectGetMember(input, "MACAddress", m_mACAddress, mACAddress);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Reason", m_reason, reason);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminBanRequest>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_durationInHours;
            String m_iPAddress;
            String m_mACAddress;
            String m_playFabId;
            String m_reason;
        };

        struct BanUsersRequest : public PlayFabAdminBanUsersRequest, public BaseRequest
        {
            BanUsersRequest() : PlayFabAdminBanUsersRequest{}
            {
            }

            BanUsersRequest(const BanUsersRequest& src) :
                PlayFabAdminBanUsersRequest{ src },
                m_bans{ src.m_bans },
                m_customTags{ src.m_customTags }
            {

                bans = m_bans.Empty() ? nullptr : m_bans.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~BanUsersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminBanUsersRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminBanRequest, BanRequest> m_bans;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct BanUsersResult : public PlayFabAdminBanUsersResult, public BaseResult
        {
            BanUsersResult() : PlayFabAdminBanUsersResult{}
            {
            }

            BanUsersResult(const BanUsersResult& src) :
                PlayFabAdminBanUsersResult{ src },
                m_banData{ src.m_banData }
            {

                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~BanUsersResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminBanUsersResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminBanInfo, BanInfo> m_banData;
        };

        struct BlankResult : public PlayFabAdminBlankResult, public BaseResult
        {
            BlankResult() : PlayFabAdminBlankResult{}
            {
            }

            BlankResult(const BlankResult&) = default;

            ~BlankResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminBlankResult>(*this);
            }

        private:
        };

        struct CatalogItemBundleInfo : public PlayFabAdminCatalogItemBundleInfo, public BaseModel
        {
            CatalogItemBundleInfo() : PlayFabAdminCatalogItemBundleInfo{}
            {
            }

            CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
                PlayFabAdminCatalogItemBundleInfo{ src },
                m_bundledItems{ src.m_bundledItems },
                m_bundledResultTables{ src.m_bundledResultTables },
                m_bundledVirtualCurrencies{ src.m_bundledVirtualCurrencies }
            {

                bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
                bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
                bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
            }

            ~CatalogItemBundleInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BundledItems", m_bundledItems, bundledItems, bundledItemsCount);
                JsonUtils:: ObjectGetMember(input, "BundledResultTables", m_bundledResultTables, bundledResultTables, bundledResultTablesCount);
                JsonUtils:: ObjectGetMember(input, "BundledVirtualCurrencies", m_bundledVirtualCurrencies, bundledVirtualCurrencies, bundledVirtualCurrenciesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCatalogItemBundleInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_bundledItems;
            PointerArray<const char, String> m_bundledResultTables;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
        };

        struct CatalogItemConsumableInfo : public PlayFabAdminCatalogItemConsumableInfo, public BaseModel
        {
            CatalogItemConsumableInfo() : PlayFabAdminCatalogItemConsumableInfo{}
            {
            }

            CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
                PlayFabAdminCatalogItemConsumableInfo{ src },
                m_usageCount{ src.m_usageCount },
                m_usagePeriod{ src.m_usagePeriod },
                m_usagePeriodGroup{ src.m_usagePeriodGroup }
            {

                usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
                usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
                usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
            }

            ~CatalogItemConsumableInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "UsageCount", m_usageCount, usageCount);
                JsonUtils:: ObjectGetMember(input, "UsagePeriod", m_usagePeriod, usagePeriod);
                JsonUtils:: ObjectGetMember(input, "UsagePeriodGroup", m_usagePeriodGroup, usagePeriodGroup);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCatalogItemConsumableInfo>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_usageCount;
            StdExtra::optional<uint32_t> m_usagePeriod;
            String m_usagePeriodGroup;
        };

        struct CatalogItemContainerInfo : public PlayFabAdminCatalogItemContainerInfo, public BaseModel
        {
            CatalogItemContainerInfo() : PlayFabAdminCatalogItemContainerInfo{}
            {
            }

            CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
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

            ~CatalogItemContainerInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ItemContents", m_itemContents, itemContents, itemContentsCount);
                JsonUtils:: ObjectGetMember(input, "KeyItemId", m_keyItemId, keyItemId);
                JsonUtils:: ObjectGetMember(input, "ResultTableContents", m_resultTableContents, resultTableContents, resultTableContentsCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyContents", m_virtualCurrencyContents, virtualCurrencyContents, virtualCurrencyContentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCatalogItemContainerInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_itemContents;
            String m_keyItemId;
            PointerArray<const char, String> m_resultTableContents;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyContents;
        };

        struct CatalogItem : public PlayFabAdminCatalogItem, public BaseModel
        {
            CatalogItem() : PlayFabAdminCatalogItem{}
            {
            }

            CatalogItem(const CatalogItem& src) :
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

            ~CatalogItem() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Bundle", m_bundle, bundle);
                JsonUtils:: ObjectGetMember(input, "CanBecomeCharacter", canBecomeCharacter);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "Consumable", m_consumable, consumable);
                JsonUtils:: ObjectGetMember(input, "Container", m_container, container);
                JsonUtils:: ObjectGetMember(input, "CustomData", m_customData, customData);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "InitialLimitedEditionCount", initialLimitedEditionCount);
                JsonUtils:: ObjectGetMember(input, "IsLimitedEdition", isLimitedEdition);
                JsonUtils:: ObjectGetMember(input, "IsStackable", isStackable);
                JsonUtils:: ObjectGetMember(input, "IsTradable", isTradable);
                JsonUtils:: ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "ItemImageUrl", m_itemImageUrl, itemImageUrl);
                JsonUtils:: ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCatalogItem>(*this);
            }

        private:
            StdExtra::optional<CatalogItemBundleInfo> m_bundle;

            String m_catalogVersion;
            StdExtra::optional<CatalogItemConsumableInfo> m_consumable;
            StdExtra::optional<CatalogItemContainerInfo> m_container;
            String m_customData;
            String m_description;
            String m_displayName;




            String m_itemClass;
            String m_itemId;
            String m_itemImageUrl;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
            PointerArray<const char, String> m_tags;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
        };

        struct CheckLimitedEditionItemAvailabilityRequest : public PlayFabAdminCheckLimitedEditionItemAvailabilityRequest, public BaseRequest
        {
            CheckLimitedEditionItemAvailabilityRequest() : PlayFabAdminCheckLimitedEditionItemAvailabilityRequest{}
            {
            }

            CheckLimitedEditionItemAvailabilityRequest(const CheckLimitedEditionItemAvailabilityRequest& src) :
                PlayFabAdminCheckLimitedEditionItemAvailabilityRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_itemId{ src.m_itemId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
            }

            ~CheckLimitedEditionItemAvailabilityRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCheckLimitedEditionItemAvailabilityRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_itemId;
        };

        struct CheckLimitedEditionItemAvailabilityResult : public PlayFabAdminCheckLimitedEditionItemAvailabilityResult, public BaseResult
        {
            CheckLimitedEditionItemAvailabilityResult() : PlayFabAdminCheckLimitedEditionItemAvailabilityResult{}
            {
            }

            CheckLimitedEditionItemAvailabilityResult(const CheckLimitedEditionItemAvailabilityResult&) = default;

            ~CheckLimitedEditionItemAvailabilityResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCheckLimitedEditionItemAvailabilityResult>(*this);
            }

        private:

        };

        struct CloudScriptFile : public PlayFabAdminCloudScriptFile, public BaseModel
        {
            CloudScriptFile() : PlayFabAdminCloudScriptFile{}
            {
            }

            CloudScriptFile(const CloudScriptFile& src) :
                PlayFabAdminCloudScriptFile{ src },
                m_fileContents{ src.m_fileContents },
                m_filename{ src.m_filename }
            {

                fileContents = m_fileContents.empty() ? nullptr : m_fileContents.data();
                filename = m_filename.empty() ? nullptr : m_filename.data();
            }

            ~CloudScriptFile() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FileContents", m_fileContents, fileContents);
                JsonUtils:: ObjectGetMember(input, "Filename", m_filename, filename);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCloudScriptFile>(*this);
            }

        private:
            String m_fileContents;
            String m_filename;
        };

        struct CloudScriptTaskParameter : public PlayFabAdminCloudScriptTaskParameter, public BaseModel
        {
            CloudScriptTaskParameter() : PlayFabAdminCloudScriptTaskParameter{}
            {
            }

            CloudScriptTaskParameter(const CloudScriptTaskParameter& src) :
                PlayFabAdminCloudScriptTaskParameter{ src },
                m_argument{ src.m_argument },
                m_functionName{ src.m_functionName }
            {

                argument.stringValue = m_argument.StringValue();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
            }

            ~CloudScriptTaskParameter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Argument", m_argument, argument);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCloudScriptTaskParameter>(*this);
            }

        private:
            JsonObject m_argument;
            String m_functionName;
        };

        struct ScriptExecutionError : public PlayFabAdminScriptExecutionError, public BaseModel
        {
            ScriptExecutionError() : PlayFabAdminScriptExecutionError{}
            {
            }

            ScriptExecutionError(const ScriptExecutionError& src) :
                PlayFabAdminScriptExecutionError{ src },
                m_error{ src.m_error },
                m_message{ src.m_message },
                m_stackTrace{ src.m_stackTrace }
            {

                error = m_error.empty() ? nullptr : m_error.data();
                message = m_message.empty() ? nullptr : m_message.data();
                stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
            }

            ~ScriptExecutionError() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminScriptExecutionError>(*this);
            }

        private:
            String m_error;
            String m_message;
            String m_stackTrace;
        };

        struct LogStatement : public PlayFabAdminLogStatement, public BaseModel
        {
            LogStatement() : PlayFabAdminLogStatement{}
            {
            }

            LogStatement(const LogStatement& src) :
                PlayFabAdminLogStatement{ src },
                m_data{ src.m_data },
                m_level{ src.m_level },
                m_message{ src.m_message }
            {

                data.stringValue = m_data.StringValue();
                level = m_level.empty() ? nullptr : m_level.data();
                message = m_message.empty() ? nullptr : m_message.data();
            }

            ~LogStatement() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data);
                JsonUtils:: ObjectGetMember(input, "Level", m_level, level);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLogStatement>(*this);
            }

        private:
            JsonObject m_data;
            String m_level;
            String m_message;
        };

        struct ExecuteCloudScriptResult : public PlayFabAdminExecuteCloudScriptResult, public BaseResult
        {
            ExecuteCloudScriptResult() : PlayFabAdminExecuteCloudScriptResult{}
            {
            }

            ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
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

            ~ExecuteCloudScriptResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
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
                return JsonUtils::ToJson<PlayFabAdminExecuteCloudScriptResult>(*this);
            }

        private:

            StdExtra::optional<ScriptExecutionError> m_error;

            String m_functionName;
            JsonObject m_functionResult;
            StdExtra::optional<bool> m_functionResultTooLarge;

            PointerArray<PlayFabAdminLogStatement, LogStatement> m_logs;
            StdExtra::optional<bool> m_logsTooLarge;



        };

        struct CloudScriptTaskSummary : public PlayFabAdminCloudScriptTaskSummary, public BaseModel
        {
            CloudScriptTaskSummary() : PlayFabAdminCloudScriptTaskSummary{}
            {
            }

            CloudScriptTaskSummary(const CloudScriptTaskSummary& src) :
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

            ~CloudScriptTaskSummary() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CompletedAt", m_completedAt, completedAt, true);
                JsonUtils:: ObjectGetMember(input, "EstimatedSecondsRemaining", m_estimatedSecondsRemaining, estimatedSecondsRemaining);
                JsonUtils:: ObjectGetMember(input, "PercentComplete", m_percentComplete, percentComplete);
                JsonUtils:: ObjectGetMember(input, "Result", m_result, result);
                JsonUtils:: ObjectGetMember(input, "ScheduledByUserId", m_scheduledByUserId, scheduledByUserId);
                JsonUtils:: ObjectGetMember(input, "StartedAt", startedAt, true);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
                JsonUtils:: ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCloudScriptTaskSummary>(*this);
            }

        private:
            StdExtra::optional<time_t> m_completedAt;
            StdExtra::optional<double> m_estimatedSecondsRemaining;
            StdExtra::optional<double> m_percentComplete;
            StdExtra::optional<ExecuteCloudScriptResult> m_result;
            String m_scheduledByUserId;

            StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_status;
            StdExtra::optional<NameIdentifier> m_taskIdentifier;
            String m_taskInstanceId;
        };

        struct CloudScriptVersionStatus : public PlayFabAdminCloudScriptVersionStatus, public BaseModel
        {
            CloudScriptVersionStatus() : PlayFabAdminCloudScriptVersionStatus{}
            {
            }

            CloudScriptVersionStatus(const CloudScriptVersionStatus&) = default;

            ~CloudScriptVersionStatus() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LatestRevision", latestRevision);
                JsonUtils:: ObjectGetMember(input, "PublishedRevision", publishedRevision);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCloudScriptVersionStatus>(*this);
            }

        private:



        };

        struct ContactEmailInfo : public PlayFabAdminContactEmailInfo, public BaseModel
        {
            ContactEmailInfo() : PlayFabAdminContactEmailInfo{}
            {
            }

            ContactEmailInfo(const ContactEmailInfo& src) :
                PlayFabAdminContactEmailInfo{ src },
                m_emailAddress{ src.m_emailAddress },
                m_name{ src.m_name },
                m_verificationStatus{ src.m_verificationStatus }
            {

                emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
                name = m_name.empty() ? nullptr : m_name.data();
                verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
            }

            ~ContactEmailInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminContactEmailInfo>(*this);
            }

        private:
            String m_emailAddress;
            String m_name;
            StdExtra::optional<PlayFabAdminEmailVerificationStatus> m_verificationStatus;
        };

        struct ContactEmailInfoModel : public PlayFabAdminContactEmailInfoModel, public BaseModel
        {
            ContactEmailInfoModel() : PlayFabAdminContactEmailInfoModel{}
            {
            }

            ContactEmailInfoModel(const ContactEmailInfoModel& src) :
                PlayFabAdminContactEmailInfoModel{ src },
                m_emailAddress{ src.m_emailAddress },
                m_name{ src.m_name },
                m_verificationStatus{ src.m_verificationStatus }
            {

                emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
                name = m_name.empty() ? nullptr : m_name.data();
                verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
            }

            ~ContactEmailInfoModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminContactEmailInfoModel>(*this);
            }

        private:
            String m_emailAddress;
            String m_name;
            StdExtra::optional<PlayFabAdminEmailVerificationStatus> m_verificationStatus;
        };

        struct ContentInfo : public PlayFabAdminContentInfo, public BaseModel
        {
            ContentInfo() : PlayFabAdminContentInfo{}
            {
            }

            ContentInfo(const ContentInfo& src) :
                PlayFabAdminContentInfo{ src },
                m_key{ src.m_key }
            {

                key = m_key.empty() ? nullptr : m_key.data();
            }

            ~ContentInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "LastModified", lastModified, true);
                JsonUtils:: ObjectGetMember(input, "Size", size);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminContentInfo>(*this);
            }

        private:
            String m_key;


        };

        struct CreateActionsOnPlayerSegmentTaskRequest : public PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest, public BaseRequest
        {
            CreateActionsOnPlayerSegmentTaskRequest() : PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest{}
            {
            }

            CreateActionsOnPlayerSegmentTaskRequest(const CreateActionsOnPlayerSegmentTaskRequest& src) :
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
                parameter = (PlayFabAdminActionsOnPlayersInSegmentTaskParameter*)&m_parameter;
                schedule = m_schedule.empty() ? nullptr : m_schedule.data();
            }

            ~CreateActionsOnPlayerSegmentTaskRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Schedule", m_schedule, schedule);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;

            String m_name;
            ActionsOnPlayersInSegmentTaskParameter m_parameter;
            String m_schedule;
        };

        struct CreateCloudScriptTaskRequest : public PlayFabAdminCreateCloudScriptTaskRequest, public BaseRequest
        {
            CreateCloudScriptTaskRequest() : PlayFabAdminCreateCloudScriptTaskRequest{}
            {
            }

            CreateCloudScriptTaskRequest(const CreateCloudScriptTaskRequest& src) :
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
                parameter = (PlayFabAdminCloudScriptTaskParameter*)&m_parameter;
                schedule = m_schedule.empty() ? nullptr : m_schedule.data();
            }

            ~CreateCloudScriptTaskRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Schedule", m_schedule, schedule);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateCloudScriptTaskRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;

            String m_name;
            CloudScriptTaskParameter m_parameter;
            String m_schedule;
        };

        struct InsightsScalingTaskParameter : public PlayFabAdminInsightsScalingTaskParameter, public BaseModel
        {
            InsightsScalingTaskParameter() : PlayFabAdminInsightsScalingTaskParameter{}
            {
            }

            InsightsScalingTaskParameter(const InsightsScalingTaskParameter&) = default;

            ~InsightsScalingTaskParameter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Level", level);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminInsightsScalingTaskParameter>(*this);
            }

        private:

        };

        struct CreateInsightsScheduledScalingTaskRequest : public PlayFabAdminCreateInsightsScheduledScalingTaskRequest, public BaseRequest
        {
            CreateInsightsScheduledScalingTaskRequest() : PlayFabAdminCreateInsightsScheduledScalingTaskRequest{}
            {
            }

            CreateInsightsScheduledScalingTaskRequest(const CreateInsightsScheduledScalingTaskRequest& src) :
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
                parameter = (PlayFabAdminInsightsScalingTaskParameter*)&m_parameter;
                schedule = m_schedule.empty() ? nullptr : m_schedule.data();
            }

            ~CreateInsightsScheduledScalingTaskRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Schedule", m_schedule, schedule);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateInsightsScheduledScalingTaskRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;

            String m_name;
            InsightsScalingTaskParameter m_parameter;
            String m_schedule;
        };

        struct OpenIdIssuerInformation : public PlayFabAdminOpenIdIssuerInformation, public BaseModel
        {
            OpenIdIssuerInformation() : PlayFabAdminOpenIdIssuerInformation{}
            {
            }

            OpenIdIssuerInformation(const OpenIdIssuerInformation& src) :
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

            ~OpenIdIssuerInformation() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AuthorizationUrl", m_authorizationUrl, authorizationUrl);
                JsonUtils:: ObjectGetMember(input, "Issuer", m_issuer, issuer);
                JsonUtils:: ObjectGetMember(input, "JsonWebKeySet", m_jsonWebKeySet, jsonWebKeySet);
                JsonUtils:: ObjectGetMember(input, "TokenUrl", m_tokenUrl, tokenUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminOpenIdIssuerInformation>(*this);
            }

        private:
            String m_authorizationUrl;
            String m_issuer;
            JsonObject m_jsonWebKeySet;
            String m_tokenUrl;
        };

        struct CreateOpenIdConnectionRequest : public PlayFabAdminCreateOpenIdConnectionRequest, public BaseRequest
        {
            CreateOpenIdConnectionRequest() : PlayFabAdminCreateOpenIdConnectionRequest{}
            {
            }

            CreateOpenIdConnectionRequest(const CreateOpenIdConnectionRequest& src) :
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

            ~CreateOpenIdConnectionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ClientId", m_clientId, clientId);
                JsonUtils:: ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "IgnoreNonce", m_ignoreNonce, ignoreNonce);
                JsonUtils:: ObjectGetMember(input, "IssuerDiscoveryUrl", m_issuerDiscoveryUrl, issuerDiscoveryUrl);
                JsonUtils:: ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateOpenIdConnectionRequest>(*this);
            }

        private:
            String m_clientId;
            String m_clientSecret;
            String m_connectionId;
            StdExtra::optional<bool> m_ignoreNonce;
            String m_issuerDiscoveryUrl;
            StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
        };

        struct CreatePlayerSharedSecretRequest : public PlayFabAdminCreatePlayerSharedSecretRequest, public BaseRequest
        {
            CreatePlayerSharedSecretRequest() : PlayFabAdminCreatePlayerSharedSecretRequest{}
            {
            }

            CreatePlayerSharedSecretRequest(const CreatePlayerSharedSecretRequest& src) :
                PlayFabAdminCreatePlayerSharedSecretRequest{ src },
                m_friendlyName{ src.m_friendlyName }
            {

                friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
            }

            ~CreatePlayerSharedSecretRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreatePlayerSharedSecretRequest>(*this);
            }

        private:
            String m_friendlyName;
        };

        struct CreatePlayerSharedSecretResult : public PlayFabAdminCreatePlayerSharedSecretResult, public BaseResult
        {
            CreatePlayerSharedSecretResult() : PlayFabAdminCreatePlayerSharedSecretResult{}
            {
            }

            CreatePlayerSharedSecretResult(const CreatePlayerSharedSecretResult& src) :
                PlayFabAdminCreatePlayerSharedSecretResult{ src },
                m_secretKey{ src.m_secretKey }
            {

                secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
            }

            ~CreatePlayerSharedSecretResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreatePlayerSharedSecretResult>(*this);
            }

        private:
            String m_secretKey;
        };

        struct CreatePlayerStatisticDefinitionRequest : public PlayFabAdminCreatePlayerStatisticDefinitionRequest, public BaseRequest
        {
            CreatePlayerStatisticDefinitionRequest() : PlayFabAdminCreatePlayerStatisticDefinitionRequest{}
            {
            }

            CreatePlayerStatisticDefinitionRequest(const CreatePlayerStatisticDefinitionRequest& src) :
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

            ~CreatePlayerStatisticDefinitionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreatePlayerStatisticDefinitionRequest>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminStatisticAggregationMethod> m_aggregationMethod;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_statisticName;
            StdExtra::optional<PlayFabAdminStatisticResetIntervalOption> m_versionChangeInterval;
        };

        struct PlayerStatisticDefinition : public PlayFabAdminPlayerStatisticDefinition, public BaseModel
        {
            PlayerStatisticDefinition() : PlayFabAdminPlayerStatisticDefinition{}
            {
            }

            PlayerStatisticDefinition(const PlayerStatisticDefinition& src) :
                PlayFabAdminPlayerStatisticDefinition{ src },
                m_aggregationMethod{ src.m_aggregationMethod },
                m_statisticName{ src.m_statisticName },
                m_versionChangeInterval{ src.m_versionChangeInterval }
            {

                aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
            }

            ~PlayerStatisticDefinition() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
                JsonUtils:: ObjectGetMember(input, "CurrentVersion", currentVersion);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerStatisticDefinition>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminStatisticAggregationMethod> m_aggregationMethod;

            String m_statisticName;
            StdExtra::optional<PlayFabAdminStatisticResetIntervalOption> m_versionChangeInterval;
        };

        struct CreatePlayerStatisticDefinitionResult : public PlayFabAdminCreatePlayerStatisticDefinitionResult, public BaseResult
        {
            CreatePlayerStatisticDefinitionResult() : PlayFabAdminCreatePlayerStatisticDefinitionResult{}
            {
            }

            CreatePlayerStatisticDefinitionResult(const CreatePlayerStatisticDefinitionResult& src) :
                PlayFabAdminCreatePlayerStatisticDefinitionResult{ src },
                m_statistic{ src.m_statistic }
            {

                statistic = m_statistic ? m_statistic.operator->() : nullptr;
            }

            ~CreatePlayerStatisticDefinitionResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Statistic", m_statistic, statistic);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreatePlayerStatisticDefinitionResult>(*this);
            }

        private:
            StdExtra::optional<PlayerStatisticDefinition> m_statistic;
        };

        struct DeletePlayerSegmentAction : public PlayFabAdminDeletePlayerSegmentAction, public BaseModel
        {
            DeletePlayerSegmentAction() : PlayFabAdminDeletePlayerSegmentAction{}
            {
            }

            DeletePlayerSegmentAction(const DeletePlayerSegmentAction&) = default;

            ~DeletePlayerSegmentAction() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeletePlayerSegmentAction>(*this);
            }

        private:
        };

        struct DeletePlayerStatisticSegmentAction : public PlayFabAdminDeletePlayerStatisticSegmentAction, public BaseModel
        {
            DeletePlayerStatisticSegmentAction() : PlayFabAdminDeletePlayerStatisticSegmentAction{}
            {
            }

            DeletePlayerStatisticSegmentAction(const DeletePlayerStatisticSegmentAction& src) :
                PlayFabAdminDeletePlayerStatisticSegmentAction{ src },
                m_statisticName{ src.m_statisticName }
            {

                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~DeletePlayerStatisticSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeletePlayerStatisticSegmentAction>(*this);
            }

        private:
            String m_statisticName;
        };

        struct EmailNotificationSegmentAction : public PlayFabAdminEmailNotificationSegmentAction, public BaseModel
        {
            EmailNotificationSegmentAction() : PlayFabAdminEmailNotificationSegmentAction{}
            {
            }

            EmailNotificationSegmentAction(const EmailNotificationSegmentAction& src) :
                PlayFabAdminEmailNotificationSegmentAction{ src },
                m_emailTemplateId{ src.m_emailTemplateId },
                m_emailTemplateName{ src.m_emailTemplateName }
            {

                emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
                emailTemplateName = m_emailTemplateName.empty() ? nullptr : m_emailTemplateName.data();
            }

            ~EmailNotificationSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
                JsonUtils:: ObjectGetMember(input, "EmailTemplateName", m_emailTemplateName, emailTemplateName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminEmailNotificationSegmentAction>(*this);
            }

        private:
            String m_emailTemplateId;
            String m_emailTemplateName;
        };

        struct ExecuteAzureFunctionSegmentAction : public PlayFabAdminExecuteAzureFunctionSegmentAction, public BaseModel
        {
            ExecuteAzureFunctionSegmentAction() : PlayFabAdminExecuteAzureFunctionSegmentAction{}
            {
            }

            ExecuteAzureFunctionSegmentAction(const ExecuteAzureFunctionSegmentAction& src) :
                PlayFabAdminExecuteAzureFunctionSegmentAction{ src },
                m_azureFunction{ src.m_azureFunction },
                m_functionParameter{ src.m_functionParameter }
            {

                azureFunction = m_azureFunction.empty() ? nullptr : m_azureFunction.data();
                functionParameter.stringValue = m_functionParameter.StringValue();
            }

            ~ExecuteAzureFunctionSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AzureFunction", m_azureFunction, azureFunction);
                JsonUtils:: ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
                JsonUtils:: ObjectGetMember(input, "GenerateFunctionExecutedEvents", generateFunctionExecutedEvents);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminExecuteAzureFunctionSegmentAction>(*this);
            }

        private:
            String m_azureFunction;
            JsonObject m_functionParameter;

        };

        struct ExecuteCloudScriptSegmentAction : public PlayFabAdminExecuteCloudScriptSegmentAction, public BaseModel
        {
            ExecuteCloudScriptSegmentAction() : PlayFabAdminExecuteCloudScriptSegmentAction{}
            {
            }

            ExecuteCloudScriptSegmentAction(const ExecuteCloudScriptSegmentAction& src) :
                PlayFabAdminExecuteCloudScriptSegmentAction{ src },
                m_cloudScriptFunction{ src.m_cloudScriptFunction },
                m_functionParameter{ src.m_functionParameter },
                m_functionParameterJson{ src.m_functionParameterJson }
            {

                cloudScriptFunction = m_cloudScriptFunction.empty() ? nullptr : m_cloudScriptFunction.data();
                functionParameter.stringValue = m_functionParameter.StringValue();
                functionParameterJson = m_functionParameterJson.empty() ? nullptr : m_functionParameterJson.data();
            }

            ~ExecuteCloudScriptSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CloudScriptFunction", m_cloudScriptFunction, cloudScriptFunction);
                JsonUtils:: ObjectGetMember(input, "CloudScriptPublishResultsToPlayStream", cloudScriptPublishResultsToPlayStream);
                JsonUtils:: ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
                JsonUtils:: ObjectGetMember(input, "FunctionParameterJson", m_functionParameterJson, functionParameterJson);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminExecuteCloudScriptSegmentAction>(*this);
            }

        private:
            String m_cloudScriptFunction;

            JsonObject m_functionParameter;
            String m_functionParameterJson;
        };

        struct GrantItemSegmentAction : public PlayFabAdminGrantItemSegmentAction, public BaseModel
        {
            GrantItemSegmentAction() : PlayFabAdminGrantItemSegmentAction{}
            {
            }

            GrantItemSegmentAction(const GrantItemSegmentAction& src) :
                PlayFabAdminGrantItemSegmentAction{ src },
                m_catelogId{ src.m_catelogId },
                m_itemId{ src.m_itemId }
            {

                catelogId = m_catelogId.empty() ? nullptr : m_catelogId.data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
            }

            ~GrantItemSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatelogId", m_catelogId, catelogId);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "Quantity", quantity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGrantItemSegmentAction>(*this);
            }

        private:
            String m_catelogId;
            String m_itemId;

        };

        struct GrantVirtualCurrencySegmentAction : public PlayFabAdminGrantVirtualCurrencySegmentAction, public BaseModel
        {
            GrantVirtualCurrencySegmentAction() : PlayFabAdminGrantVirtualCurrencySegmentAction{}
            {
            }

            GrantVirtualCurrencySegmentAction(const GrantVirtualCurrencySegmentAction& src) :
                PlayFabAdminGrantVirtualCurrencySegmentAction{ src },
                m_currencyCode{ src.m_currencyCode }
            {

                currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
            }

            ~GrantVirtualCurrencySegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGrantVirtualCurrencySegmentAction>(*this);
            }

        private:

            String m_currencyCode;
        };

        struct IncrementPlayerStatisticSegmentAction : public PlayFabAdminIncrementPlayerStatisticSegmentAction, public BaseModel
        {
            IncrementPlayerStatisticSegmentAction() : PlayFabAdminIncrementPlayerStatisticSegmentAction{}
            {
            }

            IncrementPlayerStatisticSegmentAction(const IncrementPlayerStatisticSegmentAction& src) :
                PlayFabAdminIncrementPlayerStatisticSegmentAction{ src },
                m_statisticName{ src.m_statisticName }
            {

                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~IncrementPlayerStatisticSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "IncrementValue", incrementValue);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminIncrementPlayerStatisticSegmentAction>(*this);
            }

        private:

            String m_statisticName;
        };

        struct PushNotificationSegmentAction : public PlayFabAdminPushNotificationSegmentAction, public BaseModel
        {
            PushNotificationSegmentAction() : PlayFabAdminPushNotificationSegmentAction{}
            {
            }

            PushNotificationSegmentAction(const PushNotificationSegmentAction& src) :
                PlayFabAdminPushNotificationSegmentAction{ src },
                m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
            {

                pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
            }

            ~PushNotificationSegmentAction() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPushNotificationSegmentAction>(*this);
            }

        private:
            String m_pushNotificationTemplateId;
        };

        struct SegmentTrigger : public PlayFabAdminSegmentTrigger, public BaseModel
        {
            SegmentTrigger() : PlayFabAdminSegmentTrigger{}
            {
            }

            SegmentTrigger(const SegmentTrigger& src) :
                PlayFabAdminSegmentTrigger{ src },
                m_banPlayerAction{ src.m_banPlayerAction },
                m_deletePlayerAction{ src.m_deletePlayerAction },
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
                deletePlayerAction = m_deletePlayerAction ? m_deletePlayerAction.operator->() : nullptr;
                deletePlayerStatisticAction = m_deletePlayerStatisticAction ? m_deletePlayerStatisticAction.operator->() : nullptr;
                emailNotificationAction = m_emailNotificationAction ? m_emailNotificationAction.operator->() : nullptr;
                executeAzureFunctionAction = m_executeAzureFunctionAction ? m_executeAzureFunctionAction.operator->() : nullptr;
                executeCloudScriptAction = m_executeCloudScriptAction ? m_executeCloudScriptAction.operator->() : nullptr;
                grantItemAction = m_grantItemAction ? m_grantItemAction.operator->() : nullptr;
                grantVirtualCurrencyAction = m_grantVirtualCurrencyAction ? m_grantVirtualCurrencyAction.operator->() : nullptr;
                incrementPlayerStatisticAction = m_incrementPlayerStatisticAction ? m_incrementPlayerStatisticAction.operator->() : nullptr;
                pushNotificationAction = m_pushNotificationAction ? m_pushNotificationAction.operator->() : nullptr;
            }

            ~SegmentTrigger() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanPlayerAction", m_banPlayerAction, banPlayerAction);
                JsonUtils:: ObjectGetMember(input, "DeletePlayerAction", m_deletePlayerAction, deletePlayerAction);
                JsonUtils:: ObjectGetMember(input, "DeletePlayerStatisticAction", m_deletePlayerStatisticAction, deletePlayerStatisticAction);
                JsonUtils:: ObjectGetMember(input, "EmailNotificationAction", m_emailNotificationAction, emailNotificationAction);
                JsonUtils:: ObjectGetMember(input, "ExecuteAzureFunctionAction", m_executeAzureFunctionAction, executeAzureFunctionAction);
                JsonUtils:: ObjectGetMember(input, "ExecuteCloudScriptAction", m_executeCloudScriptAction, executeCloudScriptAction);
                JsonUtils:: ObjectGetMember(input, "GrantItemAction", m_grantItemAction, grantItemAction);
                JsonUtils:: ObjectGetMember(input, "GrantVirtualCurrencyAction", m_grantVirtualCurrencyAction, grantVirtualCurrencyAction);
                JsonUtils:: ObjectGetMember(input, "IncrementPlayerStatisticAction", m_incrementPlayerStatisticAction, incrementPlayerStatisticAction);
                JsonUtils:: ObjectGetMember(input, "PushNotificationAction", m_pushNotificationAction, pushNotificationAction);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSegmentTrigger>(*this);
            }

        private:
            StdExtra::optional<BanPlayerSegmentAction> m_banPlayerAction;
            StdExtra::optional<DeletePlayerSegmentAction> m_deletePlayerAction;
            StdExtra::optional<DeletePlayerStatisticSegmentAction> m_deletePlayerStatisticAction;
            StdExtra::optional<EmailNotificationSegmentAction> m_emailNotificationAction;
            StdExtra::optional<ExecuteAzureFunctionSegmentAction> m_executeAzureFunctionAction;
            StdExtra::optional<ExecuteCloudScriptSegmentAction> m_executeCloudScriptAction;
            StdExtra::optional<GrantItemSegmentAction> m_grantItemAction;
            StdExtra::optional<GrantVirtualCurrencySegmentAction> m_grantVirtualCurrencyAction;
            StdExtra::optional<IncrementPlayerStatisticSegmentAction> m_incrementPlayerStatisticAction;
            StdExtra::optional<PushNotificationSegmentAction> m_pushNotificationAction;
        };

        struct FirstLoginDateSegmentFilter : public PlayFabAdminFirstLoginDateSegmentFilter, public BaseModel
        {
            FirstLoginDateSegmentFilter() : PlayFabAdminFirstLoginDateSegmentFilter{}
            {
            }

            FirstLoginDateSegmentFilter(const FirstLoginDateSegmentFilter& src) :
                PlayFabAdminFirstLoginDateSegmentFilter{ src },
                m_comparison{ src.m_comparison }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
            }

            ~FirstLoginDateSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "LogInDate", logInDate, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminFirstLoginDateSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;

        };

        struct FirstLoginTimespanSegmentFilter : public PlayFabAdminFirstLoginTimespanSegmentFilter, public BaseModel
        {
            FirstLoginTimespanSegmentFilter() : PlayFabAdminFirstLoginTimespanSegmentFilter{}
            {
            }

            FirstLoginTimespanSegmentFilter(const FirstLoginTimespanSegmentFilter& src) :
                PlayFabAdminFirstLoginTimespanSegmentFilter{ src },
                m_comparison{ src.m_comparison }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
            }

            ~FirstLoginTimespanSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "DurationInMinutes", durationInMinutes);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminFirstLoginTimespanSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;

        };

        struct LastLoginDateSegmentFilter : public PlayFabAdminLastLoginDateSegmentFilter, public BaseModel
        {
            LastLoginDateSegmentFilter() : PlayFabAdminLastLoginDateSegmentFilter{}
            {
            }

            LastLoginDateSegmentFilter(const LastLoginDateSegmentFilter& src) :
                PlayFabAdminLastLoginDateSegmentFilter{ src },
                m_comparison{ src.m_comparison }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
            }

            ~LastLoginDateSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "LogInDate", logInDate, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLastLoginDateSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;

        };

        struct LastLoginTimespanSegmentFilter : public PlayFabAdminLastLoginTimespanSegmentFilter, public BaseModel
        {
            LastLoginTimespanSegmentFilter() : PlayFabAdminLastLoginTimespanSegmentFilter{}
            {
            }

            LastLoginTimespanSegmentFilter(const LastLoginTimespanSegmentFilter& src) :
                PlayFabAdminLastLoginTimespanSegmentFilter{ src },
                m_comparison{ src.m_comparison }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
            }

            ~LastLoginTimespanSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "DurationInMinutes", durationInMinutes);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLastLoginTimespanSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;

        };

        struct LinkedUserAccountSegmentFilter : public PlayFabAdminLinkedUserAccountSegmentFilter, public BaseModel
        {
            LinkedUserAccountSegmentFilter() : PlayFabAdminLinkedUserAccountSegmentFilter{}
            {
            }

            LinkedUserAccountSegmentFilter(const LinkedUserAccountSegmentFilter& src) :
                PlayFabAdminLinkedUserAccountSegmentFilter{ src },
                m_loginProvider{ src.m_loginProvider }
            {

                loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
            }

            ~LinkedUserAccountSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLinkedUserAccountSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentLoginIdentityProvider> m_loginProvider;
        };

        struct LinkedUserAccountHasEmailSegmentFilter : public PlayFabAdminLinkedUserAccountHasEmailSegmentFilter, public BaseModel
        {
            LinkedUserAccountHasEmailSegmentFilter() : PlayFabAdminLinkedUserAccountHasEmailSegmentFilter{}
            {
            }

            LinkedUserAccountHasEmailSegmentFilter(const LinkedUserAccountHasEmailSegmentFilter& src) :
                PlayFabAdminLinkedUserAccountHasEmailSegmentFilter{ src },
                m_comparison{ src.m_comparison },
                m_loginProvider{ src.m_loginProvider }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
                loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
            }

            ~LinkedUserAccountHasEmailSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLinkedUserAccountHasEmailSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
            StdExtra::optional<PlayFabAdminSegmentLoginIdentityProvider> m_loginProvider;
        };

        struct LocationSegmentFilter : public PlayFabAdminLocationSegmentFilter, public BaseModel
        {
            LocationSegmentFilter() : PlayFabAdminLocationSegmentFilter{}
            {
            }

            LocationSegmentFilter(const LocationSegmentFilter& src) :
                PlayFabAdminLocationSegmentFilter{ src },
                m_countryCode{ src.m_countryCode }
            {

                countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
            }

            ~LocationSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLocationSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentCountryCode> m_countryCode;
        };

        struct PushNotificationSegmentFilter : public PlayFabAdminPushNotificationSegmentFilter, public BaseModel
        {
            PushNotificationSegmentFilter() : PlayFabAdminPushNotificationSegmentFilter{}
            {
            }

            PushNotificationSegmentFilter(const PushNotificationSegmentFilter& src) :
                PlayFabAdminPushNotificationSegmentFilter{ src },
                m_pushNotificationDevicePlatform{ src.m_pushNotificationDevicePlatform }
            {

                pushNotificationDevicePlatform = m_pushNotificationDevicePlatform ? m_pushNotificationDevicePlatform.operator->() : nullptr;
            }

            ~PushNotificationSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PushNotificationDevicePlatform", m_pushNotificationDevicePlatform, pushNotificationDevicePlatform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPushNotificationSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentPushNotificationDevicePlatform> m_pushNotificationDevicePlatform;
        };

        struct StatisticSegmentFilter : public PlayFabAdminStatisticSegmentFilter, public BaseModel
        {
            StatisticSegmentFilter() : PlayFabAdminStatisticSegmentFilter{}
            {
            }

            StatisticSegmentFilter(const StatisticSegmentFilter& src) :
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

            ~StatisticSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "FilterValue", m_filterValue, filterValue);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "UseCurrentVersion", m_useCurrentVersion, useCurrentVersion);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminStatisticSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
            String m_filterValue;
            String m_name;
            StdExtra::optional<bool> m_useCurrentVersion;
            StdExtra::optional<int32_t> m_version;
        };

        struct TagSegmentFilter : public PlayFabAdminTagSegmentFilter, public BaseModel
        {
            TagSegmentFilter() : PlayFabAdminTagSegmentFilter{}
            {
            }

            TagSegmentFilter(const TagSegmentFilter& src) :
                PlayFabAdminTagSegmentFilter{ src },
                m_comparison{ src.m_comparison },
                m_tagValue{ src.m_tagValue }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
                tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
            }

            ~TagSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminTagSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
            String m_tagValue;
        };

        struct TotalValueToDateInUSDSegmentFilter : public PlayFabAdminTotalValueToDateInUSDSegmentFilter, public BaseModel
        {
            TotalValueToDateInUSDSegmentFilter() : PlayFabAdminTotalValueToDateInUSDSegmentFilter{}
            {
            }

            TotalValueToDateInUSDSegmentFilter(const TotalValueToDateInUSDSegmentFilter& src) :
                PlayFabAdminTotalValueToDateInUSDSegmentFilter{ src },
                m_amount{ src.m_amount },
                m_comparison{ src.m_comparison }
            {

                amount = m_amount.empty() ? nullptr : m_amount.data();
                comparison = m_comparison ? m_comparison.operator->() : nullptr;
            }

            ~TotalValueToDateInUSDSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", m_amount, amount);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminTotalValueToDateInUSDSegmentFilter>(*this);
            }

        private:
            String m_amount;
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
        };

        struct UserOriginationSegmentFilter : public PlayFabAdminUserOriginationSegmentFilter, public BaseModel
        {
            UserOriginationSegmentFilter() : PlayFabAdminUserOriginationSegmentFilter{}
            {
            }

            UserOriginationSegmentFilter(const UserOriginationSegmentFilter& src) :
                PlayFabAdminUserOriginationSegmentFilter{ src },
                m_loginProvider{ src.m_loginProvider }
            {

                loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
            }

            ~UserOriginationSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserOriginationSegmentFilter>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminSegmentLoginIdentityProvider> m_loginProvider;
        };

        struct ValueToDateSegmentFilter : public PlayFabAdminValueToDateSegmentFilter, public BaseModel
        {
            ValueToDateSegmentFilter() : PlayFabAdminValueToDateSegmentFilter{}
            {
            }

            ValueToDateSegmentFilter(const ValueToDateSegmentFilter& src) :
                PlayFabAdminValueToDateSegmentFilter{ src },
                m_amount{ src.m_amount },
                m_comparison{ src.m_comparison },
                m_currency{ src.m_currency }
            {

                amount = m_amount.empty() ? nullptr : m_amount.data();
                comparison = m_comparison ? m_comparison.operator->() : nullptr;
                currency = m_currency ? m_currency.operator->() : nullptr;
            }

            ~ValueToDateSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", m_amount, amount);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "Currency", m_currency, currency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminValueToDateSegmentFilter>(*this);
            }

        private:
            String m_amount;
            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
            StdExtra::optional<PlayFabAdminSegmentCurrency> m_currency;
        };

        struct VirtualCurrencyBalanceSegmentFilter : public PlayFabAdminVirtualCurrencyBalanceSegmentFilter, public BaseModel
        {
            VirtualCurrencyBalanceSegmentFilter() : PlayFabAdminVirtualCurrencyBalanceSegmentFilter{}
            {
            }

            VirtualCurrencyBalanceSegmentFilter(const VirtualCurrencyBalanceSegmentFilter& src) :
                PlayFabAdminVirtualCurrencyBalanceSegmentFilter{ src },
                m_comparison{ src.m_comparison },
                m_currencyCode{ src.m_currencyCode }
            {

                comparison = m_comparison ? m_comparison.operator->() : nullptr;
                currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
            }

            ~VirtualCurrencyBalanceSegmentFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "Comparison", m_comparison, comparison);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminVirtualCurrencyBalanceSegmentFilter>(*this);
            }

        private:

            StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
            String m_currencyCode;
        };

        struct SegmentAndDefinition : public PlayFabAdminSegmentAndDefinition, public BaseModel
        {
            SegmentAndDefinition() : PlayFabAdminSegmentAndDefinition{}
            {
            }

            SegmentAndDefinition(const SegmentAndDefinition& src) :
                PlayFabAdminSegmentAndDefinition{ src },
                m_adCampaignFilter{ src.m_adCampaignFilter },
                m_allPlayersFilter{ src.m_allPlayersFilter },
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
                allPlayersFilter = m_allPlayersFilter ? m_allPlayersFilter.operator->() : nullptr;
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

            ~SegmentAndDefinition() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdCampaignFilter", m_adCampaignFilter, adCampaignFilter);
                JsonUtils:: ObjectGetMember(input, "AllPlayersFilter", m_allPlayersFilter, allPlayersFilter);
                JsonUtils:: ObjectGetMember(input, "FirstLoginDateFilter", m_firstLoginDateFilter, firstLoginDateFilter);
                JsonUtils:: ObjectGetMember(input, "FirstLoginFilter", m_firstLoginFilter, firstLoginFilter);
                JsonUtils:: ObjectGetMember(input, "LastLoginDateFilter", m_lastLoginDateFilter, lastLoginDateFilter);
                JsonUtils:: ObjectGetMember(input, "LastLoginFilter", m_lastLoginFilter, lastLoginFilter);
                JsonUtils:: ObjectGetMember(input, "LinkedUserAccountFilter", m_linkedUserAccountFilter, linkedUserAccountFilter);
                JsonUtils:: ObjectGetMember(input, "LinkedUserAccountHasEmailFilter", m_linkedUserAccountHasEmailFilter, linkedUserAccountHasEmailFilter);
                JsonUtils:: ObjectGetMember(input, "LocationFilter", m_locationFilter, locationFilter);
                JsonUtils:: ObjectGetMember(input, "PushNotificationFilter", m_pushNotificationFilter, pushNotificationFilter);
                JsonUtils:: ObjectGetMember(input, "StatisticFilter", m_statisticFilter, statisticFilter);
                JsonUtils:: ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
                JsonUtils:: ObjectGetMember(input, "TotalValueToDateInUSDFilter", m_totalValueToDateInUSDFilter, totalValueToDateInUSDFilter);
                JsonUtils:: ObjectGetMember(input, "UserOriginationFilter", m_userOriginationFilter, userOriginationFilter);
                JsonUtils:: ObjectGetMember(input, "ValueToDateFilter", m_valueToDateFilter, valueToDateFilter);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyBalanceFilter", m_virtualCurrencyBalanceFilter, virtualCurrencyBalanceFilter);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSegmentAndDefinition>(*this);
            }

        private:
            StdExtra::optional<AdCampaignSegmentFilter> m_adCampaignFilter;
            StdExtra::optional<AllPlayersSegmentFilter> m_allPlayersFilter;
            StdExtra::optional<FirstLoginDateSegmentFilter> m_firstLoginDateFilter;
            StdExtra::optional<FirstLoginTimespanSegmentFilter> m_firstLoginFilter;
            StdExtra::optional<LastLoginDateSegmentFilter> m_lastLoginDateFilter;
            StdExtra::optional<LastLoginTimespanSegmentFilter> m_lastLoginFilter;
            StdExtra::optional<LinkedUserAccountSegmentFilter> m_linkedUserAccountFilter;
            StdExtra::optional<LinkedUserAccountHasEmailSegmentFilter> m_linkedUserAccountHasEmailFilter;
            StdExtra::optional<LocationSegmentFilter> m_locationFilter;
            StdExtra::optional<PushNotificationSegmentFilter> m_pushNotificationFilter;
            StdExtra::optional<StatisticSegmentFilter> m_statisticFilter;
            StdExtra::optional<TagSegmentFilter> m_tagFilter;
            StdExtra::optional<TotalValueToDateInUSDSegmentFilter> m_totalValueToDateInUSDFilter;
            StdExtra::optional<UserOriginationSegmentFilter> m_userOriginationFilter;
            StdExtra::optional<ValueToDateSegmentFilter> m_valueToDateFilter;
            StdExtra::optional<VirtualCurrencyBalanceSegmentFilter> m_virtualCurrencyBalanceFilter;
        };

        struct SegmentOrDefinition : public PlayFabAdminSegmentOrDefinition, public BaseModel
        {
            SegmentOrDefinition() : PlayFabAdminSegmentOrDefinition{}
            {
            }

            SegmentOrDefinition(const SegmentOrDefinition& src) :
                PlayFabAdminSegmentOrDefinition{ src },
                m_segmentAndDefinitions{ src.m_segmentAndDefinitions }
            {

                segmentAndDefinitions = m_segmentAndDefinitions.Empty() ? nullptr : m_segmentAndDefinitions.Data();
            }

            ~SegmentOrDefinition() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SegmentAndDefinitions", m_segmentAndDefinitions, segmentAndDefinitions, segmentAndDefinitionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSegmentOrDefinition>(*this);
            }

        private:
            PointerArray<PlayFabAdminSegmentAndDefinition, SegmentAndDefinition> m_segmentAndDefinitions;
        };

        struct SegmentModel : public PlayFabAdminSegmentModel, public BaseModel
        {
            SegmentModel() : PlayFabAdminSegmentModel{}
            {
            }

            SegmentModel(const SegmentModel& src) :
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

            ~SegmentModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "EnteredSegmentActions", m_enteredSegmentActions, enteredSegmentActions, enteredSegmentActionsCount);
                JsonUtils:: ObjectGetMember(input, "LastUpdateTime", lastUpdateTime, true);
                JsonUtils:: ObjectGetMember(input, "LeftSegmentActions", m_leftSegmentActions, leftSegmentActions, leftSegmentActionsCount);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
                JsonUtils:: ObjectGetMember(input, "SegmentOrDefinitions", m_segmentOrDefinitions, segmentOrDefinitions, segmentOrDefinitionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSegmentModel>(*this);
            }

        private:
            String m_description;
            PointerArray<PlayFabAdminSegmentTrigger, SegmentTrigger> m_enteredSegmentActions;

            PointerArray<PlayFabAdminSegmentTrigger, SegmentTrigger> m_leftSegmentActions;
            String m_name;
            String m_segmentId;
            PointerArray<PlayFabAdminSegmentOrDefinition, SegmentOrDefinition> m_segmentOrDefinitions;
        };

        struct CreateSegmentRequest : public PlayFabAdminCreateSegmentRequest, public BaseRequest
        {
            CreateSegmentRequest() : PlayFabAdminCreateSegmentRequest{}
            {
            }

            CreateSegmentRequest(const CreateSegmentRequest& src) :
                PlayFabAdminCreateSegmentRequest{ src },
                m_segmentModel{ src.m_segmentModel }
            {

                segmentModel = (PlayFabAdminSegmentModel*)&m_segmentModel;
            }

            ~CreateSegmentRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SegmentModel", m_segmentModel, segmentModel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateSegmentRequest>(*this);
            }

        private:
            SegmentModel m_segmentModel;
        };

        struct CreateSegmentResponse : public PlayFabAdminCreateSegmentResponse, public BaseResult
        {
            CreateSegmentResponse() : PlayFabAdminCreateSegmentResponse{}
            {
            }

            CreateSegmentResponse(const CreateSegmentResponse& src) :
                PlayFabAdminCreateSegmentResponse{ src },
                m_errorMessage{ src.m_errorMessage },
                m_segmentId{ src.m_segmentId }
            {

                errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
                segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
            }

            ~CreateSegmentResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateSegmentResponse>(*this);
            }

        private:
            String m_errorMessage;
            String m_segmentId;
        };

        struct CreateTaskResult : public PlayFabAdminCreateTaskResult, public BaseResult
        {
            CreateTaskResult() : PlayFabAdminCreateTaskResult{}
            {
            }

            CreateTaskResult(const CreateTaskResult& src) :
                PlayFabAdminCreateTaskResult{ src },
                m_taskId{ src.m_taskId }
            {

                taskId = m_taskId.empty() ? nullptr : m_taskId.data();
            }

            ~CreateTaskResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TaskId", m_taskId, taskId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminCreateTaskResult>(*this);
            }

        private:
            String m_taskId;
        };

        struct DeleteContentRequest : public PlayFabAdminDeleteContentRequest, public BaseRequest
        {
            DeleteContentRequest() : PlayFabAdminDeleteContentRequest{}
            {
            }

            DeleteContentRequest(const DeleteContentRequest& src) :
                PlayFabAdminDeleteContentRequest{ src },
                m_key{ src.m_key }
            {

                key = m_key.empty() ? nullptr : m_key.data();
            }

            ~DeleteContentRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteContentRequest>(*this);
            }

        private:
            String m_key;
        };

        struct DeleteMasterPlayerAccountRequest : public PlayFabAdminDeleteMasterPlayerAccountRequest, public BaseRequest
        {
            DeleteMasterPlayerAccountRequest() : PlayFabAdminDeleteMasterPlayerAccountRequest{}
            {
            }

            DeleteMasterPlayerAccountRequest(const DeleteMasterPlayerAccountRequest& src) :
                PlayFabAdminDeleteMasterPlayerAccountRequest{ src },
                m_metaData{ src.m_metaData },
                m_playFabId{ src.m_playFabId }
            {

                metaData = m_metaData.empty() ? nullptr : m_metaData.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~DeleteMasterPlayerAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "MetaData", m_metaData, metaData);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteMasterPlayerAccountRequest>(*this);
            }

        private:
            String m_metaData;
            String m_playFabId;
        };

        struct DeleteMasterPlayerAccountResult : public PlayFabAdminDeleteMasterPlayerAccountResult, public BaseResult
        {
            DeleteMasterPlayerAccountResult() : PlayFabAdminDeleteMasterPlayerAccountResult{}
            {
            }

            DeleteMasterPlayerAccountResult(const DeleteMasterPlayerAccountResult& src) :
                PlayFabAdminDeleteMasterPlayerAccountResult{ src },
                m_jobReceiptId{ src.m_jobReceiptId },
                m_titleIds{ src.m_titleIds }
            {

                jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
                titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
            }

            ~DeleteMasterPlayerAccountResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "JobReceiptId", m_jobReceiptId, jobReceiptId);
                JsonUtils:: ObjectGetMember(input, "TitleIds", m_titleIds, titleIds, titleIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteMasterPlayerAccountResult>(*this);
            }

        private:
            String m_jobReceiptId;
            PointerArray<const char, String> m_titleIds;
        };

        struct DeleteOpenIdConnectionRequest : public PlayFabAdminDeleteOpenIdConnectionRequest, public BaseRequest
        {
            DeleteOpenIdConnectionRequest() : PlayFabAdminDeleteOpenIdConnectionRequest{}
            {
            }

            DeleteOpenIdConnectionRequest(const DeleteOpenIdConnectionRequest& src) :
                PlayFabAdminDeleteOpenIdConnectionRequest{ src },
                m_connectionId{ src.m_connectionId }
            {

                connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
            }

            ~DeleteOpenIdConnectionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteOpenIdConnectionRequest>(*this);
            }

        private:
            String m_connectionId;
        };

        struct DeletePlayerRequest : public PlayFabAdminDeletePlayerRequest, public BaseRequest
        {
            DeletePlayerRequest() : PlayFabAdminDeletePlayerRequest{}
            {
            }

            DeletePlayerRequest(const DeletePlayerRequest& src) :
                PlayFabAdminDeletePlayerRequest{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~DeletePlayerRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeletePlayerRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct DeletePlayerResult : public PlayFabAdminDeletePlayerResult, public BaseResult
        {
            DeletePlayerResult() : PlayFabAdminDeletePlayerResult{}
            {
            }

            DeletePlayerResult(const DeletePlayerResult&) = default;

            ~DeletePlayerResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeletePlayerResult>(*this);
            }

        private:
        };

        struct DeletePlayerSharedSecretRequest : public PlayFabAdminDeletePlayerSharedSecretRequest, public BaseRequest
        {
            DeletePlayerSharedSecretRequest() : PlayFabAdminDeletePlayerSharedSecretRequest{}
            {
            }

            DeletePlayerSharedSecretRequest(const DeletePlayerSharedSecretRequest& src) :
                PlayFabAdminDeletePlayerSharedSecretRequest{ src },
                m_secretKey{ src.m_secretKey }
            {

                secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
            }

            ~DeletePlayerSharedSecretRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeletePlayerSharedSecretRequest>(*this);
            }

        private:
            String m_secretKey;
        };

        struct DeletePlayerSharedSecretResult : public PlayFabAdminDeletePlayerSharedSecretResult, public BaseResult
        {
            DeletePlayerSharedSecretResult() : PlayFabAdminDeletePlayerSharedSecretResult{}
            {
            }

            DeletePlayerSharedSecretResult(const DeletePlayerSharedSecretResult&) = default;

            ~DeletePlayerSharedSecretResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeletePlayerSharedSecretResult>(*this);
            }

        private:
        };

        struct DeleteSegmentRequest : public PlayFabAdminDeleteSegmentRequest, public BaseRequest
        {
            DeleteSegmentRequest() : PlayFabAdminDeleteSegmentRequest{}
            {
            }

            DeleteSegmentRequest(const DeleteSegmentRequest& src) :
                PlayFabAdminDeleteSegmentRequest{ src },
                m_segmentId{ src.m_segmentId }
            {

                segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
            }

            ~DeleteSegmentRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteSegmentRequest>(*this);
            }

        private:
            String m_segmentId;
        };

        struct DeleteSegmentsResponse : public PlayFabAdminDeleteSegmentsResponse, public BaseResult
        {
            DeleteSegmentsResponse() : PlayFabAdminDeleteSegmentsResponse{}
            {
            }

            DeleteSegmentsResponse(const DeleteSegmentsResponse& src) :
                PlayFabAdminDeleteSegmentsResponse{ src },
                m_errorMessage{ src.m_errorMessage }
            {

                errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
            }

            ~DeleteSegmentsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteSegmentsResponse>(*this);
            }

        private:
            String m_errorMessage;
        };

        struct DeleteStoreRequest : public PlayFabAdminDeleteStoreRequest, public BaseRequest
        {
            DeleteStoreRequest() : PlayFabAdminDeleteStoreRequest{}
            {
            }

            DeleteStoreRequest(const DeleteStoreRequest& src) :
                PlayFabAdminDeleteStoreRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_storeId{ src.m_storeId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                storeId = m_storeId.empty() ? nullptr : m_storeId.data();
            }

            ~DeleteStoreRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteStoreRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_storeId;
        };

        struct DeleteStoreResult : public PlayFabAdminDeleteStoreResult, public BaseResult
        {
            DeleteStoreResult() : PlayFabAdminDeleteStoreResult{}
            {
            }

            DeleteStoreResult(const DeleteStoreResult&) = default;

            ~DeleteStoreResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteStoreResult>(*this);
            }

        private:
        };

        struct DeleteTaskRequest : public PlayFabAdminDeleteTaskRequest, public BaseRequest
        {
            DeleteTaskRequest() : PlayFabAdminDeleteTaskRequest{}
            {
            }

            DeleteTaskRequest(const DeleteTaskRequest& src) :
                PlayFabAdminDeleteTaskRequest{ src },
                m_identifier{ src.m_identifier }
            {

                identifier = m_identifier ? m_identifier.operator->() : nullptr;
            }

            ~DeleteTaskRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Identifier", m_identifier, identifier);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteTaskRequest>(*this);
            }

        private:
            StdExtra::optional<NameIdentifier> m_identifier;
        };

        struct DeleteTitleDataOverrideRequest : public PlayFabAdminDeleteTitleDataOverrideRequest, public BaseRequest
        {
            DeleteTitleDataOverrideRequest() : PlayFabAdminDeleteTitleDataOverrideRequest{}
            {
            }

            DeleteTitleDataOverrideRequest(const DeleteTitleDataOverrideRequest& src) :
                PlayFabAdminDeleteTitleDataOverrideRequest{ src },
                m_overrideLabel{ src.m_overrideLabel }
            {

                overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
            }

            ~DeleteTitleDataOverrideRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteTitleDataOverrideRequest>(*this);
            }

        private:
            String m_overrideLabel;
        };

        struct DeleteTitleDataOverrideResult : public PlayFabAdminDeleteTitleDataOverrideResult, public BaseResult
        {
            DeleteTitleDataOverrideResult() : PlayFabAdminDeleteTitleDataOverrideResult{}
            {
            }

            DeleteTitleDataOverrideResult(const DeleteTitleDataOverrideResult&) = default;

            ~DeleteTitleDataOverrideResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteTitleDataOverrideResult>(*this);
            }

        private:
        };

        struct DeleteTitleRequest : public PlayFabAdminDeleteTitleRequest, public BaseRequest
        {
            DeleteTitleRequest() : PlayFabAdminDeleteTitleRequest{}
            {
            }

            DeleteTitleRequest(const DeleteTitleRequest&) = default;

            ~DeleteTitleRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteTitleRequest>(*this);
            }

        private:
        };

        struct DeleteTitleResult : public PlayFabAdminDeleteTitleResult, public BaseResult
        {
            DeleteTitleResult() : PlayFabAdminDeleteTitleResult{}
            {
            }

            DeleteTitleResult(const DeleteTitleResult&) = default;

            ~DeleteTitleResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminDeleteTitleResult>(*this);
            }

        private:
        };

        struct EmptyResponse : public PlayFabAdminEmptyResponse, public BaseResult
        {
            EmptyResponse() : PlayFabAdminEmptyResponse{}
            {
            }

            EmptyResponse(const EmptyResponse&) = default;

            ~EmptyResponse() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminEmptyResponse>(*this);
            }

        private:
        };

        struct EntityKey : public PlayFabAdminEntityKey, public BaseModel
        {
            EntityKey() : PlayFabAdminEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabAdminEntityKey{ src },
                m_id{ src.m_id },
                m_type{ src.m_type }
            {

                id = m_id.empty() ? nullptr : m_id.data();
                type = m_type.empty() ? nullptr : m_type.data();
            }

            ~EntityKey() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct ExportMasterPlayerDataRequest : public PlayFabAdminExportMasterPlayerDataRequest, public BaseRequest
        {
            ExportMasterPlayerDataRequest() : PlayFabAdminExportMasterPlayerDataRequest{}
            {
            }

            ExportMasterPlayerDataRequest(const ExportMasterPlayerDataRequest& src) :
                PlayFabAdminExportMasterPlayerDataRequest{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ExportMasterPlayerDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminExportMasterPlayerDataRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct ExportMasterPlayerDataResult : public PlayFabAdminExportMasterPlayerDataResult, public BaseResult
        {
            ExportMasterPlayerDataResult() : PlayFabAdminExportMasterPlayerDataResult{}
            {
            }

            ExportMasterPlayerDataResult(const ExportMasterPlayerDataResult& src) :
                PlayFabAdminExportMasterPlayerDataResult{ src },
                m_jobReceiptId{ src.m_jobReceiptId }
            {

                jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
            }

            ~ExportMasterPlayerDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "JobReceiptId", m_jobReceiptId, jobReceiptId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminExportMasterPlayerDataResult>(*this);
            }

        private:
            String m_jobReceiptId;
        };

        struct GameModeInfo : public PlayFabAdminGameModeInfo, public BaseModel
        {
            GameModeInfo() : PlayFabAdminGameModeInfo{}
            {
            }

            GameModeInfo(const GameModeInfo& src) :
                PlayFabAdminGameModeInfo{ src },
                m_gamemode{ src.m_gamemode },
                m_startOpen{ src.m_startOpen }
            {

                gamemode = m_gamemode.empty() ? nullptr : m_gamemode.data();
                startOpen = m_startOpen ? m_startOpen.operator->() : nullptr;
            }

            ~GameModeInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Gamemode", m_gamemode, gamemode);
                JsonUtils:: ObjectGetMember(input, "MaxPlayerCount", maxPlayerCount);
                JsonUtils:: ObjectGetMember(input, "MinPlayerCount", minPlayerCount);
                JsonUtils:: ObjectGetMember(input, "StartOpen", m_startOpen, startOpen);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGameModeInfo>(*this);
            }

        private:
            String m_gamemode;


            StdExtra::optional<bool> m_startOpen;
        };

        struct GetActionsOnPlayersInSegmentTaskInstanceResult : public PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult, public BaseResult
        {
            GetActionsOnPlayersInSegmentTaskInstanceResult() : PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult{}
            {
            }

            GetActionsOnPlayersInSegmentTaskInstanceResult(const GetActionsOnPlayersInSegmentTaskInstanceResult& src) :
                PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult{ src },
                m_parameter{ src.m_parameter },
                m_summary{ src.m_summary }
            {

                parameter = m_parameter ? m_parameter.operator->() : nullptr;
                summary = m_summary ? m_summary.operator->() : nullptr;
            }

            ~GetActionsOnPlayersInSegmentTaskInstanceResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Summary", m_summary, summary);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult>(*this);
            }

        private:
            StdExtra::optional<ActionsOnPlayersInSegmentTaskParameter> m_parameter;
            StdExtra::optional<ActionsOnPlayersInSegmentTaskSummary> m_summary;
        };

        struct GetAllSegmentsRequest : public PlayFabAdminGetAllSegmentsRequest, public BaseRequest
        {
            GetAllSegmentsRequest() : PlayFabAdminGetAllSegmentsRequest{}
            {
            }

            GetAllSegmentsRequest(const GetAllSegmentsRequest&) = default;

            ~GetAllSegmentsRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetAllSegmentsRequest>(*this);
            }

        private:
        };

        struct GetSegmentResult : public PlayFabAdminGetSegmentResult, public BaseResult
        {
            GetSegmentResult() : PlayFabAdminGetSegmentResult{}
            {
            }

            GetSegmentResult(const GetSegmentResult& src) :
                PlayFabAdminGetSegmentResult{ src },
                m_aBTestParent{ src.m_aBTestParent },
                m_id{ src.m_id },
                m_name{ src.m_name }
            {

                aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
                id = m_id.empty() ? nullptr : m_id.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~GetSegmentResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ABTestParent", m_aBTestParent, aBTestParent);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetSegmentResult>(*this);
            }

        private:
            String m_aBTestParent;
            String m_id;
            String m_name;
        };

        struct GetAllSegmentsResult : public PlayFabAdminGetAllSegmentsResult, public BaseResult
        {
            GetAllSegmentsResult() : PlayFabAdminGetAllSegmentsResult{}
            {
            }

            GetAllSegmentsResult(const GetAllSegmentsResult& src) :
                PlayFabAdminGetAllSegmentsResult{ src },
                m_segments{ src.m_segments }
            {

                segments = m_segments.Empty() ? nullptr : m_segments.Data();
            }

            ~GetAllSegmentsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetAllSegmentsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminGetSegmentResult, GetSegmentResult> m_segments;
        };

        struct GetCatalogItemsRequest : public PlayFabAdminGetCatalogItemsRequest, public BaseRequest
        {
            GetCatalogItemsRequest() : PlayFabAdminGetCatalogItemsRequest{}
            {
            }

            GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
                PlayFabAdminGetCatalogItemsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
            }

            ~GetCatalogItemsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCatalogItemsRequest>(*this);
            }

        private:
            String m_catalogVersion;
        };

        struct GetCatalogItemsResult : public PlayFabAdminGetCatalogItemsResult, public BaseResult
        {
            GetCatalogItemsResult() : PlayFabAdminGetCatalogItemsResult{}
            {
            }

            GetCatalogItemsResult(const GetCatalogItemsResult& src) :
                PlayFabAdminGetCatalogItemsResult{ src },
                m_catalog{ src.m_catalog }
            {

                catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
            }

            ~GetCatalogItemsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCatalogItemsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminCatalogItem, CatalogItem> m_catalog;
        };

        struct GetCloudScriptRevisionRequest : public PlayFabAdminGetCloudScriptRevisionRequest, public BaseRequest
        {
            GetCloudScriptRevisionRequest() : PlayFabAdminGetCloudScriptRevisionRequest{}
            {
            }

            GetCloudScriptRevisionRequest(const GetCloudScriptRevisionRequest& src) :
                PlayFabAdminGetCloudScriptRevisionRequest{ src },
                m_revision{ src.m_revision },
                m_version{ src.m_version }
            {

                revision = m_revision ? m_revision.operator->() : nullptr;
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~GetCloudScriptRevisionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Revision", m_revision, revision);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCloudScriptRevisionRequest>(*this);
            }

        private:
            StdExtra::optional<int32_t> m_revision;
            StdExtra::optional<int32_t> m_version;
        };

        struct GetCloudScriptRevisionResult : public PlayFabAdminGetCloudScriptRevisionResult, public BaseResult
        {
            GetCloudScriptRevisionResult() : PlayFabAdminGetCloudScriptRevisionResult{}
            {
            }

            GetCloudScriptRevisionResult(const GetCloudScriptRevisionResult& src) :
                PlayFabAdminGetCloudScriptRevisionResult{ src },
                m_files{ src.m_files }
            {

                files = m_files.Empty() ? nullptr : m_files.Data();
            }

            ~GetCloudScriptRevisionResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreatedAt", createdAt, true);
                JsonUtils:: ObjectGetMember(input, "Files", m_files, files, filesCount);
                JsonUtils:: ObjectGetMember(input, "IsPublished", isPublished);
                JsonUtils:: ObjectGetMember(input, "Revision", revision);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCloudScriptRevisionResult>(*this);
            }

        private:

            PointerArray<PlayFabAdminCloudScriptFile, CloudScriptFile> m_files;



        };

        struct GetCloudScriptTaskInstanceResult : public PlayFabAdminGetCloudScriptTaskInstanceResult, public BaseResult
        {
            GetCloudScriptTaskInstanceResult() : PlayFabAdminGetCloudScriptTaskInstanceResult{}
            {
            }

            GetCloudScriptTaskInstanceResult(const GetCloudScriptTaskInstanceResult& src) :
                PlayFabAdminGetCloudScriptTaskInstanceResult{ src },
                m_parameter{ src.m_parameter },
                m_summary{ src.m_summary }
            {

                parameter = m_parameter ? m_parameter.operator->() : nullptr;
                summary = m_summary ? m_summary.operator->() : nullptr;
            }

            ~GetCloudScriptTaskInstanceResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Summary", m_summary, summary);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCloudScriptTaskInstanceResult>(*this);
            }

        private:
            StdExtra::optional<CloudScriptTaskParameter> m_parameter;
            StdExtra::optional<CloudScriptTaskSummary> m_summary;
        };

        struct GetCloudScriptVersionsRequest : public PlayFabAdminGetCloudScriptVersionsRequest, public BaseRequest
        {
            GetCloudScriptVersionsRequest() : PlayFabAdminGetCloudScriptVersionsRequest{}
            {
            }

            GetCloudScriptVersionsRequest(const GetCloudScriptVersionsRequest&) = default;

            ~GetCloudScriptVersionsRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCloudScriptVersionsRequest>(*this);
            }

        private:
        };

        struct GetCloudScriptVersionsResult : public PlayFabAdminGetCloudScriptVersionsResult, public BaseResult
        {
            GetCloudScriptVersionsResult() : PlayFabAdminGetCloudScriptVersionsResult{}
            {
            }

            GetCloudScriptVersionsResult(const GetCloudScriptVersionsResult& src) :
                PlayFabAdminGetCloudScriptVersionsResult{ src },
                m_versions{ src.m_versions }
            {

                versions = m_versions.Empty() ? nullptr : m_versions.Data();
            }

            ~GetCloudScriptVersionsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Versions", m_versions, versions, versionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetCloudScriptVersionsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminCloudScriptVersionStatus, CloudScriptVersionStatus> m_versions;
        };

        struct GetContentListRequest : public PlayFabAdminGetContentListRequest, public BaseRequest
        {
            GetContentListRequest() : PlayFabAdminGetContentListRequest{}
            {
            }

            GetContentListRequest(const GetContentListRequest& src) :
                PlayFabAdminGetContentListRequest{ src },
                m_prefix{ src.m_prefix }
            {

                prefix = m_prefix.empty() ? nullptr : m_prefix.data();
            }

            ~GetContentListRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Prefix", m_prefix, prefix);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetContentListRequest>(*this);
            }

        private:
            String m_prefix;
        };

        struct GetContentListResult : public PlayFabAdminGetContentListResult, public BaseResult
        {
            GetContentListResult() : PlayFabAdminGetContentListResult{}
            {
            }

            GetContentListResult(const GetContentListResult& src) :
                PlayFabAdminGetContentListResult{ src },
                m_contents{ src.m_contents }
            {

                contents = m_contents.Empty() ? nullptr : m_contents.Data();
            }

            ~GetContentListResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Contents", m_contents, contents, contentsCount);
                JsonUtils:: ObjectGetMember(input, "ItemCount", itemCount);
                JsonUtils:: ObjectGetMember(input, "TotalSize", totalSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetContentListResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminContentInfo, ContentInfo> m_contents;


        };

        struct GetContentUploadUrlRequest : public PlayFabAdminGetContentUploadUrlRequest, public BaseRequest
        {
            GetContentUploadUrlRequest() : PlayFabAdminGetContentUploadUrlRequest{}
            {
            }

            GetContentUploadUrlRequest(const GetContentUploadUrlRequest& src) :
                PlayFabAdminGetContentUploadUrlRequest{ src },
                m_contentType{ src.m_contentType },
                m_key{ src.m_key }
            {

                contentType = m_contentType.empty() ? nullptr : m_contentType.data();
                key = m_key.empty() ? nullptr : m_key.data();
            }

            ~GetContentUploadUrlRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ContentType", m_contentType, contentType);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetContentUploadUrlRequest>(*this);
            }

        private:
            String m_contentType;
            String m_key;
        };

        struct GetContentUploadUrlResult : public PlayFabAdminGetContentUploadUrlResult, public BaseResult
        {
            GetContentUploadUrlResult() : PlayFabAdminGetContentUploadUrlResult{}
            {
            }

            GetContentUploadUrlResult(const GetContentUploadUrlResult& src) :
                PlayFabAdminGetContentUploadUrlResult{ src },
                m_uRL{ src.m_uRL }
            {

                uRL = m_uRL.empty() ? nullptr : m_uRL.data();
            }

            ~GetContentUploadUrlResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "URL", m_uRL, uRL);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetContentUploadUrlResult>(*this);
            }

        private:
            String m_uRL;
        };

        struct GetDataReportRequest : public PlayFabAdminGetDataReportRequest, public BaseRequest
        {
            GetDataReportRequest() : PlayFabAdminGetDataReportRequest{}
            {
            }

            GetDataReportRequest(const GetDataReportRequest& src) :
                PlayFabAdminGetDataReportRequest{ src },
                m_reportName{ src.m_reportName }
            {

                reportName = m_reportName.empty() ? nullptr : m_reportName.data();
            }

            ~GetDataReportRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Day", day);
                JsonUtils:: ObjectGetMember(input, "Month", month);
                JsonUtils:: ObjectGetMember(input, "ReportName", m_reportName, reportName);
                JsonUtils:: ObjectGetMember(input, "Year", year);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetDataReportRequest>(*this);
            }

        private:


            String m_reportName;

        };

        struct GetDataReportResult : public PlayFabAdminGetDataReportResult, public BaseResult
        {
            GetDataReportResult() : PlayFabAdminGetDataReportResult{}
            {
            }

            GetDataReportResult(const GetDataReportResult& src) :
                PlayFabAdminGetDataReportResult{ src },
                m_downloadUrl{ src.m_downloadUrl }
            {

                downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
            }

            ~GetDataReportResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DownloadUrl", m_downloadUrl, downloadUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetDataReportResult>(*this);
            }

        private:
            String m_downloadUrl;
        };

        struct GetMatchmakerGameInfoRequest : public PlayFabAdminGetMatchmakerGameInfoRequest, public BaseRequest
        {
            GetMatchmakerGameInfoRequest() : PlayFabAdminGetMatchmakerGameInfoRequest{}
            {
            }

            GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src) :
                PlayFabAdminGetMatchmakerGameInfoRequest{ src },
                m_lobbyId{ src.m_lobbyId }
            {

                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
            }

            ~GetMatchmakerGameInfoRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameInfoRequest>(*this);
            }

        private:
            String m_lobbyId;
        };

        struct GetMatchmakerGameInfoResult : public PlayFabAdminGetMatchmakerGameInfoResult, public BaseResult
        {
            GetMatchmakerGameInfoResult() : PlayFabAdminGetMatchmakerGameInfoResult{}
            {
            }

            GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src) :
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

            ~GetMatchmakerGameInfoResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "EndTime", m_endTime, endTime, true);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "Mode", m_mode, mode);
                JsonUtils:: ObjectGetMember(input, "Players", m_players, players, playersCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
                JsonUtils:: ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
                JsonUtils:: ObjectGetMember(input, "ServerPort", serverPort);
                JsonUtils:: ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
                JsonUtils:: ObjectGetMember(input, "StartTime", startTime, true);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameInfoResult>(*this);
            }

        private:
            String m_buildVersion;
            StdExtra::optional<time_t> m_endTime;
            String m_lobbyId;
            String m_mode;
            PointerArray<const char, String> m_players;
            StdExtra::optional<PlayFabAdminRegion> m_region;
            String m_serverIPV4Address;
            String m_serverIPV6Address;

            String m_serverPublicDNSName;

            String m_titleId;
        };

        struct GetMatchmakerGameModesRequest : public PlayFabAdminGetMatchmakerGameModesRequest, public BaseRequest
        {
            GetMatchmakerGameModesRequest() : PlayFabAdminGetMatchmakerGameModesRequest{}
            {
            }

            GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src) :
                PlayFabAdminGetMatchmakerGameModesRequest{ src },
                m_buildVersion{ src.m_buildVersion }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
            }

            ~GetMatchmakerGameModesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameModesRequest>(*this);
            }

        private:
            String m_buildVersion;
        };

        struct GetMatchmakerGameModesResult : public PlayFabAdminGetMatchmakerGameModesResult, public BaseResult
        {
            GetMatchmakerGameModesResult() : PlayFabAdminGetMatchmakerGameModesResult{}
            {
            }

            GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src) :
                PlayFabAdminGetMatchmakerGameModesResult{ src },
                m_gameModes{ src.m_gameModes }
            {

                gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
            }

            ~GetMatchmakerGameModesResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GameModes", m_gameModes, gameModes, gameModesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameModesResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminGameModeInfo, GameModeInfo> m_gameModes;
        };

        struct GetPlayedTitleListRequest : public PlayFabAdminGetPlayedTitleListRequest, public BaseRequest
        {
            GetPlayedTitleListRequest() : PlayFabAdminGetPlayedTitleListRequest{}
            {
            }

            GetPlayedTitleListRequest(const GetPlayedTitleListRequest& src) :
                PlayFabAdminGetPlayedTitleListRequest{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayedTitleListRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayedTitleListRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct GetPlayedTitleListResult : public PlayFabAdminGetPlayedTitleListResult, public BaseResult
        {
            GetPlayedTitleListResult() : PlayFabAdminGetPlayedTitleListResult{}
            {
            }

            GetPlayedTitleListResult(const GetPlayedTitleListResult& src) :
                PlayFabAdminGetPlayedTitleListResult{ src },
                m_titleIds{ src.m_titleIds }
            {

                titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
            }

            ~GetPlayedTitleListResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TitleIds", m_titleIds, titleIds, titleIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayedTitleListResult>(*this);
            }

        private:
            PointerArray<const char, String> m_titleIds;
        };

        struct GetPlayerIdFromAuthTokenRequest : public PlayFabAdminGetPlayerIdFromAuthTokenRequest, public BaseRequest
        {
            GetPlayerIdFromAuthTokenRequest() : PlayFabAdminGetPlayerIdFromAuthTokenRequest{}
            {
            }

            GetPlayerIdFromAuthTokenRequest(const GetPlayerIdFromAuthTokenRequest& src) :
                PlayFabAdminGetPlayerIdFromAuthTokenRequest{ src },
                m_token{ src.m_token }
            {

                token = m_token.empty() ? nullptr : m_token.data();
            }

            ~GetPlayerIdFromAuthTokenRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Token", m_token, token);
                JsonUtils:: ObjectGetMember(input, "TokenType", tokenType);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerIdFromAuthTokenRequest>(*this);
            }

        private:
            String m_token;

        };

        struct GetPlayerIdFromAuthTokenResult : public PlayFabAdminGetPlayerIdFromAuthTokenResult, public BaseResult
        {
            GetPlayerIdFromAuthTokenResult() : PlayFabAdminGetPlayerIdFromAuthTokenResult{}
            {
            }

            GetPlayerIdFromAuthTokenResult(const GetPlayerIdFromAuthTokenResult& src) :
                PlayFabAdminGetPlayerIdFromAuthTokenResult{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerIdFromAuthTokenResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerIdFromAuthTokenResult>(*this);
            }

        private:
            String m_playFabId;
        };

        struct PlayerProfileViewConstraints : public PlayFabAdminPlayerProfileViewConstraints, public BaseModel
        {
            PlayerProfileViewConstraints() : PlayFabAdminPlayerProfileViewConstraints{}
            {
            }

            PlayerProfileViewConstraints(const PlayerProfileViewConstraints&) = default;

            ~PlayerProfileViewConstraints() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ShowAvatarUrl", showAvatarUrl);
                JsonUtils:: ObjectGetMember(input, "ShowBannedUntil", showBannedUntil);
                JsonUtils:: ObjectGetMember(input, "ShowCampaignAttributions", showCampaignAttributions);
                JsonUtils:: ObjectGetMember(input, "ShowContactEmailAddresses", showContactEmailAddresses);
                JsonUtils:: ObjectGetMember(input, "ShowCreated", showCreated);
                JsonUtils:: ObjectGetMember(input, "ShowDisplayName", showDisplayName);
                JsonUtils:: ObjectGetMember(input, "ShowExperimentVariants", showExperimentVariants);
                JsonUtils:: ObjectGetMember(input, "ShowLastLogin", showLastLogin);
                JsonUtils:: ObjectGetMember(input, "ShowLinkedAccounts", showLinkedAccounts);
                JsonUtils:: ObjectGetMember(input, "ShowLocations", showLocations);
                JsonUtils:: ObjectGetMember(input, "ShowMemberships", showMemberships);
                JsonUtils:: ObjectGetMember(input, "ShowOrigination", showOrigination);
                JsonUtils:: ObjectGetMember(input, "ShowPushNotificationRegistrations", showPushNotificationRegistrations);
                JsonUtils:: ObjectGetMember(input, "ShowStatistics", showStatistics);
                JsonUtils:: ObjectGetMember(input, "ShowTags", showTags);
                JsonUtils:: ObjectGetMember(input, "ShowTotalValueToDateInUsd", showTotalValueToDateInUsd);
                JsonUtils:: ObjectGetMember(input, "ShowValuesToDate", showValuesToDate);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerProfileViewConstraints>(*this);
            }

        private:

















        };

        struct GetPlayerProfileRequest : public PlayFabAdminGetPlayerProfileRequest, public BaseRequest
        {
            GetPlayerProfileRequest() : PlayFabAdminGetPlayerProfileRequest{}
            {
            }

            GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
                PlayFabAdminGetPlayerProfileRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
            }

            ~GetPlayerProfileRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerProfileRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
        };

        struct LinkedPlatformAccountModel : public PlayFabAdminLinkedPlatformAccountModel, public BaseModel
        {
            LinkedPlatformAccountModel() : PlayFabAdminLinkedPlatformAccountModel{}
            {
            }

            LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
                PlayFabAdminLinkedPlatformAccountModel{ src },
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

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
                JsonUtils:: ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLinkedPlatformAccountModel>(*this);
            }

        private:
            String m_email;
            StdExtra::optional<PlayFabAdminLoginIdentityProvider> m_platform;
            String m_platformUserId;
            String m_username;
        };

        struct LocationModel : public PlayFabAdminLocationModel, public BaseModel
        {
            LocationModel() : PlayFabAdminLocationModel{}
            {
            }

            LocationModel(const LocationModel& src) :
                PlayFabAdminLocationModel{ src },
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

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "City", m_city, city);
                JsonUtils:: ObjectGetMember(input, "ContinentCode", m_continentCode, continentCode);
                JsonUtils:: ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
                JsonUtils:: ObjectGetMember(input, "Latitude", m_latitude, latitude);
                JsonUtils:: ObjectGetMember(input, "Longitude", m_longitude, longitude);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLocationModel>(*this);
            }

        private:
            String m_city;
            StdExtra::optional<PlayFabAdminContinentCode> m_continentCode;
            StdExtra::optional<PlayFabAdminCountryCode> m_countryCode;
            StdExtra::optional<double> m_latitude;
            StdExtra::optional<double> m_longitude;
        };

        struct SubscriptionModel : public PlayFabAdminSubscriptionModel, public BaseModel
        {
            SubscriptionModel() : PlayFabAdminSubscriptionModel{}
            {
            }

            SubscriptionModel(const SubscriptionModel& src) :
                PlayFabAdminSubscriptionModel{ src },
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

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
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
                return JsonUtils::ToJson<PlayFabAdminSubscriptionModel>(*this);
            }

        private:



            StdExtra::optional<PlayFabAdminSubscriptionProviderStatus> m_status;
            String m_subscriptionId;
            String m_subscriptionItemId;
            String m_subscriptionProvider;
        };

        struct MembershipModel : public PlayFabAdminMembershipModel, public BaseModel
        {
            MembershipModel() : PlayFabAdminMembershipModel{}
            {
            }

            MembershipModel(const MembershipModel& src) :
                PlayFabAdminMembershipModel{ src },
                m_membershipId{ src.m_membershipId },
                m_overrideExpiration{ src.m_overrideExpiration },
                m_subscriptions{ src.m_subscriptions }
            {

                membershipId = m_membershipId.empty() ? nullptr : m_membershipId.data();
                overrideExpiration = m_overrideExpiration ? m_overrideExpiration.operator->() : nullptr;
                subscriptions = m_subscriptions.Empty() ? nullptr : m_subscriptions.Data();
            }

            ~MembershipModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "MembershipExpiration", membershipExpiration, true);
                JsonUtils:: ObjectGetMember(input, "MembershipId", m_membershipId, membershipId);
                JsonUtils:: ObjectGetMember(input, "OverrideExpiration", m_overrideExpiration, overrideExpiration, true);
                JsonUtils:: ObjectGetMember(input, "Subscriptions", m_subscriptions, subscriptions, subscriptionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminMembershipModel>(*this);
            }

        private:


            String m_membershipId;
            StdExtra::optional<time_t> m_overrideExpiration;
            PointerArray<PlayFabAdminSubscriptionModel, SubscriptionModel> m_subscriptions;
        };

        struct PushNotificationRegistrationModel : public PlayFabAdminPushNotificationRegistrationModel, public BaseModel
        {
            PushNotificationRegistrationModel() : PlayFabAdminPushNotificationRegistrationModel{}
            {
            }

            PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
                PlayFabAdminPushNotificationRegistrationModel{ src },
                m_notificationEndpointARN{ src.m_notificationEndpointARN },
                m_platform{ src.m_platform }
            {

                notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
                platform = m_platform ? m_platform.operator->() : nullptr;
            }

            ~PushNotificationRegistrationModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPushNotificationRegistrationModel>(*this);
            }

        private:
            String m_notificationEndpointARN;
            StdExtra::optional<PlayFabAdminPushNotificationPlatform> m_platform;
        };

        struct StatisticModel : public PlayFabAdminStatisticModel, public BaseModel
        {
            StatisticModel() : PlayFabAdminStatisticModel{}
            {
            }

            StatisticModel(const StatisticModel& src) :
                PlayFabAdminStatisticModel{ src },
                m_name{ src.m_name }
            {

                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~StatisticModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Value", value);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminStatisticModel>(*this);
            }

        private:
            String m_name;


        };

        struct TagModel : public PlayFabAdminTagModel, public BaseModel
        {
            TagModel() : PlayFabAdminTagModel{}
            {
            }

            TagModel(const TagModel& src) :
                PlayFabAdminTagModel{ src },
                m_tagValue{ src.m_tagValue }
            {

                tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
            }

            ~TagModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminTagModel>(*this);
            }

        private:
            String m_tagValue;
        };

        struct ValueToDateModel : public PlayFabAdminValueToDateModel, public BaseModel
        {
            ValueToDateModel() : PlayFabAdminValueToDateModel{}
            {
            }

            ValueToDateModel(const ValueToDateModel& src) :
                PlayFabAdminValueToDateModel{ src },
                m_currency{ src.m_currency },
                m_totalValueAsDecimal{ src.m_totalValueAsDecimal }
            {

                currency = m_currency.empty() ? nullptr : m_currency.data();
                totalValueAsDecimal = m_totalValueAsDecimal.empty() ? nullptr : m_totalValueAsDecimal.data();
            }

            ~ValueToDateModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Currency", m_currency, currency);
                JsonUtils:: ObjectGetMember(input, "TotalValue", totalValue);
                JsonUtils:: ObjectGetMember(input, "TotalValueAsDecimal", m_totalValueAsDecimal, totalValueAsDecimal);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminValueToDateModel>(*this);
            }

        private:
            String m_currency;

            String m_totalValueAsDecimal;
        };

        struct PlayerProfileModel : public PlayFabAdminPlayerProfileModel, public BaseModel
        {
            PlayerProfileModel() : PlayFabAdminPlayerProfileModel{}
            {
            }

            PlayerProfileModel(const PlayerProfileModel& src) :
                PlayFabAdminPlayerProfileModel{ src },
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

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
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
                return JsonUtils::ToJson<PlayFabAdminPlayerProfileModel>(*this);
            }

        private:
            PointerArray<PlayFabAdminAdCampaignAttributionModel, AdCampaignAttributionModel> m_adCampaignAttributions;
            String m_avatarUrl;
            StdExtra::optional<time_t> m_bannedUntil;
            PointerArray<PlayFabAdminContactEmailInfoModel, ContactEmailInfoModel> m_contactEmailAddresses;
            StdExtra::optional<time_t> m_created;
            String m_displayName;
            PointerArray<const char, String> m_experimentVariants;
            StdExtra::optional<time_t> m_lastLogin;
            PointerArray<PlayFabAdminLinkedPlatformAccountModel, LinkedPlatformAccountModel> m_linkedAccounts;
            PointerArray<PlayFabAdminLocationModel, LocationModel> m_locations;
            PointerArray<PlayFabAdminMembershipModel, MembershipModel> m_memberships;
            StdExtra::optional<PlayFabAdminLoginIdentityProvider> m_origination;
            String m_playerId;
            String m_publisherId;
            PointerArray<PlayFabAdminPushNotificationRegistrationModel, PushNotificationRegistrationModel> m_pushNotificationRegistrations;
            PointerArray<PlayFabAdminStatisticModel, StatisticModel> m_statistics;
            PointerArray<PlayFabAdminTagModel, TagModel> m_tags;
            String m_titleId;
            StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
            PointerArray<PlayFabAdminValueToDateModel, ValueToDateModel> m_valuesToDate;
        };

        struct GetPlayerProfileResult : public PlayFabAdminGetPlayerProfileResult, public BaseResult
        {
            GetPlayerProfileResult() : PlayFabAdminGetPlayerProfileResult{}
            {
            }

            GetPlayerProfileResult(const GetPlayerProfileResult& src) :
                PlayFabAdminGetPlayerProfileResult{ src },
                m_playerProfile{ src.m_playerProfile }
            {

                playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
            }

            ~GetPlayerProfileResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerProfileResult>(*this);
            }

        private:
            StdExtra::optional<PlayerProfileModel> m_playerProfile;
        };

        struct GetPlayerSegmentsResult : public PlayFabAdminGetPlayerSegmentsResult, public BaseResult
        {
            GetPlayerSegmentsResult() : PlayFabAdminGetPlayerSegmentsResult{}
            {
            }

            GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
                PlayFabAdminGetPlayerSegmentsResult{ src },
                m_segments{ src.m_segments }
            {

                segments = m_segments.Empty() ? nullptr : m_segments.Data();
            }

            ~GetPlayerSegmentsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerSegmentsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminGetSegmentResult, GetSegmentResult> m_segments;
        };

        struct GetPlayerSharedSecretsRequest : public PlayFabAdminGetPlayerSharedSecretsRequest, public BaseRequest
        {
            GetPlayerSharedSecretsRequest() : PlayFabAdminGetPlayerSharedSecretsRequest{}
            {
            }

            GetPlayerSharedSecretsRequest(const GetPlayerSharedSecretsRequest&) = default;

            ~GetPlayerSharedSecretsRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerSharedSecretsRequest>(*this);
            }

        private:
        };

        struct SharedSecret : public PlayFabAdminSharedSecret, public BaseModel
        {
            SharedSecret() : PlayFabAdminSharedSecret{}
            {
            }

            SharedSecret(const SharedSecret& src) :
                PlayFabAdminSharedSecret{ src },
                m_friendlyName{ src.m_friendlyName },
                m_secretKey{ src.m_secretKey }
            {

                friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
                secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
            }

            ~SharedSecret() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Disabled", disabled);
                JsonUtils:: ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
                JsonUtils:: ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSharedSecret>(*this);
            }

        private:

            String m_friendlyName;
            String m_secretKey;
        };

        struct GetPlayerSharedSecretsResult : public PlayFabAdminGetPlayerSharedSecretsResult, public BaseResult
        {
            GetPlayerSharedSecretsResult() : PlayFabAdminGetPlayerSharedSecretsResult{}
            {
            }

            GetPlayerSharedSecretsResult(const GetPlayerSharedSecretsResult& src) :
                PlayFabAdminGetPlayerSharedSecretsResult{ src },
                m_sharedSecrets{ src.m_sharedSecrets }
            {

                sharedSecrets = m_sharedSecrets.Empty() ? nullptr : m_sharedSecrets.Data();
            }

            ~GetPlayerSharedSecretsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SharedSecrets", m_sharedSecrets, sharedSecrets, sharedSecretsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerSharedSecretsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminSharedSecret, SharedSecret> m_sharedSecrets;
        };

        struct GetPlayersInSegmentRequest : public PlayFabAdminGetPlayersInSegmentRequest, public BaseRequest
        {
            GetPlayersInSegmentRequest() : PlayFabAdminGetPlayersInSegmentRequest{}
            {
            }

            GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src) :
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

            ~GetPlayersInSegmentRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MaxBatchSize", m_maxBatchSize, maxBatchSize);
                JsonUtils:: ObjectGetMember(input, "SecondsToLive", m_secondsToLive, secondsToLive);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayersInSegmentRequest>(*this);
            }

        private:
            String m_continuationToken;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<uint32_t> m_maxBatchSize;
            StdExtra::optional<uint32_t> m_secondsToLive;
            String m_segmentId;
        };

        struct PlayerLinkedAccount : public PlayFabAdminPlayerLinkedAccount, public BaseModel
        {
            PlayerLinkedAccount() : PlayFabAdminPlayerLinkedAccount{}
            {
            }

            PlayerLinkedAccount(const PlayerLinkedAccount& src) :
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

            ~PlayerLinkedAccount() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
                JsonUtils:: ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerLinkedAccount>(*this);
            }

        private:
            String m_email;
            StdExtra::optional<PlayFabAdminLoginIdentityProvider> m_platform;
            String m_platformUserId;
            String m_username;
        };

        struct PlayerLocation : public PlayFabAdminPlayerLocation, public BaseModel
        {
            PlayerLocation() : PlayFabAdminPlayerLocation{}
            {
            }

            PlayerLocation(const PlayerLocation& src) :
                PlayFabAdminPlayerLocation{ src },
                m_city{ src.m_city },
                m_latitude{ src.m_latitude },
                m_longitude{ src.m_longitude }
            {

                city = m_city.empty() ? nullptr : m_city.data();
                latitude = m_latitude ? m_latitude.operator->() : nullptr;
                longitude = m_longitude ? m_longitude.operator->() : nullptr;
            }

            ~PlayerLocation() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "City", m_city, city);
                JsonUtils:: ObjectGetMember(input, "ContinentCode", continentCode);
                JsonUtils:: ObjectGetMember(input, "CountryCode", countryCode);
                JsonUtils:: ObjectGetMember(input, "Latitude", m_latitude, latitude);
                JsonUtils:: ObjectGetMember(input, "Longitude", m_longitude, longitude);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerLocation>(*this);
            }

        private:
            String m_city;


            StdExtra::optional<double> m_latitude;
            StdExtra::optional<double> m_longitude;
        };

        struct PlayerStatistic : public PlayFabAdminPlayerStatistic, public BaseModel
        {
            PlayerStatistic() : PlayFabAdminPlayerStatistic{}
            {
            }

            PlayerStatistic(const PlayerStatistic& src) :
                PlayFabAdminPlayerStatistic{ src },
                m_id{ src.m_id },
                m_name{ src.m_name }
            {

                id = m_id.empty() ? nullptr : m_id.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~PlayerStatistic() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "StatisticValue", statisticValue);
                JsonUtils:: ObjectGetMember(input, "StatisticVersion", statisticVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerStatistic>(*this);
            }

        private:
            String m_id;
            String m_name;


        };

        struct PushNotificationRegistration : public PlayFabAdminPushNotificationRegistration, public BaseModel
        {
            PushNotificationRegistration() : PlayFabAdminPushNotificationRegistration{}
            {
            }

            PushNotificationRegistration(const PushNotificationRegistration& src) :
                PlayFabAdminPushNotificationRegistration{ src },
                m_notificationEndpointARN{ src.m_notificationEndpointARN },
                m_platform{ src.m_platform }
            {

                notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
                platform = m_platform ? m_platform.operator->() : nullptr;
            }

            ~PushNotificationRegistration() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPushNotificationRegistration>(*this);
            }

        private:
            String m_notificationEndpointARN;
            StdExtra::optional<PlayFabAdminPushNotificationPlatform> m_platform;
        };

        struct PlayerProfile : public PlayFabAdminPlayerProfile, public BaseModel
        {
            PlayerProfile() : PlayFabAdminPlayerProfile{}
            {
            }

            PlayerProfile(const PlayerProfile& src) :
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

            ~PlayerProfile() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
                JsonUtils:: ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
                JsonUtils:: ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
                JsonUtils:: ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
                JsonUtils:: ObjectGetMember(input, "Created", m_created, created, true);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
                JsonUtils:: ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
                JsonUtils:: ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
                JsonUtils:: ObjectGetMember(input, "Origination", m_origination, origination);
                JsonUtils:: ObjectGetMember(input, "PlayerExperimentVariants", m_playerExperimentVariants, playerExperimentVariants, playerExperimentVariantsCount);
                JsonUtils:: ObjectGetMember(input, "PlayerId", m_playerId, playerId);
                JsonUtils:: ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
                JsonUtils:: ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
                JsonUtils:: ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
                JsonUtils:: ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerProfile>(*this);
            }

        private:
            PointerArray<PlayFabAdminAdCampaignAttribution, AdCampaignAttribution> m_adCampaignAttributions;
            String m_avatarUrl;
            StdExtra::optional<time_t> m_bannedUntil;
            PointerArray<PlayFabAdminContactEmailInfo, ContactEmailInfo> m_contactEmailAddresses;
            StdExtra::optional<time_t> m_created;
            String m_displayName;
            StdExtra::optional<time_t> m_lastLogin;
            PointerArray<PlayFabAdminPlayerLinkedAccount, PlayerLinkedAccount> m_linkedAccounts;
            AssociativeArray<PlayFabAdminPlayerLocationDictionaryEntry, PlayerLocation> m_locations;
            StdExtra::optional<PlayFabAdminLoginIdentityProvider> m_origination;
            PointerArray<const char, String> m_playerExperimentVariants;
            String m_playerId;
            PointerArray<PlayFabAdminPlayerStatistic, PlayerStatistic> m_playerStatistics;
            String m_publisherId;
            PointerArray<PlayFabAdminPushNotificationRegistration, PushNotificationRegistration> m_pushNotificationRegistrations;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_statistics;
            PointerArray<const char, String> m_tags;
            String m_titleId;
            StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_valuesToDate;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrencyBalances;
        };

        struct GetPlayersInSegmentResult : public PlayFabAdminGetPlayersInSegmentResult, public BaseResult
        {
            GetPlayersInSegmentResult() : PlayFabAdminGetPlayersInSegmentResult{}
            {
            }

            GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src) :
                PlayFabAdminGetPlayersInSegmentResult{ src },
                m_continuationToken{ src.m_continuationToken },
                m_playerProfiles{ src.m_playerProfiles }
            {

                continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
                playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
            }

            ~GetPlayersInSegmentResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
                JsonUtils:: ObjectGetMember(input, "PlayerProfiles", m_playerProfiles, playerProfiles, playerProfilesCount);
                JsonUtils:: ObjectGetMember(input, "ProfilesInSegment", profilesInSegment);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayersInSegmentResult>(*this);
            }

        private:
            String m_continuationToken;
            PointerArray<PlayFabAdminPlayerProfile, PlayerProfile> m_playerProfiles;

        };

        struct GetPlayersSegmentsRequest : public PlayFabAdminGetPlayersSegmentsRequest, public BaseRequest
        {
            GetPlayersSegmentsRequest() : PlayFabAdminGetPlayersSegmentsRequest{}
            {
            }

            GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src) :
                PlayFabAdminGetPlayersSegmentsRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayersSegmentsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayersSegmentsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct GetPlayerStatisticDefinitionsRequest : public PlayFabAdminGetPlayerStatisticDefinitionsRequest, public BaseRequest
        {
            GetPlayerStatisticDefinitionsRequest() : PlayFabAdminGetPlayerStatisticDefinitionsRequest{}
            {
            }

            GetPlayerStatisticDefinitionsRequest(const GetPlayerStatisticDefinitionsRequest&) = default;

            ~GetPlayerStatisticDefinitionsRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticDefinitionsRequest>(*this);
            }

        private:
        };

        struct GetPlayerStatisticDefinitionsResult : public PlayFabAdminGetPlayerStatisticDefinitionsResult, public BaseResult
        {
            GetPlayerStatisticDefinitionsResult() : PlayFabAdminGetPlayerStatisticDefinitionsResult{}
            {
            }

            GetPlayerStatisticDefinitionsResult(const GetPlayerStatisticDefinitionsResult& src) :
                PlayFabAdminGetPlayerStatisticDefinitionsResult{ src },
                m_statistics{ src.m_statistics }
            {

                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
            }

            ~GetPlayerStatisticDefinitionsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticDefinitionsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminPlayerStatisticDefinition, PlayerStatisticDefinition> m_statistics;
        };

        struct GetPlayerStatisticVersionsRequest : public PlayFabAdminGetPlayerStatisticVersionsRequest, public BaseRequest
        {
            GetPlayerStatisticVersionsRequest() : PlayFabAdminGetPlayerStatisticVersionsRequest{}
            {
            }

            GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
                PlayFabAdminGetPlayerStatisticVersionsRequest{ src },
                m_customTags{ src.m_customTags },
                m_statisticName{ src.m_statisticName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetPlayerStatisticVersionsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticVersionsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_statisticName;
        };

        struct PlayerStatisticVersion : public PlayFabAdminPlayerStatisticVersion, public BaseModel
        {
            PlayerStatisticVersion() : PlayFabAdminPlayerStatisticVersion{}
            {
            }

            PlayerStatisticVersion(const PlayerStatisticVersion& src) :
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

            ~PlayerStatisticVersion() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActivationTime", activationTime, true);
                JsonUtils:: ObjectGetMember(input, "ArchiveDownloadUrl", m_archiveDownloadUrl, archiveDownloadUrl);
                JsonUtils:: ObjectGetMember(input, "DeactivationTime", m_deactivationTime, deactivationTime, true);
                JsonUtils:: ObjectGetMember(input, "ScheduledActivationTime", m_scheduledActivationTime, scheduledActivationTime, true);
                JsonUtils:: ObjectGetMember(input, "ScheduledDeactivationTime", m_scheduledDeactivationTime, scheduledDeactivationTime, true);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPlayerStatisticVersion>(*this);
            }

        private:

            String m_archiveDownloadUrl;
            StdExtra::optional<time_t> m_deactivationTime;
            StdExtra::optional<time_t> m_scheduledActivationTime;
            StdExtra::optional<time_t> m_scheduledDeactivationTime;
            String m_statisticName;
            StdExtra::optional<PlayFabAdminStatisticVersionStatus> m_status;

        };

        struct GetPlayerStatisticVersionsResult : public PlayFabAdminGetPlayerStatisticVersionsResult, public BaseResult
        {
            GetPlayerStatisticVersionsResult() : PlayFabAdminGetPlayerStatisticVersionsResult{}
            {
            }

            GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
                PlayFabAdminGetPlayerStatisticVersionsResult{ src },
                m_statisticVersions{ src.m_statisticVersions }
            {

                statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
            }

            ~GetPlayerStatisticVersionsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatisticVersions", m_statisticVersions, statisticVersions, statisticVersionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticVersionsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
        };

        struct GetPlayerTagsRequest : public PlayFabAdminGetPlayerTagsRequest, public BaseRequest
        {
            GetPlayerTagsRequest() : PlayFabAdminGetPlayerTagsRequest{}
            {
            }

            GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
                PlayFabAdminGetPlayerTagsRequest{ src },
                m_customTags{ src.m_customTags },
                m_playfabNamespace{ src.m_playfabNamespace },
                m_playFabId{ src.m_playFabId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerTagsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Namespace", m_playfabNamespace, playfabNamespace);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerTagsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playfabNamespace;
            String m_playFabId;
        };

        struct GetPlayerTagsResult : public PlayFabAdminGetPlayerTagsResult, public BaseResult
        {
            GetPlayerTagsResult() : PlayFabAdminGetPlayerTagsResult{}
            {
            }

            GetPlayerTagsResult(const GetPlayerTagsResult& src) :
                PlayFabAdminGetPlayerTagsResult{ src },
                m_playFabId{ src.m_playFabId },
                m_tags{ src.m_tags }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~GetPlayerTagsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPlayerTagsResult>(*this);
            }

        private:
            String m_playFabId;
            PointerArray<const char, String> m_tags;
        };

        struct GetPolicyRequest : public PlayFabAdminGetPolicyRequest, public BaseRequest
        {
            GetPolicyRequest() : PlayFabAdminGetPolicyRequest{}
            {
            }

            GetPolicyRequest(const GetPolicyRequest& src) :
                PlayFabAdminGetPolicyRequest{ src },
                m_policyName{ src.m_policyName }
            {

                policyName = m_policyName.empty() ? nullptr : m_policyName.data();
            }

            ~GetPolicyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PolicyName", m_policyName, policyName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPolicyRequest>(*this);
            }

        private:
            String m_policyName;
        };

        struct PermissionStatement : public PlayFabAdminPermissionStatement, public BaseModel
        {
            PermissionStatement() : PlayFabAdminPermissionStatement{}
            {
            }

            PermissionStatement(const PermissionStatement& src) :
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

            ~PermissionStatement() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Action", m_action, action);
                JsonUtils:: ObjectGetMember(input, "ApiConditions", m_apiConditions, apiConditions);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "Effect", effect);
                JsonUtils:: ObjectGetMember(input, "Principal", m_principal, principal);
                JsonUtils:: ObjectGetMember(input, "Resource", m_resource, resource);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminPermissionStatement>(*this);
            }

        private:
            String m_action;
            StdExtra::optional<ApiCondition> m_apiConditions;
            String m_comment;

            String m_principal;
            String m_resource;
        };

        struct GetPolicyResponse : public PlayFabAdminGetPolicyResponse, public BaseResult
        {
            GetPolicyResponse() : PlayFabAdminGetPolicyResponse{}
            {
            }

            GetPolicyResponse(const GetPolicyResponse& src) :
                PlayFabAdminGetPolicyResponse{ src },
                m_policyName{ src.m_policyName },
                m_statements{ src.m_statements }
            {

                policyName = m_policyName.empty() ? nullptr : m_policyName.data();
                statements = m_statements.Empty() ? nullptr : m_statements.Data();
            }

            ~GetPolicyResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PolicyName", m_policyName, policyName);
                JsonUtils:: ObjectGetMember(input, "PolicyVersion", policyVersion);
                JsonUtils:: ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPolicyResponse>(*this);
            }

        private:
            String m_policyName;

            PointerArray<PlayFabAdminPermissionStatement, PermissionStatement> m_statements;
        };

        struct GetPublisherDataRequest : public PlayFabAdminGetPublisherDataRequest, public BaseRequest
        {
            GetPublisherDataRequest() : PlayFabAdminGetPublisherDataRequest{}
            {
            }

            GetPublisherDataRequest(const GetPublisherDataRequest& src) :
                PlayFabAdminGetPublisherDataRequest{ src },
                m_keys{ src.m_keys }
            {

                keys = m_keys.Empty() ? nullptr : m_keys.Data();
            }

            ~GetPublisherDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPublisherDataRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_keys;
        };

        struct GetPublisherDataResult : public PlayFabAdminGetPublisherDataResult, public BaseResult
        {
            GetPublisherDataResult() : PlayFabAdminGetPublisherDataResult{}
            {
            }

            GetPublisherDataResult(const GetPublisherDataResult& src) :
                PlayFabAdminGetPublisherDataResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPublisherDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetPublisherDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct GetRandomResultTablesRequest : public PlayFabAdminGetRandomResultTablesRequest, public BaseRequest
        {
            GetRandomResultTablesRequest() : PlayFabAdminGetRandomResultTablesRequest{}
            {
            }

            GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
                PlayFabAdminGetRandomResultTablesRequest{ src },
                m_catalogVersion{ src.m_catalogVersion }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
            }

            ~GetRandomResultTablesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetRandomResultTablesRequest>(*this);
            }

        private:
            String m_catalogVersion;
        };

        struct ResultTableNode : public PlayFabAdminResultTableNode, public BaseModel
        {
            ResultTableNode() : PlayFabAdminResultTableNode{}
            {
            }

            ResultTableNode(const ResultTableNode& src) :
                PlayFabAdminResultTableNode{ src },
                m_resultItem{ src.m_resultItem }
            {

                resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
            }

            ~ResultTableNode() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ResultItem", m_resultItem, resultItem);
                JsonUtils:: ObjectGetMember(input, "ResultItemType", resultItemType);
                JsonUtils:: ObjectGetMember(input, "Weight", weight);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResultTableNode>(*this);
            }

        private:
            String m_resultItem;


        };

        struct RandomResultTableListing : public PlayFabAdminRandomResultTableListing, public BaseModel
        {
            RandomResultTableListing() : PlayFabAdminRandomResultTableListing{}
            {
            }

            RandomResultTableListing(const RandomResultTableListing& src) :
                PlayFabAdminRandomResultTableListing{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_nodes{ src.m_nodes },
                m_tableId{ src.m_tableId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
                tableId = m_tableId.empty() ? nullptr : m_tableId.data();
            }

            ~RandomResultTableListing() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
                JsonUtils:: ObjectGetMember(input, "TableId", m_tableId, tableId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRandomResultTableListing>(*this);
            }

        private:
            String m_catalogVersion;
            PointerArray<PlayFabAdminResultTableNode, ResultTableNode> m_nodes;
            String m_tableId;
        };

        struct GetRandomResultTablesResult : public PlayFabAdminGetRandomResultTablesResult, public BaseResult
        {
            GetRandomResultTablesResult() : PlayFabAdminGetRandomResultTablesResult{}
            {
            }

            GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
                PlayFabAdminGetRandomResultTablesResult{ src },
                m_tables{ src.m_tables }
            {

                tables = m_tables.Empty() ? nullptr : m_tables.Data();
            }

            ~GetRandomResultTablesResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetRandomResultTablesResult>(*this);
            }

        private:
            AssociativeArray<PlayFabAdminRandomResultTableListingDictionaryEntry, RandomResultTableListing> m_tables;
        };

        struct GetSegmentsRequest : public PlayFabAdminGetSegmentsRequest, public BaseRequest
        {
            GetSegmentsRequest() : PlayFabAdminGetSegmentsRequest{}
            {
            }

            GetSegmentsRequest(const GetSegmentsRequest& src) :
                PlayFabAdminGetSegmentsRequest{ src },
                m_segmentIds{ src.m_segmentIds }
            {

                segmentIds = m_segmentIds.Empty() ? nullptr : m_segmentIds.Data();
            }

            ~GetSegmentsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SegmentIds", m_segmentIds, segmentIds, segmentIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetSegmentsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_segmentIds;
        };

        struct GetSegmentsResponse : public PlayFabAdminGetSegmentsResponse, public BaseResult
        {
            GetSegmentsResponse() : PlayFabAdminGetSegmentsResponse{}
            {
            }

            GetSegmentsResponse(const GetSegmentsResponse& src) :
                PlayFabAdminGetSegmentsResponse{ src },
                m_errorMessage{ src.m_errorMessage },
                m_segments{ src.m_segments }
            {

                errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
                segments = m_segments.Empty() ? nullptr : m_segments.Data();
            }

            ~GetSegmentsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetSegmentsResponse>(*this);
            }

        private:
            String m_errorMessage;
            PointerArray<PlayFabAdminSegmentModel, SegmentModel> m_segments;
        };

        struct GetServerBuildInfoRequest : public PlayFabAdminGetServerBuildInfoRequest, public BaseRequest
        {
            GetServerBuildInfoRequest() : PlayFabAdminGetServerBuildInfoRequest{}
            {
            }

            GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src) :
                PlayFabAdminGetServerBuildInfoRequest{ src },
                m_buildId{ src.m_buildId }
            {

                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
            }

            ~GetServerBuildInfoRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetServerBuildInfoRequest>(*this);
            }

        private:
            String m_buildId;
        };

        struct GetServerBuildInfoResult : public PlayFabAdminGetServerBuildInfoResult, public BaseResult
        {
            GetServerBuildInfoResult() : PlayFabAdminGetServerBuildInfoResult{}
            {
            }

            GetServerBuildInfoResult(const GetServerBuildInfoResult& src) :
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

            ~GetServerBuildInfoResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
                JsonUtils:: ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "Timestamp", timestamp, true);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetServerBuildInfoResult>(*this);
            }

        private:
            Vector<PlayFabAdminRegion> m_activeRegions;
            String m_buildId;
            String m_comment;
            String m_errorMessage;


            StdExtra::optional<PlayFabAdminGameBuildStatus> m_status;

            String m_titleId;
        };

        struct GetServerBuildUploadURLRequest : public PlayFabAdminGetServerBuildUploadURLRequest, public BaseRequest
        {
            GetServerBuildUploadURLRequest() : PlayFabAdminGetServerBuildUploadURLRequest{}
            {
            }

            GetServerBuildUploadURLRequest(const GetServerBuildUploadURLRequest& src) :
                PlayFabAdminGetServerBuildUploadURLRequest{ src },
                m_buildId{ src.m_buildId }
            {

                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
            }

            ~GetServerBuildUploadURLRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetServerBuildUploadURLRequest>(*this);
            }

        private:
            String m_buildId;
        };

        struct GetServerBuildUploadURLResult : public PlayFabAdminGetServerBuildUploadURLResult, public BaseResult
        {
            GetServerBuildUploadURLResult() : PlayFabAdminGetServerBuildUploadURLResult{}
            {
            }

            GetServerBuildUploadURLResult(const GetServerBuildUploadURLResult& src) :
                PlayFabAdminGetServerBuildUploadURLResult{ src },
                m_uRL{ src.m_uRL }
            {

                uRL = m_uRL.empty() ? nullptr : m_uRL.data();
            }

            ~GetServerBuildUploadURLResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "URL", m_uRL, uRL);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetServerBuildUploadURLResult>(*this);
            }

        private:
            String m_uRL;
        };

        struct GetStoreItemsRequest : public PlayFabAdminGetStoreItemsRequest, public BaseRequest
        {
            GetStoreItemsRequest() : PlayFabAdminGetStoreItemsRequest{}
            {
            }

            GetStoreItemsRequest(const GetStoreItemsRequest& src) :
                PlayFabAdminGetStoreItemsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_storeId{ src.m_storeId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                storeId = m_storeId.empty() ? nullptr : m_storeId.data();
            }

            ~GetStoreItemsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetStoreItemsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_storeId;
        };

        struct StoreMarketingModel : public PlayFabAdminStoreMarketingModel, public BaseModel
        {
            StoreMarketingModel() : PlayFabAdminStoreMarketingModel{}
            {
            }

            StoreMarketingModel(const StoreMarketingModel& src) :
                PlayFabAdminStoreMarketingModel{ src },
                m_description{ src.m_description },
                m_displayName{ src.m_displayName },
                m_metadata{ src.m_metadata }
            {

                description = m_description.empty() ? nullptr : m_description.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                metadata.stringValue = m_metadata.StringValue();
            }

            ~StoreMarketingModel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminStoreMarketingModel>(*this);
            }

        private:
            String m_description;
            String m_displayName;
            JsonObject m_metadata;
        };

        struct StoreItem : public PlayFabAdminStoreItem, public BaseModel
        {
            StoreItem() : PlayFabAdminStoreItem{}
            {
            }

            StoreItem(const StoreItem& src) :
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

            ~StoreItem() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomData", m_customData, customData);
                JsonUtils:: ObjectGetMember(input, "DisplayPosition", m_displayPosition, displayPosition);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminStoreItem>(*this);
            }

        private:
            JsonObject m_customData;
            StdExtra::optional<uint32_t> m_displayPosition;
            String m_itemId;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
        };

        struct GetStoreItemsResult : public PlayFabAdminGetStoreItemsResult, public BaseResult
        {
            GetStoreItemsResult() : PlayFabAdminGetStoreItemsResult{}
            {
            }

            GetStoreItemsResult(const GetStoreItemsResult& src) :
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

            ~GetStoreItemsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
                JsonUtils:: ObjectGetMember(input, "Source", m_source, source);
                JsonUtils:: ObjectGetMember(input, "Store", m_store, store, storeCount);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetStoreItemsResult>(*this);
            }

        private:
            String m_catalogVersion;
            StdExtra::optional<StoreMarketingModel> m_marketingData;
            StdExtra::optional<PlayFabAdminSourceType> m_source;
            PointerArray<PlayFabAdminStoreItem, StoreItem> m_store;
            String m_storeId;
        };

        struct GetTaskInstanceRequest : public PlayFabAdminGetTaskInstanceRequest, public BaseRequest
        {
            GetTaskInstanceRequest() : PlayFabAdminGetTaskInstanceRequest{}
            {
            }

            GetTaskInstanceRequest(const GetTaskInstanceRequest& src) :
                PlayFabAdminGetTaskInstanceRequest{ src },
                m_taskInstanceId{ src.m_taskInstanceId }
            {

                taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
            }

            ~GetTaskInstanceRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTaskInstanceRequest>(*this);
            }

        private:
            String m_taskInstanceId;
        };

        struct GetTaskInstancesRequest : public PlayFabAdminGetTaskInstancesRequest, public BaseRequest
        {
            GetTaskInstancesRequest() : PlayFabAdminGetTaskInstancesRequest{}
            {
            }

            GetTaskInstancesRequest(const GetTaskInstancesRequest& src) :
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

            ~GetTaskInstancesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StartedAtRangeFrom", m_startedAtRangeFrom, startedAtRangeFrom, true);
                JsonUtils:: ObjectGetMember(input, "StartedAtRangeTo", m_startedAtRangeTo, startedAtRangeTo, true);
                JsonUtils:: ObjectGetMember(input, "StatusFilter", m_statusFilter, statusFilter);
                JsonUtils:: ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTaskInstancesRequest>(*this);
            }

        private:
            StdExtra::optional<time_t> m_startedAtRangeFrom;
            StdExtra::optional<time_t> m_startedAtRangeTo;
            StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_statusFilter;
            StdExtra::optional<NameIdentifier> m_taskIdentifier;
        };

        struct TaskInstanceBasicSummary : public PlayFabAdminTaskInstanceBasicSummary, public BaseModel
        {
            TaskInstanceBasicSummary() : PlayFabAdminTaskInstanceBasicSummary{}
            {
            }

            TaskInstanceBasicSummary(const TaskInstanceBasicSummary& src) :
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

            ~TaskInstanceBasicSummary() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CompletedAt", m_completedAt, completedAt, true);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "EstimatedSecondsRemaining", m_estimatedSecondsRemaining, estimatedSecondsRemaining);
                JsonUtils:: ObjectGetMember(input, "PercentComplete", m_percentComplete, percentComplete);
                JsonUtils:: ObjectGetMember(input, "ScheduledByUserId", m_scheduledByUserId, scheduledByUserId);
                JsonUtils:: ObjectGetMember(input, "StartedAt", startedAt, true);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
                JsonUtils:: ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminTaskInstanceBasicSummary>(*this);
            }

        private:
            StdExtra::optional<time_t> m_completedAt;
            String m_errorMessage;
            StdExtra::optional<double> m_estimatedSecondsRemaining;
            StdExtra::optional<double> m_percentComplete;
            String m_scheduledByUserId;

            StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_status;
            StdExtra::optional<NameIdentifier> m_taskIdentifier;
            String m_taskInstanceId;
            StdExtra::optional<PlayFabAdminScheduledTaskType> m_type;
        };

        struct GetTaskInstancesResult : public PlayFabAdminGetTaskInstancesResult, public BaseResult
        {
            GetTaskInstancesResult() : PlayFabAdminGetTaskInstancesResult{}
            {
            }

            GetTaskInstancesResult(const GetTaskInstancesResult& src) :
                PlayFabAdminGetTaskInstancesResult{ src },
                m_summaries{ src.m_summaries }
            {

                summaries = m_summaries.Empty() ? nullptr : m_summaries.Data();
            }

            ~GetTaskInstancesResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Summaries", m_summaries, summaries, summariesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTaskInstancesResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminTaskInstanceBasicSummary, TaskInstanceBasicSummary> m_summaries;
        };

        struct GetTasksRequest : public PlayFabAdminGetTasksRequest, public BaseRequest
        {
            GetTasksRequest() : PlayFabAdminGetTasksRequest{}
            {
            }

            GetTasksRequest(const GetTasksRequest& src) :
                PlayFabAdminGetTasksRequest{ src },
                m_identifier{ src.m_identifier }
            {

                identifier = m_identifier ? m_identifier.operator->() : nullptr;
            }

            ~GetTasksRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Identifier", m_identifier, identifier);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTasksRequest>(*this);
            }

        private:
            StdExtra::optional<NameIdentifier> m_identifier;
        };

        struct ScheduledTask : public PlayFabAdminScheduledTask, public BaseModel
        {
            ScheduledTask() : PlayFabAdminScheduledTask{}
            {
            }

            ScheduledTask(const ScheduledTask& src) :
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

            ~ScheduledTask() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "LastRunTime", m_lastRunTime, lastRunTime, true);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "NextRunTime", m_nextRunTime, nextRunTime, true);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Schedule", m_schedule, schedule);
                JsonUtils:: ObjectGetMember(input, "TaskId", m_taskId, taskId);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminScheduledTask>(*this);
            }

        private:
            String m_description;

            StdExtra::optional<time_t> m_lastRunTime;
            String m_name;
            StdExtra::optional<time_t> m_nextRunTime;
            JsonObject m_parameter;
            String m_schedule;
            String m_taskId;
            StdExtra::optional<PlayFabAdminScheduledTaskType> m_type;
        };

        struct GetTasksResult : public PlayFabAdminGetTasksResult, public BaseResult
        {
            GetTasksResult() : PlayFabAdminGetTasksResult{}
            {
            }

            GetTasksResult(const GetTasksResult& src) :
                PlayFabAdminGetTasksResult{ src },
                m_tasks{ src.m_tasks }
            {

                tasks = m_tasks.Empty() ? nullptr : m_tasks.Data();
            }

            ~GetTasksResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Tasks", m_tasks, tasks, tasksCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTasksResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminScheduledTask, ScheduledTask> m_tasks;
        };

        struct GetTitleDataRequest : public PlayFabAdminGetTitleDataRequest, public BaseRequest
        {
            GetTitleDataRequest() : PlayFabAdminGetTitleDataRequest{}
            {
            }

            GetTitleDataRequest(const GetTitleDataRequest& src) :
                PlayFabAdminGetTitleDataRequest{ src },
                m_keys{ src.m_keys },
                m_overrideLabel{ src.m_overrideLabel }
            {

                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
            }

            ~GetTitleDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTitleDataRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_keys;
            String m_overrideLabel;
        };

        struct GetTitleDataResult : public PlayFabAdminGetTitleDataResult, public BaseResult
        {
            GetTitleDataResult() : PlayFabAdminGetTitleDataResult{}
            {
            }

            GetTitleDataResult(const GetTitleDataResult& src) :
                PlayFabAdminGetTitleDataResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetTitleDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetTitleDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct GetUserBansRequest : public PlayFabAdminGetUserBansRequest, public BaseRequest
        {
            GetUserBansRequest() : PlayFabAdminGetUserBansRequest{}
            {
            }

            GetUserBansRequest(const GetUserBansRequest& src) :
                PlayFabAdminGetUserBansRequest{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserBansRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetUserBansRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct GetUserBansResult : public PlayFabAdminGetUserBansResult, public BaseResult
        {
            GetUserBansResult() : PlayFabAdminGetUserBansResult{}
            {
            }

            GetUserBansResult(const GetUserBansResult& src) :
                PlayFabAdminGetUserBansResult{ src },
                m_banData{ src.m_banData }
            {

                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~GetUserBansResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetUserBansResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminBanInfo, BanInfo> m_banData;
        };

        struct GetUserDataRequest : public PlayFabAdminGetUserDataRequest, public BaseRequest
        {
            GetUserDataRequest() : PlayFabAdminGetUserDataRequest{}
            {
            }

            GetUserDataRequest(const GetUserDataRequest& src) :
                PlayFabAdminGetUserDataRequest{ src },
                m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
                m_keys{ src.m_keys },
                m_playFabId{ src.m_playFabId }
            {

                ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetUserDataRequest>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
            PointerArray<const char, String> m_keys;
            String m_playFabId;
        };

        struct UserDataRecord : public PlayFabAdminUserDataRecord, public BaseModel
        {
            UserDataRecord() : PlayFabAdminUserDataRecord{}
            {
            }

            UserDataRecord(const UserDataRecord& src) :
                PlayFabAdminUserDataRecord{ src },
                m_permission{ src.m_permission },
                m_value{ src.m_value }
            {

                permission = m_permission ? m_permission.operator->() : nullptr;
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~UserDataRecord() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LastUpdated", lastUpdated, true);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserDataRecord>(*this);
            }

        private:

            StdExtra::optional<PlayFabAdminUserDataPermission> m_permission;
            String m_value;
        };

        struct GetUserDataResult : public PlayFabAdminGetUserDataResult, public BaseResult
        {
            GetUserDataResult() : PlayFabAdminGetUserDataResult{}
            {
            }

            GetUserDataResult(const GetUserDataResult& src) :
                PlayFabAdminGetUserDataResult{ src },
                m_data{ src.m_data },
                m_playFabId{ src.m_playFabId }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetUserDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabAdminUserDataRecordDictionaryEntry, UserDataRecord> m_data;

            String m_playFabId;
        };

        struct GetUserInventoryRequest : public PlayFabAdminGetUserInventoryRequest, public BaseRequest
        {
            GetUserInventoryRequest() : PlayFabAdminGetUserInventoryRequest{}
            {
            }

            GetUserInventoryRequest(const GetUserInventoryRequest& src) :
                PlayFabAdminGetUserInventoryRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserInventoryRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetUserInventoryRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct ItemInstance : public PlayFabAdminItemInstance, public BaseModel
        {
            ItemInstance() : PlayFabAdminItemInstance{}
            {
            }

            ItemInstance(const ItemInstance& src) :
                PlayFabAdminItemInstance{ src },
                m_annotation{ src.m_annotation },
                m_bundleContents{ src.m_bundleContents },
                m_bundleParent{ src.m_bundleParent },
                m_catalogVersion{ src.m_catalogVersion },
                m_customData{ src.m_customData },
                m_displayName{ src.m_displayName },
                m_expiration{ src.m_expiration },
                m_itemClass{ src.m_itemClass },
                m_itemId{ src.m_itemId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_purchaseDate{ src.m_purchaseDate },
                m_remainingUses{ src.m_remainingUses },
                m_unitCurrency{ src.m_unitCurrency },
                m_usesIncrementedBy{ src.m_usesIncrementedBy }
            {

                annotation = m_annotation.empty() ? nullptr : m_annotation.data();
                bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
                bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customData = m_customData.Empty() ? nullptr : m_customData.Data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                expiration = m_expiration ? m_expiration.operator->() : nullptr;
                itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
                remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
                unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
                usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
            }

            ~ItemInstance() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
                JsonUtils:: ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
                JsonUtils:: ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
                JsonUtils:: ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
                JsonUtils:: ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
                JsonUtils:: ObjectGetMember(input, "UnitPrice", unitPrice);
                JsonUtils:: ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminItemInstance>(*this);
            }

        private:
            String m_annotation;
            PointerArray<const char, String> m_bundleContents;
            String m_bundleParent;
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customData;
            String m_displayName;
            StdExtra::optional<time_t> m_expiration;
            String m_itemClass;
            String m_itemId;
            String m_itemInstanceId;
            StdExtra::optional<time_t> m_purchaseDate;
            StdExtra::optional<int32_t> m_remainingUses;
            String m_unitCurrency;

            StdExtra::optional<int32_t> m_usesIncrementedBy;
        };

        struct VirtualCurrencyRechargeTime : public PlayFabAdminVirtualCurrencyRechargeTime, public BaseModel
        {
            VirtualCurrencyRechargeTime() : PlayFabAdminVirtualCurrencyRechargeTime{}
            {
            }

            VirtualCurrencyRechargeTime(const VirtualCurrencyRechargeTime&) = default;

            ~VirtualCurrencyRechargeTime() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "RechargeMax", rechargeMax);
                JsonUtils:: ObjectGetMember(input, "RechargeTime", rechargeTime, true);
                JsonUtils:: ObjectGetMember(input, "SecondsToRecharge", secondsToRecharge);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminVirtualCurrencyRechargeTime>(*this);
            }

        private:



        };

        struct GetUserInventoryResult : public PlayFabAdminGetUserInventoryResult, public BaseResult
        {
            GetUserInventoryResult() : PlayFabAdminGetUserInventoryResult{}
            {
            }

            GetUserInventoryResult(const GetUserInventoryResult& src) :
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

            ~GetUserInventoryResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGetUserInventoryResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminItemInstance, ItemInstance> m_inventory;
            String m_playFabId;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
            AssociativeArray<PlayFabAdminVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
        };

        struct GrantedItemInstance : public PlayFabAdminGrantedItemInstance, public BaseModel
        {
            GrantedItemInstance() : PlayFabAdminGrantedItemInstance{}
            {
            }

            GrantedItemInstance(const GrantedItemInstance& src) :
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

            ~GrantedItemInstance() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
                JsonUtils:: ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
                JsonUtils:: ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
                JsonUtils:: ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
                JsonUtils:: ObjectGetMember(input, "Result", result);
                JsonUtils:: ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
                JsonUtils:: ObjectGetMember(input, "UnitPrice", unitPrice);
                JsonUtils:: ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGrantedItemInstance>(*this);
            }

        private:
            String m_annotation;
            PointerArray<const char, String> m_bundleContents;
            String m_bundleParent;
            String m_catalogVersion;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customData;
            String m_displayName;
            StdExtra::optional<time_t> m_expiration;
            String m_itemClass;
            String m_itemId;
            String m_itemInstanceId;
            String m_playFabId;
            StdExtra::optional<time_t> m_purchaseDate;
            StdExtra::optional<int32_t> m_remainingUses;

            String m_unitCurrency;

            StdExtra::optional<int32_t> m_usesIncrementedBy;
        };

        struct ItemGrant : public PlayFabAdminItemGrant, public BaseModel
        {
            ItemGrant() : PlayFabAdminItemGrant{}
            {
            }

            ItemGrant(const ItemGrant& src) :
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

            ~ItemGrant() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminItemGrant>(*this);
            }

        private:
            String m_annotation;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            String m_itemId;
            PointerArray<const char, String> m_keysToRemove;
            String m_playFabId;
        };

        struct GrantItemsToUsersRequest : public PlayFabAdminGrantItemsToUsersRequest, public BaseRequest
        {
            GrantItemsToUsersRequest() : PlayFabAdminGrantItemsToUsersRequest{}
            {
            }

            GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
                PlayFabAdminGrantItemsToUsersRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_itemGrants{ src.m_itemGrants }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
            }

            ~GrantItemsToUsersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemGrants", m_itemGrants, itemGrants, itemGrantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGrantItemsToUsersRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabAdminItemGrant, ItemGrant> m_itemGrants;
        };

        struct GrantItemsToUsersResult : public PlayFabAdminGrantItemsToUsersResult, public BaseResult
        {
            GrantItemsToUsersResult() : PlayFabAdminGrantItemsToUsersResult{}
            {
            }

            GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
                PlayFabAdminGrantItemsToUsersResult{ src },
                m_itemGrantResults{ src.m_itemGrantResults }
            {

                itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
            }

            ~GrantItemsToUsersResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminGrantItemsToUsersResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
        };

        struct IncrementLimitedEditionItemAvailabilityRequest : public PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest, public BaseRequest
        {
            IncrementLimitedEditionItemAvailabilityRequest() : PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest{}
            {
            }

            IncrementLimitedEditionItemAvailabilityRequest(const IncrementLimitedEditionItemAvailabilityRequest& src) :
                PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_itemId{ src.m_itemId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
            }

            ~IncrementLimitedEditionItemAvailabilityRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest>(*this);
            }

        private:

            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_itemId;
        };

        struct IncrementLimitedEditionItemAvailabilityResult : public PlayFabAdminIncrementLimitedEditionItemAvailabilityResult, public BaseResult
        {
            IncrementLimitedEditionItemAvailabilityResult() : PlayFabAdminIncrementLimitedEditionItemAvailabilityResult{}
            {
            }

            IncrementLimitedEditionItemAvailabilityResult(const IncrementLimitedEditionItemAvailabilityResult&) = default;

            ~IncrementLimitedEditionItemAvailabilityResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminIncrementLimitedEditionItemAvailabilityResult>(*this);
            }

        private:
        };

        struct IncrementPlayerStatisticVersionRequest : public PlayFabAdminIncrementPlayerStatisticVersionRequest, public BaseRequest
        {
            IncrementPlayerStatisticVersionRequest() : PlayFabAdminIncrementPlayerStatisticVersionRequest{}
            {
            }

            IncrementPlayerStatisticVersionRequest(const IncrementPlayerStatisticVersionRequest& src) :
                PlayFabAdminIncrementPlayerStatisticVersionRequest{ src },
                m_customTags{ src.m_customTags },
                m_statisticName{ src.m_statisticName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~IncrementPlayerStatisticVersionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminIncrementPlayerStatisticVersionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_statisticName;
        };

        struct IncrementPlayerStatisticVersionResult : public PlayFabAdminIncrementPlayerStatisticVersionResult, public BaseResult
        {
            IncrementPlayerStatisticVersionResult() : PlayFabAdminIncrementPlayerStatisticVersionResult{}
            {
            }

            IncrementPlayerStatisticVersionResult(const IncrementPlayerStatisticVersionResult& src) :
                PlayFabAdminIncrementPlayerStatisticVersionResult{ src },
                m_statisticVersion{ src.m_statisticVersion }
            {

                statisticVersion = m_statisticVersion ? m_statisticVersion.operator->() : nullptr;
            }

            ~IncrementPlayerStatisticVersionResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatisticVersion", m_statisticVersion, statisticVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminIncrementPlayerStatisticVersionResult>(*this);
            }

        private:
            StdExtra::optional<PlayerStatisticVersion> m_statisticVersion;
        };

        struct ListBuildsRequest : public PlayFabAdminListBuildsRequest, public BaseRequest
        {
            ListBuildsRequest() : PlayFabAdminListBuildsRequest{}
            {
            }

            ListBuildsRequest(const ListBuildsRequest&) = default;

            ~ListBuildsRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminListBuildsRequest>(*this);
            }

        private:
        };

        struct ListBuildsResult : public PlayFabAdminListBuildsResult, public BaseResult
        {
            ListBuildsResult() : PlayFabAdminListBuildsResult{}
            {
            }

            ListBuildsResult(const ListBuildsResult& src) :
                PlayFabAdminListBuildsResult{ src },
                m_builds{ src.m_builds }
            {

                builds = m_builds.Empty() ? nullptr : m_builds.Data();
            }

            ~ListBuildsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Builds", m_builds, builds, buildsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminListBuildsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminGetServerBuildInfoResult, GetServerBuildInfoResult> m_builds;
        };

        struct ListOpenIdConnectionRequest : public PlayFabAdminListOpenIdConnectionRequest, public BaseRequest
        {
            ListOpenIdConnectionRequest() : PlayFabAdminListOpenIdConnectionRequest{}
            {
            }

            ListOpenIdConnectionRequest(const ListOpenIdConnectionRequest&) = default;

            ~ListOpenIdConnectionRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminListOpenIdConnectionRequest>(*this);
            }

        private:
        };

        struct OpenIdConnection : public PlayFabAdminOpenIdConnection, public BaseModel
        {
            OpenIdConnection() : PlayFabAdminOpenIdConnection{}
            {
            }

            OpenIdConnection(const OpenIdConnection& src) :
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

            ~OpenIdConnection() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ClientId", m_clientId, clientId);
                JsonUtils:: ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "DiscoverConfiguration", discoverConfiguration);
                JsonUtils:: ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminOpenIdConnection>(*this);
            }

        private:
            String m_clientId;
            String m_clientSecret;
            String m_connectionId;

            StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
        };

        struct ListOpenIdConnectionResponse : public PlayFabAdminListOpenIdConnectionResponse, public BaseResult
        {
            ListOpenIdConnectionResponse() : PlayFabAdminListOpenIdConnectionResponse{}
            {
            }

            ListOpenIdConnectionResponse(const ListOpenIdConnectionResponse& src) :
                PlayFabAdminListOpenIdConnectionResponse{ src },
                m_connections{ src.m_connections }
            {

                connections = m_connections.Empty() ? nullptr : m_connections.Data();
            }

            ~ListOpenIdConnectionResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Connections", m_connections, connections, connectionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminListOpenIdConnectionResponse>(*this);
            }

        private:
            PointerArray<PlayFabAdminOpenIdConnection, OpenIdConnection> m_connections;
        };

        struct ListVirtualCurrencyTypesRequest : public PlayFabAdminListVirtualCurrencyTypesRequest, public BaseRequest
        {
            ListVirtualCurrencyTypesRequest() : PlayFabAdminListVirtualCurrencyTypesRequest{}
            {
            }

            ListVirtualCurrencyTypesRequest(const ListVirtualCurrencyTypesRequest&) = default;

            ~ListVirtualCurrencyTypesRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminListVirtualCurrencyTypesRequest>(*this);
            }

        private:
        };

        struct ListVirtualCurrencyTypesResult : public PlayFabAdminListVirtualCurrencyTypesResult, public BaseResult
        {
            ListVirtualCurrencyTypesResult() : PlayFabAdminListVirtualCurrencyTypesResult{}
            {
            }

            ListVirtualCurrencyTypesResult(const ListVirtualCurrencyTypesResult& src) :
                PlayFabAdminListVirtualCurrencyTypesResult{ src },
                m_virtualCurrencies{ src.m_virtualCurrencies }
            {

                virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
            }

            ~ListVirtualCurrencyTypesResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminListVirtualCurrencyTypesResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
        };

        struct LookupUserAccountInfoRequest : public PlayFabAdminLookupUserAccountInfoRequest, public BaseRequest
        {
            LookupUserAccountInfoRequest() : PlayFabAdminLookupUserAccountInfoRequest{}
            {
            }

            LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src) :
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

            ~LookupUserAccountInfoRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLookupUserAccountInfoRequest>(*this);
            }

        private:
            String m_email;
            String m_playFabId;
            String m_titleDisplayName;
            String m_username;
        };

        struct UserAndroidDeviceInfo : public PlayFabAdminUserAndroidDeviceInfo, public BaseModel
        {
            UserAndroidDeviceInfo() : PlayFabAdminUserAndroidDeviceInfo{}
            {
            }

            UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src) :
                PlayFabAdminUserAndroidDeviceInfo{ src },
                m_androidDeviceId{ src.m_androidDeviceId }
            {

                androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
            }

            ~UserAndroidDeviceInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserAndroidDeviceInfo>(*this);
            }

        private:
            String m_androidDeviceId;
        };

        struct UserAppleIdInfo : public PlayFabAdminUserAppleIdInfo, public BaseModel
        {
            UserAppleIdInfo() : PlayFabAdminUserAppleIdInfo{}
            {
            }

            UserAppleIdInfo(const UserAppleIdInfo& src) :
                PlayFabAdminUserAppleIdInfo{ src },
                m_appleSubjectId{ src.m_appleSubjectId }
            {

                appleSubjectId = m_appleSubjectId.empty() ? nullptr : m_appleSubjectId.data();
            }

            ~UserAppleIdInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AppleSubjectId", m_appleSubjectId, appleSubjectId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserAppleIdInfo>(*this);
            }

        private:
            String m_appleSubjectId;
        };

        struct UserCustomIdInfo : public PlayFabAdminUserCustomIdInfo, public BaseModel
        {
            UserCustomIdInfo() : PlayFabAdminUserCustomIdInfo{}
            {
            }

            UserCustomIdInfo(const UserCustomIdInfo& src) :
                PlayFabAdminUserCustomIdInfo{ src },
                m_customId{ src.m_customId }
            {

                customId = m_customId.empty() ? nullptr : m_customId.data();
            }

            ~UserCustomIdInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomId", m_customId, customId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserCustomIdInfo>(*this);
            }

        private:
            String m_customId;
        };

        struct UserFacebookInfo : public PlayFabAdminUserFacebookInfo, public BaseModel
        {
            UserFacebookInfo() : PlayFabAdminUserFacebookInfo{}
            {
            }

            UserFacebookInfo(const UserFacebookInfo& src) :
                PlayFabAdminUserFacebookInfo{ src },
                m_facebookId{ src.m_facebookId },
                m_fullName{ src.m_fullName }
            {

                facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
                fullName = m_fullName.empty() ? nullptr : m_fullName.data();
            }

            ~UserFacebookInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
                JsonUtils:: ObjectGetMember(input, "FullName", m_fullName, fullName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserFacebookInfo>(*this);
            }

        private:
            String m_facebookId;
            String m_fullName;
        };

        struct UserFacebookInstantGamesIdInfo : public PlayFabAdminUserFacebookInstantGamesIdInfo, public BaseModel
        {
            UserFacebookInstantGamesIdInfo() : PlayFabAdminUserFacebookInstantGamesIdInfo{}
            {
            }

            UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src) :
                PlayFabAdminUserFacebookInstantGamesIdInfo{ src },
                m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
            {

                facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
            }

            ~UserFacebookInstantGamesIdInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserFacebookInstantGamesIdInfo>(*this);
            }

        private:
            String m_facebookInstantGamesId;
        };

        struct UserGameCenterInfo : public PlayFabAdminUserGameCenterInfo, public BaseModel
        {
            UserGameCenterInfo() : PlayFabAdminUserGameCenterInfo{}
            {
            }

            UserGameCenterInfo(const UserGameCenterInfo& src) :
                PlayFabAdminUserGameCenterInfo{ src },
                m_gameCenterId{ src.m_gameCenterId }
            {

                gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
            }

            ~UserGameCenterInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserGameCenterInfo>(*this);
            }

        private:
            String m_gameCenterId;
        };

        struct UserGoogleInfo : public PlayFabAdminUserGoogleInfo, public BaseModel
        {
            UserGoogleInfo() : PlayFabAdminUserGoogleInfo{}
            {
            }

            UserGoogleInfo(const UserGoogleInfo& src) :
                PlayFabAdminUserGoogleInfo{ src },
                m_googleEmail{ src.m_googleEmail },
                m_googleGender{ src.m_googleGender },
                m_googleId{ src.m_googleId },
                m_googleLocale{ src.m_googleLocale },
                m_googleName{ src.m_googleName }
            {

                googleEmail = m_googleEmail.empty() ? nullptr : m_googleEmail.data();
                googleGender = m_googleGender.empty() ? nullptr : m_googleGender.data();
                googleId = m_googleId.empty() ? nullptr : m_googleId.data();
                googleLocale = m_googleLocale.empty() ? nullptr : m_googleLocale.data();
                googleName = m_googleName.empty() ? nullptr : m_googleName.data();
            }

            ~UserGoogleInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GoogleEmail", m_googleEmail, googleEmail);
                JsonUtils:: ObjectGetMember(input, "GoogleGender", m_googleGender, googleGender);
                JsonUtils:: ObjectGetMember(input, "GoogleId", m_googleId, googleId);
                JsonUtils:: ObjectGetMember(input, "GoogleLocale", m_googleLocale, googleLocale);
                JsonUtils:: ObjectGetMember(input, "GoogleName", m_googleName, googleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserGoogleInfo>(*this);
            }

        private:
            String m_googleEmail;
            String m_googleGender;
            String m_googleId;
            String m_googleLocale;
            String m_googleName;
        };

        struct UserIosDeviceInfo : public PlayFabAdminUserIosDeviceInfo, public BaseModel
        {
            UserIosDeviceInfo() : PlayFabAdminUserIosDeviceInfo{}
            {
            }

            UserIosDeviceInfo(const UserIosDeviceInfo& src) :
                PlayFabAdminUserIosDeviceInfo{ src },
                m_iosDeviceId{ src.m_iosDeviceId }
            {

                iosDeviceId = m_iosDeviceId.empty() ? nullptr : m_iosDeviceId.data();
            }

            ~UserIosDeviceInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "IosDeviceId", m_iosDeviceId, iosDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserIosDeviceInfo>(*this);
            }

        private:
            String m_iosDeviceId;
        };

        struct UserKongregateInfo : public PlayFabAdminUserKongregateInfo, public BaseModel
        {
            UserKongregateInfo() : PlayFabAdminUserKongregateInfo{}
            {
            }

            UserKongregateInfo(const UserKongregateInfo& src) :
                PlayFabAdminUserKongregateInfo{ src },
                m_kongregateId{ src.m_kongregateId },
                m_kongregateName{ src.m_kongregateName }
            {

                kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
                kongregateName = m_kongregateName.empty() ? nullptr : m_kongregateName.data();
            }

            ~UserKongregateInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
                JsonUtils:: ObjectGetMember(input, "KongregateName", m_kongregateName, kongregateName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserKongregateInfo>(*this);
            }

        private:
            String m_kongregateId;
            String m_kongregateName;
        };

        struct UserNintendoSwitchAccountIdInfo : public PlayFabAdminUserNintendoSwitchAccountIdInfo, public BaseModel
        {
            UserNintendoSwitchAccountIdInfo() : PlayFabAdminUserNintendoSwitchAccountIdInfo{}
            {
            }

            UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src) :
                PlayFabAdminUserNintendoSwitchAccountIdInfo{ src },
                m_nintendoSwitchAccountSubjectId{ src.m_nintendoSwitchAccountSubjectId }
            {

                nintendoSwitchAccountSubjectId = m_nintendoSwitchAccountSubjectId.empty() ? nullptr : m_nintendoSwitchAccountSubjectId.data();
            }

            ~UserNintendoSwitchAccountIdInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchAccountSubjectId", m_nintendoSwitchAccountSubjectId, nintendoSwitchAccountSubjectId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserNintendoSwitchAccountIdInfo>(*this);
            }

        private:
            String m_nintendoSwitchAccountSubjectId;
        };

        struct UserNintendoSwitchDeviceIdInfo : public PlayFabAdminUserNintendoSwitchDeviceIdInfo, public BaseModel
        {
            UserNintendoSwitchDeviceIdInfo() : PlayFabAdminUserNintendoSwitchDeviceIdInfo{}
            {
            }

            UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src) :
                PlayFabAdminUserNintendoSwitchDeviceIdInfo{ src },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
            {

                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
            }

            ~UserNintendoSwitchDeviceIdInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserNintendoSwitchDeviceIdInfo>(*this);
            }

        private:
            String m_nintendoSwitchDeviceId;
        };

        struct UserOpenIdInfo : public PlayFabAdminUserOpenIdInfo, public BaseModel
        {
            UserOpenIdInfo() : PlayFabAdminUserOpenIdInfo{}
            {
            }

            UserOpenIdInfo(const UserOpenIdInfo& src) :
                PlayFabAdminUserOpenIdInfo{ src },
                m_connectionId{ src.m_connectionId },
                m_issuer{ src.m_issuer },
                m_subject{ src.m_subject }
            {

                connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
                issuer = m_issuer.empty() ? nullptr : m_issuer.data();
                subject = m_subject.empty() ? nullptr : m_subject.data();
            }

            ~UserOpenIdInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "Issuer", m_issuer, issuer);
                JsonUtils:: ObjectGetMember(input, "Subject", m_subject, subject);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserOpenIdInfo>(*this);
            }

        private:
            String m_connectionId;
            String m_issuer;
            String m_subject;
        };

        struct UserPrivateAccountInfo : public PlayFabAdminUserPrivateAccountInfo, public BaseModel
        {
            UserPrivateAccountInfo() : PlayFabAdminUserPrivateAccountInfo{}
            {
            }

            UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
                PlayFabAdminUserPrivateAccountInfo{ src },
                m_email{ src.m_email }
            {

                email = m_email.empty() ? nullptr : m_email.data();
            }

            ~UserPrivateAccountInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserPrivateAccountInfo>(*this);
            }

        private:
            String m_email;
        };

        struct UserPsnInfo : public PlayFabAdminUserPsnInfo, public BaseModel
        {
            UserPsnInfo() : PlayFabAdminUserPsnInfo{}
            {
            }

            UserPsnInfo(const UserPsnInfo& src) :
                PlayFabAdminUserPsnInfo{ src },
                m_psnAccountId{ src.m_psnAccountId },
                m_psnOnlineId{ src.m_psnOnlineId }
            {

                psnAccountId = m_psnAccountId.empty() ? nullptr : m_psnAccountId.data();
                psnOnlineId = m_psnOnlineId.empty() ? nullptr : m_psnOnlineId.data();
            }

            ~UserPsnInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PsnAccountId", m_psnAccountId, psnAccountId);
                JsonUtils:: ObjectGetMember(input, "PsnOnlineId", m_psnOnlineId, psnOnlineId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserPsnInfo>(*this);
            }

        private:
            String m_psnAccountId;
            String m_psnOnlineId;
        };

        struct UserSteamInfo : public PlayFabAdminUserSteamInfo, public BaseModel
        {
            UserSteamInfo() : PlayFabAdminUserSteamInfo{}
            {
            }

            UserSteamInfo(const UserSteamInfo& src) :
                PlayFabAdminUserSteamInfo{ src },
                m_steamActivationStatus{ src.m_steamActivationStatus },
                m_steamCountry{ src.m_steamCountry },
                m_steamCurrency{ src.m_steamCurrency },
                m_steamId{ src.m_steamId },
                m_steamName{ src.m_steamName }
            {

                steamActivationStatus = m_steamActivationStatus ? m_steamActivationStatus.operator->() : nullptr;
                steamCountry = m_steamCountry.empty() ? nullptr : m_steamCountry.data();
                steamCurrency = m_steamCurrency ? m_steamCurrency.operator->() : nullptr;
                steamId = m_steamId.empty() ? nullptr : m_steamId.data();
                steamName = m_steamName.empty() ? nullptr : m_steamName.data();
            }

            ~UserSteamInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SteamActivationStatus", m_steamActivationStatus, steamActivationStatus);
                JsonUtils:: ObjectGetMember(input, "SteamCountry", m_steamCountry, steamCountry);
                JsonUtils:: ObjectGetMember(input, "SteamCurrency", m_steamCurrency, steamCurrency);
                JsonUtils:: ObjectGetMember(input, "SteamId", m_steamId, steamId);
                JsonUtils:: ObjectGetMember(input, "SteamName", m_steamName, steamName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserSteamInfo>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminTitleActivationStatus> m_steamActivationStatus;
            String m_steamCountry;
            StdExtra::optional<PlayFabAdminCurrency> m_steamCurrency;
            String m_steamId;
            String m_steamName;
        };

        struct UserTitleInfo : public PlayFabAdminUserTitleInfo, public BaseModel
        {
            UserTitleInfo() : PlayFabAdminUserTitleInfo{}
            {
            }

            UserTitleInfo(const UserTitleInfo& src) :
                PlayFabAdminUserTitleInfo{ src },
                m_avatarUrl{ src.m_avatarUrl },
                m_displayName{ src.m_displayName },
                m_firstLogin{ src.m_firstLogin },
                m_isBanned{ src.m_isBanned },
                m_lastLogin{ src.m_lastLogin },
                m_origination{ src.m_origination },
                m_titlePlayerAccount{ src.m_titlePlayerAccount }
            {

                avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                firstLogin = m_firstLogin ? m_firstLogin.operator->() : nullptr;
                isBanned = m_isBanned ? m_isBanned.operator->() : nullptr;
                lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
                origination = m_origination ? m_origination.operator->() : nullptr;
                titlePlayerAccount = m_titlePlayerAccount ? m_titlePlayerAccount.operator->() : nullptr;
            }

            ~UserTitleInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "FirstLogin", m_firstLogin, firstLogin, true);
                JsonUtils:: ObjectGetMember(input, "isBanned", m_isBanned, isBanned);
                JsonUtils:: ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
                JsonUtils:: ObjectGetMember(input, "Origination", m_origination, origination);
                JsonUtils:: ObjectGetMember(input, "TitlePlayerAccount", m_titlePlayerAccount, titlePlayerAccount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserTitleInfo>(*this);
            }

        private:
            String m_avatarUrl;

            String m_displayName;
            StdExtra::optional<time_t> m_firstLogin;
            StdExtra::optional<bool> m_isBanned;
            StdExtra::optional<time_t> m_lastLogin;
            StdExtra::optional<PlayFabAdminUserOrigination> m_origination;
            StdExtra::optional<EntityKey> m_titlePlayerAccount;
        };

        struct UserTwitchInfo : public PlayFabAdminUserTwitchInfo, public BaseModel
        {
            UserTwitchInfo() : PlayFabAdminUserTwitchInfo{}
            {
            }

            UserTwitchInfo(const UserTwitchInfo& src) :
                PlayFabAdminUserTwitchInfo{ src },
                m_twitchId{ src.m_twitchId },
                m_twitchUserName{ src.m_twitchUserName }
            {

                twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
                twitchUserName = m_twitchUserName.empty() ? nullptr : m_twitchUserName.data();
            }

            ~UserTwitchInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
                JsonUtils:: ObjectGetMember(input, "TwitchUserName", m_twitchUserName, twitchUserName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserTwitchInfo>(*this);
            }

        private:
            String m_twitchId;
            String m_twitchUserName;
        };

        struct UserWindowsHelloInfo : public PlayFabAdminUserWindowsHelloInfo, public BaseModel
        {
            UserWindowsHelloInfo() : PlayFabAdminUserWindowsHelloInfo{}
            {
            }

            UserWindowsHelloInfo(const UserWindowsHelloInfo& src) :
                PlayFabAdminUserWindowsHelloInfo{ src },
                m_windowsHelloDeviceName{ src.m_windowsHelloDeviceName },
                m_windowsHelloPublicKeyHash{ src.m_windowsHelloPublicKeyHash }
            {

                windowsHelloDeviceName = m_windowsHelloDeviceName.empty() ? nullptr : m_windowsHelloDeviceName.data();
                windowsHelloPublicKeyHash = m_windowsHelloPublicKeyHash.empty() ? nullptr : m_windowsHelloPublicKeyHash.data();
            }

            ~UserWindowsHelloInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "WindowsHelloDeviceName", m_windowsHelloDeviceName, windowsHelloDeviceName);
                JsonUtils:: ObjectGetMember(input, "WindowsHelloPublicKeyHash", m_windowsHelloPublicKeyHash, windowsHelloPublicKeyHash);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserWindowsHelloInfo>(*this);
            }

        private:
            String m_windowsHelloDeviceName;
            String m_windowsHelloPublicKeyHash;
        };

        struct UserXboxInfo : public PlayFabAdminUserXboxInfo, public BaseModel
        {
            UserXboxInfo() : PlayFabAdminUserXboxInfo{}
            {
            }

            UserXboxInfo(const UserXboxInfo& src) :
                PlayFabAdminUserXboxInfo{ src },
                m_xboxUserId{ src.m_xboxUserId }
            {

                xboxUserId = m_xboxUserId.empty() ? nullptr : m_xboxUserId.data();
            }

            ~UserXboxInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "XboxUserId", m_xboxUserId, xboxUserId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserXboxInfo>(*this);
            }

        private:
            String m_xboxUserId;
        };

        struct UserAccountInfo : public PlayFabAdminUserAccountInfo, public BaseModel
        {
            UserAccountInfo() : PlayFabAdminUserAccountInfo{}
            {
            }

            UserAccountInfo(const UserAccountInfo& src) :
                PlayFabAdminUserAccountInfo{ src },
                m_androidDeviceInfo{ src.m_androidDeviceInfo },
                m_appleAccountInfo{ src.m_appleAccountInfo },
                m_customIdInfo{ src.m_customIdInfo },
                m_facebookInfo{ src.m_facebookInfo },
                m_facebookInstantGamesIdInfo{ src.m_facebookInstantGamesIdInfo },
                m_gameCenterInfo{ src.m_gameCenterInfo },
                m_googleInfo{ src.m_googleInfo },
                m_iosDeviceInfo{ src.m_iosDeviceInfo },
                m_kongregateInfo{ src.m_kongregateInfo },
                m_nintendoSwitchAccountInfo{ src.m_nintendoSwitchAccountInfo },
                m_nintendoSwitchDeviceIdInfo{ src.m_nintendoSwitchDeviceIdInfo },
                m_openIdInfo{ src.m_openIdInfo },
                m_playFabId{ src.m_playFabId },
                m_privateInfo{ src.m_privateInfo },
                m_psnInfo{ src.m_psnInfo },
                m_steamInfo{ src.m_steamInfo },
                m_titleInfo{ src.m_titleInfo },
                m_twitchInfo{ src.m_twitchInfo },
                m_username{ src.m_username },
                m_windowsHelloInfo{ src.m_windowsHelloInfo },
                m_xboxInfo{ src.m_xboxInfo }
            {

                androidDeviceInfo = m_androidDeviceInfo ? m_androidDeviceInfo.operator->() : nullptr;
                appleAccountInfo = m_appleAccountInfo ? m_appleAccountInfo.operator->() : nullptr;
                customIdInfo = m_customIdInfo ? m_customIdInfo.operator->() : nullptr;
                facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
                facebookInstantGamesIdInfo = m_facebookInstantGamesIdInfo ? m_facebookInstantGamesIdInfo.operator->() : nullptr;
                gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
                googleInfo = m_googleInfo ? m_googleInfo.operator->() : nullptr;
                iosDeviceInfo = m_iosDeviceInfo ? m_iosDeviceInfo.operator->() : nullptr;
                kongregateInfo = m_kongregateInfo ? m_kongregateInfo.operator->() : nullptr;
                nintendoSwitchAccountInfo = m_nintendoSwitchAccountInfo ? m_nintendoSwitchAccountInfo.operator->() : nullptr;
                nintendoSwitchDeviceIdInfo = m_nintendoSwitchDeviceIdInfo ? m_nintendoSwitchDeviceIdInfo.operator->() : nullptr;
                openIdInfo = m_openIdInfo.Empty() ? nullptr : m_openIdInfo.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                privateInfo = m_privateInfo ? m_privateInfo.operator->() : nullptr;
                psnInfo = m_psnInfo ? m_psnInfo.operator->() : nullptr;
                steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
                titleInfo = m_titleInfo ? m_titleInfo.operator->() : nullptr;
                twitchInfo = m_twitchInfo ? m_twitchInfo.operator->() : nullptr;
                username = m_username.empty() ? nullptr : m_username.data();
                windowsHelloInfo = m_windowsHelloInfo ? m_windowsHelloInfo.operator->() : nullptr;
                xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
            }

            ~UserAccountInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AndroidDeviceInfo", m_androidDeviceInfo, androidDeviceInfo);
                JsonUtils:: ObjectGetMember(input, "AppleAccountInfo", m_appleAccountInfo, appleAccountInfo);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "CustomIdInfo", m_customIdInfo, customIdInfo);
                JsonUtils:: ObjectGetMember(input, "FacebookInfo", m_facebookInfo, facebookInfo);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesIdInfo", m_facebookInstantGamesIdInfo, facebookInstantGamesIdInfo);
                JsonUtils:: ObjectGetMember(input, "GameCenterInfo", m_gameCenterInfo, gameCenterInfo);
                JsonUtils:: ObjectGetMember(input, "GoogleInfo", m_googleInfo, googleInfo);
                JsonUtils:: ObjectGetMember(input, "IosDeviceInfo", m_iosDeviceInfo, iosDeviceInfo);
                JsonUtils:: ObjectGetMember(input, "KongregateInfo", m_kongregateInfo, kongregateInfo);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchAccountInfo", m_nintendoSwitchAccountInfo, nintendoSwitchAccountInfo);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceIdInfo", m_nintendoSwitchDeviceIdInfo, nintendoSwitchDeviceIdInfo);
                JsonUtils:: ObjectGetMember(input, "OpenIdInfo", m_openIdInfo, openIdInfo, openIdInfoCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "PrivateInfo", m_privateInfo, privateInfo);
                JsonUtils:: ObjectGetMember(input, "PsnInfo", m_psnInfo, psnInfo);
                JsonUtils:: ObjectGetMember(input, "SteamInfo", m_steamInfo, steamInfo);
                JsonUtils:: ObjectGetMember(input, "TitleInfo", m_titleInfo, titleInfo);
                JsonUtils:: ObjectGetMember(input, "TwitchInfo", m_twitchInfo, twitchInfo);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
                JsonUtils:: ObjectGetMember(input, "WindowsHelloInfo", m_windowsHelloInfo, windowsHelloInfo);
                JsonUtils:: ObjectGetMember(input, "XboxInfo", m_xboxInfo, xboxInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUserAccountInfo>(*this);
            }

        private:
            StdExtra::optional<UserAndroidDeviceInfo> m_androidDeviceInfo;
            StdExtra::optional<UserAppleIdInfo> m_appleAccountInfo;

            StdExtra::optional<UserCustomIdInfo> m_customIdInfo;
            StdExtra::optional<UserFacebookInfo> m_facebookInfo;
            StdExtra::optional<UserFacebookInstantGamesIdInfo> m_facebookInstantGamesIdInfo;
            StdExtra::optional<UserGameCenterInfo> m_gameCenterInfo;
            StdExtra::optional<UserGoogleInfo> m_googleInfo;
            StdExtra::optional<UserIosDeviceInfo> m_iosDeviceInfo;
            StdExtra::optional<UserKongregateInfo> m_kongregateInfo;
            StdExtra::optional<UserNintendoSwitchAccountIdInfo> m_nintendoSwitchAccountInfo;
            StdExtra::optional<UserNintendoSwitchDeviceIdInfo> m_nintendoSwitchDeviceIdInfo;
            PointerArray<PlayFabAdminUserOpenIdInfo, UserOpenIdInfo> m_openIdInfo;
            String m_playFabId;
            StdExtra::optional<UserPrivateAccountInfo> m_privateInfo;
            StdExtra::optional<UserPsnInfo> m_psnInfo;
            StdExtra::optional<UserSteamInfo> m_steamInfo;
            StdExtra::optional<UserTitleInfo> m_titleInfo;
            StdExtra::optional<UserTwitchInfo> m_twitchInfo;
            String m_username;
            StdExtra::optional<UserWindowsHelloInfo> m_windowsHelloInfo;
            StdExtra::optional<UserXboxInfo> m_xboxInfo;
        };

        struct LookupUserAccountInfoResult : public PlayFabAdminLookupUserAccountInfoResult, public BaseResult
        {
            LookupUserAccountInfoResult() : PlayFabAdminLookupUserAccountInfoResult{}
            {
            }

            LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src) :
                PlayFabAdminLookupUserAccountInfoResult{ src },
                m_userInfo{ src.m_userInfo }
            {

                userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
            }

            ~LookupUserAccountInfoResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminLookupUserAccountInfoResult>(*this);
            }

        private:
            StdExtra::optional<UserAccountInfo> m_userInfo;
        };

        struct ModifyMatchmakerGameModesRequest : public PlayFabAdminModifyMatchmakerGameModesRequest, public BaseRequest
        {
            ModifyMatchmakerGameModesRequest() : PlayFabAdminModifyMatchmakerGameModesRequest{}
            {
            }

            ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src) :
                PlayFabAdminModifyMatchmakerGameModesRequest{ src },
                m_buildVersion{ src.m_buildVersion },
                m_gameModes{ src.m_gameModes }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
                gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
            }

            ~ModifyMatchmakerGameModesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "GameModes", m_gameModes, gameModes, gameModesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminModifyMatchmakerGameModesRequest>(*this);
            }

        private:
            String m_buildVersion;
            PointerArray<PlayFabAdminGameModeInfo, GameModeInfo> m_gameModes;
        };

        struct ModifyMatchmakerGameModesResult : public PlayFabAdminModifyMatchmakerGameModesResult, public BaseResult
        {
            ModifyMatchmakerGameModesResult() : PlayFabAdminModifyMatchmakerGameModesResult{}
            {
            }

            ModifyMatchmakerGameModesResult(const ModifyMatchmakerGameModesResult&) = default;

            ~ModifyMatchmakerGameModesResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminModifyMatchmakerGameModesResult>(*this);
            }

        private:
        };

        struct ModifyServerBuildRequest : public PlayFabAdminModifyServerBuildRequest, public BaseRequest
        {
            ModifyServerBuildRequest() : PlayFabAdminModifyServerBuildRequest{}
            {
            }

            ModifyServerBuildRequest(const ModifyServerBuildRequest& src) :
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

            ~ModifyServerBuildRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
                JsonUtils:: ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
                JsonUtils:: ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminModifyServerBuildRequest>(*this);
            }

        private:
            Vector<PlayFabAdminRegion> m_activeRegions;
            String m_buildId;
            String m_commandLineTemplate;
            String m_comment;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_executablePath;


            StdExtra::optional<time_t> m_timestamp;
        };

        struct ModifyServerBuildResult : public PlayFabAdminModifyServerBuildResult, public BaseResult
        {
            ModifyServerBuildResult() : PlayFabAdminModifyServerBuildResult{}
            {
            }

            ModifyServerBuildResult(const ModifyServerBuildResult& src) :
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

            ~ModifyServerBuildResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
                JsonUtils:: ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
                JsonUtils:: ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "Timestamp", timestamp, true);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminModifyServerBuildResult>(*this);
            }

        private:
            Vector<PlayFabAdminRegion> m_activeRegions;
            String m_buildId;
            String m_commandLineTemplate;
            String m_comment;
            String m_executablePath;


            StdExtra::optional<PlayFabAdminGameBuildStatus> m_status;

            String m_titleId;
        };

        struct ModifyUserVirtualCurrencyResult : public PlayFabAdminModifyUserVirtualCurrencyResult, public BaseResult
        {
            ModifyUserVirtualCurrencyResult() : PlayFabAdminModifyUserVirtualCurrencyResult{}
            {
            }

            ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
                PlayFabAdminModifyUserVirtualCurrencyResult{ src },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~ModifyUserVirtualCurrencyResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Balance", balance);
                JsonUtils:: ObjectGetMember(input, "BalanceChange", balanceChange);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminModifyUserVirtualCurrencyResult>(*this);
            }

        private:


            String m_playFabId;
            String m_virtualCurrency;
        };

        struct RandomResultTable : public PlayFabAdminRandomResultTable, public BaseModel
        {
            RandomResultTable() : PlayFabAdminRandomResultTable{}
            {
            }

            RandomResultTable(const RandomResultTable& src) :
                PlayFabAdminRandomResultTable{ src },
                m_nodes{ src.m_nodes },
                m_tableId{ src.m_tableId }
            {

                nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
                tableId = m_tableId.empty() ? nullptr : m_tableId.data();
            }

            ~RandomResultTable() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
                JsonUtils:: ObjectGetMember(input, "TableId", m_tableId, tableId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRandomResultTable>(*this);
            }

        private:
            PointerArray<PlayFabAdminResultTableNode, ResultTableNode> m_nodes;
            String m_tableId;
        };

        struct RefundPurchaseRequest : public PlayFabAdminRefundPurchaseRequest, public BaseRequest
        {
            RefundPurchaseRequest() : PlayFabAdminRefundPurchaseRequest{}
            {
            }

            RefundPurchaseRequest(const RefundPurchaseRequest& src) :
                PlayFabAdminRefundPurchaseRequest{ src },
                m_orderId{ src.m_orderId },
                m_playFabId{ src.m_playFabId },
                m_reason{ src.m_reason }
            {

                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                reason = m_reason.empty() ? nullptr : m_reason.data();
            }

            ~RefundPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Reason", m_reason, reason);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRefundPurchaseRequest>(*this);
            }

        private:
            String m_orderId;
            String m_playFabId;
            String m_reason;
        };

        struct RefundPurchaseResponse : public PlayFabAdminRefundPurchaseResponse, public BaseResult
        {
            RefundPurchaseResponse() : PlayFabAdminRefundPurchaseResponse{}
            {
            }

            RefundPurchaseResponse(const RefundPurchaseResponse& src) :
                PlayFabAdminRefundPurchaseResponse{ src },
                m_purchaseStatus{ src.m_purchaseStatus }
            {

                purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
            }

            ~RefundPurchaseResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PurchaseStatus", m_purchaseStatus, purchaseStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRefundPurchaseResponse>(*this);
            }

        private:
            String m_purchaseStatus;
        };

        struct RemovePlayerTagRequest : public PlayFabAdminRemovePlayerTagRequest, public BaseRequest
        {
            RemovePlayerTagRequest() : PlayFabAdminRemovePlayerTagRequest{}
            {
            }

            RemovePlayerTagRequest(const RemovePlayerTagRequest& src) :
                PlayFabAdminRemovePlayerTagRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_tagName{ src.m_tagName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tagName = m_tagName.empty() ? nullptr : m_tagName.data();
            }

            ~RemovePlayerTagRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "TagName", m_tagName, tagName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRemovePlayerTagRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_tagName;
        };

        struct RemovePlayerTagResult : public PlayFabAdminRemovePlayerTagResult, public BaseResult
        {
            RemovePlayerTagResult() : PlayFabAdminRemovePlayerTagResult{}
            {
            }

            RemovePlayerTagResult(const RemovePlayerTagResult&) = default;

            ~RemovePlayerTagResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRemovePlayerTagResult>(*this);
            }

        private:
        };

        struct RemoveServerBuildRequest : public PlayFabAdminRemoveServerBuildRequest, public BaseRequest
        {
            RemoveServerBuildRequest() : PlayFabAdminRemoveServerBuildRequest{}
            {
            }

            RemoveServerBuildRequest(const RemoveServerBuildRequest& src) :
                PlayFabAdminRemoveServerBuildRequest{ src },
                m_buildId{ src.m_buildId }
            {

                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
            }

            ~RemoveServerBuildRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRemoveServerBuildRequest>(*this);
            }

        private:
            String m_buildId;
        };

        struct RemoveServerBuildResult : public PlayFabAdminRemoveServerBuildResult, public BaseResult
        {
            RemoveServerBuildResult() : PlayFabAdminRemoveServerBuildResult{}
            {
            }

            RemoveServerBuildResult(const RemoveServerBuildResult&) = default;

            ~RemoveServerBuildResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRemoveServerBuildResult>(*this);
            }

        private:
        };

        struct RemoveVirtualCurrencyTypesRequest : public PlayFabAdminRemoveVirtualCurrencyTypesRequest, public BaseRequest
        {
            RemoveVirtualCurrencyTypesRequest() : PlayFabAdminRemoveVirtualCurrencyTypesRequest{}
            {
            }

            RemoveVirtualCurrencyTypesRequest(const RemoveVirtualCurrencyTypesRequest& src) :
                PlayFabAdminRemoveVirtualCurrencyTypesRequest{ src },
                m_virtualCurrencies{ src.m_virtualCurrencies }
            {

                virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
            }

            ~RemoveVirtualCurrencyTypesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRemoveVirtualCurrencyTypesRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
        };

        struct ResetCharacterStatisticsRequest : public PlayFabAdminResetCharacterStatisticsRequest, public BaseRequest
        {
            ResetCharacterStatisticsRequest() : PlayFabAdminResetCharacterStatisticsRequest{}
            {
            }

            ResetCharacterStatisticsRequest(const ResetCharacterStatisticsRequest& src) :
                PlayFabAdminResetCharacterStatisticsRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ResetCharacterStatisticsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResetCharacterStatisticsRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct ResetCharacterStatisticsResult : public PlayFabAdminResetCharacterStatisticsResult, public BaseResult
        {
            ResetCharacterStatisticsResult() : PlayFabAdminResetCharacterStatisticsResult{}
            {
            }

            ResetCharacterStatisticsResult(const ResetCharacterStatisticsResult&) = default;

            ~ResetCharacterStatisticsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResetCharacterStatisticsResult>(*this);
            }

        private:
        };

        struct ResetPasswordRequest : public PlayFabAdminResetPasswordRequest, public BaseRequest
        {
            ResetPasswordRequest() : PlayFabAdminResetPasswordRequest{}
            {
            }

            ResetPasswordRequest(const ResetPasswordRequest& src) :
                PlayFabAdminResetPasswordRequest{ src },
                m_customTags{ src.m_customTags },
                m_password{ src.m_password },
                m_token{ src.m_token }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                password = m_password.empty() ? nullptr : m_password.data();
                token = m_token.empty() ? nullptr : m_token.data();
            }

            ~ResetPasswordRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "Token", m_token, token);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResetPasswordRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_password;
            String m_token;
        };

        struct ResetPasswordResult : public PlayFabAdminResetPasswordResult, public BaseResult
        {
            ResetPasswordResult() : PlayFabAdminResetPasswordResult{}
            {
            }

            ResetPasswordResult(const ResetPasswordResult&) = default;

            ~ResetPasswordResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResetPasswordResult>(*this);
            }

        private:
        };

        struct ResetUserStatisticsRequest : public PlayFabAdminResetUserStatisticsRequest, public BaseRequest
        {
            ResetUserStatisticsRequest() : PlayFabAdminResetUserStatisticsRequest{}
            {
            }

            ResetUserStatisticsRequest(const ResetUserStatisticsRequest& src) :
                PlayFabAdminResetUserStatisticsRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ResetUserStatisticsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResetUserStatisticsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct ResetUserStatisticsResult : public PlayFabAdminResetUserStatisticsResult, public BaseResult
        {
            ResetUserStatisticsResult() : PlayFabAdminResetUserStatisticsResult{}
            {
            }

            ResetUserStatisticsResult(const ResetUserStatisticsResult&) = default;

            ~ResetUserStatisticsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResetUserStatisticsResult>(*this);
            }

        private:
        };

        struct ResolvePurchaseDisputeRequest : public PlayFabAdminResolvePurchaseDisputeRequest, public BaseRequest
        {
            ResolvePurchaseDisputeRequest() : PlayFabAdminResolvePurchaseDisputeRequest{}
            {
            }

            ResolvePurchaseDisputeRequest(const ResolvePurchaseDisputeRequest& src) :
                PlayFabAdminResolvePurchaseDisputeRequest{ src },
                m_orderId{ src.m_orderId },
                m_playFabId{ src.m_playFabId },
                m_reason{ src.m_reason }
            {

                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                reason = m_reason.empty() ? nullptr : m_reason.data();
            }

            ~ResolvePurchaseDisputeRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "Outcome", outcome);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Reason", m_reason, reason);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResolvePurchaseDisputeRequest>(*this);
            }

        private:
            String m_orderId;

            String m_playFabId;
            String m_reason;
        };

        struct ResolvePurchaseDisputeResponse : public PlayFabAdminResolvePurchaseDisputeResponse, public BaseResult
        {
            ResolvePurchaseDisputeResponse() : PlayFabAdminResolvePurchaseDisputeResponse{}
            {
            }

            ResolvePurchaseDisputeResponse(const ResolvePurchaseDisputeResponse& src) :
                PlayFabAdminResolvePurchaseDisputeResponse{ src },
                m_purchaseStatus{ src.m_purchaseStatus }
            {

                purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
            }

            ~ResolvePurchaseDisputeResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PurchaseStatus", m_purchaseStatus, purchaseStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminResolvePurchaseDisputeResponse>(*this);
            }

        private:
            String m_purchaseStatus;
        };

        struct RevokeAllBansForUserRequest : public PlayFabAdminRevokeAllBansForUserRequest, public BaseRequest
        {
            RevokeAllBansForUserRequest() : PlayFabAdminRevokeAllBansForUserRequest{}
            {
            }

            RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src) :
                PlayFabAdminRevokeAllBansForUserRequest{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RevokeAllBansForUserRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeAllBansForUserRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct RevokeAllBansForUserResult : public PlayFabAdminRevokeAllBansForUserResult, public BaseResult
        {
            RevokeAllBansForUserResult() : PlayFabAdminRevokeAllBansForUserResult{}
            {
            }

            RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src) :
                PlayFabAdminRevokeAllBansForUserResult{ src },
                m_banData{ src.m_banData }
            {

                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~RevokeAllBansForUserResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeAllBansForUserResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminBanInfo, BanInfo> m_banData;
        };

        struct RevokeBansRequest : public PlayFabAdminRevokeBansRequest, public BaseRequest
        {
            RevokeBansRequest() : PlayFabAdminRevokeBansRequest{}
            {
            }

            RevokeBansRequest(const RevokeBansRequest& src) :
                PlayFabAdminRevokeBansRequest{ src },
                m_banIds{ src.m_banIds }
            {

                banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
            }

            ~RevokeBansRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanIds", m_banIds, banIds, banIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeBansRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_banIds;
        };

        struct RevokeBansResult : public PlayFabAdminRevokeBansResult, public BaseResult
        {
            RevokeBansResult() : PlayFabAdminRevokeBansResult{}
            {
            }

            RevokeBansResult(const RevokeBansResult& src) :
                PlayFabAdminRevokeBansResult{ src },
                m_banData{ src.m_banData }
            {

                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~RevokeBansResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeBansResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminBanInfo, BanInfo> m_banData;
        };

        struct RevokeInventoryItem : public PlayFabAdminRevokeInventoryItem, public BaseModel
        {
            RevokeInventoryItem() : PlayFabAdminRevokeInventoryItem{}
            {
            }

            RevokeInventoryItem(const RevokeInventoryItem& src) :
                PlayFabAdminRevokeInventoryItem{ src },
                m_characterId{ src.m_characterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RevokeInventoryItem() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItem>(*this);
            }

        private:
            String m_characterId;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct RevokeInventoryItemRequest : public PlayFabAdminRevokeInventoryItemRequest, public BaseRequest
        {
            RevokeInventoryItemRequest() : PlayFabAdminRevokeInventoryItemRequest{}
            {
            }

            RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
                PlayFabAdminRevokeInventoryItemRequest{ src },
                m_characterId{ src.m_characterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RevokeInventoryItemRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItemRequest>(*this);
            }

        private:
            String m_characterId;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct RevokeInventoryItemsRequest : public PlayFabAdminRevokeInventoryItemsRequest, public BaseRequest
        {
            RevokeInventoryItemsRequest() : PlayFabAdminRevokeInventoryItemsRequest{}
            {
            }

            RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src) :
                PlayFabAdminRevokeInventoryItemsRequest{ src },
                m_items{ src.m_items }
            {

                items = m_items.Empty() ? nullptr : m_items.Data();
            }

            ~RevokeInventoryItemsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItemsRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminRevokeInventoryItem, RevokeInventoryItem> m_items;
        };

        struct RevokeItemError : public PlayFabAdminRevokeItemError, public BaseModel
        {
            RevokeItemError() : PlayFabAdminRevokeItemError{}
            {
            }

            RevokeItemError(const RevokeItemError& src) :
                PlayFabAdminRevokeItemError{ src },
                m_error{ src.m_error },
                m_item{ src.m_item }
            {

                error = m_error ? m_error.operator->() : nullptr;
                item = m_item ? m_item.operator->() : nullptr;
            }

            ~RevokeItemError() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "Item", m_item, item);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeItemError>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminGenericErrorCodes> m_error;
            StdExtra::optional<RevokeInventoryItem> m_item;
        };

        struct RevokeInventoryItemsResult : public PlayFabAdminRevokeInventoryItemsResult, public BaseResult
        {
            RevokeInventoryItemsResult() : PlayFabAdminRevokeInventoryItemsResult{}
            {
            }

            RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src) :
                PlayFabAdminRevokeInventoryItemsResult{ src },
                m_errors{ src.m_errors }
            {

                errors = m_errors.Empty() ? nullptr : m_errors.Data();
            }

            ~RevokeInventoryItemsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Errors", m_errors, errors, errorsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItemsResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminRevokeItemError, RevokeItemError> m_errors;
        };

        struct RevokeInventoryResult : public PlayFabAdminRevokeInventoryResult, public BaseResult
        {
            RevokeInventoryResult() : PlayFabAdminRevokeInventoryResult{}
            {
            }

            RevokeInventoryResult(const RevokeInventoryResult&) = default;

            ~RevokeInventoryResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRevokeInventoryResult>(*this);
            }

        private:
        };

        struct RunTaskRequest : public PlayFabAdminRunTaskRequest, public BaseRequest
        {
            RunTaskRequest() : PlayFabAdminRunTaskRequest{}
            {
            }

            RunTaskRequest(const RunTaskRequest& src) :
                PlayFabAdminRunTaskRequest{ src },
                m_customTags{ src.m_customTags },
                m_identifier{ src.m_identifier }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                identifier = m_identifier ? m_identifier.operator->() : nullptr;
            }

            ~RunTaskRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Identifier", m_identifier, identifier);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRunTaskRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<NameIdentifier> m_identifier;
        };

        struct RunTaskResult : public PlayFabAdminRunTaskResult, public BaseResult
        {
            RunTaskResult() : PlayFabAdminRunTaskResult{}
            {
            }

            RunTaskResult(const RunTaskResult& src) :
                PlayFabAdminRunTaskResult{ src },
                m_taskInstanceId{ src.m_taskInstanceId }
            {

                taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
            }

            ~RunTaskResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminRunTaskResult>(*this);
            }

        private:
            String m_taskInstanceId;
        };

        struct SendAccountRecoveryEmailRequest : public PlayFabAdminSendAccountRecoveryEmailRequest, public BaseRequest
        {
            SendAccountRecoveryEmailRequest() : PlayFabAdminSendAccountRecoveryEmailRequest{}
            {
            }

            SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
                PlayFabAdminSendAccountRecoveryEmailRequest{ src },
                m_customTags{ src.m_customTags },
                m_email{ src.m_email },
                m_emailTemplateId{ src.m_emailTemplateId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                email = m_email.empty() ? nullptr : m_email.data();
                emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
            }

            ~SendAccountRecoveryEmailRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSendAccountRecoveryEmailRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_email;
            String m_emailTemplateId;
        };

        struct SendAccountRecoveryEmailResult : public PlayFabAdminSendAccountRecoveryEmailResult, public BaseResult
        {
            SendAccountRecoveryEmailResult() : PlayFabAdminSendAccountRecoveryEmailResult{}
            {
            }

            SendAccountRecoveryEmailResult(const SendAccountRecoveryEmailResult&) = default;

            ~SendAccountRecoveryEmailResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSendAccountRecoveryEmailResult>(*this);
            }

        private:
        };

        struct SetPlayerSecretRequest : public PlayFabAdminSetPlayerSecretRequest, public BaseRequest
        {
            SetPlayerSecretRequest() : PlayFabAdminSetPlayerSecretRequest{}
            {
            }

            SetPlayerSecretRequest(const SetPlayerSecretRequest& src) :
                PlayFabAdminSetPlayerSecretRequest{ src },
                m_playerSecret{ src.m_playerSecret },
                m_playFabId{ src.m_playFabId }
            {

                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~SetPlayerSecretRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetPlayerSecretRequest>(*this);
            }

        private:
            String m_playerSecret;
            String m_playFabId;
        };

        struct SetPlayerSecretResult : public PlayFabAdminSetPlayerSecretResult, public BaseResult
        {
            SetPlayerSecretResult() : PlayFabAdminSetPlayerSecretResult{}
            {
            }

            SetPlayerSecretResult(const SetPlayerSecretResult&) = default;

            ~SetPlayerSecretResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetPlayerSecretResult>(*this);
            }

        private:
        };

        struct SetPublishedRevisionRequest : public PlayFabAdminSetPublishedRevisionRequest, public BaseRequest
        {
            SetPublishedRevisionRequest() : PlayFabAdminSetPublishedRevisionRequest{}
            {
            }

            SetPublishedRevisionRequest(const SetPublishedRevisionRequest& src) :
                PlayFabAdminSetPublishedRevisionRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~SetPublishedRevisionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Revision", revision);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetPublishedRevisionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;


        };

        struct SetPublishedRevisionResult : public PlayFabAdminSetPublishedRevisionResult, public BaseResult
        {
            SetPublishedRevisionResult() : PlayFabAdminSetPublishedRevisionResult{}
            {
            }

            SetPublishedRevisionResult(const SetPublishedRevisionResult&) = default;

            ~SetPublishedRevisionResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetPublishedRevisionResult>(*this);
            }

        private:
        };

        struct SetPublisherDataRequest : public PlayFabAdminSetPublisherDataRequest, public BaseRequest
        {
            SetPublisherDataRequest() : PlayFabAdminSetPublisherDataRequest{}
            {
            }

            SetPublisherDataRequest(const SetPublisherDataRequest& src) :
                PlayFabAdminSetPublisherDataRequest{ src },
                m_key{ src.m_key },
                m_value{ src.m_value }
            {

                key = m_key.empty() ? nullptr : m_key.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~SetPublisherDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetPublisherDataRequest>(*this);
            }

        private:
            String m_key;
            String m_value;
        };

        struct SetPublisherDataResult : public PlayFabAdminSetPublisherDataResult, public BaseResult
        {
            SetPublisherDataResult() : PlayFabAdminSetPublisherDataResult{}
            {
            }

            SetPublisherDataResult(const SetPublisherDataResult&) = default;

            ~SetPublisherDataResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetPublisherDataResult>(*this);
            }

        private:
        };

        struct TitleDataKeyValue : public PlayFabAdminTitleDataKeyValue, public BaseModel
        {
            TitleDataKeyValue() : PlayFabAdminTitleDataKeyValue{}
            {
            }

            TitleDataKeyValue(const TitleDataKeyValue& src) :
                PlayFabAdminTitleDataKeyValue{ src },
                m_key{ src.m_key },
                m_value{ src.m_value }
            {

                key = m_key.empty() ? nullptr : m_key.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~TitleDataKeyValue() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminTitleDataKeyValue>(*this);
            }

        private:
            String m_key;
            String m_value;
        };

        struct SetTitleDataAndOverridesRequest : public PlayFabAdminSetTitleDataAndOverridesRequest, public BaseRequest
        {
            SetTitleDataAndOverridesRequest() : PlayFabAdminSetTitleDataAndOverridesRequest{}
            {
            }

            SetTitleDataAndOverridesRequest(const SetTitleDataAndOverridesRequest& src) :
                PlayFabAdminSetTitleDataAndOverridesRequest{ src },
                m_keyValues{ src.m_keyValues },
                m_overrideLabel{ src.m_overrideLabel }
            {

                keyValues = m_keyValues.Empty() ? nullptr : m_keyValues.Data();
                overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
            }

            ~SetTitleDataAndOverridesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "KeyValues", m_keyValues, keyValues, keyValuesCount);
                JsonUtils:: ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetTitleDataAndOverridesRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminTitleDataKeyValue, TitleDataKeyValue> m_keyValues;
            String m_overrideLabel;
        };

        struct SetTitleDataAndOverridesResult : public PlayFabAdminSetTitleDataAndOverridesResult, public BaseResult
        {
            SetTitleDataAndOverridesResult() : PlayFabAdminSetTitleDataAndOverridesResult{}
            {
            }

            SetTitleDataAndOverridesResult(const SetTitleDataAndOverridesResult&) = default;

            ~SetTitleDataAndOverridesResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetTitleDataAndOverridesResult>(*this);
            }

        private:
        };

        struct SetTitleDataRequest : public PlayFabAdminSetTitleDataRequest, public BaseRequest
        {
            SetTitleDataRequest() : PlayFabAdminSetTitleDataRequest{}
            {
            }

            SetTitleDataRequest(const SetTitleDataRequest& src) :
                PlayFabAdminSetTitleDataRequest{ src },
                m_key{ src.m_key },
                m_value{ src.m_value }
            {

                key = m_key.empty() ? nullptr : m_key.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~SetTitleDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetTitleDataRequest>(*this);
            }

        private:
            String m_key;
            String m_value;
        };

        struct SetTitleDataResult : public PlayFabAdminSetTitleDataResult, public BaseResult
        {
            SetTitleDataResult() : PlayFabAdminSetTitleDataResult{}
            {
            }

            SetTitleDataResult(const SetTitleDataResult&) = default;

            ~SetTitleDataResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetTitleDataResult>(*this);
            }

        private:
        };

        struct SetupPushNotificationRequest : public PlayFabAdminSetupPushNotificationRequest, public BaseRequest
        {
            SetupPushNotificationRequest() : PlayFabAdminSetupPushNotificationRequest{}
            {
            }

            SetupPushNotificationRequest(const SetupPushNotificationRequest& src) :
                PlayFabAdminSetupPushNotificationRequest{ src },
                m_credential{ src.m_credential },
                m_key{ src.m_key },
                m_name{ src.m_name }
            {

                credential = m_credential.empty() ? nullptr : m_credential.data();
                key = m_key.empty() ? nullptr : m_key.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~SetupPushNotificationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Credential", m_credential, credential);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "OverwriteOldARN", overwriteOldARN);
                JsonUtils:: ObjectGetMember(input, "Platform", platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetupPushNotificationRequest>(*this);
            }

        private:
            String m_credential;
            String m_key;
            String m_name;


        };

        struct SetupPushNotificationResult : public PlayFabAdminSetupPushNotificationResult, public BaseResult
        {
            SetupPushNotificationResult() : PlayFabAdminSetupPushNotificationResult{}
            {
            }

            SetupPushNotificationResult(const SetupPushNotificationResult& src) :
                PlayFabAdminSetupPushNotificationResult{ src },
                m_aRN{ src.m_aRN }
            {

                aRN = m_aRN.empty() ? nullptr : m_aRN.data();
            }

            ~SetupPushNotificationResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ARN", m_aRN, aRN);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSetupPushNotificationResult>(*this);
            }

        private:
            String m_aRN;
        };

        struct SubtractUserVirtualCurrencyRequest : public PlayFabAdminSubtractUserVirtualCurrencyRequest, public BaseRequest
        {
            SubtractUserVirtualCurrencyRequest() : PlayFabAdminSubtractUserVirtualCurrencyRequest{}
            {
            }

            SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
                PlayFabAdminSubtractUserVirtualCurrencyRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~SubtractUserVirtualCurrencyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminSubtractUserVirtualCurrencyRequest>(*this);
            }

        private:

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct UpdateBanRequest : public PlayFabAdminUpdateBanRequest, public BaseRequest
        {
            UpdateBanRequest() : PlayFabAdminUpdateBanRequest{}
            {
            }

            UpdateBanRequest(const UpdateBanRequest& src) :
                PlayFabAdminUpdateBanRequest{ src },
                m_active{ src.m_active },
                m_banId{ src.m_banId },
                m_expires{ src.m_expires },
                m_iPAddress{ src.m_iPAddress },
                m_mACAddress{ src.m_mACAddress },
                m_permanent{ src.m_permanent },
                m_reason{ src.m_reason }
            {

                active = m_active ? m_active.operator->() : nullptr;
                banId = m_banId.empty() ? nullptr : m_banId.data();
                expires = m_expires ? m_expires.operator->() : nullptr;
                iPAddress = m_iPAddress.empty() ? nullptr : m_iPAddress.data();
                mACAddress = m_mACAddress.empty() ? nullptr : m_mACAddress.data();
                permanent = m_permanent ? m_permanent.operator->() : nullptr;
                reason = m_reason.empty() ? nullptr : m_reason.data();
            }

            ~UpdateBanRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Active", m_active, active);
                JsonUtils:: ObjectGetMember(input, "BanId", m_banId, banId);
                JsonUtils:: ObjectGetMember(input, "Expires", m_expires, expires, true);
                JsonUtils:: ObjectGetMember(input, "IPAddress", m_iPAddress, iPAddress);
                JsonUtils:: ObjectGetMember(input, "MACAddress", m_mACAddress, mACAddress);
                JsonUtils:: ObjectGetMember(input, "Permanent", m_permanent, permanent);
                JsonUtils:: ObjectGetMember(input, "Reason", m_reason, reason);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateBanRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_active;
            String m_banId;
            StdExtra::optional<time_t> m_expires;
            String m_iPAddress;
            String m_mACAddress;
            StdExtra::optional<bool> m_permanent;
            String m_reason;
        };

        struct UpdateBansRequest : public PlayFabAdminUpdateBansRequest, public BaseRequest
        {
            UpdateBansRequest() : PlayFabAdminUpdateBansRequest{}
            {
            }

            UpdateBansRequest(const UpdateBansRequest& src) :
                PlayFabAdminUpdateBansRequest{ src },
                m_bans{ src.m_bans }
            {

                bans = m_bans.Empty() ? nullptr : m_bans.Data();
            }

            ~UpdateBansRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateBansRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminUpdateBanRequest, UpdateBanRequest> m_bans;
        };

        struct UpdateBansResult : public PlayFabAdminUpdateBansResult, public BaseResult
        {
            UpdateBansResult() : PlayFabAdminUpdateBansResult{}
            {
            }

            UpdateBansResult(const UpdateBansResult& src) :
                PlayFabAdminUpdateBansResult{ src },
                m_banData{ src.m_banData }
            {

                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~UpdateBansResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateBansResult>(*this);
            }

        private:
            PointerArray<PlayFabAdminBanInfo, BanInfo> m_banData;
        };

        struct UpdateCatalogItemsRequest : public PlayFabAdminUpdateCatalogItemsRequest, public BaseRequest
        {
            UpdateCatalogItemsRequest() : PlayFabAdminUpdateCatalogItemsRequest{}
            {
            }

            UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src) :
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

            ~UpdateCatalogItemsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "SetAsDefaultCatalog", m_setAsDefaultCatalog, setAsDefaultCatalog);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateCatalogItemsRequest>(*this);
            }

        private:
            PointerArray<PlayFabAdminCatalogItem, CatalogItem> m_catalog;
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_setAsDefaultCatalog;
        };

        struct UpdateCatalogItemsResult : public PlayFabAdminUpdateCatalogItemsResult, public BaseResult
        {
            UpdateCatalogItemsResult() : PlayFabAdminUpdateCatalogItemsResult{}
            {
            }

            UpdateCatalogItemsResult(const UpdateCatalogItemsResult&) = default;

            ~UpdateCatalogItemsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateCatalogItemsResult>(*this);
            }

        private:
        };

        struct UpdateCloudScriptRequest : public PlayFabAdminUpdateCloudScriptRequest, public BaseRequest
        {
            UpdateCloudScriptRequest() : PlayFabAdminUpdateCloudScriptRequest{}
            {
            }

            UpdateCloudScriptRequest(const UpdateCloudScriptRequest& src) :
                PlayFabAdminUpdateCloudScriptRequest{ src },
                m_customTags{ src.m_customTags },
                m_developerPlayFabId{ src.m_developerPlayFabId },
                m_files{ src.m_files }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                developerPlayFabId = m_developerPlayFabId.empty() ? nullptr : m_developerPlayFabId.data();
                files = m_files.Empty() ? nullptr : m_files.Data();
            }

            ~UpdateCloudScriptRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DeveloperPlayFabId", m_developerPlayFabId, developerPlayFabId);
                JsonUtils:: ObjectGetMember(input, "Files", m_files, files, filesCount);
                JsonUtils:: ObjectGetMember(input, "Publish", publish);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateCloudScriptRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_developerPlayFabId;
            PointerArray<PlayFabAdminCloudScriptFile, CloudScriptFile> m_files;

        };

        struct UpdateCloudScriptResult : public PlayFabAdminUpdateCloudScriptResult, public BaseResult
        {
            UpdateCloudScriptResult() : PlayFabAdminUpdateCloudScriptResult{}
            {
            }

            UpdateCloudScriptResult(const UpdateCloudScriptResult&) = default;

            ~UpdateCloudScriptResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Revision", revision);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateCloudScriptResult>(*this);
            }

        private:


        };

        struct UpdateOpenIdConnectionRequest : public PlayFabAdminUpdateOpenIdConnectionRequest, public BaseRequest
        {
            UpdateOpenIdConnectionRequest() : PlayFabAdminUpdateOpenIdConnectionRequest{}
            {
            }

            UpdateOpenIdConnectionRequest(const UpdateOpenIdConnectionRequest& src) :
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

            ~UpdateOpenIdConnectionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ClientId", m_clientId, clientId);
                JsonUtils:: ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "IssuerDiscoveryUrl", m_issuerDiscoveryUrl, issuerDiscoveryUrl);
                JsonUtils:: ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateOpenIdConnectionRequest>(*this);
            }

        private:
            String m_clientId;
            String m_clientSecret;
            String m_connectionId;
            String m_issuerDiscoveryUrl;
            StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
        };

        struct UpdatePlayerSharedSecretRequest : public PlayFabAdminUpdatePlayerSharedSecretRequest, public BaseRequest
        {
            UpdatePlayerSharedSecretRequest() : PlayFabAdminUpdatePlayerSharedSecretRequest{}
            {
            }

            UpdatePlayerSharedSecretRequest(const UpdatePlayerSharedSecretRequest& src) :
                PlayFabAdminUpdatePlayerSharedSecretRequest{ src },
                m_friendlyName{ src.m_friendlyName },
                m_secretKey{ src.m_secretKey }
            {

                friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
                secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
            }

            ~UpdatePlayerSharedSecretRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Disabled", disabled);
                JsonUtils:: ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
                JsonUtils:: ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdatePlayerSharedSecretRequest>(*this);
            }

        private:

            String m_friendlyName;
            String m_secretKey;
        };

        struct UpdatePlayerSharedSecretResult : public PlayFabAdminUpdatePlayerSharedSecretResult, public BaseResult
        {
            UpdatePlayerSharedSecretResult() : PlayFabAdminUpdatePlayerSharedSecretResult{}
            {
            }

            UpdatePlayerSharedSecretResult(const UpdatePlayerSharedSecretResult&) = default;

            ~UpdatePlayerSharedSecretResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdatePlayerSharedSecretResult>(*this);
            }

        private:
        };

        struct UpdatePlayerStatisticDefinitionRequest : public PlayFabAdminUpdatePlayerStatisticDefinitionRequest, public BaseRequest
        {
            UpdatePlayerStatisticDefinitionRequest() : PlayFabAdminUpdatePlayerStatisticDefinitionRequest{}
            {
            }

            UpdatePlayerStatisticDefinitionRequest(const UpdatePlayerStatisticDefinitionRequest& src) :
                PlayFabAdminUpdatePlayerStatisticDefinitionRequest{ src },
                m_aggregationMethod{ src.m_aggregationMethod },
                m_statisticName{ src.m_statisticName },
                m_versionChangeInterval{ src.m_versionChangeInterval }
            {

                aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
            }

            ~UpdatePlayerStatisticDefinitionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdatePlayerStatisticDefinitionRequest>(*this);
            }

        private:
            StdExtra::optional<PlayFabAdminStatisticAggregationMethod> m_aggregationMethod;
            String m_statisticName;
            StdExtra::optional<PlayFabAdminStatisticResetIntervalOption> m_versionChangeInterval;
        };

        struct UpdatePlayerStatisticDefinitionResult : public PlayFabAdminUpdatePlayerStatisticDefinitionResult, public BaseResult
        {
            UpdatePlayerStatisticDefinitionResult() : PlayFabAdminUpdatePlayerStatisticDefinitionResult{}
            {
            }

            UpdatePlayerStatisticDefinitionResult(const UpdatePlayerStatisticDefinitionResult& src) :
                PlayFabAdminUpdatePlayerStatisticDefinitionResult{ src },
                m_statistic{ src.m_statistic }
            {

                statistic = m_statistic ? m_statistic.operator->() : nullptr;
            }

            ~UpdatePlayerStatisticDefinitionResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Statistic", m_statistic, statistic);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdatePlayerStatisticDefinitionResult>(*this);
            }

        private:
            StdExtra::optional<PlayerStatisticDefinition> m_statistic;
        };

        struct UpdatePolicyRequest : public PlayFabAdminUpdatePolicyRequest, public BaseRequest
        {
            UpdatePolicyRequest() : PlayFabAdminUpdatePolicyRequest{}
            {
            }

            UpdatePolicyRequest(const UpdatePolicyRequest& src) :
                PlayFabAdminUpdatePolicyRequest{ src },
                m_policyName{ src.m_policyName },
                m_statements{ src.m_statements }
            {

                policyName = m_policyName.empty() ? nullptr : m_policyName.data();
                statements = m_statements.Empty() ? nullptr : m_statements.Data();
            }

            ~UpdatePolicyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OverwritePolicy", overwritePolicy);
                JsonUtils:: ObjectGetMember(input, "PolicyName", m_policyName, policyName);
                JsonUtils:: ObjectGetMember(input, "PolicyVersion", policyVersion);
                JsonUtils:: ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdatePolicyRequest>(*this);
            }

        private:

            String m_policyName;

            PointerArray<PlayFabAdminPermissionStatement, PermissionStatement> m_statements;
        };

        struct UpdatePolicyResponse : public PlayFabAdminUpdatePolicyResponse, public BaseResult
        {
            UpdatePolicyResponse() : PlayFabAdminUpdatePolicyResponse{}
            {
            }

            UpdatePolicyResponse(const UpdatePolicyResponse& src) :
                PlayFabAdminUpdatePolicyResponse{ src },
                m_policyName{ src.m_policyName },
                m_statements{ src.m_statements }
            {

                policyName = m_policyName.empty() ? nullptr : m_policyName.data();
                statements = m_statements.Empty() ? nullptr : m_statements.Data();
            }

            ~UpdatePolicyResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PolicyName", m_policyName, policyName);
                JsonUtils:: ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdatePolicyResponse>(*this);
            }

        private:
            String m_policyName;
            PointerArray<PlayFabAdminPermissionStatement, PermissionStatement> m_statements;
        };

        struct UpdateRandomResultTablesRequest : public PlayFabAdminUpdateRandomResultTablesRequest, public BaseRequest
        {
            UpdateRandomResultTablesRequest() : PlayFabAdminUpdateRandomResultTablesRequest{}
            {
            }

            UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src) :
                PlayFabAdminUpdateRandomResultTablesRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_tables{ src.m_tables }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                tables = m_tables.Empty() ? nullptr : m_tables.Data();
            }

            ~UpdateRandomResultTablesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateRandomResultTablesRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabAdminRandomResultTable, RandomResultTable> m_tables;
        };

        struct UpdateRandomResultTablesResult : public PlayFabAdminUpdateRandomResultTablesResult, public BaseResult
        {
            UpdateRandomResultTablesResult() : PlayFabAdminUpdateRandomResultTablesResult{}
            {
            }

            UpdateRandomResultTablesResult(const UpdateRandomResultTablesResult&) = default;

            ~UpdateRandomResultTablesResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateRandomResultTablesResult>(*this);
            }

        private:
        };

        struct UpdateSegmentRequest : public PlayFabAdminUpdateSegmentRequest, public BaseRequest
        {
            UpdateSegmentRequest() : PlayFabAdminUpdateSegmentRequest{}
            {
            }

            UpdateSegmentRequest(const UpdateSegmentRequest& src) :
                PlayFabAdminUpdateSegmentRequest{ src },
                m_segmentModel{ src.m_segmentModel }
            {

                segmentModel = (PlayFabAdminSegmentModel*)&m_segmentModel;
            }

            ~UpdateSegmentRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SegmentModel", m_segmentModel, segmentModel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateSegmentRequest>(*this);
            }

        private:
            SegmentModel m_segmentModel;
        };

        struct UpdateSegmentResponse : public PlayFabAdminUpdateSegmentResponse, public BaseResult
        {
            UpdateSegmentResponse() : PlayFabAdminUpdateSegmentResponse{}
            {
            }

            UpdateSegmentResponse(const UpdateSegmentResponse& src) :
                PlayFabAdminUpdateSegmentResponse{ src },
                m_errorMessage{ src.m_errorMessage },
                m_segmentId{ src.m_segmentId }
            {

                errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
                segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
            }

            ~UpdateSegmentResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateSegmentResponse>(*this);
            }

        private:
            String m_errorMessage;
            String m_segmentId;
        };

        struct UpdateStoreItemsRequest : public PlayFabAdminUpdateStoreItemsRequest, public BaseRequest
        {
            UpdateStoreItemsRequest() : PlayFabAdminUpdateStoreItemsRequest{}
            {
            }

            UpdateStoreItemsRequest(const UpdateStoreItemsRequest& src) :
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

            ~UpdateStoreItemsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
                JsonUtils:: ObjectGetMember(input, "Store", m_store, store, storeCount);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateStoreItemsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<StoreMarketingModel> m_marketingData;
            PointerArray<PlayFabAdminStoreItem, StoreItem> m_store;
            String m_storeId;
        };

        struct UpdateStoreItemsResult : public PlayFabAdminUpdateStoreItemsResult, public BaseResult
        {
            UpdateStoreItemsResult() : PlayFabAdminUpdateStoreItemsResult{}
            {
            }

            UpdateStoreItemsResult(const UpdateStoreItemsResult&) = default;

            ~UpdateStoreItemsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateStoreItemsResult>(*this);
            }

        private:
        };

        struct UpdateTaskRequest : public PlayFabAdminUpdateTaskRequest, public BaseRequest
        {
            UpdateTaskRequest() : PlayFabAdminUpdateTaskRequest{}
            {
            }

            UpdateTaskRequest(const UpdateTaskRequest& src) :
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

            ~UpdateTaskRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "Identifier", m_identifier, identifier);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Parameter", m_parameter, parameter);
                JsonUtils:: ObjectGetMember(input, "Schedule", m_schedule, schedule);
                JsonUtils:: ObjectGetMember(input, "Type", type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateTaskRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;
            StdExtra::optional<NameIdentifier> m_identifier;

            String m_name;
            JsonObject m_parameter;
            String m_schedule;

        };

        struct UpdateUserDataRequest : public PlayFabAdminUpdateUserDataRequest, public BaseRequest
        {
            UpdateUserDataRequest() : PlayFabAdminUpdateUserDataRequest{}
            {
            }

            UpdateUserDataRequest(const UpdateUserDataRequest& src) :
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

            ~UpdateUserDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateUserDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabAdminUserDataPermission> m_permission;
            String m_playFabId;
        };

        struct UpdateUserDataResult : public PlayFabAdminUpdateUserDataResult, public BaseResult
        {
            UpdateUserDataResult() : PlayFabAdminUpdateUserDataResult{}
            {
            }

            UpdateUserDataResult(const UpdateUserDataResult&) = default;

            ~UpdateUserDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateUserDataResult>(*this);
            }

        private:

        };

        struct UpdateUserInternalDataRequest : public PlayFabAdminUpdateUserInternalDataRequest, public BaseRequest
        {
            UpdateUserInternalDataRequest() : PlayFabAdminUpdateUserInternalDataRequest{}
            {
            }

            UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src) :
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

            ~UpdateUserInternalDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateUserInternalDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            String m_playFabId;
        };

        struct UpdateUserTitleDisplayNameRequest : public PlayFabAdminUpdateUserTitleDisplayNameRequest, public BaseRequest
        {
            UpdateUserTitleDisplayNameRequest() : PlayFabAdminUpdateUserTitleDisplayNameRequest{}
            {
            }

            UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
                PlayFabAdminUpdateUserTitleDisplayNameRequest{ src },
                m_customTags{ src.m_customTags },
                m_displayName{ src.m_displayName },
                m_playFabId{ src.m_playFabId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UpdateUserTitleDisplayNameRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateUserTitleDisplayNameRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_displayName;
            String m_playFabId;
        };

        struct UpdateUserTitleDisplayNameResult : public PlayFabAdminUpdateUserTitleDisplayNameResult, public BaseResult
        {
            UpdateUserTitleDisplayNameResult() : PlayFabAdminUpdateUserTitleDisplayNameResult{}
            {
            }

            UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
                PlayFabAdminUpdateUserTitleDisplayNameResult{ src },
                m_displayName{ src.m_displayName }
            {

                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
            }

            ~UpdateUserTitleDisplayNameResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAdminUpdateUserTitleDisplayNameResult>(*this);
            }

        private:
            String m_displayName;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabAdminAuthTokenType>
    {
        static constexpr PlayFabAdminAuthTokenType maxValue = PlayFabAdminAuthTokenType::Email;
    };

    template<> struct EnumRange<PlayFabAdminConditionals>
    {
        static constexpr PlayFabAdminConditionals maxValue = PlayFabAdminConditionals::False;
    };

    template<> struct EnumRange<PlayFabAdminContinentCode>
    {
        static constexpr PlayFabAdminContinentCode maxValue = PlayFabAdminContinentCode::SA;
    };

    template<> struct EnumRange<PlayFabAdminCountryCode>
    {
        static constexpr PlayFabAdminCountryCode maxValue = PlayFabAdminCountryCode::ZW;
    };

    template<> struct EnumRange<PlayFabAdminCurrency>
    {
        static constexpr PlayFabAdminCurrency maxValue = PlayFabAdminCurrency::ZWD;
    };

    template<> struct EnumRange<PlayFabAdminEffectType>
    {
        static constexpr PlayFabAdminEffectType maxValue = PlayFabAdminEffectType::Deny;
    };

    template<> struct EnumRange<PlayFabAdminEmailVerificationStatus>
    {
        static constexpr PlayFabAdminEmailVerificationStatus maxValue = PlayFabAdminEmailVerificationStatus::Confirmed;
    };

    template<> struct EnumRange<PlayFabAdminGameBuildStatus>
    {
        static constexpr PlayFabAdminGameBuildStatus maxValue = PlayFabAdminGameBuildStatus::FailedToProcess;
    };

    template<> struct EnumRange<PlayFabAdminGenericErrorCodes>
    {
        static constexpr PlayFabAdminGenericErrorCodes maxValue = PlayFabAdminGenericErrorCodes::InventoryApiNotImplemented;
    };

    template<> struct EnumRange<PlayFabAdminLoginIdentityProvider>
    {
        static constexpr PlayFabAdminLoginIdentityProvider maxValue = PlayFabAdminLoginIdentityProvider::NintendoSwitchAccount;
    };

    template<> struct EnumRange<PlayFabAdminPushNotificationPlatform>
    {
        static constexpr PlayFabAdminPushNotificationPlatform maxValue = PlayFabAdminPushNotificationPlatform::GoogleCloudMessaging;
    };

    template<> struct EnumRange<PlayFabAdminPushSetupPlatform>
    {
        static constexpr PlayFabAdminPushSetupPlatform maxValue = PlayFabAdminPushSetupPlatform::APNS_SANDBOX;
    };

    template<> struct EnumRange<PlayFabAdminRegion>
    {
        static constexpr PlayFabAdminRegion maxValue = PlayFabAdminRegion::Australia;
    };

    template<> struct EnumRange<PlayFabAdminResolutionOutcome>
    {
        static constexpr PlayFabAdminResolutionOutcome maxValue = PlayFabAdminResolutionOutcome::Manual;
    };

    template<> struct EnumRange<PlayFabAdminResultTableNodeType>
    {
        static constexpr PlayFabAdminResultTableNodeType maxValue = PlayFabAdminResultTableNodeType::TableId;
    };

    template<> struct EnumRange<PlayFabAdminScheduledTaskType>
    {
        static constexpr PlayFabAdminScheduledTaskType maxValue = PlayFabAdminScheduledTaskType::InsightsScheduledScaling;
    };

    template<> struct EnumRange<PlayFabAdminSegmentCountryCode>
    {
        static constexpr PlayFabAdminSegmentCountryCode maxValue = PlayFabAdminSegmentCountryCode::ZW;
    };

    template<> struct EnumRange<PlayFabAdminSegmentCurrency>
    {
        static constexpr PlayFabAdminSegmentCurrency maxValue = PlayFabAdminSegmentCurrency::ZWD;
    };

    template<> struct EnumRange<PlayFabAdminSegmentFilterComparison>
    {
        static constexpr PlayFabAdminSegmentFilterComparison maxValue = PlayFabAdminSegmentFilterComparison::NotContains;
    };

    template<> struct EnumRange<PlayFabAdminSegmentLoginIdentityProvider>
    {
        static constexpr PlayFabAdminSegmentLoginIdentityProvider maxValue = PlayFabAdminSegmentLoginIdentityProvider::NintendoSwitchAccount;
    };

    template<> struct EnumRange<PlayFabAdminSegmentPushNotificationDevicePlatform>
    {
        static constexpr PlayFabAdminSegmentPushNotificationDevicePlatform maxValue = PlayFabAdminSegmentPushNotificationDevicePlatform::GoogleCloudMessaging;
    };

    template<> struct EnumRange<PlayFabAdminSourceType>
    {
        static constexpr PlayFabAdminSourceType maxValue = PlayFabAdminSourceType::API;
    };

    template<> struct EnumRange<PlayFabAdminStatisticAggregationMethod>
    {
        static constexpr PlayFabAdminStatisticAggregationMethod maxValue = PlayFabAdminStatisticAggregationMethod::Sum;
    };

    template<> struct EnumRange<PlayFabAdminStatisticResetIntervalOption>
    {
        static constexpr PlayFabAdminStatisticResetIntervalOption maxValue = PlayFabAdminStatisticResetIntervalOption::Month;
    };

    template<> struct EnumRange<PlayFabAdminStatisticVersionArchivalStatus>
    {
        static constexpr PlayFabAdminStatisticVersionArchivalStatus maxValue = PlayFabAdminStatisticVersionArchivalStatus::Complete;
    };

    template<> struct EnumRange<PlayFabAdminStatisticVersionStatus>
    {
        static constexpr PlayFabAdminStatisticVersionStatus maxValue = PlayFabAdminStatisticVersionStatus::Archived;
    };

    template<> struct EnumRange<PlayFabAdminSubscriptionProviderStatus>
    {
        static constexpr PlayFabAdminSubscriptionProviderStatus maxValue = PlayFabAdminSubscriptionProviderStatus::PaymentPending;
    };

    template<> struct EnumRange<PlayFabAdminTaskInstanceStatus>
    {
        static constexpr PlayFabAdminTaskInstanceStatus maxValue = PlayFabAdminTaskInstanceStatus::Stalled;
    };

    template<> struct EnumRange<PlayFabAdminTitleActivationStatus>
    {
        static constexpr PlayFabAdminTitleActivationStatus maxValue = PlayFabAdminTitleActivationStatus::RevokedSteam;
    };

    template<> struct EnumRange<PlayFabAdminUserDataPermission>
    {
        static constexpr PlayFabAdminUserDataPermission maxValue = PlayFabAdminUserDataPermission::Public;
    };

    template<> struct EnumRange<PlayFabAdminUserOrigination>
    {
        static constexpr PlayFabAdminUserOrigination maxValue = PlayFabAdminUserOrigination::NintendoSwitchAccount;
    };

}

#endif
