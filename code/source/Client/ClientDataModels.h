#pragma once

#if !defined(DISABLE_PLAYFABCLIENT_API)

#include <playfab/PlayFabClientDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAcceptTradeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
            JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
            JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientTradeInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
            JsonUtils::ObjectAddMember(output, "AcceptedPlayerId", input.acceptedPlayerId);
            JsonUtils::ObjectAddMember(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
            JsonUtils::ObjectAddMember(output, "CancelledAt", input.cancelledAt, true);
            JsonUtils::ObjectAddMember(output, "FilledAt", input.filledAt, true);
            JsonUtils::ObjectAddMember(output, "InvalidatedAt", input.invalidatedAt, true);
            JsonUtils::ObjectAddMember(output, "OfferedCatalogItemIds", input.offeredCatalogItemIds, input.offeredCatalogItemIdsCount);
            JsonUtils::ObjectAddMember(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
            JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
            JsonUtils::ObjectAddMember(output, "OpenedAt", input.openedAt, true);
            JsonUtils::ObjectAddMember(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAcceptTradeResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Trade", input.trade);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAdCampaignAttributionModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddFriendRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
            JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddFriendResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Created", input.created);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGenericServiceId& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ServiceName", input.serviceName);
            JsonUtils::ObjectAddMember(output, "UserId", input.userId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddGenericIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddGenericIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddOrUpdateContactEmailRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddOrUpdateContactEmailResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddSharedGroupMembersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddSharedGroupMembersResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddUsernamePasswordRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddUsernamePasswordResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAddUserVirtualCurrencyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAdPlacementDetails& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
            JsonUtils::ObjectAddMember(output, "PlacementName", input.placementName);
            JsonUtils::ObjectAddMember(output, "PlacementViewsRemaining", input.placementViewsRemaining);
            JsonUtils::ObjectAddMember(output, "PlacementViewsResetMinutes", input.placementViewsResetMinutes);
            JsonUtils::ObjectAddMember(output, "RewardAssetUrl", input.rewardAssetUrl);
            JsonUtils::ObjectAddMember(output, "RewardDescription", input.rewardDescription);
            JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
            JsonUtils::ObjectAddMember(output, "RewardName", input.rewardName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAdRewardItemGranted& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogId", input.catalogId);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "InstanceId", input.instanceId);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAdRewardResults& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
            JsonUtils::ObjectAddMember(output, "GrantedVirtualCurrencies", input.grantedVirtualCurrencies, input.grantedVirtualCurrenciesCount);
            JsonUtils::ObjectAddMember(output, "IncrementedStatistics", input.incrementedStatistics, input.incrementedStatisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConfirmationMessage", input.confirmationMessage);
            JsonUtils::ObjectAddMember(output, "DeviceToken", input.deviceToken);
            JsonUtils::ObjectAddMember(output, "SendPushNotificationConfirmation", input.sendPushNotificationConfirmation);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAndroidDevicePushNotificationRegistrationResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAttributeInstallRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Adid", input.adid);
            JsonUtils::ObjectAddMember(output, "Idfa", input.idfa);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientAttributeInstallResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCancelTradeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCancelTradeResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Trade", input.trade);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCartItem& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Description", input.description);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
            JsonUtils::ObjectAddMember(output, "VCAmount", input.vCAmount, input.vCAmountCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCatalogItemBundleInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
            JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
            JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCatalogItemConsumableInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
            JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
            JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCatalogItemContainerInfo& input)
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
        inline JsonValue ToJson<>(const PlayFabClientCatalogItem& input)
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
        inline JsonValue ToJson<>(const PlayFabClientItemInstance& input)
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
        inline JsonValue ToJson<>(const PlayFabClientCharacterInventory& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCharacterLeaderboardEntry& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Position", input.position);
            JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCharacterResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientContainer_Dictionary_String_String& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCollectionFilter& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Excludes", input.excludes, input.excludesCount);
            JsonUtils::ObjectAddMember(output, "Includes", input.includes, input.includesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConfirmPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConfirmPurchaseResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumeItemRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ConsumeCount", input.consumeCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumeItemResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientMicrosoftStorePayload& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CollectionsMsIdKey", input.collectionsMsIdKey);
            JsonUtils::ObjectAddMember(output, "UserId", input.userId);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MarketplaceSpecificData", input.marketplaceSpecificData);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumeMicrosoftStoreEntitlementsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPlayStation5Payload& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Ids", input.ids, input.idsCount);
            JsonUtils::ObjectAddMember(output, "ServiceLabel", input.serviceLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumePS5EntitlementsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MarketplaceSpecificData", input.marketplaceSpecificData);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumePS5EntitlementsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumePSNEntitlementsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ServiceLabel", input.serviceLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumePSNEntitlementsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemsGranted", input.itemsGranted, input.itemsGrantedCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumeXboxEntitlementsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientConsumeXboxEntitlementsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientContactEmailInfoModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCreateSharedGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCreateSharedGroupResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCurrentGamesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "TagFilter", input.tagFilter);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGameInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
            JsonUtils::ObjectAddMember(output, "GameServerData", input.gameServerData);
            JsonUtils::ObjectAddMember(output, "GameServerStateEnum", input.gameServerStateEnum);
            JsonUtils::ObjectAddMember(output, "LastHeartbeat", input.lastHeartbeat, true);
            JsonUtils::ObjectAddMember(output, "LobbyID", input.lobbyID);
            JsonUtils::ObjectAddMember(output, "MaxPlayers", input.maxPlayers);
            JsonUtils::ObjectAddMember(output, "PlayerUserIds", input.playerUserIds, input.playerUserIdsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "RunTime", input.runTime);
            JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
            JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
            JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
            JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientCurrentGamesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameCount", input.gameCount);
            JsonUtils::ObjectAddMember(output, "Games", input.games, input.gamesCount);
            JsonUtils::ObjectAddMember(output, "PlayerCount", input.playerCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientDeviceInfoRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Info", input.info);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientEmptyResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientEmptyResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientEntityKey& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientEntityTokenResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
            JsonUtils::ObjectAddMember(output, "TokenExpiration", input.tokenExpiration, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientExecuteCloudScriptRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
            JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
            JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
            JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientScriptExecutionError& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLogStatement& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data);
            JsonUtils::ObjectAddMember(output, "Level", input.level);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientExecuteCloudScriptResult& input)
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
        inline JsonValue ToJson<>(const PlayFabClientFacebookInstantGamesPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientFacebookPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserFacebookInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
            JsonUtils::ObjectAddMember(output, "FullName", input.fullName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserGameCenterInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkedPlatformAccountModel& input)
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
        inline JsonValue ToJson<>(const PlayFabClientLocationModel& input)
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
        inline JsonValue ToJson<>(const PlayFabClientSubscriptionModel& input)
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
        inline JsonValue ToJson<>(const PlayFabClientMembershipModel& input)
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
        inline JsonValue ToJson<>(const PlayFabClientPushNotificationRegistrationModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStatisticModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientTagModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValueToDateModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
            JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPlayerProfileModel& input)
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
        inline JsonValue ToJson<>(const PlayFabClientUserPsnInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PsnAccountId", input.psnAccountId);
            JsonUtils::ObjectAddMember(output, "PsnOnlineId", input.psnOnlineId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserSteamInfo& input)
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
        inline JsonValue ToJson<>(const PlayFabClientUserXboxInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "XboxUserId", input.xboxUserId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientFriendInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInfo", input.facebookInfo);
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            JsonUtils::ObjectAddMember(output, "GameCenterInfo", input.gameCenterInfo);
            JsonUtils::ObjectAddMember(output, "Profile", input.profile);
            JsonUtils::ObjectAddMember(output, "PSNInfo", input.pSNInfo);
            JsonUtils::ObjectAddMember(output, "SteamInfo", input.steamInfo);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            JsonUtils::ObjectAddMember(output, "XboxInfo", input.xboxInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGameCenterPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGameServerRegionsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRegionInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Available", input.available);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "PingUrl", input.pingUrl);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGameServerRegionsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Regions", input.regions, input.regionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGenericPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetAccountInfoRequest& input)
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
        inline JsonValue ToJson<>(const PlayFabClientUserAndroidDeviceInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserAppleIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AppleSubjectId", input.appleSubjectId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserCustomIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserFacebookInstantGamesIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserGoogleInfo& input)
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
        inline JsonValue ToJson<>(const PlayFabClientUserIosDeviceInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IosDeviceId", input.iosDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserKongregateInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
            JsonUtils::ObjectAddMember(output, "KongregateName", input.kongregateName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserNintendoSwitchAccountIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountSubjectId", input.nintendoSwitchAccountSubjectId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserNintendoSwitchDeviceIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserOpenIdInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
            JsonUtils::ObjectAddMember(output, "Subject", input.subject);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserPrivateAccountInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserTitleInfo& input)
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
        inline JsonValue ToJson<>(const PlayFabClientUserTwitchInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
            JsonUtils::ObjectAddMember(output, "TwitchUserName", input.twitchUserName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserWindowsHelloInfo& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "WindowsHelloDeviceName", input.windowsHelloDeviceName);
            JsonUtils::ObjectAddMember(output, "WindowsHelloPublicKeyHash", input.windowsHelloPublicKeyHash);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserAccountInfo& input)
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
        inline JsonValue ToJson<>(const PlayFabClientGetAccountInfoResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccountInfo", input.accountInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientNameIdentifier& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetAdPlacementsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AppId", input.appId);
            JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetAdPlacementsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdPlacements", input.adPlacements, input.adPlacementsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCatalogItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCatalogItemsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserDataRecord& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterInventoryRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientVirtualCurrencyRechargeTime& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
            JsonUtils::ObjectAddMember(output, "RechargeTime", input.rechargeTime, true);
            JsonUtils::ObjectAddMember(output, "SecondsToRecharge", input.secondsToRecharge);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterInventoryResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterLeaderboardRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterLeaderboardResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterStatisticsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetCharacterStatisticsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetContentDownloadUrlRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "HttpMethod", input.httpMethod);
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "ThruCDN", input.thruCDN);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetContentDownloadUrlResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "URL", input.uRL);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPlayerProfileViewConstraints& input)
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
        inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
            JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPlayerLeaderboardEntry& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Position", input.position);
            JsonUtils::ObjectAddMember(output, "Profile", input.profile);
            JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardAroundPlayerResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
            JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetFriendsListRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
            JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetFriendsListResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Friends", input.friends, input.friendsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundCharacterRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundCharacterResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundPlayerRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundPlayerResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardForUsersCharactersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardForUsersCharactersResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPaymentTokenRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TokenProvider", input.tokenProvider);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPaymentTokenResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "ProviderToken", input.providerToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPhotonAuthenticationTokenRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PhotonApplicationId", input.photonApplicationId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPhotonAuthenticationTokenResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PhotonCustomAuthenticationToken", input.photonCustomAuthenticationToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoRequestParams& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GetCharacterInventories", input.getCharacterInventories);
            JsonUtils::ObjectAddMember(output, "GetCharacterList", input.getCharacterList);
            JsonUtils::ObjectAddMember(output, "GetPlayerProfile", input.getPlayerProfile);
            JsonUtils::ObjectAddMember(output, "GetPlayerStatistics", input.getPlayerStatistics);
            JsonUtils::ObjectAddMember(output, "GetTitleData", input.getTitleData);
            JsonUtils::ObjectAddMember(output, "GetUserAccountInfo", input.getUserAccountInfo);
            JsonUtils::ObjectAddMember(output, "GetUserData", input.getUserData);
            JsonUtils::ObjectAddMember(output, "GetUserInventory", input.getUserInventory);
            JsonUtils::ObjectAddMember(output, "GetUserReadOnlyData", input.getUserReadOnlyData);
            JsonUtils::ObjectAddMember(output, "GetUserVirtualCurrency", input.getUserVirtualCurrency);
            JsonUtils::ObjectAddMember(output, "PlayerStatisticNames", input.playerStatisticNames, input.playerStatisticNamesCount);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "TitleDataKeys", input.titleDataKeys, input.titleDataKeysCount);
            JsonUtils::ObjectAddMember(output, "UserDataKeys", input.userDataKeys, input.userDataKeysCount);
            JsonUtils::ObjectAddMember(output, "UserReadOnlyDataKeys", input.userReadOnlyDataKeys, input.userReadOnlyDataKeysCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStatisticValue& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoResultPayload& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccountInfo", input.accountInfo);
            JsonUtils::ObjectAddMember(output, "CharacterInventories", input.characterInventories, input.characterInventoriesCount);
            JsonUtils::ObjectAddMember(output, "CharacterList", input.characterList, input.characterListCount);
            JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
            JsonUtils::ObjectAddMember(output, "PlayerStatistics", input.playerStatistics, input.playerStatisticsCount);
            JsonUtils::ObjectAddMember(output, "TitleData", input.titleData, input.titleDataCount);
            JsonUtils::ObjectAddMember(output, "UserData", input.userData, input.userDataCount);
            JsonUtils::ObjectAddMember(output, "UserDataVersion", input.userDataVersion);
            JsonUtils::ObjectAddMember(output, "UserInventory", input.userInventory, input.userInventoryCount);
            JsonUtils::ObjectAddMember(output, "UserReadOnlyData", input.userReadOnlyData, input.userReadOnlyDataCount);
            JsonUtils::ObjectAddMember(output, "UserReadOnlyDataVersion", input.userReadOnlyDataVersion);
            JsonUtils::ObjectAddMember(output, "UserVirtualCurrency", input.userVirtualCurrency, input.userVirtualCurrencyCount);
            JsonUtils::ObjectAddMember(output, "UserVirtualCurrencyRechargeTimes", input.userVirtualCurrencyRechargeTimes, input.userVirtualCurrencyRechargeTimesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "InfoResultPayload", input.infoResultPayload);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerProfileRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerProfileResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerSegmentsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetSegmentResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerSegmentsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStatisticNameVersion& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "StatisticNames", input.statisticNames, input.statisticNamesCount);
            JsonUtils::ObjectAddMember(output, "StatisticNameVersions", input.statisticNameVersions, input.statisticNameVersionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticVersionsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPlayerStatisticVersion& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ActivationTime", input.activationTime, true);
            JsonUtils::ObjectAddMember(output, "DeactivationTime", input.deactivationTime, true);
            JsonUtils::ObjectAddMember(output, "ScheduledActivationTime", input.scheduledActivationTime, true);
            JsonUtils::ObjectAddMember(output, "ScheduledDeactivationTime", input.scheduledDeactivationTime, true);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticVersionsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerTagsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerTagsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerTradesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatusFilter", input.statusFilter);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayerTradesResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AcceptedTrades", input.acceptedTrades, input.acceptedTradesCount);
            JsonUtils::ObjectAddMember(output, "OpenedTrades", input.openedTrades, input.openedTradesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookIDs", input.facebookIDs, input.facebookIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIds", input.facebookInstantGamesIds, input.facebookInstantGamesIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameCenterIDs", input.gameCenterIDs, input.gameCenterIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGameCenterIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericIDs", input.genericIDs, input.genericIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGenericIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GoogleIDs", input.googleIDs, input.googleIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGooglePlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGoogleIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "KongregateIDs", input.kongregateIDs, input.kongregateIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientKongregatePlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromKongregateIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIds", input.nintendoSwitchDeviceIds, input.nintendoSwitchDeviceIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientNintendoSwitchPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
            JsonUtils::ObjectAddMember(output, "PSNAccountIDs", input.pSNAccountIDs, input.pSNAccountIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPSNAccountPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "PSNAccountId", input.pSNAccountId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SteamStringIDs", input.steamStringIDs, input.steamStringIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSteamPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "SteamStringId", input.steamStringId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromSteamIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TwitchIds", input.twitchIds, input.twitchIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientTwitchPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromTwitchIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
            JsonUtils::ObjectAddMember(output, "XboxLiveAccountIDs", input.xboxLiveAccountIDs, input.xboxLiveAccountIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientXboxLiveAccountPlayFabIdPair& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "XboxLiveAccountId", input.xboxLiveAccountId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPublisherDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPublisherDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetPurchaseResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "PaymentProvider", input.paymentProvider);
            JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
            JsonUtils::ObjectAddMember(output, "TransactionId", input.transactionId);
            JsonUtils::ObjectAddMember(output, "TransactionStatus", input.transactionStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetSharedGroupDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GetMembers", input.getMembers);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSharedGroupDataRecord& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
            JsonUtils::ObjectAddMember(output, "LastUpdatedBy", input.lastUpdatedBy);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetSharedGroupDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetStoreItemsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStoreMarketingModel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Description", input.description);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStoreItem& input)
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
        inline JsonValue ToJson<>(const PlayFabClientGetStoreItemsResult& input)
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
        inline JsonValue ToJson<>(const PlayFabClientGetTimeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTimeResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Time", input.time, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTitleDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTitleDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTitleNewsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Count", input.count);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientTitleNewsItem& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            JsonUtils::ObjectAddMember(output, "Title", input.title);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTitleNewsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "News", input.news, input.newsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTitlePublicKeyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "TitleSharedSecret", input.titleSharedSecret);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTitlePublicKeyResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RSAPublicKey", input.rSAPublicKey);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTradeStatusRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
            JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetTradeStatusResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Trade", input.trade);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetUserDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetUserDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetUserInventoryRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetUserInventoryResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetWindowsHelloChallengeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PublicKeyHint", input.publicKeyHint);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGetWindowsHelloChallengeResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Challenge", input.challenge);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGrantCharacterToUserRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientGrantCharacterToUserResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "Result", input.result);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientItemPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            JsonUtils::ObjectAddMember(output, "Quantity", input.quantity);
            JsonUtils::ObjectAddMember(output, "UpgradeFromItems", input.upgradeFromItems, input.upgradeFromItemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkAndroidDeviceIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
            JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "OS", input.oS);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkAndroidDeviceIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkAppleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkCustomIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkCustomIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkFacebookAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkFacebookAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkFacebookInstantGamesIdRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkFacebookInstantGamesIdResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkGameCenterAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
            JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
            JsonUtils::ObjectAddMember(output, "Salt", input.salt);
            JsonUtils::ObjectAddMember(output, "Signature", input.signature);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkGameCenterAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkGoogleAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkGoogleAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkIOSDeviceIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
            JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "OS", input.oS);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkIOSDeviceIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkKongregateAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkKongregateAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkNintendoServiceAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkNintendoSwitchDeviceIdResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkOpenIdConnectRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkPSNAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
            JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkPSNAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkSteamAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkSteamAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkTwitchAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkTwitchAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkWindowsHelloAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DeviceName", input.deviceName);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "PublicKey", input.publicKey);
            JsonUtils::ObjectAddMember(output, "UserName", input.userName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkWindowsHelloAccountResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkXboxAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLinkXboxAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientListUsersCharactersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientListUsersCharactersResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Characters", input.characters, input.charactersCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUserSettings& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GatherDeviceInfo", input.gatherDeviceInfo);
            JsonUtils::ObjectAddMember(output, "GatherFocusInfo", input.gatherFocusInfo);
            JsonUtils::ObjectAddMember(output, "NeedsAttribution", input.needsAttribution);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientVariable& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientTreatmentAssignment& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Variables", input.variables, input.variablesCount);
            JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
            JsonUtils::ObjectAddMember(output, "InfoResultPayload", input.infoResultPayload);
            JsonUtils::ObjectAddMember(output, "LastLoginTime", input.lastLoginTime, true);
            JsonUtils::ObjectAddMember(output, "NewlyCreated", input.newlyCreated);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "SessionTicket", input.sessionTicket);
            JsonUtils::ObjectAddMember(output, "SettingsForUser", input.settingsForUser);
            JsonUtils::ObjectAddMember(output, "TreatmentAssignment", input.treatmentAssignment);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithAndroidDeviceIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
            JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "OS", input.oS);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithAppleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithCustomIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithEmailAddressRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithFacebookRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithGameCenterRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
            JsonUtils::ObjectAddMember(output, "Salt", input.salt);
            JsonUtils::ObjectAddMember(output, "Signature", input.signature);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithGoogleAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithIOSDeviceIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
            JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "OS", input.oS);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithKongregateRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithNintendoServiceAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithOpenIdConnectRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithPlayFabRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithPSNRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithSteamRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithTwitchRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithWindowsHelloRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ChallengeSignature", input.challengeSignature);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PublicKeyHint", input.publicKeyHint);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientLoginWithXboxRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientMatchmakeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "StartNewIfNoneFound", input.startNewIfNoneFound);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "TagFilter", input.tagFilter);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientMatchmakeResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Expires", input.expires);
            JsonUtils::ObjectAddMember(output, "LobbyID", input.lobbyID);
            JsonUtils::ObjectAddMember(output, "PollWaitTimeMS", input.pollWaitTimeMS);
            JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
            JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
            JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
            JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientModifyUserVirtualCurrencyResult& input)
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
        inline JsonValue ToJson<>(const PlayFabClientOpenTradeRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
            JsonUtils::ObjectAddMember(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
            JsonUtils::ObjectAddMember(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientOpenTradeResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Trade", input.trade);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPayForPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "ProviderName", input.providerName);
            JsonUtils::ObjectAddMember(output, "ProviderTransactionId", input.providerTransactionId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPayForPurchaseResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreditApplied", input.creditApplied);
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "ProviderData", input.providerData);
            JsonUtils::ObjectAddMember(output, "ProviderToken", input.providerToken);
            JsonUtils::ObjectAddMember(output, "PurchaseConfirmationPageURL", input.purchaseConfirmationPageURL);
            JsonUtils::ObjectAddMember(output, "PurchaseCurrency", input.purchaseCurrency);
            JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            JsonUtils::ObjectAddMember(output, "VCAmount", input.vCAmount, input.vCAmountCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPaymentOption& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            JsonUtils::ObjectAddMember(output, "Price", input.price);
            JsonUtils::ObjectAddMember(output, "ProviderName", input.providerName);
            JsonUtils::ObjectAddMember(output, "StoreCredit", input.storeCredit);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPurchaseItemRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            JsonUtils::ObjectAddMember(output, "Price", input.price);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPurchaseItemResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientPurchaseReceiptFulfillment& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FulfilledItems", input.fulfilledItems, input.fulfilledItemsCount);
            JsonUtils::ObjectAddMember(output, "RecordedPriceSource", input.recordedPriceSource);
            JsonUtils::ObjectAddMember(output, "RecordedTransactionCurrency", input.recordedTransactionCurrency);
            JsonUtils::ObjectAddMember(output, "RecordedTransactionTotal", input.recordedTransactionTotal);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRedeemCouponRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CouponCode", input.couponCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRedeemCouponResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRefreshPSNAuthTokenRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
            JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
            JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRegisterForIOSPushNotificationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConfirmationMessage", input.confirmationMessage);
            JsonUtils::ObjectAddMember(output, "DeviceToken", input.deviceToken);
            JsonUtils::ObjectAddMember(output, "SendPushNotificationConfirmation", input.sendPushNotificationConfirmation);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRegisterForIOSPushNotificationResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRegisterPlayFabUserRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "RequireBothUsernameAndEmail", input.requireBothUsernameAndEmail);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRegisterPlayFabUserResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "SessionTicket", input.sessionTicket);
            JsonUtils::ObjectAddMember(output, "SettingsForUser", input.settingsForUser);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRegisterWithWindowsHelloRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DeviceName", input.deviceName);
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "PublicKey", input.publicKey);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "UserName", input.userName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveContactEmailRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveContactEmailResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveFriendRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveFriendResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveGenericIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveGenericIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveSharedGroupMembersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRemoveSharedGroupMembersResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientReportAdActivityRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Activity", input.activity);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
            JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientReportAdActivityResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientReportPlayerClientRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comment", input.comment);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientReportPlayerClientResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SubmissionsRemaining", input.submissionsRemaining);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRestoreIOSPurchasesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ReceiptData", input.receiptData);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRestoreIOSPurchasesResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRewardAdActivityRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
            JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientRewardAdActivityResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdActivityEventId", input.adActivityEventId);
            JsonUtils::ObjectAddMember(output, "DebugResults", input.debugResults, input.debugResultsCount);
            JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
            JsonUtils::ObjectAddMember(output, "PlacementName", input.placementName);
            JsonUtils::ObjectAddMember(output, "PlacementViewsRemaining", input.placementViewsRemaining);
            JsonUtils::ObjectAddMember(output, "PlacementViewsResetMinutes", input.placementViewsResetMinutes);
            JsonUtils::ObjectAddMember(output, "RewardResults", input.rewardResults);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSendAccountRecoveryEmailRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSendAccountRecoveryEmailResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSetFriendTagsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSetFriendTagsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSetPlayerSecretRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSetPlayerSecretResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStartGameRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomCommandLineData", input.customCommandLineData);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStartGameResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Expires", input.expires);
            JsonUtils::ObjectAddMember(output, "LobbyID", input.lobbyID);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
            JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
            JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
            JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
            JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStartPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStartPurchaseResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Contents", input.contents, input.contentsCount);
            JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
            JsonUtils::ObjectAddMember(output, "PaymentOptions", input.paymentOptions, input.paymentOptionsCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalances", input.virtualCurrencyBalances, input.virtualCurrencyBalancesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientStatisticUpdate& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientSubtractUserVirtualCurrencyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkAndroidDeviceIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkAndroidDeviceIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkAppleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkCustomIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkCustomIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookInstantGamesIdResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkGameCenterAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkGameCenterAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkGoogleAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkGoogleAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkIOSDeviceIDRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkIOSDeviceIDResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkKongregateAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkKongregateAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoServiceAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoSwitchDeviceIdResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkOpenIdConnectRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkPSNAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkPSNAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkSteamAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkSteamAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkTwitchAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkTwitchAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkWindowsHelloAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PublicKeyHint", input.publicKeyHint);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkWindowsHelloAccountResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkXboxAccountRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlinkXboxAccountResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlockContainerInstanceRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ContainerItemInstanceId", input.containerItemInstanceId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "KeyItemInstanceId", input.keyItemInstanceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlockContainerItemRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ContainerItemId", input.containerItemId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUnlockContainerItemResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
            JsonUtils::ObjectAddMember(output, "UnlockedItemInstanceId", input.unlockedItemInstanceId);
            JsonUtils::ObjectAddMember(output, "UnlockedWithItemInstanceId", input.unlockedWithItemInstanceId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateAvatarUrlRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterStatisticsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterStatisticsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdatePlayerStatisticsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdatePlayerStatisticsResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateSharedGroupDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateSharedGroupDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateUserDataRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateUserDataResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateUserTitleDisplayNameRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientUpdateUserTitleDisplayNameResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateAmazonReceiptRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
            JsonUtils::ObjectAddMember(output, "ReceiptId", input.receiptId);
            JsonUtils::ObjectAddMember(output, "UserId", input.userId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateAmazonReceiptResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateGooglePlayPurchaseRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
            JsonUtils::ObjectAddMember(output, "ReceiptJson", input.receiptJson);
            JsonUtils::ObjectAddMember(output, "Signature", input.signature);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateGooglePlayPurchaseResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateIOSReceiptRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
            JsonUtils::ObjectAddMember(output, "ReceiptData", input.receiptData);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateIOSReceiptResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateWindowsReceiptRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
            JsonUtils::ObjectAddMember(output, "Receipt", input.receipt);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientValidateWindowsReceiptResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientWriteClientCharacterEventRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientWriteClientPlayerEventRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientWriteEventResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EventId", input.eventId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabClientWriteTitleEventRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            return output;
        }

    }

    namespace ClientModels
    {
        // Client Classes
        struct AcceptTradeRequest : public PlayFabClientAcceptTradeRequest, public BaseRequest
        {
            AcceptTradeRequest() : PlayFabClientAcceptTradeRequest{}
            {
            }

            AcceptTradeRequest(const AcceptTradeRequest& src) :
                PlayFabClientAcceptTradeRequest{ src },
                m_acceptedInventoryInstanceIds{ src.m_acceptedInventoryInstanceIds },
                m_offeringPlayerId{ src.m_offeringPlayerId },
                m_tradeId{ src.m_tradeId }
            {

                acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
                offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
                tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
            }

            ~AcceptTradeRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AcceptedInventoryInstanceIds", m_acceptedInventoryInstanceIds, acceptedInventoryInstanceIds, acceptedInventoryInstanceIdsCount);
                JsonUtils:: ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
                JsonUtils:: ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAcceptTradeRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_acceptedInventoryInstanceIds;
            String m_offeringPlayerId;
            String m_tradeId;
        };

        struct TradeInfo : public PlayFabClientTradeInfo, public BaseModel
        {
            TradeInfo() : PlayFabClientTradeInfo{}
            {
            }

            TradeInfo(const TradeInfo& src) :
                PlayFabClientTradeInfo{ src },
                m_acceptedInventoryInstanceIds{ src.m_acceptedInventoryInstanceIds },
                m_acceptedPlayerId{ src.m_acceptedPlayerId },
                m_allowedPlayerIds{ src.m_allowedPlayerIds },
                m_cancelledAt{ src.m_cancelledAt },
                m_filledAt{ src.m_filledAt },
                m_invalidatedAt{ src.m_invalidatedAt },
                m_offeredCatalogItemIds{ src.m_offeredCatalogItemIds },
                m_offeredInventoryInstanceIds{ src.m_offeredInventoryInstanceIds },
                m_offeringPlayerId{ src.m_offeringPlayerId },
                m_openedAt{ src.m_openedAt },
                m_requestedCatalogItemIds{ src.m_requestedCatalogItemIds },
                m_status{ src.m_status },
                m_tradeId{ src.m_tradeId }
            {

                acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
                acceptedPlayerId = m_acceptedPlayerId.empty() ? nullptr : m_acceptedPlayerId.data();
                allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
                cancelledAt = m_cancelledAt ? m_cancelledAt.operator->() : nullptr;
                filledAt = m_filledAt ? m_filledAt.operator->() : nullptr;
                invalidatedAt = m_invalidatedAt ? m_invalidatedAt.operator->() : nullptr;
                offeredCatalogItemIds = m_offeredCatalogItemIds.Empty() ? nullptr : m_offeredCatalogItemIds.Data();
                offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
                offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
                openedAt = m_openedAt ? m_openedAt.operator->() : nullptr;
                requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
                status = m_status ? m_status.operator->() : nullptr;
                tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
            }

            ~TradeInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AcceptedInventoryInstanceIds", m_acceptedInventoryInstanceIds, acceptedInventoryInstanceIds, acceptedInventoryInstanceIdsCount);
                JsonUtils:: ObjectGetMember(input, "AcceptedPlayerId", m_acceptedPlayerId, acceptedPlayerId);
                JsonUtils:: ObjectGetMember(input, "AllowedPlayerIds", m_allowedPlayerIds, allowedPlayerIds, allowedPlayerIdsCount);
                JsonUtils:: ObjectGetMember(input, "CancelledAt", m_cancelledAt, cancelledAt, true);
                JsonUtils:: ObjectGetMember(input, "FilledAt", m_filledAt, filledAt, true);
                JsonUtils:: ObjectGetMember(input, "InvalidatedAt", m_invalidatedAt, invalidatedAt, true);
                JsonUtils:: ObjectGetMember(input, "OfferedCatalogItemIds", m_offeredCatalogItemIds, offeredCatalogItemIds, offeredCatalogItemIdsCount);
                JsonUtils:: ObjectGetMember(input, "OfferedInventoryInstanceIds", m_offeredInventoryInstanceIds, offeredInventoryInstanceIds, offeredInventoryInstanceIdsCount);
                JsonUtils:: ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
                JsonUtils:: ObjectGetMember(input, "OpenedAt", m_openedAt, openedAt, true);
                JsonUtils:: ObjectGetMember(input, "RequestedCatalogItemIds", m_requestedCatalogItemIds, requestedCatalogItemIds, requestedCatalogItemIdsCount);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientTradeInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_acceptedInventoryInstanceIds;
            String m_acceptedPlayerId;
            PointerArray<const char, String> m_allowedPlayerIds;
            StdExtra::optional<time_t> m_cancelledAt;
            StdExtra::optional<time_t> m_filledAt;
            StdExtra::optional<time_t> m_invalidatedAt;
            PointerArray<const char, String> m_offeredCatalogItemIds;
            PointerArray<const char, String> m_offeredInventoryInstanceIds;
            String m_offeringPlayerId;
            StdExtra::optional<time_t> m_openedAt;
            PointerArray<const char, String> m_requestedCatalogItemIds;
            StdExtra::optional<PlayFabClientTradeStatus> m_status;
            String m_tradeId;
        };

        struct AcceptTradeResponse : public PlayFabClientAcceptTradeResponse, public BaseResult
        {
            AcceptTradeResponse() : PlayFabClientAcceptTradeResponse{}
            {
            }

            AcceptTradeResponse(const AcceptTradeResponse& src) :
                PlayFabClientAcceptTradeResponse{ src },
                m_trade{ src.m_trade }
            {

                trade = m_trade ? m_trade.operator->() : nullptr;
            }

            ~AcceptTradeResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Trade", m_trade, trade);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAcceptTradeResponse>(*this);
            }

        private:
            StdExtra::optional<TradeInfo> m_trade;
        };

        struct AdCampaignAttributionModel : public PlayFabClientAdCampaignAttributionModel, public BaseModel
        {
            AdCampaignAttributionModel() : PlayFabClientAdCampaignAttributionModel{}
            {
            }

            AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
                PlayFabClientAdCampaignAttributionModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientAdCampaignAttributionModel>(*this);
            }

        private:

            String m_campaignId;
            String m_platform;
        };

        struct AddFriendRequest : public PlayFabClientAddFriendRequest, public BaseRequest
        {
            AddFriendRequest() : PlayFabClientAddFriendRequest{}
            {
            }

            AddFriendRequest(const AddFriendRequest& src) :
                PlayFabClientAddFriendRequest{ src },
                m_friendEmail{ src.m_friendEmail },
                m_friendPlayFabId{ src.m_friendPlayFabId },
                m_friendTitleDisplayName{ src.m_friendTitleDisplayName },
                m_friendUsername{ src.m_friendUsername }
            {

                friendEmail = m_friendEmail.empty() ? nullptr : m_friendEmail.data();
                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
                friendTitleDisplayName = m_friendTitleDisplayName.empty() ? nullptr : m_friendTitleDisplayName.data();
                friendUsername = m_friendUsername.empty() ? nullptr : m_friendUsername.data();
            }

            ~AddFriendRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FriendEmail", m_friendEmail, friendEmail);
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
                JsonUtils:: ObjectGetMember(input, "FriendTitleDisplayName", m_friendTitleDisplayName, friendTitleDisplayName);
                JsonUtils:: ObjectGetMember(input, "FriendUsername", m_friendUsername, friendUsername);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddFriendRequest>(*this);
            }

        private:
            String m_friendEmail;
            String m_friendPlayFabId;
            String m_friendTitleDisplayName;
            String m_friendUsername;
        };

        struct AddFriendResult : public PlayFabClientAddFriendResult, public BaseResult
        {
            AddFriendResult() : PlayFabClientAddFriendResult{}
            {
            }

            AddFriendResult(const AddFriendResult&) = default;

            ~AddFriendResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Created", created);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddFriendResult>(*this);
            }

        private:

        };

        struct GenericServiceId : public PlayFabClientGenericServiceId, public BaseModel
        {
            GenericServiceId() : PlayFabClientGenericServiceId{}
            {
            }

            GenericServiceId(const GenericServiceId& src) :
                PlayFabClientGenericServiceId{ src },
                m_serviceName{ src.m_serviceName },
                m_userId{ src.m_userId }
            {

                serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
                userId = m_userId.empty() ? nullptr : m_userId.data();
            }

            ~GenericServiceId() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ServiceName", m_serviceName, serviceName);
                JsonUtils:: ObjectGetMember(input, "UserId", m_userId, userId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGenericServiceId>(*this);
            }

        private:
            String m_serviceName;
            String m_userId;
        };

        struct AddGenericIDRequest : public PlayFabClientAddGenericIDRequest, public BaseRequest
        {
            AddGenericIDRequest() : PlayFabClientAddGenericIDRequest{}
            {
            }

            AddGenericIDRequest(const AddGenericIDRequest& src) :
                PlayFabClientAddGenericIDRequest{ src },
                m_genericId{ src.m_genericId }
            {

                genericId = (PlayFabClientGenericServiceId*)&m_genericId;
            }

            ~AddGenericIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GenericId", m_genericId, genericId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddGenericIDRequest>(*this);
            }

        private:
            GenericServiceId m_genericId;
        };

        struct AddGenericIDResult : public PlayFabClientAddGenericIDResult, public BaseResult
        {
            AddGenericIDResult() : PlayFabClientAddGenericIDResult{}
            {
            }

            AddGenericIDResult(const AddGenericIDResult&) = default;

            ~AddGenericIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddGenericIDResult>(*this);
            }

        private:
        };

        struct AddOrUpdateContactEmailRequest : public PlayFabClientAddOrUpdateContactEmailRequest, public BaseRequest
        {
            AddOrUpdateContactEmailRequest() : PlayFabClientAddOrUpdateContactEmailRequest{}
            {
            }

            AddOrUpdateContactEmailRequest(const AddOrUpdateContactEmailRequest& src) :
                PlayFabClientAddOrUpdateContactEmailRequest{ src },
                m_customTags{ src.m_customTags },
                m_emailAddress{ src.m_emailAddress }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
            }

            ~AddOrUpdateContactEmailRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddOrUpdateContactEmailRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_emailAddress;
        };

        struct AddOrUpdateContactEmailResult : public PlayFabClientAddOrUpdateContactEmailResult, public BaseResult
        {
            AddOrUpdateContactEmailResult() : PlayFabClientAddOrUpdateContactEmailResult{}
            {
            }

            AddOrUpdateContactEmailResult(const AddOrUpdateContactEmailResult&) = default;

            ~AddOrUpdateContactEmailResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddOrUpdateContactEmailResult>(*this);
            }

        private:
        };

        struct AddSharedGroupMembersRequest : public PlayFabClientAddSharedGroupMembersRequest, public BaseRequest
        {
            AddSharedGroupMembersRequest() : PlayFabClientAddSharedGroupMembersRequest{}
            {
            }

            AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
                PlayFabClientAddSharedGroupMembersRequest{ src },
                m_playFabIds{ src.m_playFabIds },
                m_sharedGroupId{ src.m_sharedGroupId }
            {

                playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~AddSharedGroupMembersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddSharedGroupMembersRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_playFabIds;
            String m_sharedGroupId;
        };

        struct AddSharedGroupMembersResult : public PlayFabClientAddSharedGroupMembersResult, public BaseResult
        {
            AddSharedGroupMembersResult() : PlayFabClientAddSharedGroupMembersResult{}
            {
            }

            AddSharedGroupMembersResult(const AddSharedGroupMembersResult&) = default;

            ~AddSharedGroupMembersResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddSharedGroupMembersResult>(*this);
            }

        private:
        };

        struct AddUsernamePasswordRequest : public PlayFabClientAddUsernamePasswordRequest, public BaseRequest
        {
            AddUsernamePasswordRequest() : PlayFabClientAddUsernamePasswordRequest{}
            {
            }

            AddUsernamePasswordRequest(const AddUsernamePasswordRequest& src) :
                PlayFabClientAddUsernamePasswordRequest{ src },
                m_customTags{ src.m_customTags },
                m_email{ src.m_email },
                m_password{ src.m_password },
                m_username{ src.m_username }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                email = m_email.empty() ? nullptr : m_email.data();
                password = m_password.empty() ? nullptr : m_password.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~AddUsernamePasswordRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddUsernamePasswordRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_email;
            String m_password;
            String m_username;
        };

        struct AddUsernamePasswordResult : public PlayFabClientAddUsernamePasswordResult, public BaseResult
        {
            AddUsernamePasswordResult() : PlayFabClientAddUsernamePasswordResult{}
            {
            }

            AddUsernamePasswordResult(const AddUsernamePasswordResult& src) :
                PlayFabClientAddUsernamePasswordResult{ src },
                m_username{ src.m_username }
            {

                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~AddUsernamePasswordResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddUsernamePasswordResult>(*this);
            }

        private:
            String m_username;
        };

        struct AddUserVirtualCurrencyRequest : public PlayFabClientAddUserVirtualCurrencyRequest, public BaseRequest
        {
            AddUserVirtualCurrencyRequest() : PlayFabClientAddUserVirtualCurrencyRequest{}
            {
            }

            AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
                PlayFabClientAddUserVirtualCurrencyRequest{ src },
                m_customTags{ src.m_customTags },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~AddUserVirtualCurrencyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAddUserVirtualCurrencyRequest>(*this);
            }

        private:

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_virtualCurrency;
        };

        struct AdPlacementDetails : public PlayFabClientAdPlacementDetails, public BaseModel
        {
            AdPlacementDetails() : PlayFabClientAdPlacementDetails{}
            {
            }

            AdPlacementDetails(const AdPlacementDetails& src) :
                PlayFabClientAdPlacementDetails{ src },
                m_placementId{ src.m_placementId },
                m_placementName{ src.m_placementName },
                m_placementViewsRemaining{ src.m_placementViewsRemaining },
                m_placementViewsResetMinutes{ src.m_placementViewsResetMinutes },
                m_rewardAssetUrl{ src.m_rewardAssetUrl },
                m_rewardDescription{ src.m_rewardDescription },
                m_rewardId{ src.m_rewardId },
                m_rewardName{ src.m_rewardName }
            {

                placementId = m_placementId.empty() ? nullptr : m_placementId.data();
                placementName = m_placementName.empty() ? nullptr : m_placementName.data();
                placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
                placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
                rewardAssetUrl = m_rewardAssetUrl.empty() ? nullptr : m_rewardAssetUrl.data();
                rewardDescription = m_rewardDescription.empty() ? nullptr : m_rewardDescription.data();
                rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
                rewardName = m_rewardName.empty() ? nullptr : m_rewardName.data();
            }

            ~AdPlacementDetails() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlacementId", m_placementId, placementId);
                JsonUtils:: ObjectGetMember(input, "PlacementName", m_placementName, placementName);
                JsonUtils:: ObjectGetMember(input, "PlacementViewsRemaining", m_placementViewsRemaining, placementViewsRemaining);
                JsonUtils:: ObjectGetMember(input, "PlacementViewsResetMinutes", m_placementViewsResetMinutes, placementViewsResetMinutes);
                JsonUtils:: ObjectGetMember(input, "RewardAssetUrl", m_rewardAssetUrl, rewardAssetUrl);
                JsonUtils:: ObjectGetMember(input, "RewardDescription", m_rewardDescription, rewardDescription);
                JsonUtils:: ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
                JsonUtils:: ObjectGetMember(input, "RewardName", m_rewardName, rewardName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAdPlacementDetails>(*this);
            }

        private:
            String m_placementId;
            String m_placementName;
            StdExtra::optional<int32_t> m_placementViewsRemaining;
            StdExtra::optional<double> m_placementViewsResetMinutes;
            String m_rewardAssetUrl;
            String m_rewardDescription;
            String m_rewardId;
            String m_rewardName;
        };

        struct AdRewardItemGranted : public PlayFabClientAdRewardItemGranted, public BaseModel
        {
            AdRewardItemGranted() : PlayFabClientAdRewardItemGranted{}
            {
            }

            AdRewardItemGranted(const AdRewardItemGranted& src) :
                PlayFabClientAdRewardItemGranted{ src },
                m_catalogId{ src.m_catalogId },
                m_displayName{ src.m_displayName },
                m_instanceId{ src.m_instanceId },
                m_itemId{ src.m_itemId }
            {

                catalogId = m_catalogId.empty() ? nullptr : m_catalogId.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                instanceId = m_instanceId.empty() ? nullptr : m_instanceId.data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
            }

            ~AdRewardItemGranted() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogId", m_catalogId, catalogId);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "InstanceId", m_instanceId, instanceId);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAdRewardItemGranted>(*this);
            }

        private:
            String m_catalogId;
            String m_displayName;
            String m_instanceId;
            String m_itemId;
        };

        struct AdRewardResults : public PlayFabClientAdRewardResults, public BaseModel
        {
            AdRewardResults() : PlayFabClientAdRewardResults{}
            {
            }

            AdRewardResults(const AdRewardResults& src) :
                PlayFabClientAdRewardResults{ src },
                m_grantedItems{ src.m_grantedItems },
                m_grantedVirtualCurrencies{ src.m_grantedVirtualCurrencies },
                m_incrementedStatistics{ src.m_incrementedStatistics }
            {

                grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
                grantedVirtualCurrencies = m_grantedVirtualCurrencies.Empty() ? nullptr : m_grantedVirtualCurrencies.Data();
                incrementedStatistics = m_incrementedStatistics.Empty() ? nullptr : m_incrementedStatistics.Data();
            }

            ~AdRewardResults() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
                JsonUtils:: ObjectGetMember(input, "GrantedVirtualCurrencies", m_grantedVirtualCurrencies, grantedVirtualCurrencies, grantedVirtualCurrenciesCount);
                JsonUtils:: ObjectGetMember(input, "IncrementedStatistics", m_incrementedStatistics, incrementedStatistics, incrementedStatisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAdRewardResults>(*this);
            }

        private:
            PointerArray<PlayFabClientAdRewardItemGranted, AdRewardItemGranted> m_grantedItems;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_grantedVirtualCurrencies;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_incrementedStatistics;
        };

        struct AndroidDevicePushNotificationRegistrationRequest : public PlayFabClientAndroidDevicePushNotificationRegistrationRequest, public BaseRequest
        {
            AndroidDevicePushNotificationRegistrationRequest() : PlayFabClientAndroidDevicePushNotificationRegistrationRequest{}
            {
            }

            AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src) :
                PlayFabClientAndroidDevicePushNotificationRegistrationRequest{ src },
                m_confirmationMessage{ src.m_confirmationMessage },
                m_deviceToken{ src.m_deviceToken },
                m_sendPushNotificationConfirmation{ src.m_sendPushNotificationConfirmation }
            {

                confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
                deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
                sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
            }

            ~AndroidDevicePushNotificationRegistrationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConfirmationMessage", m_confirmationMessage, confirmationMessage);
                JsonUtils:: ObjectGetMember(input, "DeviceToken", m_deviceToken, deviceToken);
                JsonUtils:: ObjectGetMember(input, "SendPushNotificationConfirmation", m_sendPushNotificationConfirmation, sendPushNotificationConfirmation);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAndroidDevicePushNotificationRegistrationRequest>(*this);
            }

        private:
            String m_confirmationMessage;
            String m_deviceToken;
            StdExtra::optional<bool> m_sendPushNotificationConfirmation;
        };

        struct AndroidDevicePushNotificationRegistrationResult : public PlayFabClientAndroidDevicePushNotificationRegistrationResult, public BaseResult
        {
            AndroidDevicePushNotificationRegistrationResult() : PlayFabClientAndroidDevicePushNotificationRegistrationResult{}
            {
            }

            AndroidDevicePushNotificationRegistrationResult(const AndroidDevicePushNotificationRegistrationResult&) = default;

            ~AndroidDevicePushNotificationRegistrationResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAndroidDevicePushNotificationRegistrationResult>(*this);
            }

        private:
        };

        struct AttributeInstallRequest : public PlayFabClientAttributeInstallRequest, public BaseRequest
        {
            AttributeInstallRequest() : PlayFabClientAttributeInstallRequest{}
            {
            }

            AttributeInstallRequest(const AttributeInstallRequest& src) :
                PlayFabClientAttributeInstallRequest{ src },
                m_adid{ src.m_adid },
                m_idfa{ src.m_idfa }
            {

                adid = m_adid.empty() ? nullptr : m_adid.data();
                idfa = m_idfa.empty() ? nullptr : m_idfa.data();
            }

            ~AttributeInstallRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Adid", m_adid, adid);
                JsonUtils:: ObjectGetMember(input, "Idfa", m_idfa, idfa);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAttributeInstallRequest>(*this);
            }

        private:
            String m_adid;
            String m_idfa;
        };

        struct AttributeInstallResult : public PlayFabClientAttributeInstallResult, public BaseResult
        {
            AttributeInstallResult() : PlayFabClientAttributeInstallResult{}
            {
            }

            AttributeInstallResult(const AttributeInstallResult&) = default;

            ~AttributeInstallResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientAttributeInstallResult>(*this);
            }

        private:
        };

        struct CancelTradeRequest : public PlayFabClientCancelTradeRequest, public BaseRequest
        {
            CancelTradeRequest() : PlayFabClientCancelTradeRequest{}
            {
            }

            CancelTradeRequest(const CancelTradeRequest& src) :
                PlayFabClientCancelTradeRequest{ src },
                m_tradeId{ src.m_tradeId }
            {

                tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
            }

            ~CancelTradeRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCancelTradeRequest>(*this);
            }

        private:
            String m_tradeId;
        };

        struct CancelTradeResponse : public PlayFabClientCancelTradeResponse, public BaseResult
        {
            CancelTradeResponse() : PlayFabClientCancelTradeResponse{}
            {
            }

            CancelTradeResponse(const CancelTradeResponse& src) :
                PlayFabClientCancelTradeResponse{ src },
                m_trade{ src.m_trade }
            {

                trade = m_trade ? m_trade.operator->() : nullptr;
            }

            ~CancelTradeResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Trade", m_trade, trade);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCancelTradeResponse>(*this);
            }

        private:
            StdExtra::optional<TradeInfo> m_trade;
        };

        struct CartItem : public PlayFabClientCartItem, public BaseModel
        {
            CartItem() : PlayFabClientCartItem{}
            {
            }

            CartItem(const CartItem& src) :
                PlayFabClientCartItem{ src },
                m_description{ src.m_description },
                m_displayName{ src.m_displayName },
                m_itemClass{ src.m_itemClass },
                m_itemId{ src.m_itemId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_realCurrencyPrices{ src.m_realCurrencyPrices },
                m_vCAmount{ src.m_vCAmount },
                m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
            {

                description = m_description.empty() ? nullptr : m_description.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
                vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
                virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
            }

            ~CartItem() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
                JsonUtils:: ObjectGetMember(input, "VCAmount", m_vCAmount, vCAmount, vCAmountCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCartItem>(*this);
            }

        private:
            String m_description;
            String m_displayName;
            String m_itemClass;
            String m_itemId;
            String m_itemInstanceId;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_vCAmount;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
        };

        struct CatalogItemBundleInfo : public PlayFabClientCatalogItemBundleInfo, public BaseModel
        {
            CatalogItemBundleInfo() : PlayFabClientCatalogItemBundleInfo{}
            {
            }

            CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
                PlayFabClientCatalogItemBundleInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientCatalogItemBundleInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_bundledItems;
            PointerArray<const char, String> m_bundledResultTables;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
        };

        struct CatalogItemConsumableInfo : public PlayFabClientCatalogItemConsumableInfo, public BaseModel
        {
            CatalogItemConsumableInfo() : PlayFabClientCatalogItemConsumableInfo{}
            {
            }

            CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
                PlayFabClientCatalogItemConsumableInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientCatalogItemConsumableInfo>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_usageCount;
            StdExtra::optional<uint32_t> m_usagePeriod;
            String m_usagePeriodGroup;
        };

        struct CatalogItemContainerInfo : public PlayFabClientCatalogItemContainerInfo, public BaseModel
        {
            CatalogItemContainerInfo() : PlayFabClientCatalogItemContainerInfo{}
            {
            }

            CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
                PlayFabClientCatalogItemContainerInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientCatalogItemContainerInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_itemContents;
            String m_keyItemId;
            PointerArray<const char, String> m_resultTableContents;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyContents;
        };

        struct CatalogItem : public PlayFabClientCatalogItem, public BaseModel
        {
            CatalogItem() : PlayFabClientCatalogItem{}
            {
            }

            CatalogItem(const CatalogItem& src) :
                PlayFabClientCatalogItem{ src },
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
                return JsonUtils::ToJson<PlayFabClientCatalogItem>(*this);
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

        struct ItemInstance : public PlayFabClientItemInstance, public BaseModel
        {
            ItemInstance() : PlayFabClientItemInstance{}
            {
            }

            ItemInstance(const ItemInstance& src) :
                PlayFabClientItemInstance{ src },
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
                return JsonUtils::ToJson<PlayFabClientItemInstance>(*this);
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

        struct CharacterInventory : public PlayFabClientCharacterInventory, public BaseModel
        {
            CharacterInventory() : PlayFabClientCharacterInventory{}
            {
            }

            CharacterInventory(const CharacterInventory& src) :
                PlayFabClientCharacterInventory{ src },
                m_characterId{ src.m_characterId },
                m_inventory{ src.m_inventory }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
            }

            ~CharacterInventory() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCharacterInventory>(*this);
            }

        private:
            String m_characterId;
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_inventory;
        };

        struct CharacterLeaderboardEntry : public PlayFabClientCharacterLeaderboardEntry, public BaseModel
        {
            CharacterLeaderboardEntry() : PlayFabClientCharacterLeaderboardEntry{}
            {
            }

            CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
                PlayFabClientCharacterLeaderboardEntry{ src },
                m_characterId{ src.m_characterId },
                m_characterName{ src.m_characterName },
                m_characterType{ src.m_characterType },
                m_displayName{ src.m_displayName },
                m_playFabId{ src.m_playFabId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterName = m_characterName.empty() ? nullptr : m_characterName.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~CharacterLeaderboardEntry() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterName", m_characterName, characterName);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Position", position);
                JsonUtils:: ObjectGetMember(input, "StatValue", statValue);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCharacterLeaderboardEntry>(*this);
            }

        private:
            String m_characterId;
            String m_characterName;
            String m_characterType;
            String m_displayName;
            String m_playFabId;


        };

        struct CharacterResult : public PlayFabClientCharacterResult, public BaseResult
        {
            CharacterResult() : PlayFabClientCharacterResult{}
            {
            }

            CharacterResult(const CharacterResult& src) :
                PlayFabClientCharacterResult{ src },
                m_characterId{ src.m_characterId },
                m_characterName{ src.m_characterName },
                m_characterType{ src.m_characterType }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterName = m_characterName.empty() ? nullptr : m_characterName.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
            }

            ~CharacterResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterName", m_characterName, characterName);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCharacterResult>(*this);
            }

        private:
            String m_characterId;
            String m_characterName;
            String m_characterType;
        };

        struct Container_Dictionary_String_String : public PlayFabClientContainer_Dictionary_String_String, public BaseModel
        {
            Container_Dictionary_String_String() : PlayFabClientContainer_Dictionary_String_String{}
            {
            }

            Container_Dictionary_String_String(const Container_Dictionary_String_String& src) :
                PlayFabClientContainer_Dictionary_String_String{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~Container_Dictionary_String_String() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientContainer_Dictionary_String_String>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct CollectionFilter : public PlayFabClientCollectionFilter, public BaseModel
        {
            CollectionFilter() : PlayFabClientCollectionFilter{}
            {
            }

            CollectionFilter(const CollectionFilter& src) :
                PlayFabClientCollectionFilter{ src },
                m_excludes{ src.m_excludes },
                m_includes{ src.m_includes }
            {

                excludes = m_excludes.Empty() ? nullptr : m_excludes.Data();
                includes = m_includes.Empty() ? nullptr : m_includes.Data();
            }

            ~CollectionFilter() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Excludes", m_excludes, excludes, excludesCount);
                JsonUtils:: ObjectGetMember(input, "Includes", m_includes, includes, includesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCollectionFilter>(*this);
            }

        private:
            PointerArray<PlayFabClientContainer_Dictionary_String_String, Container_Dictionary_String_String> m_excludes;
            PointerArray<PlayFabClientContainer_Dictionary_String_String, Container_Dictionary_String_String> m_includes;
        };

        struct ConfirmPurchaseRequest : public PlayFabClientConfirmPurchaseRequest, public BaseRequest
        {
            ConfirmPurchaseRequest() : PlayFabClientConfirmPurchaseRequest{}
            {
            }

            ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src) :
                PlayFabClientConfirmPurchaseRequest{ src },
                m_customTags{ src.m_customTags },
                m_orderId{ src.m_orderId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
            }

            ~ConfirmPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConfirmPurchaseRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_orderId;
        };

        struct ConfirmPurchaseResult : public PlayFabClientConfirmPurchaseResult, public BaseResult
        {
            ConfirmPurchaseResult() : PlayFabClientConfirmPurchaseResult{}
            {
            }

            ConfirmPurchaseResult(const ConfirmPurchaseResult& src) :
                PlayFabClientConfirmPurchaseResult{ src },
                m_items{ src.m_items },
                m_orderId{ src.m_orderId }
            {

                items = m_items.Empty() ? nullptr : m_items.Data();
                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
            }

            ~ConfirmPurchaseResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "PurchaseDate", purchaseDate, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConfirmPurchaseResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_items;
            String m_orderId;

        };

        struct ConsumeItemRequest : public PlayFabClientConsumeItemRequest, public BaseRequest
        {
            ConsumeItemRequest() : PlayFabClientConsumeItemRequest{}
            {
            }

            ConsumeItemRequest(const ConsumeItemRequest& src) :
                PlayFabClientConsumeItemRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_itemInstanceId{ src.m_itemInstanceId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
            }

            ~ConsumeItemRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ConsumeCount", consumeCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumeItemRequest>(*this);
            }

        private:
            String m_characterId;

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_itemInstanceId;
        };

        struct ConsumeItemResult : public PlayFabClientConsumeItemResult, public BaseResult
        {
            ConsumeItemResult() : PlayFabClientConsumeItemResult{}
            {
            }

            ConsumeItemResult(const ConsumeItemResult& src) :
                PlayFabClientConsumeItemResult{ src },
                m_itemInstanceId{ src.m_itemInstanceId }
            {

                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
            }

            ~ConsumeItemResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "RemainingUses", remainingUses);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumeItemResult>(*this);
            }

        private:
            String m_itemInstanceId;

        };

        struct MicrosoftStorePayload : public PlayFabClientMicrosoftStorePayload, public BaseModel
        {
            MicrosoftStorePayload() : PlayFabClientMicrosoftStorePayload{}
            {
            }

            MicrosoftStorePayload(const MicrosoftStorePayload& src) :
                PlayFabClientMicrosoftStorePayload{ src },
                m_collectionsMsIdKey{ src.m_collectionsMsIdKey },
                m_userId{ src.m_userId },
                m_xboxToken{ src.m_xboxToken }
            {

                collectionsMsIdKey = m_collectionsMsIdKey.empty() ? nullptr : m_collectionsMsIdKey.data();
                userId = m_userId.empty() ? nullptr : m_userId.data();
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~MicrosoftStorePayload() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CollectionsMsIdKey", m_collectionsMsIdKey, collectionsMsIdKey);
                JsonUtils:: ObjectGetMember(input, "UserId", m_userId, userId);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientMicrosoftStorePayload>(*this);
            }

        private:
            String m_collectionsMsIdKey;
            String m_userId;
            String m_xboxToken;
        };

        struct ConsumeMicrosoftStoreEntitlementsRequest : public PlayFabClientConsumeMicrosoftStoreEntitlementsRequest, public BaseRequest
        {
            ConsumeMicrosoftStoreEntitlementsRequest() : PlayFabClientConsumeMicrosoftStoreEntitlementsRequest{}
            {
            }

            ConsumeMicrosoftStoreEntitlementsRequest(const ConsumeMicrosoftStoreEntitlementsRequest& src) :
                PlayFabClientConsumeMicrosoftStoreEntitlementsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_marketplaceSpecificData{ src.m_marketplaceSpecificData }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                marketplaceSpecificData = (PlayFabClientMicrosoftStorePayload*)&m_marketplaceSpecificData;
            }

            ~ConsumeMicrosoftStoreEntitlementsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MarketplaceSpecificData", m_marketplaceSpecificData, marketplaceSpecificData);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumeMicrosoftStoreEntitlementsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            MicrosoftStorePayload m_marketplaceSpecificData;
        };

        struct ConsumeMicrosoftStoreEntitlementsResponse : public PlayFabClientConsumeMicrosoftStoreEntitlementsResponse, public BaseResult
        {
            ConsumeMicrosoftStoreEntitlementsResponse() : PlayFabClientConsumeMicrosoftStoreEntitlementsResponse{}
            {
            }

            ConsumeMicrosoftStoreEntitlementsResponse(const ConsumeMicrosoftStoreEntitlementsResponse& src) :
                PlayFabClientConsumeMicrosoftStoreEntitlementsResponse{ src },
                m_items{ src.m_items }
            {

                items = m_items.Empty() ? nullptr : m_items.Data();
            }

            ~ConsumeMicrosoftStoreEntitlementsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumeMicrosoftStoreEntitlementsResponse>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_items;
        };

        struct PlayStation5Payload : public PlayFabClientPlayStation5Payload, public BaseModel
        {
            PlayStation5Payload() : PlayFabClientPlayStation5Payload{}
            {
            }

            PlayStation5Payload(const PlayStation5Payload& src) :
                PlayFabClientPlayStation5Payload{ src },
                m_ids{ src.m_ids },
                m_serviceLabel{ src.m_serviceLabel }
            {

                ids = m_ids.Empty() ? nullptr : m_ids.Data();
                serviceLabel = m_serviceLabel.empty() ? nullptr : m_serviceLabel.data();
            }

            ~PlayStation5Payload() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Ids", m_ids, ids, idsCount);
                JsonUtils:: ObjectGetMember(input, "ServiceLabel", m_serviceLabel, serviceLabel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPlayStation5Payload>(*this);
            }

        private:
            PointerArray<const char, String> m_ids;
            String m_serviceLabel;
        };

        struct ConsumePS5EntitlementsRequest : public PlayFabClientConsumePS5EntitlementsRequest, public BaseRequest
        {
            ConsumePS5EntitlementsRequest() : PlayFabClientConsumePS5EntitlementsRequest{}
            {
            }

            ConsumePS5EntitlementsRequest(const ConsumePS5EntitlementsRequest& src) :
                PlayFabClientConsumePS5EntitlementsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_marketplaceSpecificData{ src.m_marketplaceSpecificData }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                marketplaceSpecificData = (PlayFabClientPlayStation5Payload*)&m_marketplaceSpecificData;
            }

            ~ConsumePS5EntitlementsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MarketplaceSpecificData", m_marketplaceSpecificData, marketplaceSpecificData);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumePS5EntitlementsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PlayStation5Payload m_marketplaceSpecificData;
        };

        struct ConsumePS5EntitlementsResult : public PlayFabClientConsumePS5EntitlementsResult, public BaseResult
        {
            ConsumePS5EntitlementsResult() : PlayFabClientConsumePS5EntitlementsResult{}
            {
            }

            ConsumePS5EntitlementsResult(const ConsumePS5EntitlementsResult& src) :
                PlayFabClientConsumePS5EntitlementsResult{ src },
                m_items{ src.m_items }
            {

                items = m_items.Empty() ? nullptr : m_items.Data();
            }

            ~ConsumePS5EntitlementsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumePS5EntitlementsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_items;
        };

        struct ConsumePSNEntitlementsRequest : public PlayFabClientConsumePSNEntitlementsRequest, public BaseRequest
        {
            ConsumePSNEntitlementsRequest() : PlayFabClientConsumePSNEntitlementsRequest{}
            {
            }

            ConsumePSNEntitlementsRequest(const ConsumePSNEntitlementsRequest& src) :
                PlayFabClientConsumePSNEntitlementsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~ConsumePSNEntitlementsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ServiceLabel", serviceLabel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumePSNEntitlementsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;

        };

        struct ConsumePSNEntitlementsResult : public PlayFabClientConsumePSNEntitlementsResult, public BaseResult
        {
            ConsumePSNEntitlementsResult() : PlayFabClientConsumePSNEntitlementsResult{}
            {
            }

            ConsumePSNEntitlementsResult(const ConsumePSNEntitlementsResult& src) :
                PlayFabClientConsumePSNEntitlementsResult{ src },
                m_itemsGranted{ src.m_itemsGranted }
            {

                itemsGranted = m_itemsGranted.Empty() ? nullptr : m_itemsGranted.Data();
            }

            ~ConsumePSNEntitlementsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ItemsGranted", m_itemsGranted, itemsGranted, itemsGrantedCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumePSNEntitlementsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_itemsGranted;
        };

        struct ConsumeXboxEntitlementsRequest : public PlayFabClientConsumeXboxEntitlementsRequest, public BaseRequest
        {
            ConsumeXboxEntitlementsRequest() : PlayFabClientConsumeXboxEntitlementsRequest{}
            {
            }

            ConsumeXboxEntitlementsRequest(const ConsumeXboxEntitlementsRequest& src) :
                PlayFabClientConsumeXboxEntitlementsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_xboxToken{ src.m_xboxToken }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~ConsumeXboxEntitlementsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumeXboxEntitlementsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_xboxToken;
        };

        struct ConsumeXboxEntitlementsResult : public PlayFabClientConsumeXboxEntitlementsResult, public BaseResult
        {
            ConsumeXboxEntitlementsResult() : PlayFabClientConsumeXboxEntitlementsResult{}
            {
            }

            ConsumeXboxEntitlementsResult(const ConsumeXboxEntitlementsResult& src) :
                PlayFabClientConsumeXboxEntitlementsResult{ src },
                m_items{ src.m_items }
            {

                items = m_items.Empty() ? nullptr : m_items.Data();
            }

            ~ConsumeXboxEntitlementsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientConsumeXboxEntitlementsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_items;
        };

        struct ContactEmailInfoModel : public PlayFabClientContactEmailInfoModel, public BaseModel
        {
            ContactEmailInfoModel() : PlayFabClientContactEmailInfoModel{}
            {
            }

            ContactEmailInfoModel(const ContactEmailInfoModel& src) :
                PlayFabClientContactEmailInfoModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientContactEmailInfoModel>(*this);
            }

        private:
            String m_emailAddress;
            String m_name;
            StdExtra::optional<PlayFabClientEmailVerificationStatus> m_verificationStatus;
        };

        struct CreateSharedGroupRequest : public PlayFabClientCreateSharedGroupRequest, public BaseRequest
        {
            CreateSharedGroupRequest() : PlayFabClientCreateSharedGroupRequest{}
            {
            }

            CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
                PlayFabClientCreateSharedGroupRequest{ src },
                m_sharedGroupId{ src.m_sharedGroupId }
            {

                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~CreateSharedGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCreateSharedGroupRequest>(*this);
            }

        private:
            String m_sharedGroupId;
        };

        struct CreateSharedGroupResult : public PlayFabClientCreateSharedGroupResult, public BaseResult
        {
            CreateSharedGroupResult() : PlayFabClientCreateSharedGroupResult{}
            {
            }

            CreateSharedGroupResult(const CreateSharedGroupResult& src) :
                PlayFabClientCreateSharedGroupResult{ src },
                m_sharedGroupId{ src.m_sharedGroupId }
            {

                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~CreateSharedGroupResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCreateSharedGroupResult>(*this);
            }

        private:
            String m_sharedGroupId;
        };

        struct CurrentGamesRequest : public PlayFabClientCurrentGamesRequest, public BaseRequest
        {
            CurrentGamesRequest() : PlayFabClientCurrentGamesRequest{}
            {
            }

            CurrentGamesRequest(const CurrentGamesRequest& src) :
                PlayFabClientCurrentGamesRequest{ src },
                m_buildVersion{ src.m_buildVersion },
                m_gameMode{ src.m_gameMode },
                m_region{ src.m_region },
                m_statisticName{ src.m_statisticName },
                m_tagFilter{ src.m_tagFilter }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
                gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
                region = m_region ? m_region.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
            }

            ~CurrentGamesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCurrentGamesRequest>(*this);
            }

        private:
            String m_buildVersion;
            String m_gameMode;
            StdExtra::optional<PlayFabClientRegion> m_region;
            String m_statisticName;
            StdExtra::optional<CollectionFilter> m_tagFilter;
        };

        struct GameInfo : public PlayFabClientGameInfo, public BaseModel
        {
            GameInfo() : PlayFabClientGameInfo{}
            {
            }

            GameInfo(const GameInfo& src) :
                PlayFabClientGameInfo{ src },
                m_buildVersion{ src.m_buildVersion },
                m_gameMode{ src.m_gameMode },
                m_gameServerData{ src.m_gameServerData },
                m_gameServerStateEnum{ src.m_gameServerStateEnum },
                m_lastHeartbeat{ src.m_lastHeartbeat },
                m_lobbyID{ src.m_lobbyID },
                m_maxPlayers{ src.m_maxPlayers },
                m_playerUserIds{ src.m_playerUserIds },
                m_region{ src.m_region },
                m_serverIPV4Address{ src.m_serverIPV4Address },
                m_serverIPV6Address{ src.m_serverIPV6Address },
                m_serverPort{ src.m_serverPort },
                m_serverPublicDNSName{ src.m_serverPublicDNSName },
                m_statisticName{ src.m_statisticName },
                m_tags{ src.m_tags }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
                gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
                gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
                gameServerStateEnum = m_gameServerStateEnum ? m_gameServerStateEnum.operator->() : nullptr;
                lastHeartbeat = m_lastHeartbeat ? m_lastHeartbeat.operator->() : nullptr;
                lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
                maxPlayers = m_maxPlayers ? m_maxPlayers.operator->() : nullptr;
                playerUserIds = m_playerUserIds.Empty() ? nullptr : m_playerUserIds.Data();
                region = m_region ? m_region.operator->() : nullptr;
                serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
                serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
                serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
                serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~GameInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
                JsonUtils:: ObjectGetMember(input, "GameServerData", m_gameServerData, gameServerData);
                JsonUtils:: ObjectGetMember(input, "GameServerStateEnum", m_gameServerStateEnum, gameServerStateEnum);
                JsonUtils:: ObjectGetMember(input, "LastHeartbeat", m_lastHeartbeat, lastHeartbeat, true);
                JsonUtils:: ObjectGetMember(input, "LobbyID", m_lobbyID, lobbyID);
                JsonUtils:: ObjectGetMember(input, "MaxPlayers", m_maxPlayers, maxPlayers);
                JsonUtils:: ObjectGetMember(input, "PlayerUserIds", m_playerUserIds, playerUserIds, playerUserIdsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "RunTime", runTime);
                JsonUtils:: ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
                JsonUtils:: ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
                JsonUtils:: ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
                JsonUtils:: ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGameInfo>(*this);
            }

        private:
            String m_buildVersion;
            String m_gameMode;
            String m_gameServerData;
            StdExtra::optional<PlayFabClientGameInstanceState> m_gameServerStateEnum;
            StdExtra::optional<time_t> m_lastHeartbeat;
            String m_lobbyID;
            StdExtra::optional<int32_t> m_maxPlayers;
            PointerArray<const char, String> m_playerUserIds;
            StdExtra::optional<PlayFabClientRegion> m_region;

            String m_serverIPV4Address;
            String m_serverIPV6Address;
            StdExtra::optional<int32_t> m_serverPort;
            String m_serverPublicDNSName;
            String m_statisticName;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_tags;
        };

        struct CurrentGamesResult : public PlayFabClientCurrentGamesResult, public BaseResult
        {
            CurrentGamesResult() : PlayFabClientCurrentGamesResult{}
            {
            }

            CurrentGamesResult(const CurrentGamesResult& src) :
                PlayFabClientCurrentGamesResult{ src },
                m_games{ src.m_games }
            {

                games = m_games.Empty() ? nullptr : m_games.Data();
            }

            ~CurrentGamesResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GameCount", gameCount);
                JsonUtils:: ObjectGetMember(input, "Games", m_games, games, gamesCount);
                JsonUtils:: ObjectGetMember(input, "PlayerCount", playerCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientCurrentGamesResult>(*this);
            }

        private:

            PointerArray<PlayFabClientGameInfo, GameInfo> m_games;

        };

        struct DeviceInfoRequest : public PlayFabClientDeviceInfoRequest, public BaseRequest
        {
            DeviceInfoRequest() : PlayFabClientDeviceInfoRequest{}
            {
            }

            DeviceInfoRequest(const DeviceInfoRequest& src) :
                PlayFabClientDeviceInfoRequest{ src },
                m_info{ src.m_info }
            {

                info.stringValue = m_info.StringValue();
            }

            ~DeviceInfoRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Info", m_info, info);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientDeviceInfoRequest>(*this);
            }

        private:
            JsonObject m_info;
        };

        struct EmptyResponse : public PlayFabClientEmptyResponse, public BaseResult
        {
            EmptyResponse() : PlayFabClientEmptyResponse{}
            {
            }

            EmptyResponse(const EmptyResponse&) = default;

            ~EmptyResponse() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientEmptyResponse>(*this);
            }

        private:
        };

        struct EmptyResult : public PlayFabClientEmptyResult, public BaseResult
        {
            EmptyResult() : PlayFabClientEmptyResult{}
            {
            }

            EmptyResult(const EmptyResult&) = default;

            ~EmptyResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientEmptyResult>(*this);
            }

        private:
        };

        struct EntityKey : public PlayFabClientEntityKey, public BaseModel
        {
            EntityKey() : PlayFabClientEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabClientEntityKey{ src },
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
                return JsonUtils::ToJson<PlayFabClientEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct EntityTokenResponse : public PlayFabClientEntityTokenResponse, public BaseResult
        {
            EntityTokenResponse() : PlayFabClientEntityTokenResponse{}
            {
            }

            EntityTokenResponse(const EntityTokenResponse& src) :
                PlayFabClientEntityTokenResponse{ src },
                m_entity{ src.m_entity },
                m_entityToken{ src.m_entityToken },
                m_tokenExpiration{ src.m_tokenExpiration }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
                tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
            }

            ~EntityTokenResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
                JsonUtils:: ObjectGetMember(input, "TokenExpiration", m_tokenExpiration, tokenExpiration, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientEntityTokenResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            String m_entityToken;
            StdExtra::optional<time_t> m_tokenExpiration;
        };

        struct ExecuteCloudScriptRequest : public PlayFabClientExecuteCloudScriptRequest, public BaseRequest
        {
            ExecuteCloudScriptRequest() : PlayFabClientExecuteCloudScriptRequest{}
            {
            }

            ExecuteCloudScriptRequest(const ExecuteCloudScriptRequest& src) :
                PlayFabClientExecuteCloudScriptRequest{ src },
                m_customTags{ src.m_customTags },
                m_functionName{ src.m_functionName },
                m_functionParameter{ src.m_functionParameter },
                m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
                m_revisionSelection{ src.m_revisionSelection },
                m_specificRevision{ src.m_specificRevision }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionParameter.stringValue = m_functionParameter.StringValue();
                generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
                revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
                specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
            }

            ~ExecuteCloudScriptRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
                JsonUtils:: ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
                JsonUtils:: ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
                JsonUtils:: ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientExecuteCloudScriptRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_functionName;
            JsonObject m_functionParameter;
            StdExtra::optional<bool> m_generatePlayStreamEvent;
            StdExtra::optional<PlayFabClientCloudScriptRevisionOption> m_revisionSelection;
            StdExtra::optional<int32_t> m_specificRevision;
        };

        struct ScriptExecutionError : public PlayFabClientScriptExecutionError, public BaseModel
        {
            ScriptExecutionError() : PlayFabClientScriptExecutionError{}
            {
            }

            ScriptExecutionError(const ScriptExecutionError& src) :
                PlayFabClientScriptExecutionError{ src },
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
                return JsonUtils::ToJson<PlayFabClientScriptExecutionError>(*this);
            }

        private:
            String m_error;
            String m_message;
            String m_stackTrace;
        };

        struct LogStatement : public PlayFabClientLogStatement, public BaseModel
        {
            LogStatement() : PlayFabClientLogStatement{}
            {
            }

            LogStatement(const LogStatement& src) :
                PlayFabClientLogStatement{ src },
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
                return JsonUtils::ToJson<PlayFabClientLogStatement>(*this);
            }

        private:
            JsonObject m_data;
            String m_level;
            String m_message;
        };

        struct ExecuteCloudScriptResult : public PlayFabClientExecuteCloudScriptResult, public BaseResult
        {
            ExecuteCloudScriptResult() : PlayFabClientExecuteCloudScriptResult{}
            {
            }

            ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
                PlayFabClientExecuteCloudScriptResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientExecuteCloudScriptResult>(*this);
            }

        private:

            StdExtra::optional<ScriptExecutionError> m_error;

            String m_functionName;
            JsonObject m_functionResult;
            StdExtra::optional<bool> m_functionResultTooLarge;

            PointerArray<PlayFabClientLogStatement, LogStatement> m_logs;
            StdExtra::optional<bool> m_logsTooLarge;



        };

        struct FacebookInstantGamesPlayFabIdPair : public PlayFabClientFacebookInstantGamesPlayFabIdPair, public BaseModel
        {
            FacebookInstantGamesPlayFabIdPair() : PlayFabClientFacebookInstantGamesPlayFabIdPair{}
            {
            }

            FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src) :
                PlayFabClientFacebookInstantGamesPlayFabIdPair{ src },
                m_facebookInstantGamesId{ src.m_facebookInstantGamesId },
                m_playFabId{ src.m_playFabId }
            {

                facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~FacebookInstantGamesPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientFacebookInstantGamesPlayFabIdPair>(*this);
            }

        private:
            String m_facebookInstantGamesId;
            String m_playFabId;
        };

        struct FacebookPlayFabIdPair : public PlayFabClientFacebookPlayFabIdPair, public BaseModel
        {
            FacebookPlayFabIdPair() : PlayFabClientFacebookPlayFabIdPair{}
            {
            }

            FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
                PlayFabClientFacebookPlayFabIdPair{ src },
                m_facebookId{ src.m_facebookId },
                m_playFabId{ src.m_playFabId }
            {

                facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~FacebookPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientFacebookPlayFabIdPair>(*this);
            }

        private:
            String m_facebookId;
            String m_playFabId;
        };

        struct UserFacebookInfo : public PlayFabClientUserFacebookInfo, public BaseModel
        {
            UserFacebookInfo() : PlayFabClientUserFacebookInfo{}
            {
            }

            UserFacebookInfo(const UserFacebookInfo& src) :
                PlayFabClientUserFacebookInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserFacebookInfo>(*this);
            }

        private:
            String m_facebookId;
            String m_fullName;
        };

        struct UserGameCenterInfo : public PlayFabClientUserGameCenterInfo, public BaseModel
        {
            UserGameCenterInfo() : PlayFabClientUserGameCenterInfo{}
            {
            }

            UserGameCenterInfo(const UserGameCenterInfo& src) :
                PlayFabClientUserGameCenterInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserGameCenterInfo>(*this);
            }

        private:
            String m_gameCenterId;
        };

        struct LinkedPlatformAccountModel : public PlayFabClientLinkedPlatformAccountModel, public BaseModel
        {
            LinkedPlatformAccountModel() : PlayFabClientLinkedPlatformAccountModel{}
            {
            }

            LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
                PlayFabClientLinkedPlatformAccountModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientLinkedPlatformAccountModel>(*this);
            }

        private:
            String m_email;
            StdExtra::optional<PlayFabClientLoginIdentityProvider> m_platform;
            String m_platformUserId;
            String m_username;
        };

        struct LocationModel : public PlayFabClientLocationModel, public BaseModel
        {
            LocationModel() : PlayFabClientLocationModel{}
            {
            }

            LocationModel(const LocationModel& src) :
                PlayFabClientLocationModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientLocationModel>(*this);
            }

        private:
            String m_city;
            StdExtra::optional<PlayFabClientContinentCode> m_continentCode;
            StdExtra::optional<PlayFabClientCountryCode> m_countryCode;
            StdExtra::optional<double> m_latitude;
            StdExtra::optional<double> m_longitude;
        };

        struct SubscriptionModel : public PlayFabClientSubscriptionModel, public BaseModel
        {
            SubscriptionModel() : PlayFabClientSubscriptionModel{}
            {
            }

            SubscriptionModel(const SubscriptionModel& src) :
                PlayFabClientSubscriptionModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientSubscriptionModel>(*this);
            }

        private:



            StdExtra::optional<PlayFabClientSubscriptionProviderStatus> m_status;
            String m_subscriptionId;
            String m_subscriptionItemId;
            String m_subscriptionProvider;
        };

        struct MembershipModel : public PlayFabClientMembershipModel, public BaseModel
        {
            MembershipModel() : PlayFabClientMembershipModel{}
            {
            }

            MembershipModel(const MembershipModel& src) :
                PlayFabClientMembershipModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientMembershipModel>(*this);
            }

        private:


            String m_membershipId;
            StdExtra::optional<time_t> m_overrideExpiration;
            PointerArray<PlayFabClientSubscriptionModel, SubscriptionModel> m_subscriptions;
        };

        struct PushNotificationRegistrationModel : public PlayFabClientPushNotificationRegistrationModel, public BaseModel
        {
            PushNotificationRegistrationModel() : PlayFabClientPushNotificationRegistrationModel{}
            {
            }

            PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
                PlayFabClientPushNotificationRegistrationModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientPushNotificationRegistrationModel>(*this);
            }

        private:
            String m_notificationEndpointARN;
            StdExtra::optional<PlayFabClientPushNotificationPlatform> m_platform;
        };

        struct StatisticModel : public PlayFabClientStatisticModel, public BaseModel
        {
            StatisticModel() : PlayFabClientStatisticModel{}
            {
            }

            StatisticModel(const StatisticModel& src) :
                PlayFabClientStatisticModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientStatisticModel>(*this);
            }

        private:
            String m_name;


        };

        struct TagModel : public PlayFabClientTagModel, public BaseModel
        {
            TagModel() : PlayFabClientTagModel{}
            {
            }

            TagModel(const TagModel& src) :
                PlayFabClientTagModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientTagModel>(*this);
            }

        private:
            String m_tagValue;
        };

        struct ValueToDateModel : public PlayFabClientValueToDateModel, public BaseModel
        {
            ValueToDateModel() : PlayFabClientValueToDateModel{}
            {
            }

            ValueToDateModel(const ValueToDateModel& src) :
                PlayFabClientValueToDateModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientValueToDateModel>(*this);
            }

        private:
            String m_currency;

            String m_totalValueAsDecimal;
        };

        struct PlayerProfileModel : public PlayFabClientPlayerProfileModel, public BaseModel
        {
            PlayerProfileModel() : PlayFabClientPlayerProfileModel{}
            {
            }

            PlayerProfileModel(const PlayerProfileModel& src) :
                PlayFabClientPlayerProfileModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientPlayerProfileModel>(*this);
            }

        private:
            PointerArray<PlayFabClientAdCampaignAttributionModel, AdCampaignAttributionModel> m_adCampaignAttributions;
            String m_avatarUrl;
            StdExtra::optional<time_t> m_bannedUntil;
            PointerArray<PlayFabClientContactEmailInfoModel, ContactEmailInfoModel> m_contactEmailAddresses;
            StdExtra::optional<time_t> m_created;
            String m_displayName;
            PointerArray<const char, String> m_experimentVariants;
            StdExtra::optional<time_t> m_lastLogin;
            PointerArray<PlayFabClientLinkedPlatformAccountModel, LinkedPlatformAccountModel> m_linkedAccounts;
            PointerArray<PlayFabClientLocationModel, LocationModel> m_locations;
            PointerArray<PlayFabClientMembershipModel, MembershipModel> m_memberships;
            StdExtra::optional<PlayFabClientLoginIdentityProvider> m_origination;
            String m_playerId;
            String m_publisherId;
            PointerArray<PlayFabClientPushNotificationRegistrationModel, PushNotificationRegistrationModel> m_pushNotificationRegistrations;
            PointerArray<PlayFabClientStatisticModel, StatisticModel> m_statistics;
            PointerArray<PlayFabClientTagModel, TagModel> m_tags;
            String m_titleId;
            StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
            PointerArray<PlayFabClientValueToDateModel, ValueToDateModel> m_valuesToDate;
        };

        struct UserPsnInfo : public PlayFabClientUserPsnInfo, public BaseModel
        {
            UserPsnInfo() : PlayFabClientUserPsnInfo{}
            {
            }

            UserPsnInfo(const UserPsnInfo& src) :
                PlayFabClientUserPsnInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserPsnInfo>(*this);
            }

        private:
            String m_psnAccountId;
            String m_psnOnlineId;
        };

        struct UserSteamInfo : public PlayFabClientUserSteamInfo, public BaseModel
        {
            UserSteamInfo() : PlayFabClientUserSteamInfo{}
            {
            }

            UserSteamInfo(const UserSteamInfo& src) :
                PlayFabClientUserSteamInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserSteamInfo>(*this);
            }

        private:
            StdExtra::optional<PlayFabClientTitleActivationStatus> m_steamActivationStatus;
            String m_steamCountry;
            StdExtra::optional<PlayFabClientCurrency> m_steamCurrency;
            String m_steamId;
            String m_steamName;
        };

        struct UserXboxInfo : public PlayFabClientUserXboxInfo, public BaseModel
        {
            UserXboxInfo() : PlayFabClientUserXboxInfo{}
            {
            }

            UserXboxInfo(const UserXboxInfo& src) :
                PlayFabClientUserXboxInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserXboxInfo>(*this);
            }

        private:
            String m_xboxUserId;
        };

        struct FriendInfo : public PlayFabClientFriendInfo, public BaseModel
        {
            FriendInfo() : PlayFabClientFriendInfo{}
            {
            }

            FriendInfo(const FriendInfo& src) :
                PlayFabClientFriendInfo{ src },
                m_facebookInfo{ src.m_facebookInfo },
                m_friendPlayFabId{ src.m_friendPlayFabId },
                m_gameCenterInfo{ src.m_gameCenterInfo },
                m_profile{ src.m_profile },
                m_pSNInfo{ src.m_pSNInfo },
                m_steamInfo{ src.m_steamInfo },
                m_tags{ src.m_tags },
                m_titleDisplayName{ src.m_titleDisplayName },
                m_username{ src.m_username },
                m_xboxInfo{ src.m_xboxInfo }
            {

                facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
                gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
                profile = m_profile ? m_profile.operator->() : nullptr;
                pSNInfo = m_pSNInfo ? m_pSNInfo.operator->() : nullptr;
                steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
                titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
                username = m_username.empty() ? nullptr : m_username.data();
                xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
            }

            ~FriendInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookInfo", m_facebookInfo, facebookInfo);
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
                JsonUtils:: ObjectGetMember(input, "GameCenterInfo", m_gameCenterInfo, gameCenterInfo);
                JsonUtils:: ObjectGetMember(input, "Profile", m_profile, profile);
                JsonUtils:: ObjectGetMember(input, "PSNInfo", m_pSNInfo, pSNInfo);
                JsonUtils:: ObjectGetMember(input, "SteamInfo", m_steamInfo, steamInfo);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
                JsonUtils:: ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
                JsonUtils:: ObjectGetMember(input, "XboxInfo", m_xboxInfo, xboxInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientFriendInfo>(*this);
            }

        private:
            StdExtra::optional<UserFacebookInfo> m_facebookInfo;
            String m_friendPlayFabId;
            StdExtra::optional<UserGameCenterInfo> m_gameCenterInfo;
            StdExtra::optional<PlayerProfileModel> m_profile;
            StdExtra::optional<UserPsnInfo> m_pSNInfo;
            StdExtra::optional<UserSteamInfo> m_steamInfo;
            PointerArray<const char, String> m_tags;
            String m_titleDisplayName;
            String m_username;
            StdExtra::optional<UserXboxInfo> m_xboxInfo;
        };

        struct GameCenterPlayFabIdPair : public PlayFabClientGameCenterPlayFabIdPair, public BaseModel
        {
            GameCenterPlayFabIdPair() : PlayFabClientGameCenterPlayFabIdPair{}
            {
            }

            GameCenterPlayFabIdPair(const GameCenterPlayFabIdPair& src) :
                PlayFabClientGameCenterPlayFabIdPair{ src },
                m_gameCenterId{ src.m_gameCenterId },
                m_playFabId{ src.m_playFabId }
            {

                gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GameCenterPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGameCenterPlayFabIdPair>(*this);
            }

        private:
            String m_gameCenterId;
            String m_playFabId;
        };

        struct GameServerRegionsRequest : public PlayFabClientGameServerRegionsRequest, public BaseRequest
        {
            GameServerRegionsRequest() : PlayFabClientGameServerRegionsRequest{}
            {
            }

            GameServerRegionsRequest(const GameServerRegionsRequest& src) :
                PlayFabClientGameServerRegionsRequest{ src },
                m_buildVersion{ src.m_buildVersion },
                m_titleId{ src.m_titleId }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~GameServerRegionsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGameServerRegionsRequest>(*this);
            }

        private:
            String m_buildVersion;
            String m_titleId;
        };

        struct RegionInfo : public PlayFabClientRegionInfo, public BaseModel
        {
            RegionInfo() : PlayFabClientRegionInfo{}
            {
            }

            RegionInfo(const RegionInfo& src) :
                PlayFabClientRegionInfo{ src },
                m_name{ src.m_name },
                m_pingUrl{ src.m_pingUrl },
                m_region{ src.m_region }
            {

                name = m_name.empty() ? nullptr : m_name.data();
                pingUrl = m_pingUrl.empty() ? nullptr : m_pingUrl.data();
                region = m_region ? m_region.operator->() : nullptr;
            }

            ~RegionInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Available", available);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "PingUrl", m_pingUrl, pingUrl);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRegionInfo>(*this);
            }

        private:

            String m_name;
            String m_pingUrl;
            StdExtra::optional<PlayFabClientRegion> m_region;
        };

        struct GameServerRegionsResult : public PlayFabClientGameServerRegionsResult, public BaseResult
        {
            GameServerRegionsResult() : PlayFabClientGameServerRegionsResult{}
            {
            }

            GameServerRegionsResult(const GameServerRegionsResult& src) :
                PlayFabClientGameServerRegionsResult{ src },
                m_regions{ src.m_regions }
            {

                regions = m_regions.Empty() ? nullptr : m_regions.Data();
            }

            ~GameServerRegionsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Regions", m_regions, regions, regionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGameServerRegionsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientRegionInfo, RegionInfo> m_regions;
        };

        struct GenericPlayFabIdPair : public PlayFabClientGenericPlayFabIdPair, public BaseModel
        {
            GenericPlayFabIdPair() : PlayFabClientGenericPlayFabIdPair{}
            {
            }

            GenericPlayFabIdPair(const GenericPlayFabIdPair& src) :
                PlayFabClientGenericPlayFabIdPair{ src },
                m_genericId{ src.m_genericId },
                m_playFabId{ src.m_playFabId }
            {

                genericId = m_genericId ? m_genericId.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GenericPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GenericId", m_genericId, genericId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGenericPlayFabIdPair>(*this);
            }

        private:
            StdExtra::optional<GenericServiceId> m_genericId;
            String m_playFabId;
        };

        struct GetAccountInfoRequest : public PlayFabClientGetAccountInfoRequest, public BaseRequest
        {
            GetAccountInfoRequest() : PlayFabClientGetAccountInfoRequest{}
            {
            }

            GetAccountInfoRequest(const GetAccountInfoRequest& src) :
                PlayFabClientGetAccountInfoRequest{ src },
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

            ~GetAccountInfoRequest() = default;

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
                return JsonUtils::ToJson<PlayFabClientGetAccountInfoRequest>(*this);
            }

        private:
            String m_email;
            String m_playFabId;
            String m_titleDisplayName;
            String m_username;
        };

        struct UserAndroidDeviceInfo : public PlayFabClientUserAndroidDeviceInfo, public BaseModel
        {
            UserAndroidDeviceInfo() : PlayFabClientUserAndroidDeviceInfo{}
            {
            }

            UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src) :
                PlayFabClientUserAndroidDeviceInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserAndroidDeviceInfo>(*this);
            }

        private:
            String m_androidDeviceId;
        };

        struct UserAppleIdInfo : public PlayFabClientUserAppleIdInfo, public BaseModel
        {
            UserAppleIdInfo() : PlayFabClientUserAppleIdInfo{}
            {
            }

            UserAppleIdInfo(const UserAppleIdInfo& src) :
                PlayFabClientUserAppleIdInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserAppleIdInfo>(*this);
            }

        private:
            String m_appleSubjectId;
        };

        struct UserCustomIdInfo : public PlayFabClientUserCustomIdInfo, public BaseModel
        {
            UserCustomIdInfo() : PlayFabClientUserCustomIdInfo{}
            {
            }

            UserCustomIdInfo(const UserCustomIdInfo& src) :
                PlayFabClientUserCustomIdInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserCustomIdInfo>(*this);
            }

        private:
            String m_customId;
        };

        struct UserFacebookInstantGamesIdInfo : public PlayFabClientUserFacebookInstantGamesIdInfo, public BaseModel
        {
            UserFacebookInstantGamesIdInfo() : PlayFabClientUserFacebookInstantGamesIdInfo{}
            {
            }

            UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src) :
                PlayFabClientUserFacebookInstantGamesIdInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserFacebookInstantGamesIdInfo>(*this);
            }

        private:
            String m_facebookInstantGamesId;
        };

        struct UserGoogleInfo : public PlayFabClientUserGoogleInfo, public BaseModel
        {
            UserGoogleInfo() : PlayFabClientUserGoogleInfo{}
            {
            }

            UserGoogleInfo(const UserGoogleInfo& src) :
                PlayFabClientUserGoogleInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserGoogleInfo>(*this);
            }

        private:
            String m_googleEmail;
            String m_googleGender;
            String m_googleId;
            String m_googleLocale;
            String m_googleName;
        };

        struct UserIosDeviceInfo : public PlayFabClientUserIosDeviceInfo, public BaseModel
        {
            UserIosDeviceInfo() : PlayFabClientUserIosDeviceInfo{}
            {
            }

            UserIosDeviceInfo(const UserIosDeviceInfo& src) :
                PlayFabClientUserIosDeviceInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserIosDeviceInfo>(*this);
            }

        private:
            String m_iosDeviceId;
        };

        struct UserKongregateInfo : public PlayFabClientUserKongregateInfo, public BaseModel
        {
            UserKongregateInfo() : PlayFabClientUserKongregateInfo{}
            {
            }

            UserKongregateInfo(const UserKongregateInfo& src) :
                PlayFabClientUserKongregateInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserKongregateInfo>(*this);
            }

        private:
            String m_kongregateId;
            String m_kongregateName;
        };

        struct UserNintendoSwitchAccountIdInfo : public PlayFabClientUserNintendoSwitchAccountIdInfo, public BaseModel
        {
            UserNintendoSwitchAccountIdInfo() : PlayFabClientUserNintendoSwitchAccountIdInfo{}
            {
            }

            UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src) :
                PlayFabClientUserNintendoSwitchAccountIdInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserNintendoSwitchAccountIdInfo>(*this);
            }

        private:
            String m_nintendoSwitchAccountSubjectId;
        };

        struct UserNintendoSwitchDeviceIdInfo : public PlayFabClientUserNintendoSwitchDeviceIdInfo, public BaseModel
        {
            UserNintendoSwitchDeviceIdInfo() : PlayFabClientUserNintendoSwitchDeviceIdInfo{}
            {
            }

            UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src) :
                PlayFabClientUserNintendoSwitchDeviceIdInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserNintendoSwitchDeviceIdInfo>(*this);
            }

        private:
            String m_nintendoSwitchDeviceId;
        };

        struct UserOpenIdInfo : public PlayFabClientUserOpenIdInfo, public BaseModel
        {
            UserOpenIdInfo() : PlayFabClientUserOpenIdInfo{}
            {
            }

            UserOpenIdInfo(const UserOpenIdInfo& src) :
                PlayFabClientUserOpenIdInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserOpenIdInfo>(*this);
            }

        private:
            String m_connectionId;
            String m_issuer;
            String m_subject;
        };

        struct UserPrivateAccountInfo : public PlayFabClientUserPrivateAccountInfo, public BaseModel
        {
            UserPrivateAccountInfo() : PlayFabClientUserPrivateAccountInfo{}
            {
            }

            UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
                PlayFabClientUserPrivateAccountInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserPrivateAccountInfo>(*this);
            }

        private:
            String m_email;
        };

        struct UserTitleInfo : public PlayFabClientUserTitleInfo, public BaseModel
        {
            UserTitleInfo() : PlayFabClientUserTitleInfo{}
            {
            }

            UserTitleInfo(const UserTitleInfo& src) :
                PlayFabClientUserTitleInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserTitleInfo>(*this);
            }

        private:
            String m_avatarUrl;

            String m_displayName;
            StdExtra::optional<time_t> m_firstLogin;
            StdExtra::optional<bool> m_isBanned;
            StdExtra::optional<time_t> m_lastLogin;
            StdExtra::optional<PlayFabClientUserOrigination> m_origination;
            StdExtra::optional<EntityKey> m_titlePlayerAccount;
        };

        struct UserTwitchInfo : public PlayFabClientUserTwitchInfo, public BaseModel
        {
            UserTwitchInfo() : PlayFabClientUserTwitchInfo{}
            {
            }

            UserTwitchInfo(const UserTwitchInfo& src) :
                PlayFabClientUserTwitchInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserTwitchInfo>(*this);
            }

        private:
            String m_twitchId;
            String m_twitchUserName;
        };

        struct UserWindowsHelloInfo : public PlayFabClientUserWindowsHelloInfo, public BaseModel
        {
            UserWindowsHelloInfo() : PlayFabClientUserWindowsHelloInfo{}
            {
            }

            UserWindowsHelloInfo(const UserWindowsHelloInfo& src) :
                PlayFabClientUserWindowsHelloInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserWindowsHelloInfo>(*this);
            }

        private:
            String m_windowsHelloDeviceName;
            String m_windowsHelloPublicKeyHash;
        };

        struct UserAccountInfo : public PlayFabClientUserAccountInfo, public BaseModel
        {
            UserAccountInfo() : PlayFabClientUserAccountInfo{}
            {
            }

            UserAccountInfo(const UserAccountInfo& src) :
                PlayFabClientUserAccountInfo{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserAccountInfo>(*this);
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
            PointerArray<PlayFabClientUserOpenIdInfo, UserOpenIdInfo> m_openIdInfo;
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

        struct GetAccountInfoResult : public PlayFabClientGetAccountInfoResult, public BaseResult
        {
            GetAccountInfoResult() : PlayFabClientGetAccountInfoResult{}
            {
            }

            GetAccountInfoResult(const GetAccountInfoResult& src) :
                PlayFabClientGetAccountInfoResult{ src },
                m_accountInfo{ src.m_accountInfo }
            {

                accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
            }

            ~GetAccountInfoResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccountInfo", m_accountInfo, accountInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetAccountInfoResult>(*this);
            }

        private:
            StdExtra::optional<UserAccountInfo> m_accountInfo;
        };

        struct NameIdentifier : public PlayFabClientNameIdentifier, public BaseModel
        {
            NameIdentifier() : PlayFabClientNameIdentifier{}
            {
            }

            NameIdentifier(const NameIdentifier& src) :
                PlayFabClientNameIdentifier{ src },
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
                return JsonUtils::ToJson<PlayFabClientNameIdentifier>(*this);
            }

        private:
            String m_id;
            String m_name;
        };

        struct GetAdPlacementsRequest : public PlayFabClientGetAdPlacementsRequest, public BaseRequest
        {
            GetAdPlacementsRequest() : PlayFabClientGetAdPlacementsRequest{}
            {
            }

            GetAdPlacementsRequest(const GetAdPlacementsRequest& src) :
                PlayFabClientGetAdPlacementsRequest{ src },
                m_appId{ src.m_appId },
                m_identifier{ src.m_identifier }
            {

                appId = m_appId.empty() ? nullptr : m_appId.data();
                identifier = m_identifier ? m_identifier.operator->() : nullptr;
            }

            ~GetAdPlacementsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AppId", m_appId, appId);
                JsonUtils:: ObjectGetMember(input, "Identifier", m_identifier, identifier);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetAdPlacementsRequest>(*this);
            }

        private:
            String m_appId;
            StdExtra::optional<NameIdentifier> m_identifier;
        };

        struct GetAdPlacementsResult : public PlayFabClientGetAdPlacementsResult, public BaseResult
        {
            GetAdPlacementsResult() : PlayFabClientGetAdPlacementsResult{}
            {
            }

            GetAdPlacementsResult(const GetAdPlacementsResult& src) :
                PlayFabClientGetAdPlacementsResult{ src },
                m_adPlacements{ src.m_adPlacements }
            {

                adPlacements = m_adPlacements.Empty() ? nullptr : m_adPlacements.Data();
            }

            ~GetAdPlacementsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdPlacements", m_adPlacements, adPlacements, adPlacementsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetAdPlacementsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientAdPlacementDetails, AdPlacementDetails> m_adPlacements;
        };

        struct GetCatalogItemsRequest : public PlayFabClientGetCatalogItemsRequest, public BaseRequest
        {
            GetCatalogItemsRequest() : PlayFabClientGetCatalogItemsRequest{}
            {
            }

            GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
                PlayFabClientGetCatalogItemsRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetCatalogItemsRequest>(*this);
            }

        private:
            String m_catalogVersion;
        };

        struct GetCatalogItemsResult : public PlayFabClientGetCatalogItemsResult, public BaseResult
        {
            GetCatalogItemsResult() : PlayFabClientGetCatalogItemsResult{}
            {
            }

            GetCatalogItemsResult(const GetCatalogItemsResult& src) :
                PlayFabClientGetCatalogItemsResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetCatalogItemsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientCatalogItem, CatalogItem> m_catalog;
        };

        struct GetCharacterDataRequest : public PlayFabClientGetCharacterDataRequest, public BaseRequest
        {
            GetCharacterDataRequest() : PlayFabClientGetCharacterDataRequest{}
            {
            }

            GetCharacterDataRequest(const GetCharacterDataRequest& src) :
                PlayFabClientGetCharacterDataRequest{ src },
                m_characterId{ src.m_characterId },
                m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
                m_keys{ src.m_keys },
                m_playFabId{ src.m_playFabId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetCharacterDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterDataRequest>(*this);
            }

        private:
            String m_characterId;
            StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
            PointerArray<const char, String> m_keys;
            String m_playFabId;
        };

        struct UserDataRecord : public PlayFabClientUserDataRecord, public BaseModel
        {
            UserDataRecord() : PlayFabClientUserDataRecord{}
            {
            }

            UserDataRecord(const UserDataRecord& src) :
                PlayFabClientUserDataRecord{ src },
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
                return JsonUtils::ToJson<PlayFabClientUserDataRecord>(*this);
            }

        private:

            StdExtra::optional<PlayFabClientUserDataPermission> m_permission;
            String m_value;
        };

        struct GetCharacterDataResult : public PlayFabClientGetCharacterDataResult, public BaseResult
        {
            GetCharacterDataResult() : PlayFabClientGetCharacterDataResult{}
            {
            }

            GetCharacterDataResult(const GetCharacterDataResult& src) :
                PlayFabClientGetCharacterDataResult{ src },
                m_characterId{ src.m_characterId },
                m_data{ src.m_data }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetCharacterDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterDataResult>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabClientUserDataRecordDictionaryEntry, UserDataRecord> m_data;

        };

        struct GetCharacterInventoryRequest : public PlayFabClientGetCharacterInventoryRequest, public BaseRequest
        {
            GetCharacterInventoryRequest() : PlayFabClientGetCharacterInventoryRequest{}
            {
            }

            GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src) :
                PlayFabClientGetCharacterInventoryRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetCharacterInventoryRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterInventoryRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct VirtualCurrencyRechargeTime : public PlayFabClientVirtualCurrencyRechargeTime, public BaseModel
        {
            VirtualCurrencyRechargeTime() : PlayFabClientVirtualCurrencyRechargeTime{}
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
                return JsonUtils::ToJson<PlayFabClientVirtualCurrencyRechargeTime>(*this);
            }

        private:



        };

        struct GetCharacterInventoryResult : public PlayFabClientGetCharacterInventoryResult, public BaseResult
        {
            GetCharacterInventoryResult() : PlayFabClientGetCharacterInventoryResult{}
            {
            }

            GetCharacterInventoryResult(const GetCharacterInventoryResult& src) :
                PlayFabClientGetCharacterInventoryResult{ src },
                m_characterId{ src.m_characterId },
                m_inventory{ src.m_inventory },
                m_virtualCurrency{ src.m_virtualCurrency },
                m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
                virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
                virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
            }

            ~GetCharacterInventoryResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterInventoryResult>(*this);
            }

        private:
            String m_characterId;
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_inventory;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
            AssociativeArray<PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
        };

        struct GetCharacterLeaderboardRequest : public PlayFabClientGetCharacterLeaderboardRequest, public BaseRequest
        {
            GetCharacterLeaderboardRequest() : PlayFabClientGetCharacterLeaderboardRequest{}
            {
            }

            GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
                PlayFabClientGetCharacterLeaderboardRequest{ src },
                m_characterType{ src.m_characterType },
                m_maxResultsCount{ src.m_maxResultsCount },
                m_statisticName{ src.m_statisticName }
            {

                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
                maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetCharacterLeaderboardRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "StartPosition", startPosition);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterLeaderboardRequest>(*this);
            }

        private:
            String m_characterType;
            StdExtra::optional<int32_t> m_maxResultsCount;

            String m_statisticName;
        };

        struct GetCharacterLeaderboardResult : public PlayFabClientGetCharacterLeaderboardResult, public BaseResult
        {
            GetCharacterLeaderboardResult() : PlayFabClientGetCharacterLeaderboardResult{}
            {
            }

            GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
                PlayFabClientGetCharacterLeaderboardResult{ src },
                m_leaderboard{ src.m_leaderboard }
            {

                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
            }

            ~GetCharacterLeaderboardResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterLeaderboardResult>(*this);
            }

        private:
            PointerArray<PlayFabClientCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
        };

        struct GetCharacterStatisticsRequest : public PlayFabClientGetCharacterStatisticsRequest, public BaseRequest
        {
            GetCharacterStatisticsRequest() : PlayFabClientGetCharacterStatisticsRequest{}
            {
            }

            GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src) :
                PlayFabClientGetCharacterStatisticsRequest{ src },
                m_characterId{ src.m_characterId }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
            }

            ~GetCharacterStatisticsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterStatisticsRequest>(*this);
            }

        private:
            String m_characterId;
        };

        struct GetCharacterStatisticsResult : public PlayFabClientGetCharacterStatisticsResult, public BaseResult
        {
            GetCharacterStatisticsResult() : PlayFabClientGetCharacterStatisticsResult{}
            {
            }

            GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src) :
                PlayFabClientGetCharacterStatisticsResult{ src },
                m_characterStatistics{ src.m_characterStatistics }
            {

                characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
            }

            ~GetCharacterStatisticsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetCharacterStatisticsResult>(*this);
            }

        private:
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
        };

        struct GetContentDownloadUrlRequest : public PlayFabClientGetContentDownloadUrlRequest, public BaseRequest
        {
            GetContentDownloadUrlRequest() : PlayFabClientGetContentDownloadUrlRequest{}
            {
            }

            GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
                PlayFabClientGetContentDownloadUrlRequest{ src },
                m_httpMethod{ src.m_httpMethod },
                m_key{ src.m_key },
                m_thruCDN{ src.m_thruCDN }
            {

                httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
                key = m_key.empty() ? nullptr : m_key.data();
                thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
            }

            ~GetContentDownloadUrlRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "HttpMethod", m_httpMethod, httpMethod);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "ThruCDN", m_thruCDN, thruCDN);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetContentDownloadUrlRequest>(*this);
            }

        private:
            String m_httpMethod;
            String m_key;
            StdExtra::optional<bool> m_thruCDN;
        };

        struct GetContentDownloadUrlResult : public PlayFabClientGetContentDownloadUrlResult, public BaseResult
        {
            GetContentDownloadUrlResult() : PlayFabClientGetContentDownloadUrlResult{}
            {
            }

            GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
                PlayFabClientGetContentDownloadUrlResult{ src },
                m_uRL{ src.m_uRL }
            {

                uRL = m_uRL.empty() ? nullptr : m_uRL.data();
            }

            ~GetContentDownloadUrlResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "URL", m_uRL, uRL);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetContentDownloadUrlResult>(*this);
            }

        private:
            String m_uRL;
        };

        struct PlayerProfileViewConstraints : public PlayFabClientPlayerProfileViewConstraints, public BaseModel
        {
            PlayerProfileViewConstraints() : PlayFabClientPlayerProfileViewConstraints{}
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
                return JsonUtils::ToJson<PlayFabClientPlayerProfileViewConstraints>(*this);
            }

        private:

















        };

        struct GetFriendLeaderboardAroundPlayerRequest : public PlayFabClientGetFriendLeaderboardAroundPlayerRequest, public BaseRequest
        {
            GetFriendLeaderboardAroundPlayerRequest() : PlayFabClientGetFriendLeaderboardAroundPlayerRequest{}
            {
            }

            GetFriendLeaderboardAroundPlayerRequest(const GetFriendLeaderboardAroundPlayerRequest& src) :
                PlayFabClientGetFriendLeaderboardAroundPlayerRequest{ src },
                m_customTags{ src.m_customTags },
                m_includeFacebookFriends{ src.m_includeFacebookFriends },
                m_includeSteamFriends{ src.m_includeSteamFriends },
                m_maxResultsCount{ src.m_maxResultsCount },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version },
                m_xboxToken{ src.m_xboxToken }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
                includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
                maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~GetFriendLeaderboardAroundPlayerRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
                JsonUtils:: ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetFriendLeaderboardAroundPlayerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_includeFacebookFriends;
            StdExtra::optional<bool> m_includeSteamFriends;
            StdExtra::optional<int32_t> m_maxResultsCount;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
            String m_xboxToken;
        };

        struct PlayerLeaderboardEntry : public PlayFabClientPlayerLeaderboardEntry, public BaseModel
        {
            PlayerLeaderboardEntry() : PlayFabClientPlayerLeaderboardEntry{}
            {
            }

            PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
                PlayFabClientPlayerLeaderboardEntry{ src },
                m_displayName{ src.m_displayName },
                m_playFabId{ src.m_playFabId },
                m_profile{ src.m_profile }
            {

                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profile = m_profile ? m_profile.operator->() : nullptr;
            }

            ~PlayerLeaderboardEntry() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Position", position);
                JsonUtils:: ObjectGetMember(input, "Profile", m_profile, profile);
                JsonUtils:: ObjectGetMember(input, "StatValue", statValue);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPlayerLeaderboardEntry>(*this);
            }

        private:
            String m_displayName;
            String m_playFabId;

            StdExtra::optional<PlayerProfileModel> m_profile;

        };

        struct GetFriendLeaderboardAroundPlayerResult : public PlayFabClientGetFriendLeaderboardAroundPlayerResult, public BaseResult
        {
            GetFriendLeaderboardAroundPlayerResult() : PlayFabClientGetFriendLeaderboardAroundPlayerResult{}
            {
            }

            GetFriendLeaderboardAroundPlayerResult(const GetFriendLeaderboardAroundPlayerResult& src) :
                PlayFabClientGetFriendLeaderboardAroundPlayerResult{ src },
                m_leaderboard{ src.m_leaderboard },
                m_nextReset{ src.m_nextReset }
            {

                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
                nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
            }

            ~GetFriendLeaderboardAroundPlayerResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
                JsonUtils:: ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetFriendLeaderboardAroundPlayerResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
            StdExtra::optional<time_t> m_nextReset;

        };

        struct GetFriendLeaderboardRequest : public PlayFabClientGetFriendLeaderboardRequest, public BaseRequest
        {
            GetFriendLeaderboardRequest() : PlayFabClientGetFriendLeaderboardRequest{}
            {
            }

            GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src) :
                PlayFabClientGetFriendLeaderboardRequest{ src },
                m_customTags{ src.m_customTags },
                m_includeFacebookFriends{ src.m_includeFacebookFriends },
                m_includeSteamFriends{ src.m_includeSteamFriends },
                m_maxResultsCount{ src.m_maxResultsCount },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version },
                m_xboxToken{ src.m_xboxToken }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
                includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
                maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~GetFriendLeaderboardRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
                JsonUtils:: ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StartPosition", startPosition);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetFriendLeaderboardRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_includeFacebookFriends;
            StdExtra::optional<bool> m_includeSteamFriends;
            StdExtra::optional<int32_t> m_maxResultsCount;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;

            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
            String m_xboxToken;
        };

        struct GetFriendsListRequest : public PlayFabClientGetFriendsListRequest, public BaseRequest
        {
            GetFriendsListRequest() : PlayFabClientGetFriendsListRequest{}
            {
            }

            GetFriendsListRequest(const GetFriendsListRequest& src) :
                PlayFabClientGetFriendsListRequest{ src },
                m_customTags{ src.m_customTags },
                m_includeFacebookFriends{ src.m_includeFacebookFriends },
                m_includeSteamFriends{ src.m_includeSteamFriends },
                m_profileConstraints{ src.m_profileConstraints },
                m_xboxToken{ src.m_xboxToken }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
                includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~GetFriendsListRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
                JsonUtils:: ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetFriendsListRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_includeFacebookFriends;
            StdExtra::optional<bool> m_includeSteamFriends;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_xboxToken;
        };

        struct GetFriendsListResult : public PlayFabClientGetFriendsListResult, public BaseResult
        {
            GetFriendsListResult() : PlayFabClientGetFriendsListResult{}
            {
            }

            GetFriendsListResult(const GetFriendsListResult& src) :
                PlayFabClientGetFriendsListResult{ src },
                m_friends{ src.m_friends }
            {

                friends = m_friends.Empty() ? nullptr : m_friends.Data();
            }

            ~GetFriendsListResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Friends", m_friends, friends, friendsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetFriendsListResult>(*this);
            }

        private:
            PointerArray<PlayFabClientFriendInfo, FriendInfo> m_friends;
        };

        struct GetLeaderboardAroundCharacterRequest : public PlayFabClientGetLeaderboardAroundCharacterRequest, public BaseRequest
        {
            GetLeaderboardAroundCharacterRequest() : PlayFabClientGetLeaderboardAroundCharacterRequest{}
            {
            }

            GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src) :
                PlayFabClientGetLeaderboardAroundCharacterRequest{ src },
                m_characterId{ src.m_characterId },
                m_characterType{ src.m_characterType },
                m_maxResultsCount{ src.m_maxResultsCount },
                m_statisticName{ src.m_statisticName }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
                maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetLeaderboardAroundCharacterRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundCharacterRequest>(*this);
            }

        private:
            String m_characterId;
            String m_characterType;
            StdExtra::optional<int32_t> m_maxResultsCount;
            String m_statisticName;
        };

        struct GetLeaderboardAroundCharacterResult : public PlayFabClientGetLeaderboardAroundCharacterResult, public BaseResult
        {
            GetLeaderboardAroundCharacterResult() : PlayFabClientGetLeaderboardAroundCharacterResult{}
            {
            }

            GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
                PlayFabClientGetLeaderboardAroundCharacterResult{ src },
                m_leaderboard{ src.m_leaderboard }
            {

                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
            }

            ~GetLeaderboardAroundCharacterResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundCharacterResult>(*this);
            }

        private:
            PointerArray<PlayFabClientCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
        };

        struct GetLeaderboardAroundPlayerRequest : public PlayFabClientGetLeaderboardAroundPlayerRequest, public BaseRequest
        {
            GetLeaderboardAroundPlayerRequest() : PlayFabClientGetLeaderboardAroundPlayerRequest{}
            {
            }

            GetLeaderboardAroundPlayerRequest(const GetLeaderboardAroundPlayerRequest& src) :
                PlayFabClientGetLeaderboardAroundPlayerRequest{ src },
                m_customTags{ src.m_customTags },
                m_maxResultsCount{ src.m_maxResultsCount },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~GetLeaderboardAroundPlayerRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundPlayerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_maxResultsCount;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
        };

        struct GetLeaderboardAroundPlayerResult : public PlayFabClientGetLeaderboardAroundPlayerResult, public BaseResult
        {
            GetLeaderboardAroundPlayerResult() : PlayFabClientGetLeaderboardAroundPlayerResult{}
            {
            }

            GetLeaderboardAroundPlayerResult(const GetLeaderboardAroundPlayerResult& src) :
                PlayFabClientGetLeaderboardAroundPlayerResult{ src },
                m_leaderboard{ src.m_leaderboard },
                m_nextReset{ src.m_nextReset }
            {

                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
                nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
            }

            ~GetLeaderboardAroundPlayerResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
                JsonUtils:: ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundPlayerResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
            StdExtra::optional<time_t> m_nextReset;

        };

        struct GetLeaderboardForUsersCharactersRequest : public PlayFabClientGetLeaderboardForUsersCharactersRequest, public BaseRequest
        {
            GetLeaderboardForUsersCharactersRequest() : PlayFabClientGetLeaderboardForUsersCharactersRequest{}
            {
            }

            GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src) :
                PlayFabClientGetLeaderboardForUsersCharactersRequest{ src },
                m_statisticName{ src.m_statisticName }
            {

                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetLeaderboardForUsersCharactersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardForUsersCharactersRequest>(*this);
            }

        private:

            String m_statisticName;
        };

        struct GetLeaderboardForUsersCharactersResult : public PlayFabClientGetLeaderboardForUsersCharactersResult, public BaseResult
        {
            GetLeaderboardForUsersCharactersResult() : PlayFabClientGetLeaderboardForUsersCharactersResult{}
            {
            }

            GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
                PlayFabClientGetLeaderboardForUsersCharactersResult{ src },
                m_leaderboard{ src.m_leaderboard }
            {

                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
            }

            ~GetLeaderboardForUsersCharactersResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardForUsersCharactersResult>(*this);
            }

        private:
            PointerArray<PlayFabClientCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
        };

        struct GetLeaderboardRequest : public PlayFabClientGetLeaderboardRequest, public BaseRequest
        {
            GetLeaderboardRequest() : PlayFabClientGetLeaderboardRequest{}
            {
            }

            GetLeaderboardRequest(const GetLeaderboardRequest& src) :
                PlayFabClientGetLeaderboardRequest{ src },
                m_customTags{ src.m_customTags },
                m_maxResultsCount{ src.m_maxResultsCount },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~GetLeaderboardRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StartPosition", startPosition);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_maxResultsCount;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;

            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
        };

        struct GetLeaderboardResult : public PlayFabClientGetLeaderboardResult, public BaseResult
        {
            GetLeaderboardResult() : PlayFabClientGetLeaderboardResult{}
            {
            }

            GetLeaderboardResult(const GetLeaderboardResult& src) :
                PlayFabClientGetLeaderboardResult{ src },
                m_leaderboard{ src.m_leaderboard },
                m_nextReset{ src.m_nextReset }
            {

                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
                nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
            }

            ~GetLeaderboardResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
                JsonUtils:: ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetLeaderboardResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
            StdExtra::optional<time_t> m_nextReset;

        };

        struct GetPaymentTokenRequest : public PlayFabClientGetPaymentTokenRequest, public BaseRequest
        {
            GetPaymentTokenRequest() : PlayFabClientGetPaymentTokenRequest{}
            {
            }

            GetPaymentTokenRequest(const GetPaymentTokenRequest& src) :
                PlayFabClientGetPaymentTokenRequest{ src },
                m_tokenProvider{ src.m_tokenProvider }
            {

                tokenProvider = m_tokenProvider.empty() ? nullptr : m_tokenProvider.data();
            }

            ~GetPaymentTokenRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TokenProvider", m_tokenProvider, tokenProvider);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPaymentTokenRequest>(*this);
            }

        private:
            String m_tokenProvider;
        };

        struct GetPaymentTokenResult : public PlayFabClientGetPaymentTokenResult, public BaseResult
        {
            GetPaymentTokenResult() : PlayFabClientGetPaymentTokenResult{}
            {
            }

            GetPaymentTokenResult(const GetPaymentTokenResult& src) :
                PlayFabClientGetPaymentTokenResult{ src },
                m_orderId{ src.m_orderId },
                m_providerToken{ src.m_providerToken }
            {

                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
            }

            ~GetPaymentTokenResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "ProviderToken", m_providerToken, providerToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPaymentTokenResult>(*this);
            }

        private:
            String m_orderId;
            String m_providerToken;
        };

        struct GetPhotonAuthenticationTokenRequest : public PlayFabClientGetPhotonAuthenticationTokenRequest, public BaseRequest
        {
            GetPhotonAuthenticationTokenRequest() : PlayFabClientGetPhotonAuthenticationTokenRequest{}
            {
            }

            GetPhotonAuthenticationTokenRequest(const GetPhotonAuthenticationTokenRequest& src) :
                PlayFabClientGetPhotonAuthenticationTokenRequest{ src },
                m_photonApplicationId{ src.m_photonApplicationId }
            {

                photonApplicationId = m_photonApplicationId.empty() ? nullptr : m_photonApplicationId.data();
            }

            ~GetPhotonAuthenticationTokenRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PhotonApplicationId", m_photonApplicationId, photonApplicationId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPhotonAuthenticationTokenRequest>(*this);
            }

        private:
            String m_photonApplicationId;
        };

        struct GetPhotonAuthenticationTokenResult : public PlayFabClientGetPhotonAuthenticationTokenResult, public BaseResult
        {
            GetPhotonAuthenticationTokenResult() : PlayFabClientGetPhotonAuthenticationTokenResult{}
            {
            }

            GetPhotonAuthenticationTokenResult(const GetPhotonAuthenticationTokenResult& src) :
                PlayFabClientGetPhotonAuthenticationTokenResult{ src },
                m_photonCustomAuthenticationToken{ src.m_photonCustomAuthenticationToken }
            {

                photonCustomAuthenticationToken = m_photonCustomAuthenticationToken.empty() ? nullptr : m_photonCustomAuthenticationToken.data();
            }

            ~GetPhotonAuthenticationTokenResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PhotonCustomAuthenticationToken", m_photonCustomAuthenticationToken, photonCustomAuthenticationToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPhotonAuthenticationTokenResult>(*this);
            }

        private:
            String m_photonCustomAuthenticationToken;
        };

        struct GetPlayerCombinedInfoRequestParams : public PlayFabClientGetPlayerCombinedInfoRequestParams, public BaseModel
        {
            GetPlayerCombinedInfoRequestParams() : PlayFabClientGetPlayerCombinedInfoRequestParams{}
            {
            }

            GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src) :
                PlayFabClientGetPlayerCombinedInfoRequestParams{ src },
                m_playerStatisticNames{ src.m_playerStatisticNames },
                m_profileConstraints{ src.m_profileConstraints },
                m_titleDataKeys{ src.m_titleDataKeys },
                m_userDataKeys{ src.m_userDataKeys },
                m_userReadOnlyDataKeys{ src.m_userReadOnlyDataKeys }
            {

                playerStatisticNames = m_playerStatisticNames.Empty() ? nullptr : m_playerStatisticNames.Data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                titleDataKeys = m_titleDataKeys.Empty() ? nullptr : m_titleDataKeys.Data();
                userDataKeys = m_userDataKeys.Empty() ? nullptr : m_userDataKeys.Data();
                userReadOnlyDataKeys = m_userReadOnlyDataKeys.Empty() ? nullptr : m_userReadOnlyDataKeys.Data();
            }

            ~GetPlayerCombinedInfoRequestParams() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GetCharacterInventories", getCharacterInventories);
                JsonUtils:: ObjectGetMember(input, "GetCharacterList", getCharacterList);
                JsonUtils:: ObjectGetMember(input, "GetPlayerProfile", getPlayerProfile);
                JsonUtils:: ObjectGetMember(input, "GetPlayerStatistics", getPlayerStatistics);
                JsonUtils:: ObjectGetMember(input, "GetTitleData", getTitleData);
                JsonUtils:: ObjectGetMember(input, "GetUserAccountInfo", getUserAccountInfo);
                JsonUtils:: ObjectGetMember(input, "GetUserData", getUserData);
                JsonUtils:: ObjectGetMember(input, "GetUserInventory", getUserInventory);
                JsonUtils:: ObjectGetMember(input, "GetUserReadOnlyData", getUserReadOnlyData);
                JsonUtils:: ObjectGetMember(input, "GetUserVirtualCurrency", getUserVirtualCurrency);
                JsonUtils:: ObjectGetMember(input, "PlayerStatisticNames", m_playerStatisticNames, playerStatisticNames, playerStatisticNamesCount);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "TitleDataKeys", m_titleDataKeys, titleDataKeys, titleDataKeysCount);
                JsonUtils:: ObjectGetMember(input, "UserDataKeys", m_userDataKeys, userDataKeys, userDataKeysCount);
                JsonUtils:: ObjectGetMember(input, "UserReadOnlyDataKeys", m_userReadOnlyDataKeys, userReadOnlyDataKeys, userReadOnlyDataKeysCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoRequestParams>(*this);
            }

        private:










            PointerArray<const char, String> m_playerStatisticNames;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            PointerArray<const char, String> m_titleDataKeys;
            PointerArray<const char, String> m_userDataKeys;
            PointerArray<const char, String> m_userReadOnlyDataKeys;
        };

        struct GetPlayerCombinedInfoRequest : public PlayFabClientGetPlayerCombinedInfoRequest, public BaseRequest
        {
            GetPlayerCombinedInfoRequest() : PlayFabClientGetPlayerCombinedInfoRequest{}
            {
            }

            GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src) :
                PlayFabClientGetPlayerCombinedInfoRequest{ src },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playFabId{ src.m_playFabId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = (PlayFabClientGetPlayerCombinedInfoRequestParams*)&m_infoRequestParameters;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerCombinedInfoRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            GetPlayerCombinedInfoRequestParams m_infoRequestParameters;
            String m_playFabId;
        };

        struct StatisticValue : public PlayFabClientStatisticValue, public BaseModel
        {
            StatisticValue() : PlayFabClientStatisticValue{}
            {
            }

            StatisticValue(const StatisticValue& src) :
                PlayFabClientStatisticValue{ src },
                m_statisticName{ src.m_statisticName }
            {

                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~StatisticValue() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Value", value);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStatisticValue>(*this);
            }

        private:
            String m_statisticName;


        };

        struct GetPlayerCombinedInfoResultPayload : public PlayFabClientGetPlayerCombinedInfoResultPayload, public BaseModel
        {
            GetPlayerCombinedInfoResultPayload() : PlayFabClientGetPlayerCombinedInfoResultPayload{}
            {
            }

            GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src) :
                PlayFabClientGetPlayerCombinedInfoResultPayload{ src },
                m_accountInfo{ src.m_accountInfo },
                m_characterInventories{ src.m_characterInventories },
                m_characterList{ src.m_characterList },
                m_playerProfile{ src.m_playerProfile },
                m_playerStatistics{ src.m_playerStatistics },
                m_titleData{ src.m_titleData },
                m_userData{ src.m_userData },
                m_userInventory{ src.m_userInventory },
                m_userReadOnlyData{ src.m_userReadOnlyData },
                m_userVirtualCurrency{ src.m_userVirtualCurrency },
                m_userVirtualCurrencyRechargeTimes{ src.m_userVirtualCurrencyRechargeTimes }
            {

                accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
                characterInventories = m_characterInventories.Empty() ? nullptr : m_characterInventories.Data();
                characterList = m_characterList.Empty() ? nullptr : m_characterList.Data();
                playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
                playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
                titleData = m_titleData.Empty() ? nullptr : m_titleData.Data();
                userData = m_userData.Empty() ? nullptr : m_userData.Data();
                userInventory = m_userInventory.Empty() ? nullptr : m_userInventory.Data();
                userReadOnlyData = m_userReadOnlyData.Empty() ? nullptr : m_userReadOnlyData.Data();
                userVirtualCurrency = m_userVirtualCurrency.Empty() ? nullptr : m_userVirtualCurrency.Data();
                userVirtualCurrencyRechargeTimes = m_userVirtualCurrencyRechargeTimes.Empty() ? nullptr : m_userVirtualCurrencyRechargeTimes.Data();
            }

            ~GetPlayerCombinedInfoResultPayload() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccountInfo", m_accountInfo, accountInfo);
                JsonUtils:: ObjectGetMember(input, "CharacterInventories", m_characterInventories, characterInventories, characterInventoriesCount);
                JsonUtils:: ObjectGetMember(input, "CharacterList", m_characterList, characterList, characterListCount);
                JsonUtils:: ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
                JsonUtils:: ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
                JsonUtils:: ObjectGetMember(input, "TitleData", m_titleData, titleData, titleDataCount);
                JsonUtils:: ObjectGetMember(input, "UserData", m_userData, userData, userDataCount);
                JsonUtils:: ObjectGetMember(input, "UserDataVersion", userDataVersion);
                JsonUtils:: ObjectGetMember(input, "UserInventory", m_userInventory, userInventory, userInventoryCount);
                JsonUtils:: ObjectGetMember(input, "UserReadOnlyData", m_userReadOnlyData, userReadOnlyData, userReadOnlyDataCount);
                JsonUtils:: ObjectGetMember(input, "UserReadOnlyDataVersion", userReadOnlyDataVersion);
                JsonUtils:: ObjectGetMember(input, "UserVirtualCurrency", m_userVirtualCurrency, userVirtualCurrency, userVirtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "UserVirtualCurrencyRechargeTimes", m_userVirtualCurrencyRechargeTimes, userVirtualCurrencyRechargeTimes, userVirtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoResultPayload>(*this);
            }

        private:
            StdExtra::optional<UserAccountInfo> m_accountInfo;
            PointerArray<PlayFabClientCharacterInventory, CharacterInventory> m_characterInventories;
            PointerArray<PlayFabClientCharacterResult, CharacterResult> m_characterList;
            StdExtra::optional<PlayerProfileModel> m_playerProfile;
            PointerArray<PlayFabClientStatisticValue, StatisticValue> m_playerStatistics;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_titleData;
            AssociativeArray<PlayFabClientUserDataRecordDictionaryEntry, UserDataRecord> m_userData;

            PointerArray<PlayFabClientItemInstance, ItemInstance> m_userInventory;
            AssociativeArray<PlayFabClientUserDataRecordDictionaryEntry, UserDataRecord> m_userReadOnlyData;

            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_userVirtualCurrency;
            AssociativeArray<PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_userVirtualCurrencyRechargeTimes;
        };

        struct GetPlayerCombinedInfoResult : public PlayFabClientGetPlayerCombinedInfoResult, public BaseResult
        {
            GetPlayerCombinedInfoResult() : PlayFabClientGetPlayerCombinedInfoResult{}
            {
            }

            GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src) :
                PlayFabClientGetPlayerCombinedInfoResult{ src },
                m_infoResultPayload{ src.m_infoResultPayload },
                m_playFabId{ src.m_playFabId }
            {

                infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerCombinedInfoResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "InfoResultPayload", m_infoResultPayload, infoResultPayload);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoResult>(*this);
            }

        private:
            StdExtra::optional<GetPlayerCombinedInfoResultPayload> m_infoResultPayload;
            String m_playFabId;
        };

        struct GetPlayerProfileRequest : public PlayFabClientGetPlayerProfileRequest, public BaseRequest
        {
            GetPlayerProfileRequest() : PlayFabClientGetPlayerProfileRequest{}
            {
            }

            GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
                PlayFabClientGetPlayerProfileRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerProfileRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
        };

        struct GetPlayerProfileResult : public PlayFabClientGetPlayerProfileResult, public BaseResult
        {
            GetPlayerProfileResult() : PlayFabClientGetPlayerProfileResult{}
            {
            }

            GetPlayerProfileResult(const GetPlayerProfileResult& src) :
                PlayFabClientGetPlayerProfileResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerProfileResult>(*this);
            }

        private:
            StdExtra::optional<PlayerProfileModel> m_playerProfile;
        };

        struct GetPlayerSegmentsRequest : public PlayFabClientGetPlayerSegmentsRequest, public BaseRequest
        {
            GetPlayerSegmentsRequest() : PlayFabClientGetPlayerSegmentsRequest{}
            {
            }

            GetPlayerSegmentsRequest(const GetPlayerSegmentsRequest&) = default;

            ~GetPlayerSegmentsRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerSegmentsRequest>(*this);
            }

        private:
        };

        struct GetSegmentResult : public PlayFabClientGetSegmentResult, public BaseResult
        {
            GetSegmentResult() : PlayFabClientGetSegmentResult{}
            {
            }

            GetSegmentResult(const GetSegmentResult& src) :
                PlayFabClientGetSegmentResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetSegmentResult>(*this);
            }

        private:
            String m_aBTestParent;
            String m_id;
            String m_name;
        };

        struct GetPlayerSegmentsResult : public PlayFabClientGetPlayerSegmentsResult, public BaseResult
        {
            GetPlayerSegmentsResult() : PlayFabClientGetPlayerSegmentsResult{}
            {
            }

            GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
                PlayFabClientGetPlayerSegmentsResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerSegmentsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientGetSegmentResult, GetSegmentResult> m_segments;
        };

        struct StatisticNameVersion : public PlayFabClientStatisticNameVersion, public BaseModel
        {
            StatisticNameVersion() : PlayFabClientStatisticNameVersion{}
            {
            }

            StatisticNameVersion(const StatisticNameVersion& src) :
                PlayFabClientStatisticNameVersion{ src },
                m_statisticName{ src.m_statisticName }
            {

                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~StatisticNameVersion() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStatisticNameVersion>(*this);
            }

        private:
            String m_statisticName;

        };

        struct GetPlayerStatisticsRequest : public PlayFabClientGetPlayerStatisticsRequest, public BaseRequest
        {
            GetPlayerStatisticsRequest() : PlayFabClientGetPlayerStatisticsRequest{}
            {
            }

            GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src) :
                PlayFabClientGetPlayerStatisticsRequest{ src },
                m_customTags{ src.m_customTags },
                m_statisticNames{ src.m_statisticNames },
                m_statisticNameVersions{ src.m_statisticNameVersions }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
                statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
            }

            ~GetPlayerStatisticsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticNames", m_statisticNames, statisticNames, statisticNamesCount);
                JsonUtils:: ObjectGetMember(input, "StatisticNameVersions", m_statisticNameVersions, statisticNameVersions, statisticNameVersionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<const char, String> m_statisticNames;
            PointerArray<PlayFabClientStatisticNameVersion, StatisticNameVersion> m_statisticNameVersions;
        };

        struct GetPlayerStatisticsResult : public PlayFabClientGetPlayerStatisticsResult, public BaseResult
        {
            GetPlayerStatisticsResult() : PlayFabClientGetPlayerStatisticsResult{}
            {
            }

            GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src) :
                PlayFabClientGetPlayerStatisticsResult{ src },
                m_statistics{ src.m_statistics }
            {

                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
            }

            ~GetPlayerStatisticsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientStatisticValue, StatisticValue> m_statistics;
        };

        struct GetPlayerStatisticVersionsRequest : public PlayFabClientGetPlayerStatisticVersionsRequest, public BaseRequest
        {
            GetPlayerStatisticVersionsRequest() : PlayFabClientGetPlayerStatisticVersionsRequest{}
            {
            }

            GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
                PlayFabClientGetPlayerStatisticVersionsRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticVersionsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_statisticName;
        };

        struct PlayerStatisticVersion : public PlayFabClientPlayerStatisticVersion, public BaseModel
        {
            PlayerStatisticVersion() : PlayFabClientPlayerStatisticVersion{}
            {
            }

            PlayerStatisticVersion(const PlayerStatisticVersion& src) :
                PlayFabClientPlayerStatisticVersion{ src },
                m_deactivationTime{ src.m_deactivationTime },
                m_scheduledActivationTime{ src.m_scheduledActivationTime },
                m_scheduledDeactivationTime{ src.m_scheduledDeactivationTime },
                m_statisticName{ src.m_statisticName }
            {

                deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
                scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
                scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~PlayerStatisticVersion() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActivationTime", activationTime, true);
                JsonUtils:: ObjectGetMember(input, "DeactivationTime", m_deactivationTime, deactivationTime, true);
                JsonUtils:: ObjectGetMember(input, "ScheduledActivationTime", m_scheduledActivationTime, scheduledActivationTime, true);
                JsonUtils:: ObjectGetMember(input, "ScheduledDeactivationTime", m_scheduledDeactivationTime, scheduledDeactivationTime, true);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPlayerStatisticVersion>(*this);
            }

        private:

            StdExtra::optional<time_t> m_deactivationTime;
            StdExtra::optional<time_t> m_scheduledActivationTime;
            StdExtra::optional<time_t> m_scheduledDeactivationTime;
            String m_statisticName;

        };

        struct GetPlayerStatisticVersionsResult : public PlayFabClientGetPlayerStatisticVersionsResult, public BaseResult
        {
            GetPlayerStatisticVersionsResult() : PlayFabClientGetPlayerStatisticVersionsResult{}
            {
            }

            GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
                PlayFabClientGetPlayerStatisticVersionsResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticVersionsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
        };

        struct GetPlayerTagsRequest : public PlayFabClientGetPlayerTagsRequest, public BaseRequest
        {
            GetPlayerTagsRequest() : PlayFabClientGetPlayerTagsRequest{}
            {
            }

            GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
                PlayFabClientGetPlayerTagsRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerTagsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playfabNamespace;
            String m_playFabId;
        };

        struct GetPlayerTagsResult : public PlayFabClientGetPlayerTagsResult, public BaseResult
        {
            GetPlayerTagsResult() : PlayFabClientGetPlayerTagsResult{}
            {
            }

            GetPlayerTagsResult(const GetPlayerTagsResult& src) :
                PlayFabClientGetPlayerTagsResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPlayerTagsResult>(*this);
            }

        private:
            String m_playFabId;
            PointerArray<const char, String> m_tags;
        };

        struct GetPlayerTradesRequest : public PlayFabClientGetPlayerTradesRequest, public BaseRequest
        {
            GetPlayerTradesRequest() : PlayFabClientGetPlayerTradesRequest{}
            {
            }

            GetPlayerTradesRequest(const GetPlayerTradesRequest& src) :
                PlayFabClientGetPlayerTradesRequest{ src },
                m_statusFilter{ src.m_statusFilter }
            {

                statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
            }

            ~GetPlayerTradesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatusFilter", m_statusFilter, statusFilter);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerTradesRequest>(*this);
            }

        private:
            StdExtra::optional<PlayFabClientTradeStatus> m_statusFilter;
        };

        struct GetPlayerTradesResponse : public PlayFabClientGetPlayerTradesResponse, public BaseResult
        {
            GetPlayerTradesResponse() : PlayFabClientGetPlayerTradesResponse{}
            {
            }

            GetPlayerTradesResponse(const GetPlayerTradesResponse& src) :
                PlayFabClientGetPlayerTradesResponse{ src },
                m_acceptedTrades{ src.m_acceptedTrades },
                m_openedTrades{ src.m_openedTrades }
            {

                acceptedTrades = m_acceptedTrades.Empty() ? nullptr : m_acceptedTrades.Data();
                openedTrades = m_openedTrades.Empty() ? nullptr : m_openedTrades.Data();
            }

            ~GetPlayerTradesResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AcceptedTrades", m_acceptedTrades, acceptedTrades, acceptedTradesCount);
                JsonUtils:: ObjectGetMember(input, "OpenedTrades", m_openedTrades, openedTrades, openedTradesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayerTradesResponse>(*this);
            }

        private:
            PointerArray<PlayFabClientTradeInfo, TradeInfo> m_acceptedTrades;
            PointerArray<PlayFabClientTradeInfo, TradeInfo> m_openedTrades;
        };

        struct GetPlayFabIDsFromFacebookIDsRequest : public PlayFabClientGetPlayFabIDsFromFacebookIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromFacebookIDsRequest() : PlayFabClientGetPlayFabIDsFromFacebookIDsRequest{}
            {
            }

            GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromFacebookIDsRequest{ src },
                m_facebookIDs{ src.m_facebookIDs }
            {

                facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
            }

            ~GetPlayFabIDsFromFacebookIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookIDs", m_facebookIDs, facebookIDs, facebookIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_facebookIDs;
        };

        struct GetPlayFabIDsFromFacebookIDsResult : public PlayFabClientGetPlayFabIDsFromFacebookIDsResult, public BaseResult
        {
            GetPlayFabIDsFromFacebookIDsResult() : PlayFabClientGetPlayFabIDsFromFacebookIDsResult{}
            {
            }

            GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromFacebookIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromFacebookIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientFacebookPlayFabIdPair, FacebookPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest, public BaseRequest
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsRequest() : PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest{}
            {
            }

            GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src) :
                PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
                m_facebookInstantGamesIds{ src.m_facebookInstantGamesIds }
            {

                facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
            }

            ~GetPlayFabIDsFromFacebookInstantGamesIdsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesIds", m_facebookInstantGamesIds, facebookInstantGamesIds, facebookInstantGamesIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_facebookInstantGamesIds;
        };

        struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult, public BaseResult
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsResult() : PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult{}
            {
            }

            GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src) :
                PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromFacebookInstantGamesIdsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientFacebookInstantGamesPlayFabIdPair, FacebookInstantGamesPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromGameCenterIDsRequest : public PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromGameCenterIDsRequest() : PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest{}
            {
            }

            GetPlayFabIDsFromGameCenterIDsRequest(const GetPlayFabIDsFromGameCenterIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest{ src },
                m_gameCenterIDs{ src.m_gameCenterIDs }
            {

                gameCenterIDs = m_gameCenterIDs.Empty() ? nullptr : m_gameCenterIDs.Data();
            }

            ~GetPlayFabIDsFromGameCenterIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GameCenterIDs", m_gameCenterIDs, gameCenterIDs, gameCenterIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_gameCenterIDs;
        };

        struct GetPlayFabIDsFromGameCenterIDsResult : public PlayFabClientGetPlayFabIDsFromGameCenterIDsResult, public BaseResult
        {
            GetPlayFabIDsFromGameCenterIDsResult() : PlayFabClientGetPlayFabIDsFromGameCenterIDsResult{}
            {
            }

            GetPlayFabIDsFromGameCenterIDsResult(const GetPlayFabIDsFromGameCenterIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromGameCenterIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromGameCenterIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGameCenterIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientGameCenterPlayFabIdPair, GameCenterPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromGenericIDsRequest : public PlayFabClientGetPlayFabIDsFromGenericIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromGenericIDsRequest() : PlayFabClientGetPlayFabIDsFromGenericIDsRequest{}
            {
            }

            GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromGenericIDsRequest{ src },
                m_genericIDs{ src.m_genericIDs }
            {

                genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
            }

            ~GetPlayFabIDsFromGenericIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GenericIDs", m_genericIDs, genericIDs, genericIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGenericIDsRequest>(*this);
            }

        private:
            PointerArray<PlayFabClientGenericServiceId, GenericServiceId> m_genericIDs;
        };

        struct GetPlayFabIDsFromGenericIDsResult : public PlayFabClientGetPlayFabIDsFromGenericIDsResult, public BaseResult
        {
            GetPlayFabIDsFromGenericIDsResult() : PlayFabClientGetPlayFabIDsFromGenericIDsResult{}
            {
            }

            GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromGenericIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromGenericIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGenericIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientGenericPlayFabIdPair, GenericPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromGoogleIDsRequest : public PlayFabClientGetPlayFabIDsFromGoogleIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromGoogleIDsRequest() : PlayFabClientGetPlayFabIDsFromGoogleIDsRequest{}
            {
            }

            GetPlayFabIDsFromGoogleIDsRequest(const GetPlayFabIDsFromGoogleIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromGoogleIDsRequest{ src },
                m_googleIDs{ src.m_googleIDs }
            {

                googleIDs = m_googleIDs.Empty() ? nullptr : m_googleIDs.Data();
            }

            ~GetPlayFabIDsFromGoogleIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GoogleIDs", m_googleIDs, googleIDs, googleIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGoogleIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_googleIDs;
        };

        struct GooglePlayFabIdPair : public PlayFabClientGooglePlayFabIdPair, public BaseModel
        {
            GooglePlayFabIdPair() : PlayFabClientGooglePlayFabIdPair{}
            {
            }

            GooglePlayFabIdPair(const GooglePlayFabIdPair& src) :
                PlayFabClientGooglePlayFabIdPair{ src },
                m_googleId{ src.m_googleId },
                m_playFabId{ src.m_playFabId }
            {

                googleId = m_googleId.empty() ? nullptr : m_googleId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GooglePlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GoogleId", m_googleId, googleId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGooglePlayFabIdPair>(*this);
            }

        private:
            String m_googleId;
            String m_playFabId;
        };

        struct GetPlayFabIDsFromGoogleIDsResult : public PlayFabClientGetPlayFabIDsFromGoogleIDsResult, public BaseResult
        {
            GetPlayFabIDsFromGoogleIDsResult() : PlayFabClientGetPlayFabIDsFromGoogleIDsResult{}
            {
            }

            GetPlayFabIDsFromGoogleIDsResult(const GetPlayFabIDsFromGoogleIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromGoogleIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromGoogleIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGoogleIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientGooglePlayFabIdPair, GooglePlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromKongregateIDsRequest : public PlayFabClientGetPlayFabIDsFromKongregateIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromKongregateIDsRequest() : PlayFabClientGetPlayFabIDsFromKongregateIDsRequest{}
            {
            }

            GetPlayFabIDsFromKongregateIDsRequest(const GetPlayFabIDsFromKongregateIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromKongregateIDsRequest{ src },
                m_kongregateIDs{ src.m_kongregateIDs }
            {

                kongregateIDs = m_kongregateIDs.Empty() ? nullptr : m_kongregateIDs.Data();
            }

            ~GetPlayFabIDsFromKongregateIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "KongregateIDs", m_kongregateIDs, kongregateIDs, kongregateIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromKongregateIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_kongregateIDs;
        };

        struct KongregatePlayFabIdPair : public PlayFabClientKongregatePlayFabIdPair, public BaseModel
        {
            KongregatePlayFabIdPair() : PlayFabClientKongregatePlayFabIdPair{}
            {
            }

            KongregatePlayFabIdPair(const KongregatePlayFabIdPair& src) :
                PlayFabClientKongregatePlayFabIdPair{ src },
                m_kongregateId{ src.m_kongregateId },
                m_playFabId{ src.m_playFabId }
            {

                kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~KongregatePlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientKongregatePlayFabIdPair>(*this);
            }

        private:
            String m_kongregateId;
            String m_playFabId;
        };

        struct GetPlayFabIDsFromKongregateIDsResult : public PlayFabClientGetPlayFabIDsFromKongregateIDsResult, public BaseResult
        {
            GetPlayFabIDsFromKongregateIDsResult() : PlayFabClientGetPlayFabIDsFromKongregateIDsResult{}
            {
            }

            GetPlayFabIDsFromKongregateIDsResult(const GetPlayFabIDsFromKongregateIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromKongregateIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromKongregateIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromKongregateIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientKongregatePlayFabIdPair, KongregatePlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, public BaseRequest
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() : PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{}
            {
            }

            GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src) :
                PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
                m_nintendoSwitchDeviceIds{ src.m_nintendoSwitchDeviceIds }
            {

                nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
            }

            ~GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceIds", m_nintendoSwitchDeviceIds, nintendoSwitchDeviceIds, nintendoSwitchDeviceIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_nintendoSwitchDeviceIds;
        };

        struct NintendoSwitchPlayFabIdPair : public PlayFabClientNintendoSwitchPlayFabIdPair, public BaseModel
        {
            NintendoSwitchPlayFabIdPair() : PlayFabClientNintendoSwitchPlayFabIdPair{}
            {
            }

            NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src) :
                PlayFabClientNintendoSwitchPlayFabIdPair{ src },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
                m_playFabId{ src.m_playFabId }
            {

                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~NintendoSwitchPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientNintendoSwitchPlayFabIdPair>(*this);
            }

        private:
            String m_nintendoSwitchDeviceId;
            String m_playFabId;
        };

        struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, public BaseResult
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() : PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{}
            {
            }

            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src) :
                PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientNintendoSwitchPlayFabIdPair, NintendoSwitchPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromPSNAccountIDsRequest : public PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromPSNAccountIDsRequest() : PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest{}
            {
            }

            GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest{ src },
                m_issuerId{ src.m_issuerId },
                m_pSNAccountIDs{ src.m_pSNAccountIDs }
            {

                issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
                pSNAccountIDs = m_pSNAccountIDs.Empty() ? nullptr : m_pSNAccountIDs.Data();
            }

            ~GetPlayFabIDsFromPSNAccountIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
                JsonUtils:: ObjectGetMember(input, "PSNAccountIDs", m_pSNAccountIDs, pSNAccountIDs, pSNAccountIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest>(*this);
            }

        private:
            StdExtra::optional<int32_t> m_issuerId;
            PointerArray<const char, String> m_pSNAccountIDs;
        };

        struct PSNAccountPlayFabIdPair : public PlayFabClientPSNAccountPlayFabIdPair, public BaseModel
        {
            PSNAccountPlayFabIdPair() : PlayFabClientPSNAccountPlayFabIdPair{}
            {
            }

            PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src) :
                PlayFabClientPSNAccountPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_pSNAccountId{ src.m_pSNAccountId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                pSNAccountId = m_pSNAccountId.empty() ? nullptr : m_pSNAccountId.data();
            }

            ~PSNAccountPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "PSNAccountId", m_pSNAccountId, pSNAccountId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPSNAccountPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_pSNAccountId;
        };

        struct GetPlayFabIDsFromPSNAccountIDsResult : public PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult, public BaseResult
        {
            GetPlayFabIDsFromPSNAccountIDsResult() : PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult{}
            {
            }

            GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromPSNAccountIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPSNAccountPlayFabIdPair, PSNAccountPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromSteamIDsRequest : public PlayFabClientGetPlayFabIDsFromSteamIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromSteamIDsRequest() : PlayFabClientGetPlayFabIDsFromSteamIDsRequest{}
            {
            }

            GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromSteamIDsRequest{ src },
                m_steamStringIDs{ src.m_steamStringIDs }
            {

                steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
            }

            ~GetPlayFabIDsFromSteamIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SteamStringIDs", m_steamStringIDs, steamStringIDs, steamStringIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromSteamIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_steamStringIDs;
        };

        struct SteamPlayFabIdPair : public PlayFabClientSteamPlayFabIdPair, public BaseModel
        {
            SteamPlayFabIdPair() : PlayFabClientSteamPlayFabIdPair{}
            {
            }

            SteamPlayFabIdPair(const SteamPlayFabIdPair& src) :
                PlayFabClientSteamPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_steamStringId{ src.m_steamStringId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
            }

            ~SteamPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "SteamStringId", m_steamStringId, steamStringId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSteamPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_steamStringId;
        };

        struct GetPlayFabIDsFromSteamIDsResult : public PlayFabClientGetPlayFabIDsFromSteamIDsResult, public BaseResult
        {
            GetPlayFabIDsFromSteamIDsResult() : PlayFabClientGetPlayFabIDsFromSteamIDsResult{}
            {
            }

            GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromSteamIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromSteamIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromSteamIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientSteamPlayFabIdPair, SteamPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromTwitchIDsRequest : public PlayFabClientGetPlayFabIDsFromTwitchIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromTwitchIDsRequest() : PlayFabClientGetPlayFabIDsFromTwitchIDsRequest{}
            {
            }

            GetPlayFabIDsFromTwitchIDsRequest(const GetPlayFabIDsFromTwitchIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromTwitchIDsRequest{ src },
                m_twitchIds{ src.m_twitchIds }
            {

                twitchIds = m_twitchIds.Empty() ? nullptr : m_twitchIds.Data();
            }

            ~GetPlayFabIDsFromTwitchIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TwitchIds", m_twitchIds, twitchIds, twitchIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromTwitchIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_twitchIds;
        };

        struct TwitchPlayFabIdPair : public PlayFabClientTwitchPlayFabIdPair, public BaseModel
        {
            TwitchPlayFabIdPair() : PlayFabClientTwitchPlayFabIdPair{}
            {
            }

            TwitchPlayFabIdPair(const TwitchPlayFabIdPair& src) :
                PlayFabClientTwitchPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_twitchId{ src.m_twitchId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
            }

            ~TwitchPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientTwitchPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_twitchId;
        };

        struct GetPlayFabIDsFromTwitchIDsResult : public PlayFabClientGetPlayFabIDsFromTwitchIDsResult, public BaseResult
        {
            GetPlayFabIDsFromTwitchIDsResult() : PlayFabClientGetPlayFabIDsFromTwitchIDsResult{}
            {
            }

            GetPlayFabIDsFromTwitchIDsResult(const GetPlayFabIDsFromTwitchIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromTwitchIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromTwitchIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromTwitchIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientTwitchPlayFabIdPair, TwitchPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromXboxLiveIDsRequest : public PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromXboxLiveIDsRequest() : PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest{}
            {
            }

            GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src) :
                PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest{ src },
                m_sandbox{ src.m_sandbox },
                m_xboxLiveAccountIDs{ src.m_xboxLiveAccountIDs }
            {

                sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
                xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
            }

            ~GetPlayFabIDsFromXboxLiveIDsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
                JsonUtils:: ObjectGetMember(input, "XboxLiveAccountIDs", m_xboxLiveAccountIDs, xboxLiveAccountIDs, xboxLiveAccountIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest>(*this);
            }

        private:
            String m_sandbox;
            PointerArray<const char, String> m_xboxLiveAccountIDs;
        };

        struct XboxLiveAccountPlayFabIdPair : public PlayFabClientXboxLiveAccountPlayFabIdPair, public BaseModel
        {
            XboxLiveAccountPlayFabIdPair() : PlayFabClientXboxLiveAccountPlayFabIdPair{}
            {
            }

            XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src) :
                PlayFabClientXboxLiveAccountPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_xboxLiveAccountId{ src.m_xboxLiveAccountId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
            }

            ~XboxLiveAccountPlayFabIdPair() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "XboxLiveAccountId", m_xboxLiveAccountId, xboxLiveAccountId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientXboxLiveAccountPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_xboxLiveAccountId;
        };

        struct GetPlayFabIDsFromXboxLiveIDsResult : public PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult, public BaseResult
        {
            GetPlayFabIDsFromXboxLiveIDsResult() : PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult{}
            {
            }

            GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src) :
                PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromXboxLiveIDsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientXboxLiveAccountPlayFabIdPair, XboxLiveAccountPlayFabIdPair> m_data;
        };

        struct GetPublisherDataRequest : public PlayFabClientGetPublisherDataRequest, public BaseRequest
        {
            GetPublisherDataRequest() : PlayFabClientGetPublisherDataRequest{}
            {
            }

            GetPublisherDataRequest(const GetPublisherDataRequest& src) :
                PlayFabClientGetPublisherDataRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPublisherDataRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_keys;
        };

        struct GetPublisherDataResult : public PlayFabClientGetPublisherDataResult, public BaseResult
        {
            GetPublisherDataResult() : PlayFabClientGetPublisherDataResult{}
            {
            }

            GetPublisherDataResult(const GetPublisherDataResult& src) :
                PlayFabClientGetPublisherDataResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetPublisherDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct GetPurchaseRequest : public PlayFabClientGetPurchaseRequest, public BaseRequest
        {
            GetPurchaseRequest() : PlayFabClientGetPurchaseRequest{}
            {
            }

            GetPurchaseRequest(const GetPurchaseRequest& src) :
                PlayFabClientGetPurchaseRequest{ src },
                m_orderId{ src.m_orderId }
            {

                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
            }

            ~GetPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPurchaseRequest>(*this);
            }

        private:
            String m_orderId;
        };

        struct GetPurchaseResult : public PlayFabClientGetPurchaseResult, public BaseResult
        {
            GetPurchaseResult() : PlayFabClientGetPurchaseResult{}
            {
            }

            GetPurchaseResult(const GetPurchaseResult& src) :
                PlayFabClientGetPurchaseResult{ src },
                m_orderId{ src.m_orderId },
                m_paymentProvider{ src.m_paymentProvider },
                m_transactionId{ src.m_transactionId },
                m_transactionStatus{ src.m_transactionStatus }
            {

                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                paymentProvider = m_paymentProvider.empty() ? nullptr : m_paymentProvider.data();
                transactionId = m_transactionId.empty() ? nullptr : m_transactionId.data();
                transactionStatus = m_transactionStatus.empty() ? nullptr : m_transactionStatus.data();
            }

            ~GetPurchaseResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "PaymentProvider", m_paymentProvider, paymentProvider);
                JsonUtils:: ObjectGetMember(input, "PurchaseDate", purchaseDate, true);
                JsonUtils:: ObjectGetMember(input, "TransactionId", m_transactionId, transactionId);
                JsonUtils:: ObjectGetMember(input, "TransactionStatus", m_transactionStatus, transactionStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetPurchaseResult>(*this);
            }

        private:
            String m_orderId;
            String m_paymentProvider;

            String m_transactionId;
            String m_transactionStatus;
        };

        struct GetSharedGroupDataRequest : public PlayFabClientGetSharedGroupDataRequest, public BaseRequest
        {
            GetSharedGroupDataRequest() : PlayFabClientGetSharedGroupDataRequest{}
            {
            }

            GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
                PlayFabClientGetSharedGroupDataRequest{ src },
                m_getMembers{ src.m_getMembers },
                m_keys{ src.m_keys },
                m_sharedGroupId{ src.m_sharedGroupId }
            {

                getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~GetSharedGroupDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GetMembers", m_getMembers, getMembers);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetSharedGroupDataRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_getMembers;
            PointerArray<const char, String> m_keys;
            String m_sharedGroupId;
        };

        struct SharedGroupDataRecord : public PlayFabClientSharedGroupDataRecord, public BaseModel
        {
            SharedGroupDataRecord() : PlayFabClientSharedGroupDataRecord{}
            {
            }

            SharedGroupDataRecord(const SharedGroupDataRecord& src) :
                PlayFabClientSharedGroupDataRecord{ src },
                m_lastUpdatedBy{ src.m_lastUpdatedBy },
                m_permission{ src.m_permission },
                m_value{ src.m_value }
            {

                lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
                permission = m_permission ? m_permission.operator->() : nullptr;
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~SharedGroupDataRecord() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LastUpdated", lastUpdated, true);
                JsonUtils:: ObjectGetMember(input, "LastUpdatedBy", m_lastUpdatedBy, lastUpdatedBy);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSharedGroupDataRecord>(*this);
            }

        private:

            String m_lastUpdatedBy;
            StdExtra::optional<PlayFabClientUserDataPermission> m_permission;
            String m_value;
        };

        struct GetSharedGroupDataResult : public PlayFabClientGetSharedGroupDataResult, public BaseResult
        {
            GetSharedGroupDataResult() : PlayFabClientGetSharedGroupDataResult{}
            {
            }

            GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
                PlayFabClientGetSharedGroupDataResult{ src },
                m_data{ src.m_data },
                m_members{ src.m_members }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
                members = m_members.Empty() ? nullptr : m_members.Data();
            }

            ~GetSharedGroupDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetSharedGroupDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabClientSharedGroupDataRecordDictionaryEntry, SharedGroupDataRecord> m_data;
            PointerArray<const char, String> m_members;
        };

        struct GetStoreItemsRequest : public PlayFabClientGetStoreItemsRequest, public BaseRequest
        {
            GetStoreItemsRequest() : PlayFabClientGetStoreItemsRequest{}
            {
            }

            GetStoreItemsRequest(const GetStoreItemsRequest& src) :
                PlayFabClientGetStoreItemsRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetStoreItemsRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_storeId;
        };

        struct StoreMarketingModel : public PlayFabClientStoreMarketingModel, public BaseModel
        {
            StoreMarketingModel() : PlayFabClientStoreMarketingModel{}
            {
            }

            StoreMarketingModel(const StoreMarketingModel& src) :
                PlayFabClientStoreMarketingModel{ src },
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
                return JsonUtils::ToJson<PlayFabClientStoreMarketingModel>(*this);
            }

        private:
            String m_description;
            String m_displayName;
            JsonObject m_metadata;
        };

        struct StoreItem : public PlayFabClientStoreItem, public BaseModel
        {
            StoreItem() : PlayFabClientStoreItem{}
            {
            }

            StoreItem(const StoreItem& src) :
                PlayFabClientStoreItem{ src },
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
                return JsonUtils::ToJson<PlayFabClientStoreItem>(*this);
            }

        private:
            JsonObject m_customData;
            StdExtra::optional<uint32_t> m_displayPosition;
            String m_itemId;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
        };

        struct GetStoreItemsResult : public PlayFabClientGetStoreItemsResult, public BaseResult
        {
            GetStoreItemsResult() : PlayFabClientGetStoreItemsResult{}
            {
            }

            GetStoreItemsResult(const GetStoreItemsResult& src) :
                PlayFabClientGetStoreItemsResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetStoreItemsResult>(*this);
            }

        private:
            String m_catalogVersion;
            StdExtra::optional<StoreMarketingModel> m_marketingData;
            StdExtra::optional<PlayFabClientSourceType> m_source;
            PointerArray<PlayFabClientStoreItem, StoreItem> m_store;
            String m_storeId;
        };

        struct GetTimeRequest : public PlayFabClientGetTimeRequest, public BaseRequest
        {
            GetTimeRequest() : PlayFabClientGetTimeRequest{}
            {
            }

            GetTimeRequest(const GetTimeRequest&) = default;

            ~GetTimeRequest() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTimeRequest>(*this);
            }

        private:
        };

        struct GetTimeResult : public PlayFabClientGetTimeResult, public BaseResult
        {
            GetTimeResult() : PlayFabClientGetTimeResult{}
            {
            }

            GetTimeResult(const GetTimeResult&) = default;

            ~GetTimeResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Time", time, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTimeResult>(*this);
            }

        private:

        };

        struct GetTitleDataRequest : public PlayFabClientGetTitleDataRequest, public BaseRequest
        {
            GetTitleDataRequest() : PlayFabClientGetTitleDataRequest{}
            {
            }

            GetTitleDataRequest(const GetTitleDataRequest& src) :
                PlayFabClientGetTitleDataRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetTitleDataRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_keys;
            String m_overrideLabel;
        };

        struct GetTitleDataResult : public PlayFabClientGetTitleDataResult, public BaseResult
        {
            GetTitleDataResult() : PlayFabClientGetTitleDataResult{}
            {
            }

            GetTitleDataResult(const GetTitleDataResult& src) :
                PlayFabClientGetTitleDataResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetTitleDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct GetTitleNewsRequest : public PlayFabClientGetTitleNewsRequest, public BaseRequest
        {
            GetTitleNewsRequest() : PlayFabClientGetTitleNewsRequest{}
            {
            }

            GetTitleNewsRequest(const GetTitleNewsRequest& src) :
                PlayFabClientGetTitleNewsRequest{ src },
                m_count{ src.m_count }
            {

                count = m_count ? m_count.operator->() : nullptr;
            }

            ~GetTitleNewsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Count", m_count, count);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTitleNewsRequest>(*this);
            }

        private:
            StdExtra::optional<int32_t> m_count;
        };

        struct TitleNewsItem : public PlayFabClientTitleNewsItem, public BaseModel
        {
            TitleNewsItem() : PlayFabClientTitleNewsItem{}
            {
            }

            TitleNewsItem(const TitleNewsItem& src) :
                PlayFabClientTitleNewsItem{ src },
                m_body{ src.m_body },
                m_newsId{ src.m_newsId },
                m_title{ src.m_title }
            {

                body = m_body.empty() ? nullptr : m_body.data();
                newsId = m_newsId.empty() ? nullptr : m_newsId.data();
                title = m_title.empty() ? nullptr : m_title.data();
            }

            ~TitleNewsItem() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "NewsId", m_newsId, newsId);
                JsonUtils:: ObjectGetMember(input, "Timestamp", timestamp, true);
                JsonUtils:: ObjectGetMember(input, "Title", m_title, title);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientTitleNewsItem>(*this);
            }

        private:
            String m_body;
            String m_newsId;

            String m_title;
        };

        struct GetTitleNewsResult : public PlayFabClientGetTitleNewsResult, public BaseResult
        {
            GetTitleNewsResult() : PlayFabClientGetTitleNewsResult{}
            {
            }

            GetTitleNewsResult(const GetTitleNewsResult& src) :
                PlayFabClientGetTitleNewsResult{ src },
                m_news{ src.m_news }
            {

                news = m_news.Empty() ? nullptr : m_news.Data();
            }

            ~GetTitleNewsResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "News", m_news, news, newsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTitleNewsResult>(*this);
            }

        private:
            PointerArray<PlayFabClientTitleNewsItem, TitleNewsItem> m_news;
        };

        struct GetTitlePublicKeyRequest : public PlayFabClientGetTitlePublicKeyRequest, public BaseRequest
        {
            GetTitlePublicKeyRequest() : PlayFabClientGetTitlePublicKeyRequest{}
            {
            }

            GetTitlePublicKeyRequest(const GetTitlePublicKeyRequest& src) :
                PlayFabClientGetTitlePublicKeyRequest{ src },
                m_titleId{ src.m_titleId },
                m_titleSharedSecret{ src.m_titleSharedSecret }
            {

                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                titleSharedSecret = m_titleSharedSecret.empty() ? nullptr : m_titleSharedSecret.data();
            }

            ~GetTitlePublicKeyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "TitleSharedSecret", m_titleSharedSecret, titleSharedSecret);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTitlePublicKeyRequest>(*this);
            }

        private:
            String m_titleId;
            String m_titleSharedSecret;
        };

        struct GetTitlePublicKeyResult : public PlayFabClientGetTitlePublicKeyResult, public BaseResult
        {
            GetTitlePublicKeyResult() : PlayFabClientGetTitlePublicKeyResult{}
            {
            }

            GetTitlePublicKeyResult(const GetTitlePublicKeyResult& src) :
                PlayFabClientGetTitlePublicKeyResult{ src },
                m_rSAPublicKey{ src.m_rSAPublicKey }
            {

                rSAPublicKey = m_rSAPublicKey.empty() ? nullptr : m_rSAPublicKey.data();
            }

            ~GetTitlePublicKeyResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "RSAPublicKey", m_rSAPublicKey, rSAPublicKey);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTitlePublicKeyResult>(*this);
            }

        private:
            String m_rSAPublicKey;
        };

        struct GetTradeStatusRequest : public PlayFabClientGetTradeStatusRequest, public BaseRequest
        {
            GetTradeStatusRequest() : PlayFabClientGetTradeStatusRequest{}
            {
            }

            GetTradeStatusRequest(const GetTradeStatusRequest& src) :
                PlayFabClientGetTradeStatusRequest{ src },
                m_offeringPlayerId{ src.m_offeringPlayerId },
                m_tradeId{ src.m_tradeId }
            {

                offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
                tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
            }

            ~GetTradeStatusRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
                JsonUtils:: ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTradeStatusRequest>(*this);
            }

        private:
            String m_offeringPlayerId;
            String m_tradeId;
        };

        struct GetTradeStatusResponse : public PlayFabClientGetTradeStatusResponse, public BaseResult
        {
            GetTradeStatusResponse() : PlayFabClientGetTradeStatusResponse{}
            {
            }

            GetTradeStatusResponse(const GetTradeStatusResponse& src) :
                PlayFabClientGetTradeStatusResponse{ src },
                m_trade{ src.m_trade }
            {

                trade = m_trade ? m_trade.operator->() : nullptr;
            }

            ~GetTradeStatusResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Trade", m_trade, trade);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetTradeStatusResponse>(*this);
            }

        private:
            StdExtra::optional<TradeInfo> m_trade;
        };

        struct GetUserDataRequest : public PlayFabClientGetUserDataRequest, public BaseRequest
        {
            GetUserDataRequest() : PlayFabClientGetUserDataRequest{}
            {
            }

            GetUserDataRequest(const GetUserDataRequest& src) :
                PlayFabClientGetUserDataRequest{ src },
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
                return JsonUtils::ToJson<PlayFabClientGetUserDataRequest>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
            PointerArray<const char, String> m_keys;
            String m_playFabId;
        };

        struct GetUserDataResult : public PlayFabClientGetUserDataResult, public BaseResult
        {
            GetUserDataResult() : PlayFabClientGetUserDataResult{}
            {
            }

            GetUserDataResult(const GetUserDataResult& src) :
                PlayFabClientGetUserDataResult{ src },
                m_data{ src.m_data }
            {

                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetUserDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetUserDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabClientUserDataRecordDictionaryEntry, UserDataRecord> m_data;

        };

        struct GetUserInventoryRequest : public PlayFabClientGetUserInventoryRequest, public BaseRequest
        {
            GetUserInventoryRequest() : PlayFabClientGetUserInventoryRequest{}
            {
            }

            GetUserInventoryRequest(const GetUserInventoryRequest& src) :
                PlayFabClientGetUserInventoryRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetUserInventoryRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetUserInventoryRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetUserInventoryResult : public PlayFabClientGetUserInventoryResult, public BaseResult
        {
            GetUserInventoryResult() : PlayFabClientGetUserInventoryResult{}
            {
            }

            GetUserInventoryResult(const GetUserInventoryResult& src) :
                PlayFabClientGetUserInventoryResult{ src },
                m_inventory{ src.m_inventory },
                m_virtualCurrency{ src.m_virtualCurrency },
                m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
            {

                inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
                virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
                virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
            }

            ~GetUserInventoryResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetUserInventoryResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_inventory;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
            AssociativeArray<PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
        };

        struct GetWindowsHelloChallengeRequest : public PlayFabClientGetWindowsHelloChallengeRequest, public BaseRequest
        {
            GetWindowsHelloChallengeRequest() : PlayFabClientGetWindowsHelloChallengeRequest{}
            {
            }

            GetWindowsHelloChallengeRequest(const GetWindowsHelloChallengeRequest& src) :
                PlayFabClientGetWindowsHelloChallengeRequest{ src },
                m_publicKeyHint{ src.m_publicKeyHint },
                m_titleId{ src.m_titleId }
            {

                publicKeyHint = m_publicKeyHint.empty() ? nullptr : m_publicKeyHint.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~GetWindowsHelloChallengeRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PublicKeyHint", m_publicKeyHint, publicKeyHint);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetWindowsHelloChallengeRequest>(*this);
            }

        private:
            String m_publicKeyHint;
            String m_titleId;
        };

        struct GetWindowsHelloChallengeResponse : public PlayFabClientGetWindowsHelloChallengeResponse, public BaseResult
        {
            GetWindowsHelloChallengeResponse() : PlayFabClientGetWindowsHelloChallengeResponse{}
            {
            }

            GetWindowsHelloChallengeResponse(const GetWindowsHelloChallengeResponse& src) :
                PlayFabClientGetWindowsHelloChallengeResponse{ src },
                m_challenge{ src.m_challenge }
            {

                challenge = m_challenge.empty() ? nullptr : m_challenge.data();
            }

            ~GetWindowsHelloChallengeResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Challenge", m_challenge, challenge);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGetWindowsHelloChallengeResponse>(*this);
            }

        private:
            String m_challenge;
        };

        struct GrantCharacterToUserRequest : public PlayFabClientGrantCharacterToUserRequest, public BaseRequest
        {
            GrantCharacterToUserRequest() : PlayFabClientGrantCharacterToUserRequest{}
            {
            }

            GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src) :
                PlayFabClientGrantCharacterToUserRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterName{ src.m_characterName },
                m_customTags{ src.m_customTags },
                m_itemId{ src.m_itemId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterName = m_characterName.empty() ? nullptr : m_characterName.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
            }

            ~GrantCharacterToUserRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterName", m_characterName, characterName);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGrantCharacterToUserRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterName;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_itemId;
        };

        struct GrantCharacterToUserResult : public PlayFabClientGrantCharacterToUserResult, public BaseResult
        {
            GrantCharacterToUserResult() : PlayFabClientGrantCharacterToUserResult{}
            {
            }

            GrantCharacterToUserResult(const GrantCharacterToUserResult& src) :
                PlayFabClientGrantCharacterToUserResult{ src },
                m_characterId{ src.m_characterId },
                m_characterType{ src.m_characterType }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
            }

            ~GrantCharacterToUserResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "Result", result);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientGrantCharacterToUserResult>(*this);
            }

        private:
            String m_characterId;
            String m_characterType;

        };

        struct ItemPurchaseRequest : public PlayFabClientItemPurchaseRequest, public BaseRequest
        {
            ItemPurchaseRequest() : PlayFabClientItemPurchaseRequest{}
            {
            }

            ItemPurchaseRequest(const ItemPurchaseRequest& src) :
                PlayFabClientItemPurchaseRequest{ src },
                m_annotation{ src.m_annotation },
                m_itemId{ src.m_itemId },
                m_upgradeFromItems{ src.m_upgradeFromItems }
            {

                annotation = m_annotation.empty() ? nullptr : m_annotation.data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
                upgradeFromItems = m_upgradeFromItems.Empty() ? nullptr : m_upgradeFromItems.Data();
            }

            ~ItemPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "Quantity", quantity);
                JsonUtils:: ObjectGetMember(input, "UpgradeFromItems", m_upgradeFromItems, upgradeFromItems, upgradeFromItemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientItemPurchaseRequest>(*this);
            }

        private:
            String m_annotation;
            String m_itemId;

            PointerArray<const char, String> m_upgradeFromItems;
        };

        struct LinkAndroidDeviceIDRequest : public PlayFabClientLinkAndroidDeviceIDRequest, public BaseRequest
        {
            LinkAndroidDeviceIDRequest() : PlayFabClientLinkAndroidDeviceIDRequest{}
            {
            }

            LinkAndroidDeviceIDRequest(const LinkAndroidDeviceIDRequest& src) :
                PlayFabClientLinkAndroidDeviceIDRequest{ src },
                m_androidDevice{ src.m_androidDevice },
                m_androidDeviceId{ src.m_androidDeviceId },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_oS{ src.m_oS }
            {

                androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
                androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                oS = m_oS.empty() ? nullptr : m_oS.data();
            }

            ~LinkAndroidDeviceIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AndroidDevice", m_androidDevice, androidDevice);
                JsonUtils:: ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "OS", m_oS, oS);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkAndroidDeviceIDRequest>(*this);
            }

        private:
            String m_androidDevice;
            String m_androidDeviceId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_oS;
        };

        struct LinkAndroidDeviceIDResult : public PlayFabClientLinkAndroidDeviceIDResult, public BaseResult
        {
            LinkAndroidDeviceIDResult() : PlayFabClientLinkAndroidDeviceIDResult{}
            {
            }

            LinkAndroidDeviceIDResult(const LinkAndroidDeviceIDResult&) = default;

            ~LinkAndroidDeviceIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkAndroidDeviceIDResult>(*this);
            }

        private:
        };

        struct LinkAppleRequest : public PlayFabClientLinkAppleRequest, public BaseRequest
        {
            LinkAppleRequest() : PlayFabClientLinkAppleRequest{}
            {
            }

            LinkAppleRequest(const LinkAppleRequest& src) :
                PlayFabClientLinkAppleRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_identityToken{ src.m_identityToken }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
            }

            ~LinkAppleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkAppleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_identityToken;
        };

        struct LinkCustomIDRequest : public PlayFabClientLinkCustomIDRequest, public BaseRequest
        {
            LinkCustomIDRequest() : PlayFabClientLinkCustomIDRequest{}
            {
            }

            LinkCustomIDRequest(const LinkCustomIDRequest& src) :
                PlayFabClientLinkCustomIDRequest{ src },
                m_customId{ src.m_customId },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink }
            {

                customId = m_customId.empty() ? nullptr : m_customId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
            }

            ~LinkCustomIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomId", m_customId, customId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkCustomIDRequest>(*this);
            }

        private:
            String m_customId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
        };

        struct LinkCustomIDResult : public PlayFabClientLinkCustomIDResult, public BaseResult
        {
            LinkCustomIDResult() : PlayFabClientLinkCustomIDResult{}
            {
            }

            LinkCustomIDResult(const LinkCustomIDResult&) = default;

            ~LinkCustomIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkCustomIDResult>(*this);
            }

        private:
        };

        struct LinkFacebookAccountRequest : public PlayFabClientLinkFacebookAccountRequest, public BaseRequest
        {
            LinkFacebookAccountRequest() : PlayFabClientLinkFacebookAccountRequest{}
            {
            }

            LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src) :
                PlayFabClientLinkFacebookAccountRequest{ src },
                m_accessToken{ src.m_accessToken },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink }
            {

                accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
            }

            ~LinkFacebookAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkFacebookAccountRequest>(*this);
            }

        private:
            String m_accessToken;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
        };

        struct LinkFacebookAccountResult : public PlayFabClientLinkFacebookAccountResult, public BaseResult
        {
            LinkFacebookAccountResult() : PlayFabClientLinkFacebookAccountResult{}
            {
            }

            LinkFacebookAccountResult(const LinkFacebookAccountResult&) = default;

            ~LinkFacebookAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkFacebookAccountResult>(*this);
            }

        private:
        };

        struct LinkFacebookInstantGamesIdRequest : public PlayFabClientLinkFacebookInstantGamesIdRequest, public BaseRequest
        {
            LinkFacebookInstantGamesIdRequest() : PlayFabClientLinkFacebookInstantGamesIdRequest{}
            {
            }

            LinkFacebookInstantGamesIdRequest(const LinkFacebookInstantGamesIdRequest& src) :
                PlayFabClientLinkFacebookInstantGamesIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_facebookInstantGamesSignature{ src.m_facebookInstantGamesSignature },
                m_forceLink{ src.m_forceLink }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
            }

            ~LinkFacebookInstantGamesIdRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesSignature", m_facebookInstantGamesSignature, facebookInstantGamesSignature);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkFacebookInstantGamesIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_facebookInstantGamesSignature;
            StdExtra::optional<bool> m_forceLink;
        };

        struct LinkFacebookInstantGamesIdResult : public PlayFabClientLinkFacebookInstantGamesIdResult, public BaseResult
        {
            LinkFacebookInstantGamesIdResult() : PlayFabClientLinkFacebookInstantGamesIdResult{}
            {
            }

            LinkFacebookInstantGamesIdResult(const LinkFacebookInstantGamesIdResult&) = default;

            ~LinkFacebookInstantGamesIdResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkFacebookInstantGamesIdResult>(*this);
            }

        private:
        };

        struct LinkGameCenterAccountRequest : public PlayFabClientLinkGameCenterAccountRequest, public BaseRequest
        {
            LinkGameCenterAccountRequest() : PlayFabClientLinkGameCenterAccountRequest{}
            {
            }

            LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src) :
                PlayFabClientLinkGameCenterAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_gameCenterId{ src.m_gameCenterId },
                m_publicKeyUrl{ src.m_publicKeyUrl },
                m_salt{ src.m_salt },
                m_signature{ src.m_signature },
                m_timestamp{ src.m_timestamp }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
                publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
                salt = m_salt.empty() ? nullptr : m_salt.data();
                signature = m_signature.empty() ? nullptr : m_signature.data();
                timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
            }

            ~LinkGameCenterAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
                JsonUtils:: ObjectGetMember(input, "PublicKeyUrl", m_publicKeyUrl, publicKeyUrl);
                JsonUtils:: ObjectGetMember(input, "Salt", m_salt, salt);
                JsonUtils:: ObjectGetMember(input, "Signature", m_signature, signature);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkGameCenterAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_gameCenterId;
            String m_publicKeyUrl;
            String m_salt;
            String m_signature;
            String m_timestamp;
        };

        struct LinkGameCenterAccountResult : public PlayFabClientLinkGameCenterAccountResult, public BaseResult
        {
            LinkGameCenterAccountResult() : PlayFabClientLinkGameCenterAccountResult{}
            {
            }

            LinkGameCenterAccountResult(const LinkGameCenterAccountResult&) = default;

            ~LinkGameCenterAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkGameCenterAccountResult>(*this);
            }

        private:
        };

        struct LinkGoogleAccountRequest : public PlayFabClientLinkGoogleAccountRequest, public BaseRequest
        {
            LinkGoogleAccountRequest() : PlayFabClientLinkGoogleAccountRequest{}
            {
            }

            LinkGoogleAccountRequest(const LinkGoogleAccountRequest& src) :
                PlayFabClientLinkGoogleAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_serverAuthCode{ src.m_serverAuthCode }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
            }

            ~LinkGoogleAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "ServerAuthCode", m_serverAuthCode, serverAuthCode);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkGoogleAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_serverAuthCode;
        };

        struct LinkGoogleAccountResult : public PlayFabClientLinkGoogleAccountResult, public BaseResult
        {
            LinkGoogleAccountResult() : PlayFabClientLinkGoogleAccountResult{}
            {
            }

            LinkGoogleAccountResult(const LinkGoogleAccountResult&) = default;

            ~LinkGoogleAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkGoogleAccountResult>(*this);
            }

        private:
        };

        struct LinkIOSDeviceIDRequest : public PlayFabClientLinkIOSDeviceIDRequest, public BaseRequest
        {
            LinkIOSDeviceIDRequest() : PlayFabClientLinkIOSDeviceIDRequest{}
            {
            }

            LinkIOSDeviceIDRequest(const LinkIOSDeviceIDRequest& src) :
                PlayFabClientLinkIOSDeviceIDRequest{ src },
                m_customTags{ src.m_customTags },
                m_deviceId{ src.m_deviceId },
                m_deviceModel{ src.m_deviceModel },
                m_forceLink{ src.m_forceLink },
                m_oS{ src.m_oS }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
                deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                oS = m_oS.empty() ? nullptr : m_oS.data();
            }

            ~LinkIOSDeviceIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
                JsonUtils:: ObjectGetMember(input, "DeviceModel", m_deviceModel, deviceModel);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "OS", m_oS, oS);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkIOSDeviceIDRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_deviceId;
            String m_deviceModel;
            StdExtra::optional<bool> m_forceLink;
            String m_oS;
        };

        struct LinkIOSDeviceIDResult : public PlayFabClientLinkIOSDeviceIDResult, public BaseResult
        {
            LinkIOSDeviceIDResult() : PlayFabClientLinkIOSDeviceIDResult{}
            {
            }

            LinkIOSDeviceIDResult(const LinkIOSDeviceIDResult&) = default;

            ~LinkIOSDeviceIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkIOSDeviceIDResult>(*this);
            }

        private:
        };

        struct LinkKongregateAccountRequest : public PlayFabClientLinkKongregateAccountRequest, public BaseRequest
        {
            LinkKongregateAccountRequest() : PlayFabClientLinkKongregateAccountRequest{}
            {
            }

            LinkKongregateAccountRequest(const LinkKongregateAccountRequest& src) :
                PlayFabClientLinkKongregateAccountRequest{ src },
                m_authTicket{ src.m_authTicket },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_kongregateId{ src.m_kongregateId }
            {

                authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
            }

            ~LinkKongregateAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AuthTicket", m_authTicket, authTicket);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkKongregateAccountRequest>(*this);
            }

        private:
            String m_authTicket;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_kongregateId;
        };

        struct LinkKongregateAccountResult : public PlayFabClientLinkKongregateAccountResult, public BaseResult
        {
            LinkKongregateAccountResult() : PlayFabClientLinkKongregateAccountResult{}
            {
            }

            LinkKongregateAccountResult(const LinkKongregateAccountResult&) = default;

            ~LinkKongregateAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkKongregateAccountResult>(*this);
            }

        private:
        };

        struct LinkNintendoServiceAccountRequest : public PlayFabClientLinkNintendoServiceAccountRequest, public BaseRequest
        {
            LinkNintendoServiceAccountRequest() : PlayFabClientLinkNintendoServiceAccountRequest{}
            {
            }

            LinkNintendoServiceAccountRequest(const LinkNintendoServiceAccountRequest& src) :
                PlayFabClientLinkNintendoServiceAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_identityToken{ src.m_identityToken }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
            }

            ~LinkNintendoServiceAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkNintendoServiceAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_identityToken;
        };

        struct LinkNintendoSwitchDeviceIdRequest : public PlayFabClientLinkNintendoSwitchDeviceIdRequest, public BaseRequest
        {
            LinkNintendoSwitchDeviceIdRequest() : PlayFabClientLinkNintendoSwitchDeviceIdRequest{}
            {
            }

            LinkNintendoSwitchDeviceIdRequest(const LinkNintendoSwitchDeviceIdRequest& src) :
                PlayFabClientLinkNintendoSwitchDeviceIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
            }

            ~LinkNintendoSwitchDeviceIdRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkNintendoSwitchDeviceIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_nintendoSwitchDeviceId;
        };

        struct LinkNintendoSwitchDeviceIdResult : public PlayFabClientLinkNintendoSwitchDeviceIdResult, public BaseResult
        {
            LinkNintendoSwitchDeviceIdResult() : PlayFabClientLinkNintendoSwitchDeviceIdResult{}
            {
            }

            LinkNintendoSwitchDeviceIdResult(const LinkNintendoSwitchDeviceIdResult&) = default;

            ~LinkNintendoSwitchDeviceIdResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkNintendoSwitchDeviceIdResult>(*this);
            }

        private:
        };

        struct LinkOpenIdConnectRequest : public PlayFabClientLinkOpenIdConnectRequest, public BaseRequest
        {
            LinkOpenIdConnectRequest() : PlayFabClientLinkOpenIdConnectRequest{}
            {
            }

            LinkOpenIdConnectRequest(const LinkOpenIdConnectRequest& src) :
                PlayFabClientLinkOpenIdConnectRequest{ src },
                m_connectionId{ src.m_connectionId },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_idToken{ src.m_idToken }
            {

                connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                idToken = m_idToken.empty() ? nullptr : m_idToken.data();
            }

            ~LinkOpenIdConnectRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "IdToken", m_idToken, idToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkOpenIdConnectRequest>(*this);
            }

        private:
            String m_connectionId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_idToken;
        };

        struct LinkPSNAccountRequest : public PlayFabClientLinkPSNAccountRequest, public BaseRequest
        {
            LinkPSNAccountRequest() : PlayFabClientLinkPSNAccountRequest{}
            {
            }

            LinkPSNAccountRequest(const LinkPSNAccountRequest& src) :
                PlayFabClientLinkPSNAccountRequest{ src },
                m_authCode{ src.m_authCode },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_issuerId{ src.m_issuerId },
                m_redirectUri{ src.m_redirectUri }
            {

                authCode = m_authCode.empty() ? nullptr : m_authCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
                redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
            }

            ~LinkPSNAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AuthCode", m_authCode, authCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
                JsonUtils:: ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkPSNAccountRequest>(*this);
            }

        private:
            String m_authCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            StdExtra::optional<int32_t> m_issuerId;
            String m_redirectUri;
        };

        struct LinkPSNAccountResult : public PlayFabClientLinkPSNAccountResult, public BaseResult
        {
            LinkPSNAccountResult() : PlayFabClientLinkPSNAccountResult{}
            {
            }

            LinkPSNAccountResult(const LinkPSNAccountResult&) = default;

            ~LinkPSNAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkPSNAccountResult>(*this);
            }

        private:
        };

        struct LinkSteamAccountRequest : public PlayFabClientLinkSteamAccountRequest, public BaseRequest
        {
            LinkSteamAccountRequest() : PlayFabClientLinkSteamAccountRequest{}
            {
            }

            LinkSteamAccountRequest(const LinkSteamAccountRequest& src) :
                PlayFabClientLinkSteamAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_steamTicket{ src.m_steamTicket }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
            }

            ~LinkSteamAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "SteamTicket", m_steamTicket, steamTicket);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkSteamAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_steamTicket;
        };

        struct LinkSteamAccountResult : public PlayFabClientLinkSteamAccountResult, public BaseResult
        {
            LinkSteamAccountResult() : PlayFabClientLinkSteamAccountResult{}
            {
            }

            LinkSteamAccountResult(const LinkSteamAccountResult&) = default;

            ~LinkSteamAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkSteamAccountResult>(*this);
            }

        private:
        };

        struct LinkTwitchAccountRequest : public PlayFabClientLinkTwitchAccountRequest, public BaseRequest
        {
            LinkTwitchAccountRequest() : PlayFabClientLinkTwitchAccountRequest{}
            {
            }

            LinkTwitchAccountRequest(const LinkTwitchAccountRequest& src) :
                PlayFabClientLinkTwitchAccountRequest{ src },
                m_accessToken{ src.m_accessToken },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink }
            {

                accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
            }

            ~LinkTwitchAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkTwitchAccountRequest>(*this);
            }

        private:
            String m_accessToken;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
        };

        struct LinkTwitchAccountResult : public PlayFabClientLinkTwitchAccountResult, public BaseResult
        {
            LinkTwitchAccountResult() : PlayFabClientLinkTwitchAccountResult{}
            {
            }

            LinkTwitchAccountResult(const LinkTwitchAccountResult&) = default;

            ~LinkTwitchAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkTwitchAccountResult>(*this);
            }

        private:
        };

        struct LinkWindowsHelloAccountRequest : public PlayFabClientLinkWindowsHelloAccountRequest, public BaseRequest
        {
            LinkWindowsHelloAccountRequest() : PlayFabClientLinkWindowsHelloAccountRequest{}
            {
            }

            LinkWindowsHelloAccountRequest(const LinkWindowsHelloAccountRequest& src) :
                PlayFabClientLinkWindowsHelloAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_deviceName{ src.m_deviceName },
                m_forceLink{ src.m_forceLink },
                m_publicKey{ src.m_publicKey },
                m_userName{ src.m_userName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                deviceName = m_deviceName.empty() ? nullptr : m_deviceName.data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                publicKey = m_publicKey.empty() ? nullptr : m_publicKey.data();
                userName = m_userName.empty() ? nullptr : m_userName.data();
            }

            ~LinkWindowsHelloAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DeviceName", m_deviceName, deviceName);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "PublicKey", m_publicKey, publicKey);
                JsonUtils:: ObjectGetMember(input, "UserName", m_userName, userName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkWindowsHelloAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_deviceName;
            StdExtra::optional<bool> m_forceLink;
            String m_publicKey;
            String m_userName;
        };

        struct LinkWindowsHelloAccountResponse : public PlayFabClientLinkWindowsHelloAccountResponse, public BaseResult
        {
            LinkWindowsHelloAccountResponse() : PlayFabClientLinkWindowsHelloAccountResponse{}
            {
            }

            LinkWindowsHelloAccountResponse(const LinkWindowsHelloAccountResponse&) = default;

            ~LinkWindowsHelloAccountResponse() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkWindowsHelloAccountResponse>(*this);
            }

        private:
        };

        struct LinkXboxAccountRequest : public PlayFabClientLinkXboxAccountRequest, public BaseRequest
        {
            LinkXboxAccountRequest() : PlayFabClientLinkXboxAccountRequest{}
            {
            }

            LinkXboxAccountRequest(const LinkXboxAccountRequest& src) :
                PlayFabClientLinkXboxAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_xboxToken{ src.m_xboxToken }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~LinkXboxAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkXboxAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_xboxToken;
        };

        struct LinkXboxAccountResult : public PlayFabClientLinkXboxAccountResult, public BaseResult
        {
            LinkXboxAccountResult() : PlayFabClientLinkXboxAccountResult{}
            {
            }

            LinkXboxAccountResult(const LinkXboxAccountResult&) = default;

            ~LinkXboxAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLinkXboxAccountResult>(*this);
            }

        private:
        };

        struct ListUsersCharactersRequest : public PlayFabClientListUsersCharactersRequest, public BaseRequest
        {
            ListUsersCharactersRequest() : PlayFabClientListUsersCharactersRequest{}
            {
            }

            ListUsersCharactersRequest(const ListUsersCharactersRequest& src) :
                PlayFabClientListUsersCharactersRequest{ src },
                m_playFabId{ src.m_playFabId }
            {

                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ListUsersCharactersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientListUsersCharactersRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct ListUsersCharactersResult : public PlayFabClientListUsersCharactersResult, public BaseResult
        {
            ListUsersCharactersResult() : PlayFabClientListUsersCharactersResult{}
            {
            }

            ListUsersCharactersResult(const ListUsersCharactersResult& src) :
                PlayFabClientListUsersCharactersResult{ src },
                m_characters{ src.m_characters }
            {

                characters = m_characters.Empty() ? nullptr : m_characters.Data();
            }

            ~ListUsersCharactersResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Characters", m_characters, characters, charactersCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientListUsersCharactersResult>(*this);
            }

        private:
            PointerArray<PlayFabClientCharacterResult, CharacterResult> m_characters;
        };

        struct UserSettings : public PlayFabClientUserSettings, public BaseModel
        {
            UserSettings() : PlayFabClientUserSettings{}
            {
            }

            UserSettings(const UserSettings&) = default;

            ~UserSettings() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GatherDeviceInfo", gatherDeviceInfo);
                JsonUtils:: ObjectGetMember(input, "GatherFocusInfo", gatherFocusInfo);
                JsonUtils:: ObjectGetMember(input, "NeedsAttribution", needsAttribution);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUserSettings>(*this);
            }

        private:



        };

        struct Variable : public PlayFabClientVariable, public BaseModel
        {
            Variable() : PlayFabClientVariable{}
            {
            }

            Variable(const Variable& src) :
                PlayFabClientVariable{ src },
                m_name{ src.m_name },
                m_value{ src.m_value }
            {

                name = m_name.empty() ? nullptr : m_name.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~Variable() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientVariable>(*this);
            }

        private:
            String m_name;
            String m_value;
        };

        struct TreatmentAssignment : public PlayFabClientTreatmentAssignment, public BaseModel
        {
            TreatmentAssignment() : PlayFabClientTreatmentAssignment{}
            {
            }

            TreatmentAssignment(const TreatmentAssignment& src) :
                PlayFabClientTreatmentAssignment{ src },
                m_variables{ src.m_variables },
                m_variants{ src.m_variants }
            {

                variables = m_variables.Empty() ? nullptr : m_variables.Data();
                variants = m_variants.Empty() ? nullptr : m_variants.Data();
            }

            ~TreatmentAssignment() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Variables", m_variables, variables, variablesCount);
                JsonUtils:: ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientTreatmentAssignment>(*this);
            }

        private:
            PointerArray<PlayFabClientVariable, Variable> m_variables;
            PointerArray<const char, String> m_variants;
        };

        struct LoginResult : public PlayFabClientLoginResult, public PlayFabLoginResultCommon
        {
            LoginResult() : PlayFabClientLoginResult{}
            {
            }

            LoginResult(const LoginResult& src) :
                PlayFabClientLoginResult{ src },
                m_entityToken{ src.m_entityToken },
                m_infoResultPayload{ src.m_infoResultPayload },
                m_lastLoginTime{ src.m_lastLoginTime },
                m_playFabId{ src.m_playFabId },
                m_sessionTicket{ src.m_sessionTicket },
                m_settingsForUser{ src.m_settingsForUser },
                m_treatmentAssignment{ src.m_treatmentAssignment }
            {

                entityToken = m_entityToken ? m_entityToken.operator->() : nullptr;
                infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
                lastLoginTime = m_lastLoginTime ? m_lastLoginTime.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
                settingsForUser = m_settingsForUser ? m_settingsForUser.operator->() : nullptr;
                treatmentAssignment = m_treatmentAssignment ? m_treatmentAssignment.operator->() : nullptr;
            }

            ~LoginResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
                JsonUtils:: ObjectGetMember(input, "InfoResultPayload", m_infoResultPayload, infoResultPayload);
                JsonUtils:: ObjectGetMember(input, "LastLoginTime", m_lastLoginTime, lastLoginTime, true);
                JsonUtils:: ObjectGetMember(input, "NewlyCreated", newlyCreated);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "SessionTicket", m_sessionTicket, sessionTicket);
                JsonUtils:: ObjectGetMember(input, "SettingsForUser", m_settingsForUser, settingsForUser);
                JsonUtils:: ObjectGetMember(input, "TreatmentAssignment", m_treatmentAssignment, treatmentAssignment);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginResult>(*this);
            }

        private:
            StdExtra::optional<EntityTokenResponse> m_entityToken;
            StdExtra::optional<GetPlayerCombinedInfoResultPayload> m_infoResultPayload;
            StdExtra::optional<time_t> m_lastLoginTime;

            String m_playFabId;
            String m_sessionTicket;
            StdExtra::optional<UserSettings> m_settingsForUser;
            StdExtra::optional<TreatmentAssignment> m_treatmentAssignment;
        };

        struct LoginWithAndroidDeviceIDRequest : public PlayFabClientLoginWithAndroidDeviceIDRequest, public BaseRequest
        {
            LoginWithAndroidDeviceIDRequest() : PlayFabClientLoginWithAndroidDeviceIDRequest{}
            {
            }

            LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src) :
                PlayFabClientLoginWithAndroidDeviceIDRequest{ src },
                m_androidDevice{ src.m_androidDevice },
                m_androidDeviceId{ src.m_androidDeviceId },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_oS{ src.m_oS },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
                androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                oS = m_oS.empty() ? nullptr : m_oS.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithAndroidDeviceIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AndroidDevice", m_androidDevice, androidDevice);
                JsonUtils:: ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "OS", m_oS, oS);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithAndroidDeviceIDRequest>(*this);
            }

        private:
            String m_androidDevice;
            String m_androidDeviceId;
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_oS;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithAppleRequest : public PlayFabClientLoginWithAppleRequest, public BaseRequest
        {
            LoginWithAppleRequest() : PlayFabClientLoginWithAppleRequest{}
            {
            }

            LoginWithAppleRequest(const LoginWithAppleRequest& src) :
                PlayFabClientLoginWithAppleRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_identityToken{ src.m_identityToken },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithAppleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithAppleRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            String m_identityToken;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithCustomIDRequest : public PlayFabClientLoginWithCustomIDRequest, public BaseRequest
        {
            LoginWithCustomIDRequest() : PlayFabClientLoginWithCustomIDRequest{}
            {
            }

            LoginWithCustomIDRequest(const LoginWithCustomIDRequest& src) :
                PlayFabClientLoginWithCustomIDRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customId{ src.m_customId },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customId = m_customId.empty() ? nullptr : m_customId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithCustomIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomId", m_customId, customId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithCustomIDRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            String m_customId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithEmailAddressRequest : public PlayFabClientLoginWithEmailAddressRequest, public BaseRequest
        {
            LoginWithEmailAddressRequest() : PlayFabClientLoginWithEmailAddressRequest{}
            {
            }

            LoginWithEmailAddressRequest(const LoginWithEmailAddressRequest& src) :
                PlayFabClientLoginWithEmailAddressRequest{ src },
                m_customTags{ src.m_customTags },
                m_email{ src.m_email },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_password{ src.m_password },
                m_titleId{ src.m_titleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                email = m_email.empty() ? nullptr : m_email.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                password = m_password.empty() ? nullptr : m_password.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithEmailAddressRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithEmailAddressRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_email;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_password;
            String m_titleId;
        };

        struct LoginWithFacebookInstantGamesIdRequest : public PlayFabClientLoginWithFacebookInstantGamesIdRequest, public BaseRequest
        {
            LoginWithFacebookInstantGamesIdRequest() : PlayFabClientLoginWithFacebookInstantGamesIdRequest{}
            {
            }

            LoginWithFacebookInstantGamesIdRequest(const LoginWithFacebookInstantGamesIdRequest& src) :
                PlayFabClientLoginWithFacebookInstantGamesIdRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_facebookInstantGamesSignature{ src.m_facebookInstantGamesSignature },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithFacebookInstantGamesIdRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesSignature", m_facebookInstantGamesSignature, facebookInstantGamesSignature);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithFacebookInstantGamesIdRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            String m_facebookInstantGamesSignature;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithFacebookRequest : public PlayFabClientLoginWithFacebookRequest, public BaseRequest
        {
            LoginWithFacebookRequest() : PlayFabClientLoginWithFacebookRequest{}
            {
            }

            LoginWithFacebookRequest(const LoginWithFacebookRequest& src) :
                PlayFabClientLoginWithFacebookRequest{ src },
                m_accessToken{ src.m_accessToken },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithFacebookRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithFacebookRequest>(*this);
            }

        private:
            String m_accessToken;
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithGameCenterRequest : public PlayFabClientLoginWithGameCenterRequest, public BaseRequest
        {
            LoginWithGameCenterRequest() : PlayFabClientLoginWithGameCenterRequest{}
            {
            }

            LoginWithGameCenterRequest(const LoginWithGameCenterRequest& src) :
                PlayFabClientLoginWithGameCenterRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerId{ src.m_playerId },
                m_playerSecret{ src.m_playerSecret },
                m_publicKeyUrl{ src.m_publicKeyUrl },
                m_salt{ src.m_salt },
                m_signature{ src.m_signature },
                m_timestamp{ src.m_timestamp },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerId = m_playerId.empty() ? nullptr : m_playerId.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
                salt = m_salt.empty() ? nullptr : m_salt.data();
                signature = m_signature.empty() ? nullptr : m_signature.data();
                timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithGameCenterRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerId", m_playerId, playerId);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "PublicKeyUrl", m_publicKeyUrl, publicKeyUrl);
                JsonUtils:: ObjectGetMember(input, "Salt", m_salt, salt);
                JsonUtils:: ObjectGetMember(input, "Signature", m_signature, signature);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithGameCenterRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerId;
            String m_playerSecret;
            String m_publicKeyUrl;
            String m_salt;
            String m_signature;
            String m_timestamp;
            String m_titleId;
        };

        struct LoginWithGoogleAccountRequest : public PlayFabClientLoginWithGoogleAccountRequest, public BaseRequest
        {
            LoginWithGoogleAccountRequest() : PlayFabClientLoginWithGoogleAccountRequest{}
            {
            }

            LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src) :
                PlayFabClientLoginWithGoogleAccountRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_serverAuthCode{ src.m_serverAuthCode },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithGoogleAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "ServerAuthCode", m_serverAuthCode, serverAuthCode);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithGoogleAccountRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_serverAuthCode;
            String m_titleId;
        };

        struct LoginWithIOSDeviceIDRequest : public PlayFabClientLoginWithIOSDeviceIDRequest, public BaseRequest
        {
            LoginWithIOSDeviceIDRequest() : PlayFabClientLoginWithIOSDeviceIDRequest{}
            {
            }

            LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src) :
                PlayFabClientLoginWithIOSDeviceIDRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_deviceId{ src.m_deviceId },
                m_deviceModel{ src.m_deviceModel },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_oS{ src.m_oS },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
                deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                oS = m_oS.empty() ? nullptr : m_oS.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithIOSDeviceIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
                JsonUtils:: ObjectGetMember(input, "DeviceModel", m_deviceModel, deviceModel);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "OS", m_oS, oS);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithIOSDeviceIDRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_deviceId;
            String m_deviceModel;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_oS;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithKongregateRequest : public PlayFabClientLoginWithKongregateRequest, public BaseRequest
        {
            LoginWithKongregateRequest() : PlayFabClientLoginWithKongregateRequest{}
            {
            }

            LoginWithKongregateRequest(const LoginWithKongregateRequest& src) :
                PlayFabClientLoginWithKongregateRequest{ src },
                m_authTicket{ src.m_authTicket },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_kongregateId{ src.m_kongregateId },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithKongregateRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AuthTicket", m_authTicket, authTicket);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithKongregateRequest>(*this);
            }

        private:
            String m_authTicket;
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_kongregateId;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithNintendoServiceAccountRequest : public PlayFabClientLoginWithNintendoServiceAccountRequest, public BaseRequest
        {
            LoginWithNintendoServiceAccountRequest() : PlayFabClientLoginWithNintendoServiceAccountRequest{}
            {
            }

            LoginWithNintendoServiceAccountRequest(const LoginWithNintendoServiceAccountRequest& src) :
                PlayFabClientLoginWithNintendoServiceAccountRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_identityToken{ src.m_identityToken },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithNintendoServiceAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithNintendoServiceAccountRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            String m_identityToken;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithNintendoSwitchDeviceIdRequest : public PlayFabClientLoginWithNintendoSwitchDeviceIdRequest, public BaseRequest
        {
            LoginWithNintendoSwitchDeviceIdRequest() : PlayFabClientLoginWithNintendoSwitchDeviceIdRequest{}
            {
            }

            LoginWithNintendoSwitchDeviceIdRequest(const LoginWithNintendoSwitchDeviceIdRequest& src) :
                PlayFabClientLoginWithNintendoSwitchDeviceIdRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithNintendoSwitchDeviceIdRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithNintendoSwitchDeviceIdRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_nintendoSwitchDeviceId;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithOpenIdConnectRequest : public PlayFabClientLoginWithOpenIdConnectRequest, public BaseRequest
        {
            LoginWithOpenIdConnectRequest() : PlayFabClientLoginWithOpenIdConnectRequest{}
            {
            }

            LoginWithOpenIdConnectRequest(const LoginWithOpenIdConnectRequest& src) :
                PlayFabClientLoginWithOpenIdConnectRequest{ src },
                m_connectionId{ src.m_connectionId },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_idToken{ src.m_idToken },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                idToken = m_idToken.empty() ? nullptr : m_idToken.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithOpenIdConnectRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "IdToken", m_idToken, idToken);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithOpenIdConnectRequest>(*this);
            }

        private:
            String m_connectionId;
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            String m_idToken;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithPlayFabRequest : public PlayFabClientLoginWithPlayFabRequest, public BaseRequest
        {
            LoginWithPlayFabRequest() : PlayFabClientLoginWithPlayFabRequest{}
            {
            }

            LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src) :
                PlayFabClientLoginWithPlayFabRequest{ src },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_password{ src.m_password },
                m_titleId{ src.m_titleId },
                m_username{ src.m_username }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                password = m_password.empty() ? nullptr : m_password.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~LoginWithPlayFabRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithPlayFabRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_password;
            String m_titleId;
            String m_username;
        };

        struct LoginWithPSNRequest : public PlayFabClientLoginWithPSNRequest, public BaseRequest
        {
            LoginWithPSNRequest() : PlayFabClientLoginWithPSNRequest{}
            {
            }

            LoginWithPSNRequest(const LoginWithPSNRequest& src) :
                PlayFabClientLoginWithPSNRequest{ src },
                m_authCode{ src.m_authCode },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_issuerId{ src.m_issuerId },
                m_playerSecret{ src.m_playerSecret },
                m_redirectUri{ src.m_redirectUri },
                m_titleId{ src.m_titleId }
            {

                authCode = m_authCode.empty() ? nullptr : m_authCode.data();
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithPSNRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AuthCode", m_authCode, authCode);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithPSNRequest>(*this);
            }

        private:
            String m_authCode;
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            StdExtra::optional<int32_t> m_issuerId;
            String m_playerSecret;
            String m_redirectUri;
            String m_titleId;
        };

        struct LoginWithSteamRequest : public PlayFabClientLoginWithSteamRequest, public BaseRequest
        {
            LoginWithSteamRequest() : PlayFabClientLoginWithSteamRequest{}
            {
            }

            LoginWithSteamRequest(const LoginWithSteamRequest& src) :
                PlayFabClientLoginWithSteamRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_steamTicket{ src.m_steamTicket },
                m_titleId{ src.m_titleId }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithSteamRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "SteamTicket", m_steamTicket, steamTicket);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithSteamRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_steamTicket;
            String m_titleId;
        };

        struct LoginWithTwitchRequest : public PlayFabClientLoginWithTwitchRequest, public BaseRequest
        {
            LoginWithTwitchRequest() : PlayFabClientLoginWithTwitchRequest{}
            {
            }

            LoginWithTwitchRequest(const LoginWithTwitchRequest& src) :
                PlayFabClientLoginWithTwitchRequest{ src },
                m_accessToken{ src.m_accessToken },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId }
            {

                accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithTwitchRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithTwitchRequest>(*this);
            }

        private:
            String m_accessToken;
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
        };

        struct LoginWithWindowsHelloRequest : public PlayFabClientLoginWithWindowsHelloRequest, public BaseRequest
        {
            LoginWithWindowsHelloRequest() : PlayFabClientLoginWithWindowsHelloRequest{}
            {
            }

            LoginWithWindowsHelloRequest(const LoginWithWindowsHelloRequest& src) :
                PlayFabClientLoginWithWindowsHelloRequest{ src },
                m_challengeSignature{ src.m_challengeSignature },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_publicKeyHint{ src.m_publicKeyHint },
                m_titleId{ src.m_titleId }
            {

                challengeSignature = m_challengeSignature.empty() ? nullptr : m_challengeSignature.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                publicKeyHint = m_publicKeyHint.empty() ? nullptr : m_publicKeyHint.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~LoginWithWindowsHelloRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ChallengeSignature", m_challengeSignature, challengeSignature);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PublicKeyHint", m_publicKeyHint, publicKeyHint);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithWindowsHelloRequest>(*this);
            }

        private:
            String m_challengeSignature;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_publicKeyHint;
            String m_titleId;
        };

        struct LoginWithXboxRequest : public PlayFabClientLoginWithXboxRequest, public BaseRequest
        {
            LoginWithXboxRequest() : PlayFabClientLoginWithXboxRequest{}
            {
            }

            LoginWithXboxRequest(const LoginWithXboxRequest& src) :
                PlayFabClientLoginWithXboxRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_titleId{ src.m_titleId },
                m_xboxToken{ src.m_xboxToken }
            {

                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~LoginWithXboxRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientLoginWithXboxRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_titleId;
            String m_xboxToken;
        };

        struct MatchmakeRequest : public PlayFabClientMatchmakeRequest, public BaseRequest
        {
            MatchmakeRequest() : PlayFabClientMatchmakeRequest{}
            {
            }

            MatchmakeRequest(const MatchmakeRequest& src) :
                PlayFabClientMatchmakeRequest{ src },
                m_buildVersion{ src.m_buildVersion },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_gameMode{ src.m_gameMode },
                m_lobbyId{ src.m_lobbyId },
                m_region{ src.m_region },
                m_startNewIfNoneFound{ src.m_startNewIfNoneFound },
                m_statisticName{ src.m_statisticName },
                m_tagFilter{ src.m_tagFilter }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                region = m_region ? m_region.operator->() : nullptr;
                startNewIfNoneFound = m_startNewIfNoneFound ? m_startNewIfNoneFound.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
            }

            ~MatchmakeRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "StartNewIfNoneFound", m_startNewIfNoneFound, startNewIfNoneFound);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientMatchmakeRequest>(*this);
            }

        private:
            String m_buildVersion;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_gameMode;
            String m_lobbyId;
            StdExtra::optional<PlayFabClientRegion> m_region;
            StdExtra::optional<bool> m_startNewIfNoneFound;
            String m_statisticName;
            StdExtra::optional<CollectionFilter> m_tagFilter;
        };

        struct MatchmakeResult : public PlayFabClientMatchmakeResult, public BaseResult
        {
            MatchmakeResult() : PlayFabClientMatchmakeResult{}
            {
            }

            MatchmakeResult(const MatchmakeResult& src) :
                PlayFabClientMatchmakeResult{ src },
                m_expires{ src.m_expires },
                m_lobbyID{ src.m_lobbyID },
                m_pollWaitTimeMS{ src.m_pollWaitTimeMS },
                m_serverIPV4Address{ src.m_serverIPV4Address },
                m_serverIPV6Address{ src.m_serverIPV6Address },
                m_serverPort{ src.m_serverPort },
                m_serverPublicDNSName{ src.m_serverPublicDNSName },
                m_status{ src.m_status },
                m_ticket{ src.m_ticket }
            {

                expires = m_expires.empty() ? nullptr : m_expires.data();
                lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
                pollWaitTimeMS = m_pollWaitTimeMS ? m_pollWaitTimeMS.operator->() : nullptr;
                serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
                serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
                serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
                serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
                status = m_status ? m_status.operator->() : nullptr;
                ticket = m_ticket.empty() ? nullptr : m_ticket.data();
            }

            ~MatchmakeResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Expires", m_expires, expires);
                JsonUtils:: ObjectGetMember(input, "LobbyID", m_lobbyID, lobbyID);
                JsonUtils:: ObjectGetMember(input, "PollWaitTimeMS", m_pollWaitTimeMS, pollWaitTimeMS);
                JsonUtils:: ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
                JsonUtils:: ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
                JsonUtils:: ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
                JsonUtils:: ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "Ticket", m_ticket, ticket);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientMatchmakeResult>(*this);
            }

        private:
            String m_expires;
            String m_lobbyID;
            StdExtra::optional<int32_t> m_pollWaitTimeMS;
            String m_serverIPV4Address;
            String m_serverIPV6Address;
            StdExtra::optional<int32_t> m_serverPort;
            String m_serverPublicDNSName;
            StdExtra::optional<PlayFabClientMatchmakeStatus> m_status;
            String m_ticket;
        };

        struct ModifyUserVirtualCurrencyResult : public PlayFabClientModifyUserVirtualCurrencyResult, public BaseResult
        {
            ModifyUserVirtualCurrencyResult() : PlayFabClientModifyUserVirtualCurrencyResult{}
            {
            }

            ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
                PlayFabClientModifyUserVirtualCurrencyResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientModifyUserVirtualCurrencyResult>(*this);
            }

        private:


            String m_playFabId;
            String m_virtualCurrency;
        };

        struct OpenTradeRequest : public PlayFabClientOpenTradeRequest, public BaseRequest
        {
            OpenTradeRequest() : PlayFabClientOpenTradeRequest{}
            {
            }

            OpenTradeRequest(const OpenTradeRequest& src) :
                PlayFabClientOpenTradeRequest{ src },
                m_allowedPlayerIds{ src.m_allowedPlayerIds },
                m_offeredInventoryInstanceIds{ src.m_offeredInventoryInstanceIds },
                m_requestedCatalogItemIds{ src.m_requestedCatalogItemIds }
            {

                allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
                offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
                requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
            }

            ~OpenTradeRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AllowedPlayerIds", m_allowedPlayerIds, allowedPlayerIds, allowedPlayerIdsCount);
                JsonUtils:: ObjectGetMember(input, "OfferedInventoryInstanceIds", m_offeredInventoryInstanceIds, offeredInventoryInstanceIds, offeredInventoryInstanceIdsCount);
                JsonUtils:: ObjectGetMember(input, "RequestedCatalogItemIds", m_requestedCatalogItemIds, requestedCatalogItemIds, requestedCatalogItemIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientOpenTradeRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_allowedPlayerIds;
            PointerArray<const char, String> m_offeredInventoryInstanceIds;
            PointerArray<const char, String> m_requestedCatalogItemIds;
        };

        struct OpenTradeResponse : public PlayFabClientOpenTradeResponse, public BaseResult
        {
            OpenTradeResponse() : PlayFabClientOpenTradeResponse{}
            {
            }

            OpenTradeResponse(const OpenTradeResponse& src) :
                PlayFabClientOpenTradeResponse{ src },
                m_trade{ src.m_trade }
            {

                trade = m_trade ? m_trade.operator->() : nullptr;
            }

            ~OpenTradeResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Trade", m_trade, trade);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientOpenTradeResponse>(*this);
            }

        private:
            StdExtra::optional<TradeInfo> m_trade;
        };

        struct PayForPurchaseRequest : public PlayFabClientPayForPurchaseRequest, public BaseRequest
        {
            PayForPurchaseRequest() : PlayFabClientPayForPurchaseRequest{}
            {
            }

            PayForPurchaseRequest(const PayForPurchaseRequest& src) :
                PlayFabClientPayForPurchaseRequest{ src },
                m_currency{ src.m_currency },
                m_customTags{ src.m_customTags },
                m_orderId{ src.m_orderId },
                m_providerName{ src.m_providerName },
                m_providerTransactionId{ src.m_providerTransactionId }
            {

                currency = m_currency.empty() ? nullptr : m_currency.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                providerName = m_providerName.empty() ? nullptr : m_providerName.data();
                providerTransactionId = m_providerTransactionId.empty() ? nullptr : m_providerTransactionId.data();
            }

            ~PayForPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Currency", m_currency, currency);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "ProviderName", m_providerName, providerName);
                JsonUtils:: ObjectGetMember(input, "ProviderTransactionId", m_providerTransactionId, providerTransactionId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPayForPurchaseRequest>(*this);
            }

        private:
            String m_currency;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_orderId;
            String m_providerName;
            String m_providerTransactionId;
        };

        struct PayForPurchaseResult : public PlayFabClientPayForPurchaseResult, public BaseResult
        {
            PayForPurchaseResult() : PlayFabClientPayForPurchaseResult{}
            {
            }

            PayForPurchaseResult(const PayForPurchaseResult& src) :
                PlayFabClientPayForPurchaseResult{ src },
                m_orderId{ src.m_orderId },
                m_providerData{ src.m_providerData },
                m_providerToken{ src.m_providerToken },
                m_purchaseConfirmationPageURL{ src.m_purchaseConfirmationPageURL },
                m_purchaseCurrency{ src.m_purchaseCurrency },
                m_status{ src.m_status },
                m_vCAmount{ src.m_vCAmount },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                providerData = m_providerData.empty() ? nullptr : m_providerData.data();
                providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
                purchaseConfirmationPageURL = m_purchaseConfirmationPageURL.empty() ? nullptr : m_purchaseConfirmationPageURL.data();
                purchaseCurrency = m_purchaseCurrency.empty() ? nullptr : m_purchaseCurrency.data();
                status = m_status ? m_status.operator->() : nullptr;
                vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
                virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
            }

            ~PayForPurchaseResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CreditApplied", creditApplied);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "ProviderData", m_providerData, providerData);
                JsonUtils:: ObjectGetMember(input, "ProviderToken", m_providerToken, providerToken);
                JsonUtils:: ObjectGetMember(input, "PurchaseConfirmationPageURL", m_purchaseConfirmationPageURL, purchaseConfirmationPageURL);
                JsonUtils:: ObjectGetMember(input, "PurchaseCurrency", m_purchaseCurrency, purchaseCurrency);
                JsonUtils:: ObjectGetMember(input, "PurchasePrice", purchasePrice);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "VCAmount", m_vCAmount, vCAmount, vCAmountCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPayForPurchaseResult>(*this);
            }

        private:

            String m_orderId;
            String m_providerData;
            String m_providerToken;
            String m_purchaseConfirmationPageURL;
            String m_purchaseCurrency;

            StdExtra::optional<PlayFabClientTransactionStatus> m_status;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_vCAmount;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
        };

        struct PaymentOption : public PlayFabClientPaymentOption, public BaseModel
        {
            PaymentOption() : PlayFabClientPaymentOption{}
            {
            }

            PaymentOption(const PaymentOption& src) :
                PlayFabClientPaymentOption{ src },
                m_currency{ src.m_currency },
                m_providerName{ src.m_providerName }
            {

                currency = m_currency.empty() ? nullptr : m_currency.data();
                providerName = m_providerName.empty() ? nullptr : m_providerName.data();
            }

            ~PaymentOption() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Currency", m_currency, currency);
                JsonUtils:: ObjectGetMember(input, "Price", price);
                JsonUtils:: ObjectGetMember(input, "ProviderName", m_providerName, providerName);
                JsonUtils:: ObjectGetMember(input, "StoreCredit", storeCredit);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPaymentOption>(*this);
            }

        private:
            String m_currency;

            String m_providerName;

        };

        struct PurchaseItemRequest : public PlayFabClientPurchaseItemRequest, public BaseRequest
        {
            PurchaseItemRequest() : PlayFabClientPurchaseItemRequest{}
            {
            }

            PurchaseItemRequest(const PurchaseItemRequest& src) :
                PlayFabClientPurchaseItemRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_itemId{ src.m_itemId },
                m_storeId{ src.m_storeId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemId = m_itemId.empty() ? nullptr : m_itemId.data();
                storeId = m_storeId.empty() ? nullptr : m_storeId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~PurchaseItemRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "Price", price);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPurchaseItemRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_itemId;

            String m_storeId;
            String m_virtualCurrency;
        };

        struct PurchaseItemResult : public PlayFabClientPurchaseItemResult, public BaseResult
        {
            PurchaseItemResult() : PlayFabClientPurchaseItemResult{}
            {
            }

            PurchaseItemResult(const PurchaseItemResult& src) :
                PlayFabClientPurchaseItemResult{ src },
                m_items{ src.m_items }
            {

                items = m_items.Empty() ? nullptr : m_items.Data();
            }

            ~PurchaseItemResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPurchaseItemResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_items;
        };

        struct PurchaseReceiptFulfillment : public PlayFabClientPurchaseReceiptFulfillment, public BaseModel
        {
            PurchaseReceiptFulfillment() : PlayFabClientPurchaseReceiptFulfillment{}
            {
            }

            PurchaseReceiptFulfillment(const PurchaseReceiptFulfillment& src) :
                PlayFabClientPurchaseReceiptFulfillment{ src },
                m_fulfilledItems{ src.m_fulfilledItems },
                m_recordedPriceSource{ src.m_recordedPriceSource },
                m_recordedTransactionCurrency{ src.m_recordedTransactionCurrency },
                m_recordedTransactionTotal{ src.m_recordedTransactionTotal }
            {

                fulfilledItems = m_fulfilledItems.Empty() ? nullptr : m_fulfilledItems.Data();
                recordedPriceSource = m_recordedPriceSource.empty() ? nullptr : m_recordedPriceSource.data();
                recordedTransactionCurrency = m_recordedTransactionCurrency.empty() ? nullptr : m_recordedTransactionCurrency.data();
                recordedTransactionTotal = m_recordedTransactionTotal ? m_recordedTransactionTotal.operator->() : nullptr;
            }

            ~PurchaseReceiptFulfillment() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FulfilledItems", m_fulfilledItems, fulfilledItems, fulfilledItemsCount);
                JsonUtils:: ObjectGetMember(input, "RecordedPriceSource", m_recordedPriceSource, recordedPriceSource);
                JsonUtils:: ObjectGetMember(input, "RecordedTransactionCurrency", m_recordedTransactionCurrency, recordedTransactionCurrency);
                JsonUtils:: ObjectGetMember(input, "RecordedTransactionTotal", m_recordedTransactionTotal, recordedTransactionTotal);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientPurchaseReceiptFulfillment>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_fulfilledItems;
            String m_recordedPriceSource;
            String m_recordedTransactionCurrency;
            StdExtra::optional<uint32_t> m_recordedTransactionTotal;
        };

        struct RedeemCouponRequest : public PlayFabClientRedeemCouponRequest, public BaseRequest
        {
            RedeemCouponRequest() : PlayFabClientRedeemCouponRequest{}
            {
            }

            RedeemCouponRequest(const RedeemCouponRequest& src) :
                PlayFabClientRedeemCouponRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_couponCode{ src.m_couponCode },
                m_customTags{ src.m_customTags }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~RedeemCouponRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CouponCode", m_couponCode, couponCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRedeemCouponRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            String m_couponCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct RedeemCouponResult : public PlayFabClientRedeemCouponResult, public BaseResult
        {
            RedeemCouponResult() : PlayFabClientRedeemCouponResult{}
            {
            }

            RedeemCouponResult(const RedeemCouponResult& src) :
                PlayFabClientRedeemCouponResult{ src },
                m_grantedItems{ src.m_grantedItems }
            {

                grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
            }

            ~RedeemCouponResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRedeemCouponResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_grantedItems;
        };

        struct RefreshPSNAuthTokenRequest : public PlayFabClientRefreshPSNAuthTokenRequest, public BaseRequest
        {
            RefreshPSNAuthTokenRequest() : PlayFabClientRefreshPSNAuthTokenRequest{}
            {
            }

            RefreshPSNAuthTokenRequest(const RefreshPSNAuthTokenRequest& src) :
                PlayFabClientRefreshPSNAuthTokenRequest{ src },
                m_authCode{ src.m_authCode },
                m_issuerId{ src.m_issuerId },
                m_redirectUri{ src.m_redirectUri }
            {

                authCode = m_authCode.empty() ? nullptr : m_authCode.data();
                issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
                redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
            }

            ~RefreshPSNAuthTokenRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AuthCode", m_authCode, authCode);
                JsonUtils:: ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
                JsonUtils:: ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRefreshPSNAuthTokenRequest>(*this);
            }

        private:
            String m_authCode;
            StdExtra::optional<int32_t> m_issuerId;
            String m_redirectUri;
        };

        struct RegisterForIOSPushNotificationRequest : public PlayFabClientRegisterForIOSPushNotificationRequest, public BaseRequest
        {
            RegisterForIOSPushNotificationRequest() : PlayFabClientRegisterForIOSPushNotificationRequest{}
            {
            }

            RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src) :
                PlayFabClientRegisterForIOSPushNotificationRequest{ src },
                m_confirmationMessage{ src.m_confirmationMessage },
                m_deviceToken{ src.m_deviceToken },
                m_sendPushNotificationConfirmation{ src.m_sendPushNotificationConfirmation }
            {

                confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
                deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
                sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
            }

            ~RegisterForIOSPushNotificationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConfirmationMessage", m_confirmationMessage, confirmationMessage);
                JsonUtils:: ObjectGetMember(input, "DeviceToken", m_deviceToken, deviceToken);
                JsonUtils:: ObjectGetMember(input, "SendPushNotificationConfirmation", m_sendPushNotificationConfirmation, sendPushNotificationConfirmation);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRegisterForIOSPushNotificationRequest>(*this);
            }

        private:
            String m_confirmationMessage;
            String m_deviceToken;
            StdExtra::optional<bool> m_sendPushNotificationConfirmation;
        };

        struct RegisterForIOSPushNotificationResult : public PlayFabClientRegisterForIOSPushNotificationResult, public BaseResult
        {
            RegisterForIOSPushNotificationResult() : PlayFabClientRegisterForIOSPushNotificationResult{}
            {
            }

            RegisterForIOSPushNotificationResult(const RegisterForIOSPushNotificationResult&) = default;

            ~RegisterForIOSPushNotificationResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRegisterForIOSPushNotificationResult>(*this);
            }

        private:
        };

        struct RegisterPlayFabUserRequest : public PlayFabClientRegisterPlayFabUserRequest, public BaseRequest
        {
            RegisterPlayFabUserRequest() : PlayFabClientRegisterPlayFabUserRequest{}
            {
            }

            RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src) :
                PlayFabClientRegisterPlayFabUserRequest{ src },
                m_customTags{ src.m_customTags },
                m_displayName{ src.m_displayName },
                m_email{ src.m_email },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_password{ src.m_password },
                m_playerSecret{ src.m_playerSecret },
                m_requireBothUsernameAndEmail{ src.m_requireBothUsernameAndEmail },
                m_titleId{ src.m_titleId },
                m_username{ src.m_username }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                email = m_email.empty() ? nullptr : m_email.data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                password = m_password.empty() ? nullptr : m_password.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                requireBothUsernameAndEmail = m_requireBothUsernameAndEmail ? m_requireBothUsernameAndEmail.operator->() : nullptr;
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~RegisterPlayFabUserRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "RequireBothUsernameAndEmail", m_requireBothUsernameAndEmail, requireBothUsernameAndEmail);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRegisterPlayFabUserRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_displayName;
            String m_email;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_password;
            String m_playerSecret;
            StdExtra::optional<bool> m_requireBothUsernameAndEmail;
            String m_titleId;
            String m_username;
        };

        struct RegisterPlayFabUserResult : public PlayFabClientRegisterPlayFabUserResult, public BaseResult
        {
            RegisterPlayFabUserResult() : PlayFabClientRegisterPlayFabUserResult{}
            {
            }

            RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src) :
                PlayFabClientRegisterPlayFabUserResult{ src },
                m_entityToken{ src.m_entityToken },
                m_playFabId{ src.m_playFabId },
                m_sessionTicket{ src.m_sessionTicket },
                m_settingsForUser{ src.m_settingsForUser },
                m_username{ src.m_username }
            {

                entityToken = m_entityToken ? m_entityToken.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
                settingsForUser = m_settingsForUser ? m_settingsForUser.operator->() : nullptr;
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~RegisterPlayFabUserResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "SessionTicket", m_sessionTicket, sessionTicket);
                JsonUtils:: ObjectGetMember(input, "SettingsForUser", m_settingsForUser, settingsForUser);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRegisterPlayFabUserResult>(*this);
            }

        private:
            StdExtra::optional<EntityTokenResponse> m_entityToken;
            String m_playFabId;
            String m_sessionTicket;
            StdExtra::optional<UserSettings> m_settingsForUser;
            String m_username;
        };

        struct RegisterWithWindowsHelloRequest : public PlayFabClientRegisterWithWindowsHelloRequest, public BaseRequest
        {
            RegisterWithWindowsHelloRequest() : PlayFabClientRegisterWithWindowsHelloRequest{}
            {
            }

            RegisterWithWindowsHelloRequest(const RegisterWithWindowsHelloRequest& src) :
                PlayFabClientRegisterWithWindowsHelloRequest{ src },
                m_customTags{ src.m_customTags },
                m_deviceName{ src.m_deviceName },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_publicKey{ src.m_publicKey },
                m_titleId{ src.m_titleId },
                m_userName{ src.m_userName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                deviceName = m_deviceName.empty() ? nullptr : m_deviceName.data();
                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                publicKey = m_publicKey.empty() ? nullptr : m_publicKey.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                userName = m_userName.empty() ? nullptr : m_userName.data();
            }

            ~RegisterWithWindowsHelloRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DeviceName", m_deviceName, deviceName);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "PublicKey", m_publicKey, publicKey);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "UserName", m_userName, userName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRegisterWithWindowsHelloRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_deviceName;
            String m_encryptedRequest;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_publicKey;
            String m_titleId;
            String m_userName;
        };

        struct RemoveContactEmailRequest : public PlayFabClientRemoveContactEmailRequest, public BaseRequest
        {
            RemoveContactEmailRequest() : PlayFabClientRemoveContactEmailRequest{}
            {
            }

            RemoveContactEmailRequest(const RemoveContactEmailRequest& src) :
                PlayFabClientRemoveContactEmailRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~RemoveContactEmailRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveContactEmailRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct RemoveContactEmailResult : public PlayFabClientRemoveContactEmailResult, public BaseResult
        {
            RemoveContactEmailResult() : PlayFabClientRemoveContactEmailResult{}
            {
            }

            RemoveContactEmailResult(const RemoveContactEmailResult&) = default;

            ~RemoveContactEmailResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveContactEmailResult>(*this);
            }

        private:
        };

        struct RemoveFriendRequest : public PlayFabClientRemoveFriendRequest, public BaseRequest
        {
            RemoveFriendRequest() : PlayFabClientRemoveFriendRequest{}
            {
            }

            RemoveFriendRequest(const RemoveFriendRequest& src) :
                PlayFabClientRemoveFriendRequest{ src },
                m_friendPlayFabId{ src.m_friendPlayFabId }
            {

                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
            }

            ~RemoveFriendRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveFriendRequest>(*this);
            }

        private:
            String m_friendPlayFabId;
        };

        struct RemoveFriendResult : public PlayFabClientRemoveFriendResult, public BaseResult
        {
            RemoveFriendResult() : PlayFabClientRemoveFriendResult{}
            {
            }

            RemoveFriendResult(const RemoveFriendResult&) = default;

            ~RemoveFriendResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveFriendResult>(*this);
            }

        private:
        };

        struct RemoveGenericIDRequest : public PlayFabClientRemoveGenericIDRequest, public BaseRequest
        {
            RemoveGenericIDRequest() : PlayFabClientRemoveGenericIDRequest{}
            {
            }

            RemoveGenericIDRequest(const RemoveGenericIDRequest& src) :
                PlayFabClientRemoveGenericIDRequest{ src },
                m_genericId{ src.m_genericId }
            {

                genericId = (PlayFabClientGenericServiceId*)&m_genericId;
            }

            ~RemoveGenericIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GenericId", m_genericId, genericId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveGenericIDRequest>(*this);
            }

        private:
            GenericServiceId m_genericId;
        };

        struct RemoveGenericIDResult : public PlayFabClientRemoveGenericIDResult, public BaseResult
        {
            RemoveGenericIDResult() : PlayFabClientRemoveGenericIDResult{}
            {
            }

            RemoveGenericIDResult(const RemoveGenericIDResult&) = default;

            ~RemoveGenericIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveGenericIDResult>(*this);
            }

        private:
        };

        struct RemoveSharedGroupMembersRequest : public PlayFabClientRemoveSharedGroupMembersRequest, public BaseRequest
        {
            RemoveSharedGroupMembersRequest() : PlayFabClientRemoveSharedGroupMembersRequest{}
            {
            }

            RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
                PlayFabClientRemoveSharedGroupMembersRequest{ src },
                m_playFabIds{ src.m_playFabIds },
                m_sharedGroupId{ src.m_sharedGroupId }
            {

                playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~RemoveSharedGroupMembersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveSharedGroupMembersRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_playFabIds;
            String m_sharedGroupId;
        };

        struct RemoveSharedGroupMembersResult : public PlayFabClientRemoveSharedGroupMembersResult, public BaseResult
        {
            RemoveSharedGroupMembersResult() : PlayFabClientRemoveSharedGroupMembersResult{}
            {
            }

            RemoveSharedGroupMembersResult(const RemoveSharedGroupMembersResult&) = default;

            ~RemoveSharedGroupMembersResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRemoveSharedGroupMembersResult>(*this);
            }

        private:
        };

        struct ReportAdActivityRequest : public PlayFabClientReportAdActivityRequest, public BaseRequest
        {
            ReportAdActivityRequest() : PlayFabClientReportAdActivityRequest{}
            {
            }

            ReportAdActivityRequest(const ReportAdActivityRequest& src) :
                PlayFabClientReportAdActivityRequest{ src },
                m_customTags{ src.m_customTags },
                m_placementId{ src.m_placementId },
                m_rewardId{ src.m_rewardId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                placementId = m_placementId.empty() ? nullptr : m_placementId.data();
                rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
            }

            ~ReportAdActivityRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Activity", activity);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlacementId", m_placementId, placementId);
                JsonUtils:: ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientReportAdActivityRequest>(*this);
            }

        private:

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_placementId;
            String m_rewardId;
        };

        struct ReportAdActivityResult : public PlayFabClientReportAdActivityResult, public BaseResult
        {
            ReportAdActivityResult() : PlayFabClientReportAdActivityResult{}
            {
            }

            ReportAdActivityResult(const ReportAdActivityResult&) = default;

            ~ReportAdActivityResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientReportAdActivityResult>(*this);
            }

        private:
        };

        struct ReportPlayerClientRequest : public PlayFabClientReportPlayerClientRequest, public BaseRequest
        {
            ReportPlayerClientRequest() : PlayFabClientReportPlayerClientRequest{}
            {
            }

            ReportPlayerClientRequest(const ReportPlayerClientRequest& src) :
                PlayFabClientReportPlayerClientRequest{ src },
                m_comment{ src.m_comment },
                m_customTags{ src.m_customTags },
                m_reporteeId{ src.m_reporteeId }
            {

                comment = m_comment.empty() ? nullptr : m_comment.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
            }

            ~ReportPlayerClientRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ReporteeId", m_reporteeId, reporteeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientReportPlayerClientRequest>(*this);
            }

        private:
            String m_comment;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_reporteeId;
        };

        struct ReportPlayerClientResult : public PlayFabClientReportPlayerClientResult, public BaseResult
        {
            ReportPlayerClientResult() : PlayFabClientReportPlayerClientResult{}
            {
            }

            ReportPlayerClientResult(const ReportPlayerClientResult&) = default;

            ~ReportPlayerClientResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "SubmissionsRemaining", submissionsRemaining);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientReportPlayerClientResult>(*this);
            }

        private:

        };

        struct RestoreIOSPurchasesRequest : public PlayFabClientRestoreIOSPurchasesRequest, public BaseRequest
        {
            RestoreIOSPurchasesRequest() : PlayFabClientRestoreIOSPurchasesRequest{}
            {
            }

            RestoreIOSPurchasesRequest(const RestoreIOSPurchasesRequest& src) :
                PlayFabClientRestoreIOSPurchasesRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_receiptData{ src.m_receiptData }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
            }

            ~RestoreIOSPurchasesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ReceiptData", m_receiptData, receiptData);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRestoreIOSPurchasesRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_receiptData;
        };

        struct RestoreIOSPurchasesResult : public PlayFabClientRestoreIOSPurchasesResult, public BaseResult
        {
            RestoreIOSPurchasesResult() : PlayFabClientRestoreIOSPurchasesResult{}
            {
            }

            RestoreIOSPurchasesResult(const RestoreIOSPurchasesResult& src) :
                PlayFabClientRestoreIOSPurchasesResult{ src },
                m_fulfillments{ src.m_fulfillments }
            {

                fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
            }

            ~RestoreIOSPurchasesResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRestoreIOSPurchasesResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
        };

        struct RewardAdActivityRequest : public PlayFabClientRewardAdActivityRequest, public BaseRequest
        {
            RewardAdActivityRequest() : PlayFabClientRewardAdActivityRequest{}
            {
            }

            RewardAdActivityRequest(const RewardAdActivityRequest& src) :
                PlayFabClientRewardAdActivityRequest{ src },
                m_customTags{ src.m_customTags },
                m_placementId{ src.m_placementId },
                m_rewardId{ src.m_rewardId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                placementId = m_placementId.empty() ? nullptr : m_placementId.data();
                rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
            }

            ~RewardAdActivityRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlacementId", m_placementId, placementId);
                JsonUtils:: ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRewardAdActivityRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_placementId;
            String m_rewardId;
        };

        struct RewardAdActivityResult : public PlayFabClientRewardAdActivityResult, public BaseResult
        {
            RewardAdActivityResult() : PlayFabClientRewardAdActivityResult{}
            {
            }

            RewardAdActivityResult(const RewardAdActivityResult& src) :
                PlayFabClientRewardAdActivityResult{ src },
                m_adActivityEventId{ src.m_adActivityEventId },
                m_debugResults{ src.m_debugResults },
                m_placementId{ src.m_placementId },
                m_placementName{ src.m_placementName },
                m_placementViewsRemaining{ src.m_placementViewsRemaining },
                m_placementViewsResetMinutes{ src.m_placementViewsResetMinutes },
                m_rewardResults{ src.m_rewardResults }
            {

                adActivityEventId = m_adActivityEventId.empty() ? nullptr : m_adActivityEventId.data();
                debugResults = m_debugResults.Empty() ? nullptr : m_debugResults.Data();
                placementId = m_placementId.empty() ? nullptr : m_placementId.data();
                placementName = m_placementName.empty() ? nullptr : m_placementName.data();
                placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
                placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
                rewardResults = m_rewardResults ? m_rewardResults.operator->() : nullptr;
            }

            ~RewardAdActivityResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdActivityEventId", m_adActivityEventId, adActivityEventId);
                JsonUtils:: ObjectGetMember(input, "DebugResults", m_debugResults, debugResults, debugResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlacementId", m_placementId, placementId);
                JsonUtils:: ObjectGetMember(input, "PlacementName", m_placementName, placementName);
                JsonUtils:: ObjectGetMember(input, "PlacementViewsRemaining", m_placementViewsRemaining, placementViewsRemaining);
                JsonUtils:: ObjectGetMember(input, "PlacementViewsResetMinutes", m_placementViewsResetMinutes, placementViewsResetMinutes);
                JsonUtils:: ObjectGetMember(input, "RewardResults", m_rewardResults, rewardResults);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientRewardAdActivityResult>(*this);
            }

        private:
            String m_adActivityEventId;
            PointerArray<const char, String> m_debugResults;
            String m_placementId;
            String m_placementName;
            StdExtra::optional<int32_t> m_placementViewsRemaining;
            StdExtra::optional<double> m_placementViewsResetMinutes;
            StdExtra::optional<AdRewardResults> m_rewardResults;
        };

        struct SendAccountRecoveryEmailRequest : public PlayFabClientSendAccountRecoveryEmailRequest, public BaseRequest
        {
            SendAccountRecoveryEmailRequest() : PlayFabClientSendAccountRecoveryEmailRequest{}
            {
            }

            SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
                PlayFabClientSendAccountRecoveryEmailRequest{ src },
                m_customTags{ src.m_customTags },
                m_email{ src.m_email },
                m_emailTemplateId{ src.m_emailTemplateId },
                m_titleId{ src.m_titleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                email = m_email.empty() ? nullptr : m_email.data();
                emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~SendAccountRecoveryEmailRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSendAccountRecoveryEmailRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_email;
            String m_emailTemplateId;
            String m_titleId;
        };

        struct SendAccountRecoveryEmailResult : public PlayFabClientSendAccountRecoveryEmailResult, public BaseResult
        {
            SendAccountRecoveryEmailResult() : PlayFabClientSendAccountRecoveryEmailResult{}
            {
            }

            SendAccountRecoveryEmailResult(const SendAccountRecoveryEmailResult&) = default;

            ~SendAccountRecoveryEmailResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSendAccountRecoveryEmailResult>(*this);
            }

        private:
        };

        struct SetFriendTagsRequest : public PlayFabClientSetFriendTagsRequest, public BaseRequest
        {
            SetFriendTagsRequest() : PlayFabClientSetFriendTagsRequest{}
            {
            }

            SetFriendTagsRequest(const SetFriendTagsRequest& src) :
                PlayFabClientSetFriendTagsRequest{ src },
                m_friendPlayFabId{ src.m_friendPlayFabId },
                m_tags{ src.m_tags }
            {

                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~SetFriendTagsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSetFriendTagsRequest>(*this);
            }

        private:
            String m_friendPlayFabId;
            PointerArray<const char, String> m_tags;
        };

        struct SetFriendTagsResult : public PlayFabClientSetFriendTagsResult, public BaseResult
        {
            SetFriendTagsResult() : PlayFabClientSetFriendTagsResult{}
            {
            }

            SetFriendTagsResult(const SetFriendTagsResult&) = default;

            ~SetFriendTagsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSetFriendTagsResult>(*this);
            }

        private:
        };

        struct SetPlayerSecretRequest : public PlayFabClientSetPlayerSecretRequest, public BaseRequest
        {
            SetPlayerSecretRequest() : PlayFabClientSetPlayerSecretRequest{}
            {
            }

            SetPlayerSecretRequest(const SetPlayerSecretRequest& src) :
                PlayFabClientSetPlayerSecretRequest{ src },
                m_encryptedRequest{ src.m_encryptedRequest },
                m_playerSecret{ src.m_playerSecret }
            {

                encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
            }

            ~SetPlayerSecretRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSetPlayerSecretRequest>(*this);
            }

        private:
            String m_encryptedRequest;
            String m_playerSecret;
        };

        struct SetPlayerSecretResult : public PlayFabClientSetPlayerSecretResult, public BaseResult
        {
            SetPlayerSecretResult() : PlayFabClientSetPlayerSecretResult{}
            {
            }

            SetPlayerSecretResult(const SetPlayerSecretResult&) = default;

            ~SetPlayerSecretResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSetPlayerSecretResult>(*this);
            }

        private:
        };

        struct StartGameRequest : public PlayFabClientStartGameRequest, public BaseRequest
        {
            StartGameRequest() : PlayFabClientStartGameRequest{}
            {
            }

            StartGameRequest(const StartGameRequest& src) :
                PlayFabClientStartGameRequest{ src },
                m_buildVersion{ src.m_buildVersion },
                m_characterId{ src.m_characterId },
                m_customCommandLineData{ src.m_customCommandLineData },
                m_customTags{ src.m_customTags },
                m_gameMode{ src.m_gameMode },
                m_statisticName{ src.m_statisticName }
            {

                buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customCommandLineData = m_customCommandLineData.empty() ? nullptr : m_customCommandLineData.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~StartGameRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomCommandLineData", m_customCommandLineData, customCommandLineData);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
                JsonUtils:: ObjectGetMember(input, "Region", region);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStartGameRequest>(*this);
            }

        private:
            String m_buildVersion;
            String m_characterId;
            String m_customCommandLineData;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_gameMode;

            String m_statisticName;
        };

        struct StartGameResult : public PlayFabClientStartGameResult, public BaseResult
        {
            StartGameResult() : PlayFabClientStartGameResult{}
            {
            }

            StartGameResult(const StartGameResult& src) :
                PlayFabClientStartGameResult{ src },
                m_expires{ src.m_expires },
                m_lobbyID{ src.m_lobbyID },
                m_password{ src.m_password },
                m_serverIPV4Address{ src.m_serverIPV4Address },
                m_serverIPV6Address{ src.m_serverIPV6Address },
                m_serverPort{ src.m_serverPort },
                m_serverPublicDNSName{ src.m_serverPublicDNSName },
                m_ticket{ src.m_ticket }
            {

                expires = m_expires.empty() ? nullptr : m_expires.data();
                lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
                password = m_password.empty() ? nullptr : m_password.data();
                serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
                serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
                serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
                serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
                ticket = m_ticket.empty() ? nullptr : m_ticket.data();
            }

            ~StartGameResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Expires", m_expires, expires);
                JsonUtils:: ObjectGetMember(input, "LobbyID", m_lobbyID, lobbyID);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
                JsonUtils:: ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
                JsonUtils:: ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
                JsonUtils:: ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
                JsonUtils:: ObjectGetMember(input, "Ticket", m_ticket, ticket);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStartGameResult>(*this);
            }

        private:
            String m_expires;
            String m_lobbyID;
            String m_password;
            String m_serverIPV4Address;
            String m_serverIPV6Address;
            StdExtra::optional<int32_t> m_serverPort;
            String m_serverPublicDNSName;
            String m_ticket;
        };

        struct StartPurchaseRequest : public PlayFabClientStartPurchaseRequest, public BaseRequest
        {
            StartPurchaseRequest() : PlayFabClientStartPurchaseRequest{}
            {
            }

            StartPurchaseRequest(const StartPurchaseRequest& src) :
                PlayFabClientStartPurchaseRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_items{ src.m_items },
                m_storeId{ src.m_storeId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                items = m_items.Empty() ? nullptr : m_items.Data();
                storeId = m_storeId.empty() ? nullptr : m_storeId.data();
            }

            ~StartPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStartPurchaseRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabClientItemPurchaseRequest, ItemPurchaseRequest> m_items;
            String m_storeId;
        };

        struct StartPurchaseResult : public PlayFabClientStartPurchaseResult, public BaseResult
        {
            StartPurchaseResult() : PlayFabClientStartPurchaseResult{}
            {
            }

            StartPurchaseResult(const StartPurchaseResult& src) :
                PlayFabClientStartPurchaseResult{ src },
                m_contents{ src.m_contents },
                m_orderId{ src.m_orderId },
                m_paymentOptions{ src.m_paymentOptions },
                m_virtualCurrencyBalances{ src.m_virtualCurrencyBalances }
            {

                contents = m_contents.Empty() ? nullptr : m_contents.Data();
                orderId = m_orderId.empty() ? nullptr : m_orderId.data();
                paymentOptions = m_paymentOptions.Empty() ? nullptr : m_paymentOptions.Data();
                virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
            }

            ~StartPurchaseResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Contents", m_contents, contents, contentsCount);
                JsonUtils:: ObjectGetMember(input, "OrderId", m_orderId, orderId);
                JsonUtils:: ObjectGetMember(input, "PaymentOptions", m_paymentOptions, paymentOptions, paymentOptionsCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStartPurchaseResult>(*this);
            }

        private:
            PointerArray<PlayFabClientCartItem, CartItem> m_contents;
            String m_orderId;
            PointerArray<PlayFabClientPaymentOption, PaymentOption> m_paymentOptions;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrencyBalances;
        };

        struct StatisticUpdate : public PlayFabClientStatisticUpdate, public BaseModel
        {
            StatisticUpdate() : PlayFabClientStatisticUpdate{}
            {
            }

            StatisticUpdate(const StatisticUpdate& src) :
                PlayFabClientStatisticUpdate{ src },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version }
            {

                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~StatisticUpdate() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Value", value);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientStatisticUpdate>(*this);
            }

        private:
            String m_statisticName;

            StdExtra::optional<uint32_t> m_version;
        };

        struct SubtractUserVirtualCurrencyRequest : public PlayFabClientSubtractUserVirtualCurrencyRequest, public BaseRequest
        {
            SubtractUserVirtualCurrencyRequest() : PlayFabClientSubtractUserVirtualCurrencyRequest{}
            {
            }

            SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
                PlayFabClientSubtractUserVirtualCurrencyRequest{ src },
                m_customTags{ src.m_customTags },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~SubtractUserVirtualCurrencyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientSubtractUserVirtualCurrencyRequest>(*this);
            }

        private:

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_virtualCurrency;
        };

        struct UnlinkAndroidDeviceIDRequest : public PlayFabClientUnlinkAndroidDeviceIDRequest, public BaseRequest
        {
            UnlinkAndroidDeviceIDRequest() : PlayFabClientUnlinkAndroidDeviceIDRequest{}
            {
            }

            UnlinkAndroidDeviceIDRequest(const UnlinkAndroidDeviceIDRequest& src) :
                PlayFabClientUnlinkAndroidDeviceIDRequest{ src },
                m_androidDeviceId{ src.m_androidDeviceId },
                m_customTags{ src.m_customTags }
            {

                androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkAndroidDeviceIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkAndroidDeviceIDRequest>(*this);
            }

        private:
            String m_androidDeviceId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkAndroidDeviceIDResult : public PlayFabClientUnlinkAndroidDeviceIDResult, public BaseResult
        {
            UnlinkAndroidDeviceIDResult() : PlayFabClientUnlinkAndroidDeviceIDResult{}
            {
            }

            UnlinkAndroidDeviceIDResult(const UnlinkAndroidDeviceIDResult&) = default;

            ~UnlinkAndroidDeviceIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkAndroidDeviceIDResult>(*this);
            }

        private:
        };

        struct UnlinkAppleRequest : public PlayFabClientUnlinkAppleRequest, public BaseRequest
        {
            UnlinkAppleRequest() : PlayFabClientUnlinkAppleRequest{}
            {
            }

            UnlinkAppleRequest(const UnlinkAppleRequest& src) :
                PlayFabClientUnlinkAppleRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkAppleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkAppleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkCustomIDRequest : public PlayFabClientUnlinkCustomIDRequest, public BaseRequest
        {
            UnlinkCustomIDRequest() : PlayFabClientUnlinkCustomIDRequest{}
            {
            }

            UnlinkCustomIDRequest(const UnlinkCustomIDRequest& src) :
                PlayFabClientUnlinkCustomIDRequest{ src },
                m_customId{ src.m_customId },
                m_customTags{ src.m_customTags }
            {

                customId = m_customId.empty() ? nullptr : m_customId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkCustomIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomId", m_customId, customId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkCustomIDRequest>(*this);
            }

        private:
            String m_customId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkCustomIDResult : public PlayFabClientUnlinkCustomIDResult, public BaseResult
        {
            UnlinkCustomIDResult() : PlayFabClientUnlinkCustomIDResult{}
            {
            }

            UnlinkCustomIDResult(const UnlinkCustomIDResult&) = default;

            ~UnlinkCustomIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkCustomIDResult>(*this);
            }

        private:
        };

        struct UnlinkFacebookAccountRequest : public PlayFabClientUnlinkFacebookAccountRequest, public BaseRequest
        {
            UnlinkFacebookAccountRequest() : PlayFabClientUnlinkFacebookAccountRequest{}
            {
            }

            UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src) :
                PlayFabClientUnlinkFacebookAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkFacebookAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkFacebookAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkFacebookAccountResult : public PlayFabClientUnlinkFacebookAccountResult, public BaseResult
        {
            UnlinkFacebookAccountResult() : PlayFabClientUnlinkFacebookAccountResult{}
            {
            }

            UnlinkFacebookAccountResult(const UnlinkFacebookAccountResult&) = default;

            ~UnlinkFacebookAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkFacebookAccountResult>(*this);
            }

        private:
        };

        struct UnlinkFacebookInstantGamesIdRequest : public PlayFabClientUnlinkFacebookInstantGamesIdRequest, public BaseRequest
        {
            UnlinkFacebookInstantGamesIdRequest() : PlayFabClientUnlinkFacebookInstantGamesIdRequest{}
            {
            }

            UnlinkFacebookInstantGamesIdRequest(const UnlinkFacebookInstantGamesIdRequest& src) :
                PlayFabClientUnlinkFacebookInstantGamesIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
            }

            ~UnlinkFacebookInstantGamesIdRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkFacebookInstantGamesIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_facebookInstantGamesId;
        };

        struct UnlinkFacebookInstantGamesIdResult : public PlayFabClientUnlinkFacebookInstantGamesIdResult, public BaseResult
        {
            UnlinkFacebookInstantGamesIdResult() : PlayFabClientUnlinkFacebookInstantGamesIdResult{}
            {
            }

            UnlinkFacebookInstantGamesIdResult(const UnlinkFacebookInstantGamesIdResult&) = default;

            ~UnlinkFacebookInstantGamesIdResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkFacebookInstantGamesIdResult>(*this);
            }

        private:
        };

        struct UnlinkGameCenterAccountRequest : public PlayFabClientUnlinkGameCenterAccountRequest, public BaseRequest
        {
            UnlinkGameCenterAccountRequest() : PlayFabClientUnlinkGameCenterAccountRequest{}
            {
            }

            UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src) :
                PlayFabClientUnlinkGameCenterAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkGameCenterAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkGameCenterAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkGameCenterAccountResult : public PlayFabClientUnlinkGameCenterAccountResult, public BaseResult
        {
            UnlinkGameCenterAccountResult() : PlayFabClientUnlinkGameCenterAccountResult{}
            {
            }

            UnlinkGameCenterAccountResult(const UnlinkGameCenterAccountResult&) = default;

            ~UnlinkGameCenterAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkGameCenterAccountResult>(*this);
            }

        private:
        };

        struct UnlinkGoogleAccountRequest : public PlayFabClientUnlinkGoogleAccountRequest, public BaseRequest
        {
            UnlinkGoogleAccountRequest() : PlayFabClientUnlinkGoogleAccountRequest{}
            {
            }

            UnlinkGoogleAccountRequest(const UnlinkGoogleAccountRequest& src) :
                PlayFabClientUnlinkGoogleAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkGoogleAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkGoogleAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkGoogleAccountResult : public PlayFabClientUnlinkGoogleAccountResult, public BaseResult
        {
            UnlinkGoogleAccountResult() : PlayFabClientUnlinkGoogleAccountResult{}
            {
            }

            UnlinkGoogleAccountResult(const UnlinkGoogleAccountResult&) = default;

            ~UnlinkGoogleAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkGoogleAccountResult>(*this);
            }

        private:
        };

        struct UnlinkIOSDeviceIDRequest : public PlayFabClientUnlinkIOSDeviceIDRequest, public BaseRequest
        {
            UnlinkIOSDeviceIDRequest() : PlayFabClientUnlinkIOSDeviceIDRequest{}
            {
            }

            UnlinkIOSDeviceIDRequest(const UnlinkIOSDeviceIDRequest& src) :
                PlayFabClientUnlinkIOSDeviceIDRequest{ src },
                m_customTags{ src.m_customTags },
                m_deviceId{ src.m_deviceId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
            }

            ~UnlinkIOSDeviceIDRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkIOSDeviceIDRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_deviceId;
        };

        struct UnlinkIOSDeviceIDResult : public PlayFabClientUnlinkIOSDeviceIDResult, public BaseResult
        {
            UnlinkIOSDeviceIDResult() : PlayFabClientUnlinkIOSDeviceIDResult{}
            {
            }

            UnlinkIOSDeviceIDResult(const UnlinkIOSDeviceIDResult&) = default;

            ~UnlinkIOSDeviceIDResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkIOSDeviceIDResult>(*this);
            }

        private:
        };

        struct UnlinkKongregateAccountRequest : public PlayFabClientUnlinkKongregateAccountRequest, public BaseRequest
        {
            UnlinkKongregateAccountRequest() : PlayFabClientUnlinkKongregateAccountRequest{}
            {
            }

            UnlinkKongregateAccountRequest(const UnlinkKongregateAccountRequest& src) :
                PlayFabClientUnlinkKongregateAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkKongregateAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkKongregateAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkKongregateAccountResult : public PlayFabClientUnlinkKongregateAccountResult, public BaseResult
        {
            UnlinkKongregateAccountResult() : PlayFabClientUnlinkKongregateAccountResult{}
            {
            }

            UnlinkKongregateAccountResult(const UnlinkKongregateAccountResult&) = default;

            ~UnlinkKongregateAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkKongregateAccountResult>(*this);
            }

        private:
        };

        struct UnlinkNintendoServiceAccountRequest : public PlayFabClientUnlinkNintendoServiceAccountRequest, public BaseRequest
        {
            UnlinkNintendoServiceAccountRequest() : PlayFabClientUnlinkNintendoServiceAccountRequest{}
            {
            }

            UnlinkNintendoServiceAccountRequest(const UnlinkNintendoServiceAccountRequest& src) :
                PlayFabClientUnlinkNintendoServiceAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkNintendoServiceAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkNintendoServiceAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkNintendoSwitchDeviceIdRequest : public PlayFabClientUnlinkNintendoSwitchDeviceIdRequest, public BaseRequest
        {
            UnlinkNintendoSwitchDeviceIdRequest() : PlayFabClientUnlinkNintendoSwitchDeviceIdRequest{}
            {
            }

            UnlinkNintendoSwitchDeviceIdRequest(const UnlinkNintendoSwitchDeviceIdRequest& src) :
                PlayFabClientUnlinkNintendoSwitchDeviceIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
            }

            ~UnlinkNintendoSwitchDeviceIdRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkNintendoSwitchDeviceIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_nintendoSwitchDeviceId;
        };

        struct UnlinkNintendoSwitchDeviceIdResult : public PlayFabClientUnlinkNintendoSwitchDeviceIdResult, public BaseResult
        {
            UnlinkNintendoSwitchDeviceIdResult() : PlayFabClientUnlinkNintendoSwitchDeviceIdResult{}
            {
            }

            UnlinkNintendoSwitchDeviceIdResult(const UnlinkNintendoSwitchDeviceIdResult&) = default;

            ~UnlinkNintendoSwitchDeviceIdResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkNintendoSwitchDeviceIdResult>(*this);
            }

        private:
        };

        struct UnlinkOpenIdConnectRequest : public PlayFabClientUnlinkOpenIdConnectRequest, public BaseRequest
        {
            UnlinkOpenIdConnectRequest() : PlayFabClientUnlinkOpenIdConnectRequest{}
            {
            }

            UnlinkOpenIdConnectRequest(const UnlinkOpenIdConnectRequest& src) :
                PlayFabClientUnlinkOpenIdConnectRequest{ src },
                m_connectionId{ src.m_connectionId },
                m_customTags{ src.m_customTags }
            {

                connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkOpenIdConnectRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkOpenIdConnectRequest>(*this);
            }

        private:
            String m_connectionId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkPSNAccountRequest : public PlayFabClientUnlinkPSNAccountRequest, public BaseRequest
        {
            UnlinkPSNAccountRequest() : PlayFabClientUnlinkPSNAccountRequest{}
            {
            }

            UnlinkPSNAccountRequest(const UnlinkPSNAccountRequest& src) :
                PlayFabClientUnlinkPSNAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkPSNAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkPSNAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkPSNAccountResult : public PlayFabClientUnlinkPSNAccountResult, public BaseResult
        {
            UnlinkPSNAccountResult() : PlayFabClientUnlinkPSNAccountResult{}
            {
            }

            UnlinkPSNAccountResult(const UnlinkPSNAccountResult&) = default;

            ~UnlinkPSNAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkPSNAccountResult>(*this);
            }

        private:
        };

        struct UnlinkSteamAccountRequest : public PlayFabClientUnlinkSteamAccountRequest, public BaseRequest
        {
            UnlinkSteamAccountRequest() : PlayFabClientUnlinkSteamAccountRequest{}
            {
            }

            UnlinkSteamAccountRequest(const UnlinkSteamAccountRequest& src) :
                PlayFabClientUnlinkSteamAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkSteamAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkSteamAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkSteamAccountResult : public PlayFabClientUnlinkSteamAccountResult, public BaseResult
        {
            UnlinkSteamAccountResult() : PlayFabClientUnlinkSteamAccountResult{}
            {
            }

            UnlinkSteamAccountResult(const UnlinkSteamAccountResult&) = default;

            ~UnlinkSteamAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkSteamAccountResult>(*this);
            }

        private:
        };

        struct UnlinkTwitchAccountRequest : public PlayFabClientUnlinkTwitchAccountRequest, public BaseRequest
        {
            UnlinkTwitchAccountRequest() : PlayFabClientUnlinkTwitchAccountRequest{}
            {
            }

            UnlinkTwitchAccountRequest(const UnlinkTwitchAccountRequest& src) :
                PlayFabClientUnlinkTwitchAccountRequest{ src },
                m_accessToken{ src.m_accessToken },
                m_customTags{ src.m_customTags }
            {

                accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkTwitchAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkTwitchAccountRequest>(*this);
            }

        private:
            String m_accessToken;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkTwitchAccountResult : public PlayFabClientUnlinkTwitchAccountResult, public BaseResult
        {
            UnlinkTwitchAccountResult() : PlayFabClientUnlinkTwitchAccountResult{}
            {
            }

            UnlinkTwitchAccountResult(const UnlinkTwitchAccountResult&) = default;

            ~UnlinkTwitchAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkTwitchAccountResult>(*this);
            }

        private:
        };

        struct UnlinkWindowsHelloAccountRequest : public PlayFabClientUnlinkWindowsHelloAccountRequest, public BaseRequest
        {
            UnlinkWindowsHelloAccountRequest() : PlayFabClientUnlinkWindowsHelloAccountRequest{}
            {
            }

            UnlinkWindowsHelloAccountRequest(const UnlinkWindowsHelloAccountRequest& src) :
                PlayFabClientUnlinkWindowsHelloAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_publicKeyHint{ src.m_publicKeyHint }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                publicKeyHint = m_publicKeyHint.empty() ? nullptr : m_publicKeyHint.data();
            }

            ~UnlinkWindowsHelloAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PublicKeyHint", m_publicKeyHint, publicKeyHint);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkWindowsHelloAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_publicKeyHint;
        };

        struct UnlinkWindowsHelloAccountResponse : public PlayFabClientUnlinkWindowsHelloAccountResponse, public BaseResult
        {
            UnlinkWindowsHelloAccountResponse() : PlayFabClientUnlinkWindowsHelloAccountResponse{}
            {
            }

            UnlinkWindowsHelloAccountResponse(const UnlinkWindowsHelloAccountResponse&) = default;

            ~UnlinkWindowsHelloAccountResponse() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkWindowsHelloAccountResponse>(*this);
            }

        private:
        };

        struct UnlinkXboxAccountRequest : public PlayFabClientUnlinkXboxAccountRequest, public BaseRequest
        {
            UnlinkXboxAccountRequest() : PlayFabClientUnlinkXboxAccountRequest{}
            {
            }

            UnlinkXboxAccountRequest(const UnlinkXboxAccountRequest& src) :
                PlayFabClientUnlinkXboxAccountRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlinkXboxAccountRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkXboxAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlinkXboxAccountResult : public PlayFabClientUnlinkXboxAccountResult, public BaseResult
        {
            UnlinkXboxAccountResult() : PlayFabClientUnlinkXboxAccountResult{}
            {
            }

            UnlinkXboxAccountResult(const UnlinkXboxAccountResult&) = default;

            ~UnlinkXboxAccountResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlinkXboxAccountResult>(*this);
            }

        private:
        };

        struct UnlockContainerInstanceRequest : public PlayFabClientUnlockContainerInstanceRequest, public BaseRequest
        {
            UnlockContainerInstanceRequest() : PlayFabClientUnlockContainerInstanceRequest{}
            {
            }

            UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src) :
                PlayFabClientUnlockContainerInstanceRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_containerItemInstanceId{ src.m_containerItemInstanceId },
                m_customTags{ src.m_customTags },
                m_keyItemInstanceId{ src.m_keyItemInstanceId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
            }

            ~UnlockContainerInstanceRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ContainerItemInstanceId", m_containerItemInstanceId, containerItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "KeyItemInstanceId", m_keyItemInstanceId, keyItemInstanceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlockContainerInstanceRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            String m_containerItemInstanceId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_keyItemInstanceId;
        };

        struct UnlockContainerItemRequest : public PlayFabClientUnlockContainerItemRequest, public BaseRequest
        {
            UnlockContainerItemRequest() : PlayFabClientUnlockContainerItemRequest{}
            {
            }

            UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
                PlayFabClientUnlockContainerItemRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_containerItemId{ src.m_containerItemId },
                m_customTags{ src.m_customTags }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UnlockContainerItemRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ContainerItemId", m_containerItemId, containerItemId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlockContainerItemRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            String m_containerItemId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UnlockContainerItemResult : public PlayFabClientUnlockContainerItemResult, public BaseResult
        {
            UnlockContainerItemResult() : PlayFabClientUnlockContainerItemResult{}
            {
            }

            UnlockContainerItemResult(const UnlockContainerItemResult& src) :
                PlayFabClientUnlockContainerItemResult{ src },
                m_grantedItems{ src.m_grantedItems },
                m_unlockedItemInstanceId{ src.m_unlockedItemInstanceId },
                m_unlockedWithItemInstanceId{ src.m_unlockedWithItemInstanceId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {

                grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
                unlockedItemInstanceId = m_unlockedItemInstanceId.empty() ? nullptr : m_unlockedItemInstanceId.data();
                unlockedWithItemInstanceId = m_unlockedWithItemInstanceId.empty() ? nullptr : m_unlockedWithItemInstanceId.data();
                virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
            }

            ~UnlockContainerItemResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
                JsonUtils:: ObjectGetMember(input, "UnlockedItemInstanceId", m_unlockedItemInstanceId, unlockedItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "UnlockedWithItemInstanceId", m_unlockedWithItemInstanceId, unlockedWithItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUnlockContainerItemResult>(*this);
            }

        private:
            PointerArray<PlayFabClientItemInstance, ItemInstance> m_grantedItems;
            String m_unlockedItemInstanceId;
            String m_unlockedWithItemInstanceId;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrency;
        };

        struct UpdateAvatarUrlRequest : public PlayFabClientUpdateAvatarUrlRequest, public BaseRequest
        {
            UpdateAvatarUrlRequest() : PlayFabClientUpdateAvatarUrlRequest{}
            {
            }

            UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src) :
                PlayFabClientUpdateAvatarUrlRequest{ src },
                m_imageUrl{ src.m_imageUrl }
            {

                imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
            }

            ~UpdateAvatarUrlRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ImageUrl", m_imageUrl, imageUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateAvatarUrlRequest>(*this);
            }

        private:
            String m_imageUrl;
        };

        struct UpdateCharacterDataRequest : public PlayFabClientUpdateCharacterDataRequest, public BaseRequest
        {
            UpdateCharacterDataRequest() : PlayFabClientUpdateCharacterDataRequest{}
            {
            }

            UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src) :
                PlayFabClientUpdateCharacterDataRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_data{ src.m_data },
                m_keysToRemove{ src.m_keysToRemove },
                m_permission{ src.m_permission }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                data = m_data.Empty() ? nullptr : m_data.Data();
                keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
                permission = m_permission ? m_permission.operator->() : nullptr;
            }

            ~UpdateCharacterDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateCharacterDataRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabClientUserDataPermission> m_permission;
        };

        struct UpdateCharacterDataResult : public PlayFabClientUpdateCharacterDataResult, public BaseResult
        {
            UpdateCharacterDataResult() : PlayFabClientUpdateCharacterDataResult{}
            {
            }

            UpdateCharacterDataResult(const UpdateCharacterDataResult&) = default;

            ~UpdateCharacterDataResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateCharacterDataResult>(*this);
            }

        private:

        };

        struct UpdateCharacterStatisticsRequest : public PlayFabClientUpdateCharacterStatisticsRequest, public BaseRequest
        {
            UpdateCharacterStatisticsRequest() : PlayFabClientUpdateCharacterStatisticsRequest{}
            {
            }

            UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src) :
                PlayFabClientUpdateCharacterStatisticsRequest{ src },
                m_characterId{ src.m_characterId },
                m_characterStatistics{ src.m_characterStatistics },
                m_customTags{ src.m_customTags }
            {

                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UpdateCharacterStatisticsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateCharacterStatisticsRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UpdateCharacterStatisticsResult : public PlayFabClientUpdateCharacterStatisticsResult, public BaseResult
        {
            UpdateCharacterStatisticsResult() : PlayFabClientUpdateCharacterStatisticsResult{}
            {
            }

            UpdateCharacterStatisticsResult(const UpdateCharacterStatisticsResult&) = default;

            ~UpdateCharacterStatisticsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateCharacterStatisticsResult>(*this);
            }

        private:
        };

        struct UpdatePlayerStatisticsRequest : public PlayFabClientUpdatePlayerStatisticsRequest, public BaseRequest
        {
            UpdatePlayerStatisticsRequest() : PlayFabClientUpdatePlayerStatisticsRequest{}
            {
            }

            UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src) :
                PlayFabClientUpdatePlayerStatisticsRequest{ src },
                m_customTags{ src.m_customTags },
                m_statistics{ src.m_statistics }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
            }

            ~UpdatePlayerStatisticsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdatePlayerStatisticsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabClientStatisticUpdate, StatisticUpdate> m_statistics;
        };

        struct UpdatePlayerStatisticsResult : public PlayFabClientUpdatePlayerStatisticsResult, public BaseResult
        {
            UpdatePlayerStatisticsResult() : PlayFabClientUpdatePlayerStatisticsResult{}
            {
            }

            UpdatePlayerStatisticsResult(const UpdatePlayerStatisticsResult&) = default;

            ~UpdatePlayerStatisticsResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdatePlayerStatisticsResult>(*this);
            }

        private:
        };

        struct UpdateSharedGroupDataRequest : public PlayFabClientUpdateSharedGroupDataRequest, public BaseRequest
        {
            UpdateSharedGroupDataRequest() : PlayFabClientUpdateSharedGroupDataRequest{}
            {
            }

            UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
                PlayFabClientUpdateSharedGroupDataRequest{ src },
                m_customTags{ src.m_customTags },
                m_data{ src.m_data },
                m_keysToRemove{ src.m_keysToRemove },
                m_permission{ src.m_permission },
                m_sharedGroupId{ src.m_sharedGroupId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                data = m_data.Empty() ? nullptr : m_data.Data();
                keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
                permission = m_permission ? m_permission.operator->() : nullptr;
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~UpdateSharedGroupDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateSharedGroupDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabClientUserDataPermission> m_permission;
            String m_sharedGroupId;
        };

        struct UpdateSharedGroupDataResult : public PlayFabClientUpdateSharedGroupDataResult, public BaseResult
        {
            UpdateSharedGroupDataResult() : PlayFabClientUpdateSharedGroupDataResult{}
            {
            }

            UpdateSharedGroupDataResult(const UpdateSharedGroupDataResult&) = default;

            ~UpdateSharedGroupDataResult() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateSharedGroupDataResult>(*this);
            }

        private:
        };

        struct UpdateUserDataRequest : public PlayFabClientUpdateUserDataRequest, public BaseRequest
        {
            UpdateUserDataRequest() : PlayFabClientUpdateUserDataRequest{}
            {
            }

            UpdateUserDataRequest(const UpdateUserDataRequest& src) :
                PlayFabClientUpdateUserDataRequest{ src },
                m_customTags{ src.m_customTags },
                m_data{ src.m_data },
                m_keysToRemove{ src.m_keysToRemove },
                m_permission{ src.m_permission }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                data = m_data.Empty() ? nullptr : m_data.Data();
                keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
                permission = m_permission ? m_permission.operator->() : nullptr;
            }

            ~UpdateUserDataRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateUserDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabClientUserDataPermission> m_permission;
        };

        struct UpdateUserDataResult : public PlayFabClientUpdateUserDataResult, public BaseResult
        {
            UpdateUserDataResult() : PlayFabClientUpdateUserDataResult{}
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
                return JsonUtils::ToJson<PlayFabClientUpdateUserDataResult>(*this);
            }

        private:

        };

        struct UpdateUserTitleDisplayNameRequest : public PlayFabClientUpdateUserTitleDisplayNameRequest, public BaseRequest
        {
            UpdateUserTitleDisplayNameRequest() : PlayFabClientUpdateUserTitleDisplayNameRequest{}
            {
            }

            UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
                PlayFabClientUpdateUserTitleDisplayNameRequest{ src },
                m_customTags{ src.m_customTags },
                m_displayName{ src.m_displayName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
            }

            ~UpdateUserTitleDisplayNameRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientUpdateUserTitleDisplayNameRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_displayName;
        };

        struct UpdateUserTitleDisplayNameResult : public PlayFabClientUpdateUserTitleDisplayNameResult, public BaseResult
        {
            UpdateUserTitleDisplayNameResult() : PlayFabClientUpdateUserTitleDisplayNameResult{}
            {
            }

            UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
                PlayFabClientUpdateUserTitleDisplayNameResult{ src },
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
                return JsonUtils::ToJson<PlayFabClientUpdateUserTitleDisplayNameResult>(*this);
            }

        private:
            String m_displayName;
        };

        struct ValidateAmazonReceiptRequest : public PlayFabClientValidateAmazonReceiptRequest, public BaseRequest
        {
            ValidateAmazonReceiptRequest() : PlayFabClientValidateAmazonReceiptRequest{}
            {
            }

            ValidateAmazonReceiptRequest(const ValidateAmazonReceiptRequest& src) :
                PlayFabClientValidateAmazonReceiptRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_currencyCode{ src.m_currencyCode },
                m_customTags{ src.m_customTags },
                m_receiptId{ src.m_receiptId },
                m_userId{ src.m_userId }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                receiptId = m_receiptId.empty() ? nullptr : m_receiptId.data();
                userId = m_userId.empty() ? nullptr : m_userId.data();
            }

            ~ValidateAmazonReceiptRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PurchasePrice", purchasePrice);
                JsonUtils:: ObjectGetMember(input, "ReceiptId", m_receiptId, receiptId);
                JsonUtils:: ObjectGetMember(input, "UserId", m_userId, userId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateAmazonReceiptRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_currencyCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;

            String m_receiptId;
            String m_userId;
        };

        struct ValidateAmazonReceiptResult : public PlayFabClientValidateAmazonReceiptResult, public BaseResult
        {
            ValidateAmazonReceiptResult() : PlayFabClientValidateAmazonReceiptResult{}
            {
            }

            ValidateAmazonReceiptResult(const ValidateAmazonReceiptResult& src) :
                PlayFabClientValidateAmazonReceiptResult{ src },
                m_fulfillments{ src.m_fulfillments }
            {

                fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
            }

            ~ValidateAmazonReceiptResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateAmazonReceiptResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
        };

        struct ValidateGooglePlayPurchaseRequest : public PlayFabClientValidateGooglePlayPurchaseRequest, public BaseRequest
        {
            ValidateGooglePlayPurchaseRequest() : PlayFabClientValidateGooglePlayPurchaseRequest{}
            {
            }

            ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src) :
                PlayFabClientValidateGooglePlayPurchaseRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_currencyCode{ src.m_currencyCode },
                m_customTags{ src.m_customTags },
                m_purchasePrice{ src.m_purchasePrice },
                m_receiptJson{ src.m_receiptJson },
                m_signature{ src.m_signature }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                purchasePrice = m_purchasePrice ? m_purchasePrice.operator->() : nullptr;
                receiptJson = m_receiptJson.empty() ? nullptr : m_receiptJson.data();
                signature = m_signature.empty() ? nullptr : m_signature.data();
            }

            ~ValidateGooglePlayPurchaseRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PurchasePrice", m_purchasePrice, purchasePrice);
                JsonUtils:: ObjectGetMember(input, "ReceiptJson", m_receiptJson, receiptJson);
                JsonUtils:: ObjectGetMember(input, "Signature", m_signature, signature);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateGooglePlayPurchaseRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_currencyCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<uint32_t> m_purchasePrice;
            String m_receiptJson;
            String m_signature;
        };

        struct ValidateGooglePlayPurchaseResult : public PlayFabClientValidateGooglePlayPurchaseResult, public BaseResult
        {
            ValidateGooglePlayPurchaseResult() : PlayFabClientValidateGooglePlayPurchaseResult{}
            {
            }

            ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src) :
                PlayFabClientValidateGooglePlayPurchaseResult{ src },
                m_fulfillments{ src.m_fulfillments }
            {

                fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
            }

            ~ValidateGooglePlayPurchaseResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateGooglePlayPurchaseResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
        };

        struct ValidateIOSReceiptRequest : public PlayFabClientValidateIOSReceiptRequest, public BaseRequest
        {
            ValidateIOSReceiptRequest() : PlayFabClientValidateIOSReceiptRequest{}
            {
            }

            ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src) :
                PlayFabClientValidateIOSReceiptRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_currencyCode{ src.m_currencyCode },
                m_customTags{ src.m_customTags },
                m_receiptData{ src.m_receiptData }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
            }

            ~ValidateIOSReceiptRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PurchasePrice", purchasePrice);
                JsonUtils:: ObjectGetMember(input, "ReceiptData", m_receiptData, receiptData);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateIOSReceiptRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_currencyCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;

            String m_receiptData;
        };

        struct ValidateIOSReceiptResult : public PlayFabClientValidateIOSReceiptResult, public BaseResult
        {
            ValidateIOSReceiptResult() : PlayFabClientValidateIOSReceiptResult{}
            {
            }

            ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src) :
                PlayFabClientValidateIOSReceiptResult{ src },
                m_fulfillments{ src.m_fulfillments }
            {

                fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
            }

            ~ValidateIOSReceiptResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateIOSReceiptResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
        };

        struct ValidateWindowsReceiptRequest : public PlayFabClientValidateWindowsReceiptRequest, public BaseRequest
        {
            ValidateWindowsReceiptRequest() : PlayFabClientValidateWindowsReceiptRequest{}
            {
            }

            ValidateWindowsReceiptRequest(const ValidateWindowsReceiptRequest& src) :
                PlayFabClientValidateWindowsReceiptRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_currencyCode{ src.m_currencyCode },
                m_customTags{ src.m_customTags },
                m_receipt{ src.m_receipt }
            {

                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                receipt = m_receipt.empty() ? nullptr : m_receipt.data();
            }

            ~ValidateWindowsReceiptRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PurchasePrice", purchasePrice);
                JsonUtils:: ObjectGetMember(input, "Receipt", m_receipt, receipt);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateWindowsReceiptRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_currencyCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;

            String m_receipt;
        };

        struct ValidateWindowsReceiptResult : public PlayFabClientValidateWindowsReceiptResult, public BaseResult
        {
            ValidateWindowsReceiptResult() : PlayFabClientValidateWindowsReceiptResult{}
            {
            }

            ValidateWindowsReceiptResult(const ValidateWindowsReceiptResult& src) :
                PlayFabClientValidateWindowsReceiptResult{ src },
                m_fulfillments{ src.m_fulfillments }
            {

                fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
            }

            ~ValidateWindowsReceiptResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientValidateWindowsReceiptResult>(*this);
            }

        private:
            PointerArray<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
        };

        struct WriteClientCharacterEventRequest : public PlayFabClientWriteClientCharacterEventRequest, public BaseRequest
        {
            WriteClientCharacterEventRequest() : PlayFabClientWriteClientCharacterEventRequest{}
            {
            }

            WriteClientCharacterEventRequest(const WriteClientCharacterEventRequest& src) :
                PlayFabClientWriteClientCharacterEventRequest{ src },
                m_body{ src.m_body },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_eventName{ src.m_eventName },
                m_timestamp{ src.m_timestamp }
            {

                body.stringValue = m_body.StringValue();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                eventName = m_eventName.empty() ? nullptr : m_eventName.data();
                timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
            }

            ~WriteClientCharacterEventRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientWriteClientCharacterEventRequest>(*this);
            }

        private:
            JsonObject m_body;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_eventName;
            StdExtra::optional<time_t> m_timestamp;
        };

        struct WriteClientPlayerEventRequest : public PlayFabClientWriteClientPlayerEventRequest, public BaseRequest
        {
            WriteClientPlayerEventRequest() : PlayFabClientWriteClientPlayerEventRequest{}
            {
            }

            WriteClientPlayerEventRequest(const WriteClientPlayerEventRequest& src) :
                PlayFabClientWriteClientPlayerEventRequest{ src },
                m_body{ src.m_body },
                m_customTags{ src.m_customTags },
                m_eventName{ src.m_eventName },
                m_timestamp{ src.m_timestamp }
            {

                body.stringValue = m_body.StringValue();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                eventName = m_eventName.empty() ? nullptr : m_eventName.data();
                timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
            }

            ~WriteClientPlayerEventRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientWriteClientPlayerEventRequest>(*this);
            }

        private:
            JsonObject m_body;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_eventName;
            StdExtra::optional<time_t> m_timestamp;
        };

        struct WriteEventResponse : public PlayFabClientWriteEventResponse, public BaseResult
        {
            WriteEventResponse() : PlayFabClientWriteEventResponse{}
            {
            }

            WriteEventResponse(const WriteEventResponse& src) :
                PlayFabClientWriteEventResponse{ src },
                m_eventId{ src.m_eventId }
            {

                eventId = m_eventId.empty() ? nullptr : m_eventId.data();
            }

            ~WriteEventResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "EventId", m_eventId, eventId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientWriteEventResponse>(*this);
            }

        private:
            String m_eventId;
        };

        struct WriteTitleEventRequest : public PlayFabClientWriteTitleEventRequest, public BaseRequest
        {
            WriteTitleEventRequest() : PlayFabClientWriteTitleEventRequest{}
            {
            }

            WriteTitleEventRequest(const WriteTitleEventRequest& src) :
                PlayFabClientWriteTitleEventRequest{ src },
                m_body{ src.m_body },
                m_customTags{ src.m_customTags },
                m_eventName{ src.m_eventName },
                m_timestamp{ src.m_timestamp }
            {

                body.stringValue = m_body.StringValue();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                eventName = m_eventName.empty() ? nullptr : m_eventName.data();
                timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
            }

            ~WriteTitleEventRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabClientWriteTitleEventRequest>(*this);
            }

        private:
            JsonObject m_body;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_eventName;
            StdExtra::optional<time_t> m_timestamp;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabClientAdActivity>
    {
        static constexpr PlayFabClientAdActivity maxValue = PlayFabClientAdActivity::End;
    };

    template<> struct EnumRange<PlayFabClientCloudScriptRevisionOption>
    {
        static constexpr PlayFabClientCloudScriptRevisionOption maxValue = PlayFabClientCloudScriptRevisionOption::Specific;
    };

    template<> struct EnumRange<PlayFabClientContinentCode>
    {
        static constexpr PlayFabClientContinentCode maxValue = PlayFabClientContinentCode::SA;
    };

    template<> struct EnumRange<PlayFabClientCountryCode>
    {
        static constexpr PlayFabClientCountryCode maxValue = PlayFabClientCountryCode::ZW;
    };

    template<> struct EnumRange<PlayFabClientCurrency>
    {
        static constexpr PlayFabClientCurrency maxValue = PlayFabClientCurrency::ZWD;
    };

    template<> struct EnumRange<PlayFabClientEmailVerificationStatus>
    {
        static constexpr PlayFabClientEmailVerificationStatus maxValue = PlayFabClientEmailVerificationStatus::Confirmed;
    };

    template<> struct EnumRange<PlayFabClientGameInstanceState>
    {
        static constexpr PlayFabClientGameInstanceState maxValue = PlayFabClientGameInstanceState::Closed;
    };

    template<> struct EnumRange<PlayFabClientLoginIdentityProvider>
    {
        static constexpr PlayFabClientLoginIdentityProvider maxValue = PlayFabClientLoginIdentityProvider::NintendoSwitchAccount;
    };

    template<> struct EnumRange<PlayFabClientMatchmakeStatus>
    {
        static constexpr PlayFabClientMatchmakeStatus maxValue = PlayFabClientMatchmakeStatus::SessionClosed;
    };

    template<> struct EnumRange<PlayFabClientPushNotificationPlatform>
    {
        static constexpr PlayFabClientPushNotificationPlatform maxValue = PlayFabClientPushNotificationPlatform::GoogleCloudMessaging;
    };

    template<> struct EnumRange<PlayFabClientRegion>
    {
        static constexpr PlayFabClientRegion maxValue = PlayFabClientRegion::Australia;
    };

    template<> struct EnumRange<PlayFabClientSourceType>
    {
        static constexpr PlayFabClientSourceType maxValue = PlayFabClientSourceType::API;
    };

    template<> struct EnumRange<PlayFabClientSubscriptionProviderStatus>
    {
        static constexpr PlayFabClientSubscriptionProviderStatus maxValue = PlayFabClientSubscriptionProviderStatus::PaymentPending;
    };

    template<> struct EnumRange<PlayFabClientTitleActivationStatus>
    {
        static constexpr PlayFabClientTitleActivationStatus maxValue = PlayFabClientTitleActivationStatus::RevokedSteam;
    };

    template<> struct EnumRange<PlayFabClientTradeStatus>
    {
        static constexpr PlayFabClientTradeStatus maxValue = PlayFabClientTradeStatus::Cancelled;
    };

    template<> struct EnumRange<PlayFabClientTransactionStatus>
    {
        static constexpr PlayFabClientTransactionStatus maxValue = PlayFabClientTransactionStatus::Failed;
    };

    template<> struct EnumRange<PlayFabClientUserDataPermission>
    {
        static constexpr PlayFabClientUserDataPermission maxValue = PlayFabClientUserDataPermission::Public;
    };

    template<> struct EnumRange<PlayFabClientUserOrigination>
    {
        static constexpr PlayFabClientUserOrigination maxValue = PlayFabClientUserOrigination::NintendoSwitchAccount;
    };

}

#endif