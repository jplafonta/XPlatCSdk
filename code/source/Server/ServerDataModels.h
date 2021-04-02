#pragma once

#if defined(ENABLE_PLAYFABSERVER_API)

#include <playfab/PlayFabServerDataModels_c.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAdCampaignAttribution& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAdCampaignAttributionModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAddCharacterVirtualCurrencyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAddFriendRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
            JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGenericServiceId& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ServiceName", input.serviceName);
            JsonUtils::ObjectAddMember(output, "UserId", input.userId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAddGenericIDRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAddPlayerTagRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAddSharedGroupMembersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAddUserVirtualCurrencyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAdvancedPushPlatformMsg& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GCMDataOnly", input.gCMDataOnly);
            JsonUtils::ObjectAddMember(output, "Json", input.json);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAuthenticateSessionTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SessionTicket", input.sessionTicket);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserAndroidDeviceInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserAppleIdInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AppleSubjectId", input.appleSubjectId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserCustomIdInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserFacebookInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
            JsonUtils::ObjectAddMember(output, "FullName", input.fullName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserFacebookInstantGamesIdInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserGameCenterInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserGoogleInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GoogleEmail", input.googleEmail);
            JsonUtils::ObjectAddMember(output, "GoogleGender", input.googleGender);
            JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
            JsonUtils::ObjectAddMember(output, "GoogleLocale", input.googleLocale);
            JsonUtils::ObjectAddMember(output, "GoogleName", input.googleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserIosDeviceInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IosDeviceId", input.iosDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserKongregateInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
            JsonUtils::ObjectAddMember(output, "KongregateName", input.kongregateName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserNintendoSwitchAccountIdInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountSubjectId", input.nintendoSwitchAccountSubjectId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserNintendoSwitchDeviceIdInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserOpenIdInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
            JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
            JsonUtils::ObjectAddMember(output, "Subject", input.subject);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserPrivateAccountInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserPsnInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PsnAccountId", input.psnAccountId);
            JsonUtils::ObjectAddMember(output, "PsnOnlineId", input.psnOnlineId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserSteamInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SteamActivationStatus", input.steamActivationStatus);
            JsonUtils::ObjectAddMember(output, "SteamCountry", input.steamCountry);
            JsonUtils::ObjectAddMember(output, "SteamCurrency", input.steamCurrency);
            JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
            JsonUtils::ObjectAddMember(output, "SteamName", input.steamName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerEntityKey& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserTitleInfo& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerUserTwitchInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
            JsonUtils::ObjectAddMember(output, "TwitchUserName", input.twitchUserName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserWindowsHelloInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "WindowsHelloDeviceName", input.windowsHelloDeviceName);
            JsonUtils::ObjectAddMember(output, "WindowsHelloPublicKeyHash", input.windowsHelloPublicKeyHash);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserXboxInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "XboxUserId", input.xboxUserId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserAccountInfo& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerAuthenticateSessionTicketResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IsSessionTicketExpired", input.isSessionTicketExpired);
            JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementItem& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AchievementName", input.achievementName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Result", input.result);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Achievements", input.achievements, input.achievementsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AchievementResults", input.achievementResults, input.achievementResultsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerBanInfo& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerBanRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DurationInHours", input.durationInHours);
            JsonUtils::ObjectAddMember(output, "IPAddress", input.iPAddress);
            JsonUtils::ObjectAddMember(output, "MACAddress", input.mACAddress);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Reason", input.reason);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerBanUsersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerBanUsersResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCatalogItemBundleInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
            JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
            JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCatalogItemConsumableInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
            JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
            JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCatalogItemContainerInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemContents", input.itemContents, input.itemContentsCount);
            JsonUtils::ObjectAddMember(output, "KeyItemId", input.keyItemId);
            JsonUtils::ObjectAddMember(output, "ResultTableContents", input.resultTableContents, input.resultTableContentsCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyContents", input.virtualCurrencyContents, input.virtualCurrencyContentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCatalogItem& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerItemInstance& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerCharacterInventory& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCharacterLeaderboardEntry& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerCharacterResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerConsumeItemRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ConsumeCount", input.consumeCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerConsumeItemResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerContactEmailInfo& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerContactEmailInfoModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCreateSharedGroupRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerCreateSharedGroupResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerDeleteCharacterFromUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "SaveCharacterInventory", input.saveCharacterInventory);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerDeletePlayerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerDeletePushNotificationTemplateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerDeleteSharedGroupRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerDeregisterGameRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerEntityTokenResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
            JsonUtils::ObjectAddMember(output, "TokenExpiration", input.tokenExpiration, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerEvaluateRandomResultTableRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerEvaluateRandomResultTableResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ResultItemId", input.resultItemId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerScriptExecutionError& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLogStatement& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data);
            JsonUtils::ObjectAddMember(output, "Level", input.level);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerExecuteCloudScriptResult& input)
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
        inline JsonValue ToJson<>(const PlayFabServerExecuteCloudScriptServerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
            JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
            JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerFacebookInstantGamesPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerFacebookPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLinkedPlatformAccountModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLocationModel& input)
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
        inline JsonValue ToJson<>(const PlayFabServerSubscriptionModel& input)
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
        inline JsonValue ToJson<>(const PlayFabServerMembershipModel& input)
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
        inline JsonValue ToJson<>(const PlayFabServerPushNotificationRegistrationModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerStatisticModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerTagModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerValueToDateModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
            JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPlayerProfileModel& input)
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
        inline JsonValue ToJson<>(const PlayFabServerFriendInfo& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGenericPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetSegmentResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetAllSegmentsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCatalogItemsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCatalogItemsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserDataRecord& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterInventoryRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerVirtualCurrencyRechargeTime& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
            JsonUtils::ObjectAddMember(output, "RechargeTime", input.rechargeTime, true);
            JsonUtils::ObjectAddMember(output, "SecondsToRecharge", input.secondsToRecharge);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterInventoryResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterLeaderboardRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterLeaderboardResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterStatisticsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetCharacterStatisticsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetContentDownloadUrlRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "HttpMethod", input.httpMethod);
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "ThruCDN", input.thruCDN);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetContentDownloadUrlResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "URL", input.uRL);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPlayerProfileViewConstraints& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGetFriendLeaderboardRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
            JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetFriendsListRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
            JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetFriendsListResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Friends", input.friends, input.friendsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundCharacterRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundCharacterResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundUserRequest& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerPlayerLeaderboardEntry& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Position", input.position);
            JsonUtils::ObjectAddMember(output, "Profile", input.profile);
            JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundUserResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardForUsersCharactersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardForUsersCharactersResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardRequest& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
            JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoRequestParams& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerStatisticValue& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoResultPayload& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "InfoResultPayload", input.infoResultPayload);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerProfileRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerProfileResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerSegmentsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayersInSegmentRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MaxBatchSize", input.maxBatchSize);
            JsonUtils::ObjectAddMember(output, "SecondsToLive", input.secondsToLive);
            JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPlayerLinkedAccount& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPlayerLocation& input)
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
        inline JsonValue ToJson<>(const PlayFabServerPlayerStatistic& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "StatisticValue", input.statisticValue);
            JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPushNotificationRegistration& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPlayerProfile& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGetPlayersInSegmentResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
            JsonUtils::ObjectAddMember(output, "PlayerProfiles", input.playerProfiles, input.playerProfilesCount);
            JsonUtils::ObjectAddMember(output, "ProfilesInSegment", input.profilesInSegment);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayersSegmentsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerStatisticNameVersion& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "StatisticNames", input.statisticNames, input.statisticNamesCount);
            JsonUtils::ObjectAddMember(output, "StatisticNameVersions", input.statisticNameVersions, input.statisticNameVersionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticVersionsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPlayerStatisticVersion& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticVersionsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerTagsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayerTagsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookIDs", input.facebookIDs, input.facebookIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookIDsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIds", input.facebookInstantGamesIds, input.facebookInstantGamesIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericIDs", input.genericIDs, input.genericIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromGenericIDsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIds", input.nintendoSwitchDeviceIds, input.nintendoSwitchDeviceIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerNintendoSwitchPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
            JsonUtils::ObjectAddMember(output, "PSNAccountIDs", input.pSNAccountIDs, input.pSNAccountIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPSNAccountPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "PSNAccountId", input.pSNAccountId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SteamStringIDs", input.steamStringIDs, input.steamStringIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSteamPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "SteamStringId", input.steamStringId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromSteamIDsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
            JsonUtils::ObjectAddMember(output, "XboxLiveAccountIDs", input.xboxLiveAccountIDs, input.xboxLiveAccountIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerXboxLiveAccountPlayFabIdPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "XboxLiveAccountId", input.xboxLiveAccountId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPublisherDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetPublisherDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetRandomResultTablesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "TableIDs", input.tableIDs, input.tableIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerResultTableNode& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ResultItem", input.resultItem);
            JsonUtils::ObjectAddMember(output, "ResultItemType", input.resultItemType);
            JsonUtils::ObjectAddMember(output, "Weight", input.weight);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRandomResultTableListing& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
            JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetRandomResultTablesResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabIDs", input.playFabIDs, input.playFabIDsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerServerCustomIDPlayFabIDPair& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetServerCustomIDsFromPlayFabIDsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetSharedGroupDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GetMembers", input.getMembers);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSharedGroupDataRecord& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
            JsonUtils::ObjectAddMember(output, "LastUpdatedBy", input.lastUpdatedBy);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetSharedGroupDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerStoreMarketingModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Description", input.description);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerStoreItem& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
            JsonUtils::ObjectAddMember(output, "DisplayPosition", input.displayPosition);
            JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
            JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetStoreItemsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
            JsonUtils::ObjectAddMember(output, "Source", input.source);
            JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetStoreItemsServerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetTimeResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Time", input.time, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetTitleDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetTitleDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetTitleNewsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Count", input.count);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerTitleNewsItem& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            JsonUtils::ObjectAddMember(output, "Title", input.title);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetTitleNewsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "News", input.news, input.newsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserAccountInfoRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserAccountInfoResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserBansRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserBansResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
            JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserInventoryRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGetUserInventoryResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantCharacterToUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
            JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantCharacterToUserResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantedItemInstance& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGrantItemsToCharacterRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemIds", input.itemIds, input.itemIdsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantItemsToCharacterResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemIds", input.itemIds, input.itemIdsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUserResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerItemGrant& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUsersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemGrants", input.itemGrants, input.itemGrantsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUsersResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLinkPSNAccountRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLinkServerCustomIdRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLinkXboxAccountRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerListUsersCharactersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerListUsersCharactersResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Characters", input.characters, input.charactersCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLocalizedPushNotificationProperties& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "Subject", input.subject);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLoginWithServerCustomIdRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLoginWithSteamIdRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLoginWithXboxIdRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
            JsonUtils::ObjectAddMember(output, "XboxId", input.xboxId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerLoginWithXboxRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
            JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerModifyCharacterVirtualCurrencyResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Balance", input.balance);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerModifyItemUsesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "UsesToAdd", input.usesToAdd);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerModifyItemUsesResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerModifyUserVirtualCurrencyResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Balance", input.balance);
            JsonUtils::ObjectAddMember(output, "BalanceChange", input.balanceChange);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerMoveItemToCharacterFromCharacterRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GivingCharacterId", input.givingCharacterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ReceivingCharacterId", input.receivingCharacterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerMoveItemToCharacterFromUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerMoveItemToUserFromCharacterRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerNotifyMatchmakerPlayerLeftResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerState", input.playerState);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerPushNotificationPackage& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Badge", input.badge);
            JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
            JsonUtils::ObjectAddMember(output, "Icon", input.icon);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "Sound", input.sound);
            JsonUtils::ObjectAddMember(output, "Title", input.title);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRedeemCouponRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CouponCode", input.couponCode);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRedeemCouponResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRedeemMatchmakerTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRedeemMatchmakerTicketResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "TicketIsValid", input.ticketIsValid);
            JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRegisterGameRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Build", input.build);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
            JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
            JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
            JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRegisterGameResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRemoveFriendRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRemoveGenericIDRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRemovePlayerTagRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRemoveSharedGroupMembersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerReportPlayerServerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Comment", input.comment);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
            JsonUtils::ObjectAddMember(output, "ReporterId", input.reporterId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerReportPlayerServerResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "SubmissionsRemaining", input.submissionsRemaining);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeAllBansForUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeAllBansForUserResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeBansRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanIds", input.banIds, input.banIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeBansResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItem& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeItemError& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Item", input.item);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Errors", input.errors, input.errorsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSavePushNotificationTemplateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AndroidPayload", input.androidPayload);
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "IOSPayload", input.iOSPayload);
            JsonUtils::ObjectAddMember(output, "LocalizedPushNotificationTemplates", input.localizedPushNotificationTemplates, input.localizedPushNotificationTemplatesCount);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSavePushNotificationTemplateResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSendCustomAccountRecoveryEmailRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSendEmailFromTemplateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSendPushNotificationFromTemplateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
            JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSendPushNotificationRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdvancedPlatformDelivery", input.advancedPlatformDelivery, input.advancedPlatformDeliveryCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "Package", input.package);
            JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
            JsonUtils::ObjectAddMember(output, "Subject", input.subject);
            JsonUtils::ObjectAddMember(output, "TargetPlatforms", input.targetPlatforms, input.targetPlatformsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUserSettings& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GatherDeviceInfo", input.gatherDeviceInfo);
            JsonUtils::ObjectAddMember(output, "GatherFocusInfo", input.gatherFocusInfo);
            JsonUtils::ObjectAddMember(output, "NeedsAttribution", input.needsAttribution);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerVariable& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerTreatmentAssignment& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Variables", input.variables, input.variablesCount);
            JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerServerLoginResult& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerSetFriendTagsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameServerData", input.gameServerData);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceStateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "State", input.state);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceTagsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSetPlayerSecretRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSetPublisherDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSetTitleDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerStatisticUpdate& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerSubtractUserVirtualCurrencyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Amount", input.amount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUnlinkPSNAccountRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUnlinkServerCustomIdRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUnlinkXboxAccountRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUnlockContainerInstanceRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ContainerItemInstanceId", input.containerItemInstanceId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "KeyItemInstanceId", input.keyItemInstanceId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUnlockContainerItemRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "ContainerItemId", input.containerItemId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUnlockContainerItemResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
            JsonUtils::ObjectAddMember(output, "UnlockedItemInstanceId", input.unlockedItemInstanceId);
            JsonUtils::ObjectAddMember(output, "UnlockedWithItemInstanceId", input.unlockedWithItemInstanceId);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateAvatarUrlRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateBanRequest& input)
        {
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
        inline JsonValue ToJson<>(const PlayFabServerUpdateBansRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateBansResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterStatisticsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdatePlayerStatisticsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ForceUpdate", input.forceUpdate);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateSharedGroupDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateUserDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "Permission", input.permission);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateUserDataResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateUserInternalDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerUpdateUserInventoryItemDataRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
            JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
            JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerWriteEventResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EventId", input.eventId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerWriteServerCharacterEventRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerWriteServerPlayerEventRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabServerWriteTitleEventRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Body", input.body);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
            return output;
        }

    }

    namespace ServerModels
    {
        // Server Classes
        struct AdCampaignAttribution : public PlayFabServerAdCampaignAttribution, public BaseModel
        {
            AdCampaignAttribution() : PlayFabServerAdCampaignAttribution{}
            {
            }

            AdCampaignAttribution(const AdCampaignAttribution& src) :
                PlayFabServerAdCampaignAttribution{ src },
                m_campaignId{ src.m_campaignId },
                m_platform{ src.m_platform }
            {
                campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
                platform = m_platform.empty() ? nullptr : m_platform.data();
            }

            ~AdCampaignAttribution() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AttributedAt", attributedAt, true);
                JsonUtils:: ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAdCampaignAttribution>(*this);
            }

        private:
            String m_campaignId;
            String m_platform;
        };

        struct AdCampaignAttributionModel : public PlayFabServerAdCampaignAttributionModel, public BaseModel
        {
            AdCampaignAttributionModel() : PlayFabServerAdCampaignAttributionModel{}
            {
            }

            AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
                PlayFabServerAdCampaignAttributionModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerAdCampaignAttributionModel>(*this);
            }

        private:
            String m_campaignId;
            String m_platform;
        };

        struct AddCharacterVirtualCurrencyRequest : public PlayFabServerAddCharacterVirtualCurrencyRequest, public BaseRequest
        {
            AddCharacterVirtualCurrencyRequest() : PlayFabServerAddCharacterVirtualCurrencyRequest{}
            {
            }

            AddCharacterVirtualCurrencyRequest(const AddCharacterVirtualCurrencyRequest& src) :
                PlayFabServerAddCharacterVirtualCurrencyRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~AddCharacterVirtualCurrencyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAddCharacterVirtualCurrencyRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct AddFriendRequest : public PlayFabServerAddFriendRequest, public BaseRequest
        {
            AddFriendRequest() : PlayFabServerAddFriendRequest{}
            {
            }

            AddFriendRequest(const AddFriendRequest& src) :
                PlayFabServerAddFriendRequest{ src },
                m_friendEmail{ src.m_friendEmail },
                m_friendPlayFabId{ src.m_friendPlayFabId },
                m_friendTitleDisplayName{ src.m_friendTitleDisplayName },
                m_friendUsername{ src.m_friendUsername },
                m_playFabId{ src.m_playFabId }
            {
                friendEmail = m_friendEmail.empty() ? nullptr : m_friendEmail.data();
                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
                friendTitleDisplayName = m_friendTitleDisplayName.empty() ? nullptr : m_friendTitleDisplayName.data();
                friendUsername = m_friendUsername.empty() ? nullptr : m_friendUsername.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~AddFriendRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FriendEmail", m_friendEmail, friendEmail);
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
                JsonUtils:: ObjectGetMember(input, "FriendTitleDisplayName", m_friendTitleDisplayName, friendTitleDisplayName);
                JsonUtils:: ObjectGetMember(input, "FriendUsername", m_friendUsername, friendUsername);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAddFriendRequest>(*this);
            }

        private:
            String m_friendEmail;
            String m_friendPlayFabId;
            String m_friendTitleDisplayName;
            String m_friendUsername;
            String m_playFabId;
        };

        struct GenericServiceId : public PlayFabServerGenericServiceId, public BaseModel
        {
            GenericServiceId() : PlayFabServerGenericServiceId{}
            {
            }

            GenericServiceId(const GenericServiceId& src) :
                PlayFabServerGenericServiceId{ src },
                m_serviceName{ src.m_serviceName },
                m_userId{ src.m_userId }
            {
                serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
                userId = m_userId.empty() ? nullptr : m_userId.data();
            }

            ~GenericServiceId() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ServiceName", m_serviceName, serviceName);
                JsonUtils:: ObjectGetMember(input, "UserId", m_userId, userId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGenericServiceId>(*this);
            }

        private:
            String m_serviceName;
            String m_userId;
        };

        struct AddGenericIDRequest : public PlayFabServerAddGenericIDRequest, public BaseRequest
        {
            AddGenericIDRequest() : PlayFabServerAddGenericIDRequest{}
            {
            }

            AddGenericIDRequest(const AddGenericIDRequest& src) :
                PlayFabServerAddGenericIDRequest{ src },
                m_genericId{ src.m_genericId },
                m_playFabId{ src.m_playFabId }
            {
                genericId = (PlayFabServerGenericServiceId*)&m_genericId;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~AddGenericIDRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GenericId", m_genericId, genericId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAddGenericIDRequest>(*this);
            }

        private:
            GenericServiceId m_genericId;
            String m_playFabId;
        };

        struct AddPlayerTagRequest : public PlayFabServerAddPlayerTagRequest, public BaseRequest
        {
            AddPlayerTagRequest() : PlayFabServerAddPlayerTagRequest{}
            {
            }

            AddPlayerTagRequest(const AddPlayerTagRequest& src) :
                PlayFabServerAddPlayerTagRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_tagName{ src.m_tagName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tagName = m_tagName.empty() ? nullptr : m_tagName.data();
            }

            ~AddPlayerTagRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "TagName", m_tagName, tagName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAddPlayerTagRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_tagName;
        };

        struct AddSharedGroupMembersRequest : public PlayFabServerAddSharedGroupMembersRequest, public BaseRequest
        {
            AddSharedGroupMembersRequest() : PlayFabServerAddSharedGroupMembersRequest{}
            {
            }

            AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
                PlayFabServerAddSharedGroupMembersRequest{ src },
                m_playFabIds{ src.m_playFabIds },
                m_sharedGroupId{ src.m_sharedGroupId }
            {
                playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~AddSharedGroupMembersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAddSharedGroupMembersRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_playFabIds;
            String m_sharedGroupId;
        };

        struct AddUserVirtualCurrencyRequest : public PlayFabServerAddUserVirtualCurrencyRequest, public BaseRequest
        {
            AddUserVirtualCurrencyRequest() : PlayFabServerAddUserVirtualCurrencyRequest{}
            {
            }

            AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
                PlayFabServerAddUserVirtualCurrencyRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~AddUserVirtualCurrencyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAddUserVirtualCurrencyRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct AdvancedPushPlatformMsg : public PlayFabServerAdvancedPushPlatformMsg, public BaseModel
        {
            AdvancedPushPlatformMsg() : PlayFabServerAdvancedPushPlatformMsg{}
            {
            }

            AdvancedPushPlatformMsg(const AdvancedPushPlatformMsg& src) :
                PlayFabServerAdvancedPushPlatformMsg{ src },
                m_gCMDataOnly{ src.m_gCMDataOnly },
                m_json{ src.m_json }
            {
                gCMDataOnly = m_gCMDataOnly ? m_gCMDataOnly.operator->() : nullptr;
                json = m_json.empty() ? nullptr : m_json.data();
            }

            ~AdvancedPushPlatformMsg() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GCMDataOnly", m_gCMDataOnly, gCMDataOnly);
                JsonUtils:: ObjectGetMember(input, "Json", m_json, json);
                JsonUtils:: ObjectGetMember(input, "Platform", platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAdvancedPushPlatformMsg>(*this);
            }

        private:
            StdExtra::optional<bool> m_gCMDataOnly;
            String m_json;
        };

        struct AuthenticateSessionTicketRequest : public PlayFabServerAuthenticateSessionTicketRequest, public BaseRequest
        {
            AuthenticateSessionTicketRequest() : PlayFabServerAuthenticateSessionTicketRequest{}
            {
            }

            AuthenticateSessionTicketRequest(const AuthenticateSessionTicketRequest& src) :
                PlayFabServerAuthenticateSessionTicketRequest{ src },
                m_sessionTicket{ src.m_sessionTicket }
            {
                sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
            }

            ~AuthenticateSessionTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SessionTicket", m_sessionTicket, sessionTicket);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAuthenticateSessionTicketRequest>(*this);
            }

        private:
            String m_sessionTicket;
        };

        struct UserAndroidDeviceInfo : public PlayFabServerUserAndroidDeviceInfo, public BaseModel
        {
            UserAndroidDeviceInfo() : PlayFabServerUserAndroidDeviceInfo{}
            {
            }

            UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src) :
                PlayFabServerUserAndroidDeviceInfo{ src },
                m_androidDeviceId{ src.m_androidDeviceId }
            {
                androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
            }

            ~UserAndroidDeviceInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserAndroidDeviceInfo>(*this);
            }

        private:
            String m_androidDeviceId;
        };

        struct UserAppleIdInfo : public PlayFabServerUserAppleIdInfo, public BaseModel
        {
            UserAppleIdInfo() : PlayFabServerUserAppleIdInfo{}
            {
            }

            UserAppleIdInfo(const UserAppleIdInfo& src) :
                PlayFabServerUserAppleIdInfo{ src },
                m_appleSubjectId{ src.m_appleSubjectId }
            {
                appleSubjectId = m_appleSubjectId.empty() ? nullptr : m_appleSubjectId.data();
            }

            ~UserAppleIdInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AppleSubjectId", m_appleSubjectId, appleSubjectId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserAppleIdInfo>(*this);
            }

        private:
            String m_appleSubjectId;
        };

        struct UserCustomIdInfo : public PlayFabServerUserCustomIdInfo, public BaseModel
        {
            UserCustomIdInfo() : PlayFabServerUserCustomIdInfo{}
            {
            }

            UserCustomIdInfo(const UserCustomIdInfo& src) :
                PlayFabServerUserCustomIdInfo{ src },
                m_customId{ src.m_customId }
            {
                customId = m_customId.empty() ? nullptr : m_customId.data();
            }

            ~UserCustomIdInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomId", m_customId, customId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserCustomIdInfo>(*this);
            }

        private:
            String m_customId;
        };

        struct UserFacebookInfo : public PlayFabServerUserFacebookInfo, public BaseModel
        {
            UserFacebookInfo() : PlayFabServerUserFacebookInfo{}
            {
            }

            UserFacebookInfo(const UserFacebookInfo& src) :
                PlayFabServerUserFacebookInfo{ src },
                m_facebookId{ src.m_facebookId },
                m_fullName{ src.m_fullName }
            {
                facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
                fullName = m_fullName.empty() ? nullptr : m_fullName.data();
            }

            ~UserFacebookInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
                JsonUtils:: ObjectGetMember(input, "FullName", m_fullName, fullName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserFacebookInfo>(*this);
            }

        private:
            String m_facebookId;
            String m_fullName;
        };

        struct UserFacebookInstantGamesIdInfo : public PlayFabServerUserFacebookInstantGamesIdInfo, public BaseModel
        {
            UserFacebookInstantGamesIdInfo() : PlayFabServerUserFacebookInstantGamesIdInfo{}
            {
            }

            UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src) :
                PlayFabServerUserFacebookInstantGamesIdInfo{ src },
                m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
            {
                facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
            }

            ~UserFacebookInstantGamesIdInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserFacebookInstantGamesIdInfo>(*this);
            }

        private:
            String m_facebookInstantGamesId;
        };

        struct UserGameCenterInfo : public PlayFabServerUserGameCenterInfo, public BaseModel
        {
            UserGameCenterInfo() : PlayFabServerUserGameCenterInfo{}
            {
            }

            UserGameCenterInfo(const UserGameCenterInfo& src) :
                PlayFabServerUserGameCenterInfo{ src },
                m_gameCenterId{ src.m_gameCenterId }
            {
                gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
            }

            ~UserGameCenterInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserGameCenterInfo>(*this);
            }

        private:
            String m_gameCenterId;
        };

        struct UserGoogleInfo : public PlayFabServerUserGoogleInfo, public BaseModel
        {
            UserGoogleInfo() : PlayFabServerUserGoogleInfo{}
            {
            }

            UserGoogleInfo(const UserGoogleInfo& src) :
                PlayFabServerUserGoogleInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GoogleEmail", m_googleEmail, googleEmail);
                JsonUtils:: ObjectGetMember(input, "GoogleGender", m_googleGender, googleGender);
                JsonUtils:: ObjectGetMember(input, "GoogleId", m_googleId, googleId);
                JsonUtils:: ObjectGetMember(input, "GoogleLocale", m_googleLocale, googleLocale);
                JsonUtils:: ObjectGetMember(input, "GoogleName", m_googleName, googleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserGoogleInfo>(*this);
            }

        private:
            String m_googleEmail;
            String m_googleGender;
            String m_googleId;
            String m_googleLocale;
            String m_googleName;
        };

        struct UserIosDeviceInfo : public PlayFabServerUserIosDeviceInfo, public BaseModel
        {
            UserIosDeviceInfo() : PlayFabServerUserIosDeviceInfo{}
            {
            }

            UserIosDeviceInfo(const UserIosDeviceInfo& src) :
                PlayFabServerUserIosDeviceInfo{ src },
                m_iosDeviceId{ src.m_iosDeviceId }
            {
                iosDeviceId = m_iosDeviceId.empty() ? nullptr : m_iosDeviceId.data();
            }

            ~UserIosDeviceInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IosDeviceId", m_iosDeviceId, iosDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserIosDeviceInfo>(*this);
            }

        private:
            String m_iosDeviceId;
        };

        struct UserKongregateInfo : public PlayFabServerUserKongregateInfo, public BaseModel
        {
            UserKongregateInfo() : PlayFabServerUserKongregateInfo{}
            {
            }

            UserKongregateInfo(const UserKongregateInfo& src) :
                PlayFabServerUserKongregateInfo{ src },
                m_kongregateId{ src.m_kongregateId },
                m_kongregateName{ src.m_kongregateName }
            {
                kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
                kongregateName = m_kongregateName.empty() ? nullptr : m_kongregateName.data();
            }

            ~UserKongregateInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
                JsonUtils:: ObjectGetMember(input, "KongregateName", m_kongregateName, kongregateName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserKongregateInfo>(*this);
            }

        private:
            String m_kongregateId;
            String m_kongregateName;
        };

        struct UserNintendoSwitchAccountIdInfo : public PlayFabServerUserNintendoSwitchAccountIdInfo, public BaseModel
        {
            UserNintendoSwitchAccountIdInfo() : PlayFabServerUserNintendoSwitchAccountIdInfo{}
            {
            }

            UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src) :
                PlayFabServerUserNintendoSwitchAccountIdInfo{ src },
                m_nintendoSwitchAccountSubjectId{ src.m_nintendoSwitchAccountSubjectId }
            {
                nintendoSwitchAccountSubjectId = m_nintendoSwitchAccountSubjectId.empty() ? nullptr : m_nintendoSwitchAccountSubjectId.data();
            }

            ~UserNintendoSwitchAccountIdInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchAccountSubjectId", m_nintendoSwitchAccountSubjectId, nintendoSwitchAccountSubjectId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserNintendoSwitchAccountIdInfo>(*this);
            }

        private:
            String m_nintendoSwitchAccountSubjectId;
        };

        struct UserNintendoSwitchDeviceIdInfo : public PlayFabServerUserNintendoSwitchDeviceIdInfo, public BaseModel
        {
            UserNintendoSwitchDeviceIdInfo() : PlayFabServerUserNintendoSwitchDeviceIdInfo{}
            {
            }

            UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src) :
                PlayFabServerUserNintendoSwitchDeviceIdInfo{ src },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
            {
                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
            }

            ~UserNintendoSwitchDeviceIdInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserNintendoSwitchDeviceIdInfo>(*this);
            }

        private:
            String m_nintendoSwitchDeviceId;
        };

        struct UserOpenIdInfo : public PlayFabServerUserOpenIdInfo, public BaseModel
        {
            UserOpenIdInfo() : PlayFabServerUserOpenIdInfo{}
            {
            }

            UserOpenIdInfo(const UserOpenIdInfo& src) :
                PlayFabServerUserOpenIdInfo{ src },
                m_connectionId{ src.m_connectionId },
                m_issuer{ src.m_issuer },
                m_subject{ src.m_subject }
            {
                connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
                issuer = m_issuer.empty() ? nullptr : m_issuer.data();
                subject = m_subject.empty() ? nullptr : m_subject.data();
            }

            ~UserOpenIdInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
                JsonUtils:: ObjectGetMember(input, "Issuer", m_issuer, issuer);
                JsonUtils:: ObjectGetMember(input, "Subject", m_subject, subject);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserOpenIdInfo>(*this);
            }

        private:
            String m_connectionId;
            String m_issuer;
            String m_subject;
        };

        struct UserPrivateAccountInfo : public PlayFabServerUserPrivateAccountInfo, public BaseModel
        {
            UserPrivateAccountInfo() : PlayFabServerUserPrivateAccountInfo{}
            {
            }

            UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
                PlayFabServerUserPrivateAccountInfo{ src },
                m_email{ src.m_email }
            {
                email = m_email.empty() ? nullptr : m_email.data();
            }

            ~UserPrivateAccountInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserPrivateAccountInfo>(*this);
            }

        private:
            String m_email;
        };

        struct UserPsnInfo : public PlayFabServerUserPsnInfo, public BaseModel
        {
            UserPsnInfo() : PlayFabServerUserPsnInfo{}
            {
            }

            UserPsnInfo(const UserPsnInfo& src) :
                PlayFabServerUserPsnInfo{ src },
                m_psnAccountId{ src.m_psnAccountId },
                m_psnOnlineId{ src.m_psnOnlineId }
            {
                psnAccountId = m_psnAccountId.empty() ? nullptr : m_psnAccountId.data();
                psnOnlineId = m_psnOnlineId.empty() ? nullptr : m_psnOnlineId.data();
            }

            ~UserPsnInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PsnAccountId", m_psnAccountId, psnAccountId);
                JsonUtils:: ObjectGetMember(input, "PsnOnlineId", m_psnOnlineId, psnOnlineId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserPsnInfo>(*this);
            }

        private:
            String m_psnAccountId;
            String m_psnOnlineId;
        };

        struct UserSteamInfo : public PlayFabServerUserSteamInfo, public BaseModel
        {
            UserSteamInfo() : PlayFabServerUserSteamInfo{}
            {
            }

            UserSteamInfo(const UserSteamInfo& src) :
                PlayFabServerUserSteamInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SteamActivationStatus", m_steamActivationStatus, steamActivationStatus);
                JsonUtils:: ObjectGetMember(input, "SteamCountry", m_steamCountry, steamCountry);
                JsonUtils:: ObjectGetMember(input, "SteamCurrency", m_steamCurrency, steamCurrency);
                JsonUtils:: ObjectGetMember(input, "SteamId", m_steamId, steamId);
                JsonUtils:: ObjectGetMember(input, "SteamName", m_steamName, steamName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserSteamInfo>(*this);
            }

        private:
            StdExtra::optional<PlayFabServerTitleActivationStatus> m_steamActivationStatus;
            String m_steamCountry;
            StdExtra::optional<PlayFabServerCurrency> m_steamCurrency;
            String m_steamId;
            String m_steamName;
        };

        struct EntityKey : public PlayFabServerEntityKey, public BaseModel
        {
            EntityKey() : PlayFabServerEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabServerEntityKey{ src },
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
                return JsonUtils::ToJson<PlayFabServerEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct UserTitleInfo : public PlayFabServerUserTitleInfo, public BaseModel
        {
            UserTitleInfo() : PlayFabServerUserTitleInfo{}
            {
            }

            UserTitleInfo(const UserTitleInfo& src) :
                PlayFabServerUserTitleInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerUserTitleInfo>(*this);
            }

        private:
            String m_avatarUrl;
            String m_displayName;
            StdExtra::optional<time_t> m_firstLogin;
            StdExtra::optional<bool> m_isBanned;
            StdExtra::optional<time_t> m_lastLogin;
            StdExtra::optional<PlayFabServerUserOrigination> m_origination;
            StdExtra::optional<EntityKey> m_titlePlayerAccount;
        };

        struct UserTwitchInfo : public PlayFabServerUserTwitchInfo, public BaseModel
        {
            UserTwitchInfo() : PlayFabServerUserTwitchInfo{}
            {
            }

            UserTwitchInfo(const UserTwitchInfo& src) :
                PlayFabServerUserTwitchInfo{ src },
                m_twitchId{ src.m_twitchId },
                m_twitchUserName{ src.m_twitchUserName }
            {
                twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
                twitchUserName = m_twitchUserName.empty() ? nullptr : m_twitchUserName.data();
            }

            ~UserTwitchInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
                JsonUtils:: ObjectGetMember(input, "TwitchUserName", m_twitchUserName, twitchUserName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserTwitchInfo>(*this);
            }

        private:
            String m_twitchId;
            String m_twitchUserName;
        };

        struct UserWindowsHelloInfo : public PlayFabServerUserWindowsHelloInfo, public BaseModel
        {
            UserWindowsHelloInfo() : PlayFabServerUserWindowsHelloInfo{}
            {
            }

            UserWindowsHelloInfo(const UserWindowsHelloInfo& src) :
                PlayFabServerUserWindowsHelloInfo{ src },
                m_windowsHelloDeviceName{ src.m_windowsHelloDeviceName },
                m_windowsHelloPublicKeyHash{ src.m_windowsHelloPublicKeyHash }
            {
                windowsHelloDeviceName = m_windowsHelloDeviceName.empty() ? nullptr : m_windowsHelloDeviceName.data();
                windowsHelloPublicKeyHash = m_windowsHelloPublicKeyHash.empty() ? nullptr : m_windowsHelloPublicKeyHash.data();
            }

            ~UserWindowsHelloInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "WindowsHelloDeviceName", m_windowsHelloDeviceName, windowsHelloDeviceName);
                JsonUtils:: ObjectGetMember(input, "WindowsHelloPublicKeyHash", m_windowsHelloPublicKeyHash, windowsHelloPublicKeyHash);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserWindowsHelloInfo>(*this);
            }

        private:
            String m_windowsHelloDeviceName;
            String m_windowsHelloPublicKeyHash;
        };

        struct UserXboxInfo : public PlayFabServerUserXboxInfo, public BaseModel
        {
            UserXboxInfo() : PlayFabServerUserXboxInfo{}
            {
            }

            UserXboxInfo(const UserXboxInfo& src) :
                PlayFabServerUserXboxInfo{ src },
                m_xboxUserId{ src.m_xboxUserId }
            {
                xboxUserId = m_xboxUserId.empty() ? nullptr : m_xboxUserId.data();
            }

            ~UserXboxInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "XboxUserId", m_xboxUserId, xboxUserId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserXboxInfo>(*this);
            }

        private:
            String m_xboxUserId;
        };

        struct UserAccountInfo : public PlayFabServerUserAccountInfo, public BaseModel
        {
            UserAccountInfo() : PlayFabServerUserAccountInfo{}
            {
            }

            UserAccountInfo(const UserAccountInfo& src) :
                PlayFabServerUserAccountInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerUserAccountInfo>(*this);
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
            PointerArray<PlayFabServerUserOpenIdInfo, UserOpenIdInfo> m_openIdInfo;
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

        struct AuthenticateSessionTicketResult : public PlayFabServerAuthenticateSessionTicketResult, public BaseResult
        {
            AuthenticateSessionTicketResult() : PlayFabServerAuthenticateSessionTicketResult{}
            {
            }

            AuthenticateSessionTicketResult(const AuthenticateSessionTicketResult& src) :
                PlayFabServerAuthenticateSessionTicketResult{ src },
                m_isSessionTicketExpired{ src.m_isSessionTicketExpired },
                m_userInfo{ src.m_userInfo }
            {
                isSessionTicketExpired = m_isSessionTicketExpired ? m_isSessionTicketExpired.operator->() : nullptr;
                userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
            }

            ~AuthenticateSessionTicketResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IsSessionTicketExpired", m_isSessionTicketExpired, isSessionTicketExpired);
                JsonUtils:: ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAuthenticateSessionTicketResult>(*this);
            }

        private:
            StdExtra::optional<bool> m_isSessionTicketExpired;
            StdExtra::optional<UserAccountInfo> m_userInfo;
        };

        struct AwardSteamAchievementItem : public PlayFabServerAwardSteamAchievementItem, public BaseModel
        {
            AwardSteamAchievementItem() : PlayFabServerAwardSteamAchievementItem{}
            {
            }

            AwardSteamAchievementItem(const AwardSteamAchievementItem& src) :
                PlayFabServerAwardSteamAchievementItem{ src },
                m_achievementName{ src.m_achievementName },
                m_playFabId{ src.m_playFabId }
            {
                achievementName = m_achievementName.empty() ? nullptr : m_achievementName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~AwardSteamAchievementItem() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AchievementName", m_achievementName, achievementName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Result", result);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAwardSteamAchievementItem>(*this);
            }

        private:
            String m_achievementName;
            String m_playFabId;
        };

        struct AwardSteamAchievementRequest : public PlayFabServerAwardSteamAchievementRequest, public BaseRequest
        {
            AwardSteamAchievementRequest() : PlayFabServerAwardSteamAchievementRequest{}
            {
            }

            AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src) :
                PlayFabServerAwardSteamAchievementRequest{ src },
                m_achievements{ src.m_achievements }
            {
                achievements = m_achievements.Empty() ? nullptr : m_achievements.Data();
            }

            ~AwardSteamAchievementRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Achievements", m_achievements, achievements, achievementsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAwardSteamAchievementRequest>(*this);
            }

        private:
            PointerArray<PlayFabServerAwardSteamAchievementItem, AwardSteamAchievementItem> m_achievements;
        };

        struct AwardSteamAchievementResult : public PlayFabServerAwardSteamAchievementResult, public BaseResult
        {
            AwardSteamAchievementResult() : PlayFabServerAwardSteamAchievementResult{}
            {
            }

            AwardSteamAchievementResult(const AwardSteamAchievementResult& src) :
                PlayFabServerAwardSteamAchievementResult{ src },
                m_achievementResults{ src.m_achievementResults }
            {
                achievementResults = m_achievementResults.Empty() ? nullptr : m_achievementResults.Data();
            }

            ~AwardSteamAchievementResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AchievementResults", m_achievementResults, achievementResults, achievementResultsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerAwardSteamAchievementResult>(*this);
            }

        private:
            PointerArray<PlayFabServerAwardSteamAchievementItem, AwardSteamAchievementItem> m_achievementResults;
        };

        struct BanInfo : public PlayFabServerBanInfo, public BaseModel
        {
            BanInfo() : PlayFabServerBanInfo{}
            {
            }

            BanInfo(const BanInfo& src) :
                PlayFabServerBanInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerBanInfo>(*this);
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

        struct BanRequest : public PlayFabServerBanRequest, public BaseRequest
        {
            BanRequest() : PlayFabServerBanRequest{}
            {
            }

            BanRequest(const BanRequest& src) :
                PlayFabServerBanRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DurationInHours", m_durationInHours, durationInHours);
                JsonUtils:: ObjectGetMember(input, "IPAddress", m_iPAddress, iPAddress);
                JsonUtils:: ObjectGetMember(input, "MACAddress", m_mACAddress, mACAddress);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Reason", m_reason, reason);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerBanRequest>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_durationInHours;
            String m_iPAddress;
            String m_mACAddress;
            String m_playFabId;
            String m_reason;
        };

        struct BanUsersRequest : public PlayFabServerBanUsersRequest, public BaseRequest
        {
            BanUsersRequest() : PlayFabServerBanUsersRequest{}
            {
            }

            BanUsersRequest(const BanUsersRequest& src) :
                PlayFabServerBanUsersRequest{ src },
                m_bans{ src.m_bans },
                m_customTags{ src.m_customTags }
            {
                bans = m_bans.Empty() ? nullptr : m_bans.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~BanUsersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerBanUsersRequest>(*this);
            }

        private:
            PointerArray<PlayFabServerBanRequest, BanRequest> m_bans;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct BanUsersResult : public PlayFabServerBanUsersResult, public BaseResult
        {
            BanUsersResult() : PlayFabServerBanUsersResult{}
            {
            }

            BanUsersResult(const BanUsersResult& src) :
                PlayFabServerBanUsersResult{ src },
                m_banData{ src.m_banData }
            {
                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~BanUsersResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerBanUsersResult>(*this);
            }

        private:
            PointerArray<PlayFabServerBanInfo, BanInfo> m_banData;
        };

        struct CatalogItemBundleInfo : public PlayFabServerCatalogItemBundleInfo, public BaseModel
        {
            CatalogItemBundleInfo() : PlayFabServerCatalogItemBundleInfo{}
            {
            }

            CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
                PlayFabServerCatalogItemBundleInfo{ src },
                m_bundledItems{ src.m_bundledItems },
                m_bundledResultTables{ src.m_bundledResultTables },
                m_bundledVirtualCurrencies{ src.m_bundledVirtualCurrencies }
            {
                bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
                bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
                bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
            }

            ~CatalogItemBundleInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BundledItems", m_bundledItems, bundledItems, bundledItemsCount);
                JsonUtils:: ObjectGetMember(input, "BundledResultTables", m_bundledResultTables, bundledResultTables, bundledResultTablesCount);
                JsonUtils:: ObjectGetMember(input, "BundledVirtualCurrencies", m_bundledVirtualCurrencies, bundledVirtualCurrencies, bundledVirtualCurrenciesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCatalogItemBundleInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_bundledItems;
            PointerArray<const char, String> m_bundledResultTables;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
        };

        struct CatalogItemConsumableInfo : public PlayFabServerCatalogItemConsumableInfo, public BaseModel
        {
            CatalogItemConsumableInfo() : PlayFabServerCatalogItemConsumableInfo{}
            {
            }

            CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
                PlayFabServerCatalogItemConsumableInfo{ src },
                m_usageCount{ src.m_usageCount },
                m_usagePeriod{ src.m_usagePeriod },
                m_usagePeriodGroup{ src.m_usagePeriodGroup }
            {
                usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
                usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
                usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
            }

            ~CatalogItemConsumableInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "UsageCount", m_usageCount, usageCount);
                JsonUtils:: ObjectGetMember(input, "UsagePeriod", m_usagePeriod, usagePeriod);
                JsonUtils:: ObjectGetMember(input, "UsagePeriodGroup", m_usagePeriodGroup, usagePeriodGroup);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCatalogItemConsumableInfo>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_usageCount;
            StdExtra::optional<uint32_t> m_usagePeriod;
            String m_usagePeriodGroup;
        };

        struct CatalogItemContainerInfo : public PlayFabServerCatalogItemContainerInfo, public BaseModel
        {
            CatalogItemContainerInfo() : PlayFabServerCatalogItemContainerInfo{}
            {
            }

            CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
                PlayFabServerCatalogItemContainerInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ItemContents", m_itemContents, itemContents, itemContentsCount);
                JsonUtils:: ObjectGetMember(input, "KeyItemId", m_keyItemId, keyItemId);
                JsonUtils:: ObjectGetMember(input, "ResultTableContents", m_resultTableContents, resultTableContents, resultTableContentsCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyContents", m_virtualCurrencyContents, virtualCurrencyContents, virtualCurrencyContentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCatalogItemContainerInfo>(*this);
            }

        private:
            PointerArray<const char, String> m_itemContents;
            String m_keyItemId;
            PointerArray<const char, String> m_resultTableContents;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyContents;
        };

        struct CatalogItem : public PlayFabServerCatalogItem, public BaseModel
        {
            CatalogItem() : PlayFabServerCatalogItem{}
            {
            }

            CatalogItem(const CatalogItem& src) :
                PlayFabServerCatalogItem{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerCatalogItem>(*this);
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

        struct ItemInstance : public PlayFabServerItemInstance, public BaseModel
        {
            ItemInstance() : PlayFabServerItemInstance{}
            {
            }

            ItemInstance(const ItemInstance& src) :
                PlayFabServerItemInstance{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerItemInstance>(*this);
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

        struct CharacterInventory : public PlayFabServerCharacterInventory, public BaseModel
        {
            CharacterInventory() : PlayFabServerCharacterInventory{}
            {
            }

            CharacterInventory(const CharacterInventory& src) :
                PlayFabServerCharacterInventory{ src },
                m_characterId{ src.m_characterId },
                m_inventory{ src.m_inventory }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
            }

            ~CharacterInventory() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCharacterInventory>(*this);
            }

        private:
            String m_characterId;
            PointerArray<PlayFabServerItemInstance, ItemInstance> m_inventory;
        };

        struct CharacterLeaderboardEntry : public PlayFabServerCharacterLeaderboardEntry, public BaseModel
        {
            CharacterLeaderboardEntry() : PlayFabServerCharacterLeaderboardEntry{}
            {
            }

            CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
                PlayFabServerCharacterLeaderboardEntry{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerCharacterLeaderboardEntry>(*this);
            }

        private:
            String m_characterId;
            String m_characterName;
            String m_characterType;
            String m_displayName;
            String m_playFabId;
        };

        struct CharacterResult : public PlayFabServerCharacterResult, public BaseResult
        {
            CharacterResult() : PlayFabServerCharacterResult{}
            {
            }

            CharacterResult(const CharacterResult& src) :
                PlayFabServerCharacterResult{ src },
                m_characterId{ src.m_characterId },
                m_characterName{ src.m_characterName },
                m_characterType{ src.m_characterType }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterName = m_characterName.empty() ? nullptr : m_characterName.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
            }

            ~CharacterResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterName", m_characterName, characterName);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCharacterResult>(*this);
            }

        private:
            String m_characterId;
            String m_characterName;
            String m_characterType;
        };

        struct ConsumeItemRequest : public PlayFabServerConsumeItemRequest, public BaseRequest
        {
            ConsumeItemRequest() : PlayFabServerConsumeItemRequest{}
            {
            }

            ConsumeItemRequest(const ConsumeItemRequest& src) :
                PlayFabServerConsumeItemRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ConsumeItemRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ConsumeCount", consumeCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerConsumeItemRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct ConsumeItemResult : public PlayFabServerConsumeItemResult, public BaseResult
        {
            ConsumeItemResult() : PlayFabServerConsumeItemResult{}
            {
            }

            ConsumeItemResult(const ConsumeItemResult& src) :
                PlayFabServerConsumeItemResult{ src },
                m_itemInstanceId{ src.m_itemInstanceId }
            {
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
            }

            ~ConsumeItemResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "RemainingUses", remainingUses);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerConsumeItemResult>(*this);
            }

        private:
            String m_itemInstanceId;
        };

        struct ContactEmailInfo : public PlayFabServerContactEmailInfo, public BaseModel
        {
            ContactEmailInfo() : PlayFabServerContactEmailInfo{}
            {
            }

            ContactEmailInfo(const ContactEmailInfo& src) :
                PlayFabServerContactEmailInfo{ src },
                m_emailAddress{ src.m_emailAddress },
                m_name{ src.m_name },
                m_verificationStatus{ src.m_verificationStatus }
            {
                emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
                name = m_name.empty() ? nullptr : m_name.data();
                verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
            }

            ~ContactEmailInfo() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerContactEmailInfo>(*this);
            }

        private:
            String m_emailAddress;
            String m_name;
            StdExtra::optional<PlayFabServerEmailVerificationStatus> m_verificationStatus;
        };

        struct ContactEmailInfoModel : public PlayFabServerContactEmailInfoModel, public BaseModel
        {
            ContactEmailInfoModel() : PlayFabServerContactEmailInfoModel{}
            {
            }

            ContactEmailInfoModel(const ContactEmailInfoModel& src) :
                PlayFabServerContactEmailInfoModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerContactEmailInfoModel>(*this);
            }

        private:
            String m_emailAddress;
            String m_name;
            StdExtra::optional<PlayFabServerEmailVerificationStatus> m_verificationStatus;
        };

        struct CreateSharedGroupRequest : public PlayFabServerCreateSharedGroupRequest, public BaseRequest
        {
            CreateSharedGroupRequest() : PlayFabServerCreateSharedGroupRequest{}
            {
            }

            CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
                PlayFabServerCreateSharedGroupRequest{ src },
                m_sharedGroupId{ src.m_sharedGroupId }
            {
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~CreateSharedGroupRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCreateSharedGroupRequest>(*this);
            }

        private:
            String m_sharedGroupId;
        };

        struct CreateSharedGroupResult : public PlayFabServerCreateSharedGroupResult, public BaseResult
        {
            CreateSharedGroupResult() : PlayFabServerCreateSharedGroupResult{}
            {
            }

            CreateSharedGroupResult(const CreateSharedGroupResult& src) :
                PlayFabServerCreateSharedGroupResult{ src },
                m_sharedGroupId{ src.m_sharedGroupId }
            {
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~CreateSharedGroupResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerCreateSharedGroupResult>(*this);
            }

        private:
            String m_sharedGroupId;
        };

        struct DeleteCharacterFromUserRequest : public PlayFabServerDeleteCharacterFromUserRequest, public BaseRequest
        {
            DeleteCharacterFromUserRequest() : PlayFabServerDeleteCharacterFromUserRequest{}
            {
            }

            DeleteCharacterFromUserRequest(const DeleteCharacterFromUserRequest& src) :
                PlayFabServerDeleteCharacterFromUserRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~DeleteCharacterFromUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "SaveCharacterInventory", saveCharacterInventory);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerDeleteCharacterFromUserRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct DeletePlayerRequest : public PlayFabServerDeletePlayerRequest, public BaseRequest
        {
            DeletePlayerRequest() : PlayFabServerDeletePlayerRequest{}
            {
            }

            DeletePlayerRequest(const DeletePlayerRequest& src) :
                PlayFabServerDeletePlayerRequest{ src },
                m_playFabId{ src.m_playFabId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~DeletePlayerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerDeletePlayerRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct DeletePushNotificationTemplateRequest : public PlayFabServerDeletePushNotificationTemplateRequest, public BaseRequest
        {
            DeletePushNotificationTemplateRequest() : PlayFabServerDeletePushNotificationTemplateRequest{}
            {
            }

            DeletePushNotificationTemplateRequest(const DeletePushNotificationTemplateRequest& src) :
                PlayFabServerDeletePushNotificationTemplateRequest{ src },
                m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
            {
                pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
            }

            ~DeletePushNotificationTemplateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerDeletePushNotificationTemplateRequest>(*this);
            }

        private:
            String m_pushNotificationTemplateId;
        };

        struct DeleteSharedGroupRequest : public PlayFabServerDeleteSharedGroupRequest, public BaseRequest
        {
            DeleteSharedGroupRequest() : PlayFabServerDeleteSharedGroupRequest{}
            {
            }

            DeleteSharedGroupRequest(const DeleteSharedGroupRequest& src) :
                PlayFabServerDeleteSharedGroupRequest{ src },
                m_sharedGroupId{ src.m_sharedGroupId }
            {
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~DeleteSharedGroupRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerDeleteSharedGroupRequest>(*this);
            }

        private:
            String m_sharedGroupId;
        };

        struct DeregisterGameRequest : public PlayFabServerDeregisterGameRequest, public BaseRequest
        {
            DeregisterGameRequest() : PlayFabServerDeregisterGameRequest{}
            {
            }

            DeregisterGameRequest(const DeregisterGameRequest& src) :
                PlayFabServerDeregisterGameRequest{ src },
                m_customTags{ src.m_customTags },
                m_lobbyId{ src.m_lobbyId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
            }

            ~DeregisterGameRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerDeregisterGameRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_lobbyId;
        };

        struct EntityTokenResponse : public PlayFabServerEntityTokenResponse, public BaseResult
        {
            EntityTokenResponse() : PlayFabServerEntityTokenResponse{}
            {
            }

            EntityTokenResponse(const EntityTokenResponse& src) :
                PlayFabServerEntityTokenResponse{ src },
                m_entity{ src.m_entity },
                m_entityToken{ src.m_entityToken },
                m_tokenExpiration{ src.m_tokenExpiration }
            {
                entity = m_entity ? m_entity.operator->() : nullptr;
                entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
                tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
            }

            ~EntityTokenResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
                JsonUtils:: ObjectGetMember(input, "TokenExpiration", m_tokenExpiration, tokenExpiration, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerEntityTokenResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            String m_entityToken;
            StdExtra::optional<time_t> m_tokenExpiration;
        };

        struct EvaluateRandomResultTableRequest : public PlayFabServerEvaluateRandomResultTableRequest, public BaseRequest
        {
            EvaluateRandomResultTableRequest() : PlayFabServerEvaluateRandomResultTableRequest{}
            {
            }

            EvaluateRandomResultTableRequest(const EvaluateRandomResultTableRequest& src) :
                PlayFabServerEvaluateRandomResultTableRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_tableId{ src.m_tableId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                tableId = m_tableId.empty() ? nullptr : m_tableId.data();
            }

            ~EvaluateRandomResultTableRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "TableId", m_tableId, tableId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerEvaluateRandomResultTableRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_tableId;
        };

        struct EvaluateRandomResultTableResult : public PlayFabServerEvaluateRandomResultTableResult, public BaseResult
        {
            EvaluateRandomResultTableResult() : PlayFabServerEvaluateRandomResultTableResult{}
            {
            }

            EvaluateRandomResultTableResult(const EvaluateRandomResultTableResult& src) :
                PlayFabServerEvaluateRandomResultTableResult{ src },
                m_resultItemId{ src.m_resultItemId }
            {
                resultItemId = m_resultItemId.empty() ? nullptr : m_resultItemId.data();
            }

            ~EvaluateRandomResultTableResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ResultItemId", m_resultItemId, resultItemId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerEvaluateRandomResultTableResult>(*this);
            }

        private:
            String m_resultItemId;
        };

        struct ScriptExecutionError : public PlayFabServerScriptExecutionError, public BaseModel
        {
            ScriptExecutionError() : PlayFabServerScriptExecutionError{}
            {
            }

            ScriptExecutionError(const ScriptExecutionError& src) :
                PlayFabServerScriptExecutionError{ src },
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
                return JsonUtils::ToJson<PlayFabServerScriptExecutionError>(*this);
            }

        private:
            String m_error;
            String m_message;
            String m_stackTrace;
        };

        struct LogStatement : public PlayFabServerLogStatement, public BaseModel
        {
            LogStatement() : PlayFabServerLogStatement{}
            {
            }

            LogStatement(const LogStatement& src) :
                PlayFabServerLogStatement{ src },
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
                return JsonUtils::ToJson<PlayFabServerLogStatement>(*this);
            }

        private:
            JsonObject m_data;
            String m_level;
            String m_message;
        };

        struct ExecuteCloudScriptResult : public PlayFabServerExecuteCloudScriptResult, public BaseResult
        {
            ExecuteCloudScriptResult() : PlayFabServerExecuteCloudScriptResult{}
            {
            }

            ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
                PlayFabServerExecuteCloudScriptResult{ src },
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
                return JsonUtils::ToJson<PlayFabServerExecuteCloudScriptResult>(*this);
            }

        private:
            StdExtra::optional<ScriptExecutionError> m_error;
            String m_functionName;
            JsonObject m_functionResult;
            StdExtra::optional<bool> m_functionResultTooLarge;
            PointerArray<PlayFabServerLogStatement, LogStatement> m_logs;
            StdExtra::optional<bool> m_logsTooLarge;
        };

        struct ExecuteCloudScriptServerRequest : public PlayFabServerExecuteCloudScriptServerRequest, public BaseRequest
        {
            ExecuteCloudScriptServerRequest() : PlayFabServerExecuteCloudScriptServerRequest{}
            {
            }

            ExecuteCloudScriptServerRequest(const ExecuteCloudScriptServerRequest& src) :
                PlayFabServerExecuteCloudScriptServerRequest{ src },
                m_customTags{ src.m_customTags },
                m_functionName{ src.m_functionName },
                m_functionParameter{ src.m_functionParameter },
                m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
                m_playFabId{ src.m_playFabId },
                m_revisionSelection{ src.m_revisionSelection },
                m_specificRevision{ src.m_specificRevision }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionParameter.stringValue = m_functionParameter.StringValue();
                generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
                specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
            }

            ~ExecuteCloudScriptServerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
                JsonUtils:: ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
                JsonUtils:: ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerExecuteCloudScriptServerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_functionName;
            JsonObject m_functionParameter;
            StdExtra::optional<bool> m_generatePlayStreamEvent;
            String m_playFabId;
            StdExtra::optional<PlayFabServerCloudScriptRevisionOption> m_revisionSelection;
            StdExtra::optional<int32_t> m_specificRevision;
        };

        struct FacebookInstantGamesPlayFabIdPair : public PlayFabServerFacebookInstantGamesPlayFabIdPair, public BaseModel
        {
            FacebookInstantGamesPlayFabIdPair() : PlayFabServerFacebookInstantGamesPlayFabIdPair{}
            {
            }

            FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src) :
                PlayFabServerFacebookInstantGamesPlayFabIdPair{ src },
                m_facebookInstantGamesId{ src.m_facebookInstantGamesId },
                m_playFabId{ src.m_playFabId }
            {
                facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~FacebookInstantGamesPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerFacebookInstantGamesPlayFabIdPair>(*this);
            }

        private:
            String m_facebookInstantGamesId;
            String m_playFabId;
        };

        struct FacebookPlayFabIdPair : public PlayFabServerFacebookPlayFabIdPair, public BaseModel
        {
            FacebookPlayFabIdPair() : PlayFabServerFacebookPlayFabIdPair{}
            {
            }

            FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
                PlayFabServerFacebookPlayFabIdPair{ src },
                m_facebookId{ src.m_facebookId },
                m_playFabId{ src.m_playFabId }
            {
                facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~FacebookPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerFacebookPlayFabIdPair>(*this);
            }

        private:
            String m_facebookId;
            String m_playFabId;
        };

        struct LinkedPlatformAccountModel : public PlayFabServerLinkedPlatformAccountModel, public BaseModel
        {
            LinkedPlatformAccountModel() : PlayFabServerLinkedPlatformAccountModel{}
            {
            }

            LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
                PlayFabServerLinkedPlatformAccountModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerLinkedPlatformAccountModel>(*this);
            }

        private:
            String m_email;
            StdExtra::optional<PlayFabServerLoginIdentityProvider> m_platform;
            String m_platformUserId;
            String m_username;
        };

        struct LocationModel : public PlayFabServerLocationModel, public BaseModel
        {
            LocationModel() : PlayFabServerLocationModel{}
            {
            }

            LocationModel(const LocationModel& src) :
                PlayFabServerLocationModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerLocationModel>(*this);
            }

        private:
            String m_city;
            StdExtra::optional<PlayFabServerContinentCode> m_continentCode;
            StdExtra::optional<PlayFabServerCountryCode> m_countryCode;
            StdExtra::optional<double> m_latitude;
            StdExtra::optional<double> m_longitude;
        };

        struct SubscriptionModel : public PlayFabServerSubscriptionModel, public BaseModel
        {
            SubscriptionModel() : PlayFabServerSubscriptionModel{}
            {
            }

            SubscriptionModel(const SubscriptionModel& src) :
                PlayFabServerSubscriptionModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerSubscriptionModel>(*this);
            }

        private:
            StdExtra::optional<PlayFabServerSubscriptionProviderStatus> m_status;
            String m_subscriptionId;
            String m_subscriptionItemId;
            String m_subscriptionProvider;
        };

        struct MembershipModel : public PlayFabServerMembershipModel, public BaseModel
        {
            MembershipModel() : PlayFabServerMembershipModel{}
            {
            }

            MembershipModel(const MembershipModel& src) :
                PlayFabServerMembershipModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerMembershipModel>(*this);
            }

        private:
            String m_membershipId;
            StdExtra::optional<time_t> m_overrideExpiration;
            PointerArray<PlayFabServerSubscriptionModel, SubscriptionModel> m_subscriptions;
        };

        struct PushNotificationRegistrationModel : public PlayFabServerPushNotificationRegistrationModel, public BaseModel
        {
            PushNotificationRegistrationModel() : PlayFabServerPushNotificationRegistrationModel{}
            {
            }

            PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
                PlayFabServerPushNotificationRegistrationModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerPushNotificationRegistrationModel>(*this);
            }

        private:
            String m_notificationEndpointARN;
            StdExtra::optional<PlayFabServerPushNotificationPlatform> m_platform;
        };

        struct StatisticModel : public PlayFabServerStatisticModel, public BaseModel
        {
            StatisticModel() : PlayFabServerStatisticModel{}
            {
            }

            StatisticModel(const StatisticModel& src) :
                PlayFabServerStatisticModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerStatisticModel>(*this);
            }

        private:
            String m_name;
        };

        struct TagModel : public PlayFabServerTagModel, public BaseModel
        {
            TagModel() : PlayFabServerTagModel{}
            {
            }

            TagModel(const TagModel& src) :
                PlayFabServerTagModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerTagModel>(*this);
            }

        private:
            String m_tagValue;
        };

        struct ValueToDateModel : public PlayFabServerValueToDateModel, public BaseModel
        {
            ValueToDateModel() : PlayFabServerValueToDateModel{}
            {
            }

            ValueToDateModel(const ValueToDateModel& src) :
                PlayFabServerValueToDateModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerValueToDateModel>(*this);
            }

        private:
            String m_currency;
            String m_totalValueAsDecimal;
        };

        struct PlayerProfileModel : public PlayFabServerPlayerProfileModel, public BaseModel
        {
            PlayerProfileModel() : PlayFabServerPlayerProfileModel{}
            {
            }

            PlayerProfileModel(const PlayerProfileModel& src) :
                PlayFabServerPlayerProfileModel{ src },
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
                return JsonUtils::ToJson<PlayFabServerPlayerProfileModel>(*this);
            }

        private:
            PointerArray<PlayFabServerAdCampaignAttributionModel, AdCampaignAttributionModel> m_adCampaignAttributions;
            String m_avatarUrl;
            StdExtra::optional<time_t> m_bannedUntil;
            PointerArray<PlayFabServerContactEmailInfoModel, ContactEmailInfoModel> m_contactEmailAddresses;
            StdExtra::optional<time_t> m_created;
            String m_displayName;
            PointerArray<const char, String> m_experimentVariants;
            StdExtra::optional<time_t> m_lastLogin;
            PointerArray<PlayFabServerLinkedPlatformAccountModel, LinkedPlatformAccountModel> m_linkedAccounts;
            PointerArray<PlayFabServerLocationModel, LocationModel> m_locations;
            PointerArray<PlayFabServerMembershipModel, MembershipModel> m_memberships;
            StdExtra::optional<PlayFabServerLoginIdentityProvider> m_origination;
            String m_playerId;
            String m_publisherId;
            PointerArray<PlayFabServerPushNotificationRegistrationModel, PushNotificationRegistrationModel> m_pushNotificationRegistrations;
            PointerArray<PlayFabServerStatisticModel, StatisticModel> m_statistics;
            PointerArray<PlayFabServerTagModel, TagModel> m_tags;
            String m_titleId;
            StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
            PointerArray<PlayFabServerValueToDateModel, ValueToDateModel> m_valuesToDate;
        };

        struct FriendInfo : public PlayFabServerFriendInfo, public BaseModel
        {
            FriendInfo() : PlayFabServerFriendInfo{}
            {
            }

            FriendInfo(const FriendInfo& src) :
                PlayFabServerFriendInfo{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerFriendInfo>(*this);
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

        struct GenericPlayFabIdPair : public PlayFabServerGenericPlayFabIdPair, public BaseModel
        {
            GenericPlayFabIdPair() : PlayFabServerGenericPlayFabIdPair{}
            {
            }

            GenericPlayFabIdPair(const GenericPlayFabIdPair& src) :
                PlayFabServerGenericPlayFabIdPair{ src },
                m_genericId{ src.m_genericId },
                m_playFabId{ src.m_playFabId }
            {
                genericId = m_genericId ? m_genericId.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GenericPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GenericId", m_genericId, genericId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGenericPlayFabIdPair>(*this);
            }

        private:
            StdExtra::optional<GenericServiceId> m_genericId;
            String m_playFabId;
        };

        struct GetSegmentResult : public PlayFabServerGetSegmentResult, public BaseResult
        {
            GetSegmentResult() : PlayFabServerGetSegmentResult{}
            {
            }

            GetSegmentResult(const GetSegmentResult& src) :
                PlayFabServerGetSegmentResult{ src },
                m_aBTestParent{ src.m_aBTestParent },
                m_id{ src.m_id },
                m_name{ src.m_name }
            {
                aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
                id = m_id.empty() ? nullptr : m_id.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~GetSegmentResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ABTestParent", m_aBTestParent, aBTestParent);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetSegmentResult>(*this);
            }

        private:
            String m_aBTestParent;
            String m_id;
            String m_name;
        };

        struct GetAllSegmentsResult : public PlayFabServerGetAllSegmentsResult, public BaseResult
        {
            GetAllSegmentsResult() : PlayFabServerGetAllSegmentsResult{}
            {
            }

            GetAllSegmentsResult(const GetAllSegmentsResult& src) :
                PlayFabServerGetAllSegmentsResult{ src },
                m_segments{ src.m_segments }
            {
                segments = m_segments.Empty() ? nullptr : m_segments.Data();
            }

            ~GetAllSegmentsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetAllSegmentsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerGetSegmentResult, GetSegmentResult> m_segments;
        };

        struct GetCatalogItemsRequest : public PlayFabServerGetCatalogItemsRequest, public BaseRequest
        {
            GetCatalogItemsRequest() : PlayFabServerGetCatalogItemsRequest{}
            {
            }

            GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
                PlayFabServerGetCatalogItemsRequest{ src },
                m_catalogVersion{ src.m_catalogVersion }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
            }

            ~GetCatalogItemsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCatalogItemsRequest>(*this);
            }

        private:
            String m_catalogVersion;
        };

        struct GetCatalogItemsResult : public PlayFabServerGetCatalogItemsResult, public BaseResult
        {
            GetCatalogItemsResult() : PlayFabServerGetCatalogItemsResult{}
            {
            }

            GetCatalogItemsResult(const GetCatalogItemsResult& src) :
                PlayFabServerGetCatalogItemsResult{ src },
                m_catalog{ src.m_catalog }
            {
                catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
            }

            ~GetCatalogItemsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCatalogItemsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerCatalogItem, CatalogItem> m_catalog;
        };

        struct GetCharacterDataRequest : public PlayFabServerGetCharacterDataRequest, public BaseRequest
        {
            GetCharacterDataRequest() : PlayFabServerGetCharacterDataRequest{}
            {
            }

            GetCharacterDataRequest(const GetCharacterDataRequest& src) :
                PlayFabServerGetCharacterDataRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterDataRequest>(*this);
            }

        private:
            String m_characterId;
            StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
            PointerArray<const char, String> m_keys;
            String m_playFabId;
        };

        struct UserDataRecord : public PlayFabServerUserDataRecord, public BaseModel
        {
            UserDataRecord() : PlayFabServerUserDataRecord{}
            {
            }

            UserDataRecord(const UserDataRecord& src) :
                PlayFabServerUserDataRecord{ src },
                m_permission{ src.m_permission },
                m_value{ src.m_value }
            {
                permission = m_permission ? m_permission.operator->() : nullptr;
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~UserDataRecord() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LastUpdated", lastUpdated, true);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserDataRecord>(*this);
            }

        private:
            StdExtra::optional<PlayFabServerUserDataPermission> m_permission;
            String m_value;
        };

        struct GetCharacterDataResult : public PlayFabServerGetCharacterDataResult, public BaseResult
        {
            GetCharacterDataResult() : PlayFabServerGetCharacterDataResult{}
            {
            }

            GetCharacterDataResult(const GetCharacterDataResult& src) :
                PlayFabServerGetCharacterDataResult{ src },
                m_characterId{ src.m_characterId },
                m_data{ src.m_data },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                data = m_data.Empty() ? nullptr : m_data.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetCharacterDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterDataResult>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabServerUserDataRecordDictionaryEntry, UserDataRecord> m_data;
            String m_playFabId;
        };

        struct GetCharacterInventoryRequest : public PlayFabServerGetCharacterInventoryRequest, public BaseRequest
        {
            GetCharacterInventoryRequest() : PlayFabServerGetCharacterInventoryRequest{}
            {
            }

            GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src) :
                PlayFabServerGetCharacterInventoryRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetCharacterInventoryRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterInventoryRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct VirtualCurrencyRechargeTime : public PlayFabServerVirtualCurrencyRechargeTime, public BaseModel
        {
            VirtualCurrencyRechargeTime() : PlayFabServerVirtualCurrencyRechargeTime{}
            {
            }

            VirtualCurrencyRechargeTime(const VirtualCurrencyRechargeTime&) = default;

            ~VirtualCurrencyRechargeTime() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "RechargeMax", rechargeMax);
                JsonUtils:: ObjectGetMember(input, "RechargeTime", rechargeTime, true);
                JsonUtils:: ObjectGetMember(input, "SecondsToRecharge", secondsToRecharge);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerVirtualCurrencyRechargeTime>(*this);
            }

        private:
        };

        struct GetCharacterInventoryResult : public PlayFabServerGetCharacterInventoryResult, public BaseResult
        {
            GetCharacterInventoryResult() : PlayFabServerGetCharacterInventoryResult{}
            {
            }

            GetCharacterInventoryResult(const GetCharacterInventoryResult& src) :
                PlayFabServerGetCharacterInventoryResult{ src },
                m_characterId{ src.m_characterId },
                m_inventory{ src.m_inventory },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency },
                m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
                virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
            }

            ~GetCharacterInventoryResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterInventoryResult>(*this);
            }

        private:
            String m_characterId;
            PointerArray<PlayFabServerItemInstance, ItemInstance> m_inventory;
            String m_playFabId;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
            AssociativeArray<PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
        };

        struct GetCharacterLeaderboardRequest : public PlayFabServerGetCharacterLeaderboardRequest, public BaseRequest
        {
            GetCharacterLeaderboardRequest() : PlayFabServerGetCharacterLeaderboardRequest{}
            {
            }

            GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
                PlayFabServerGetCharacterLeaderboardRequest{ src },
                m_characterType{ src.m_characterType },
                m_statisticName{ src.m_statisticName }
            {
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetCharacterLeaderboardRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "StartPosition", startPosition);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterLeaderboardRequest>(*this);
            }

        private:
            String m_characterType;
            String m_statisticName;
        };

        struct GetCharacterLeaderboardResult : public PlayFabServerGetCharacterLeaderboardResult, public BaseResult
        {
            GetCharacterLeaderboardResult() : PlayFabServerGetCharacterLeaderboardResult{}
            {
            }

            GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
                PlayFabServerGetCharacterLeaderboardResult{ src },
                m_leaderboard{ src.m_leaderboard }
            {
                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
            }

            ~GetCharacterLeaderboardResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterLeaderboardResult>(*this);
            }

        private:
            PointerArray<PlayFabServerCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
        };

        struct GetCharacterStatisticsRequest : public PlayFabServerGetCharacterStatisticsRequest, public BaseRequest
        {
            GetCharacterStatisticsRequest() : PlayFabServerGetCharacterStatisticsRequest{}
            {
            }

            GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src) :
                PlayFabServerGetCharacterStatisticsRequest{ src },
                m_characterId{ src.m_characterId },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetCharacterStatisticsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterStatisticsRequest>(*this);
            }

        private:
            String m_characterId;
            String m_playFabId;
        };

        struct GetCharacterStatisticsResult : public PlayFabServerGetCharacterStatisticsResult, public BaseResult
        {
            GetCharacterStatisticsResult() : PlayFabServerGetCharacterStatisticsResult{}
            {
            }

            GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src) :
                PlayFabServerGetCharacterStatisticsResult{ src },
                m_characterId{ src.m_characterId },
                m_characterStatistics{ src.m_characterStatistics },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetCharacterStatisticsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetCharacterStatisticsResult>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
            String m_playFabId;
        };

        struct GetContentDownloadUrlRequest : public PlayFabServerGetContentDownloadUrlRequest, public BaseRequest
        {
            GetContentDownloadUrlRequest() : PlayFabServerGetContentDownloadUrlRequest{}
            {
            }

            GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
                PlayFabServerGetContentDownloadUrlRequest{ src },
                m_httpMethod{ src.m_httpMethod },
                m_key{ src.m_key },
                m_thruCDN{ src.m_thruCDN }
            {
                httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
                key = m_key.empty() ? nullptr : m_key.data();
                thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
            }

            ~GetContentDownloadUrlRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "HttpMethod", m_httpMethod, httpMethod);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "ThruCDN", m_thruCDN, thruCDN);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetContentDownloadUrlRequest>(*this);
            }

        private:
            String m_httpMethod;
            String m_key;
            StdExtra::optional<bool> m_thruCDN;
        };

        struct GetContentDownloadUrlResult : public PlayFabServerGetContentDownloadUrlResult, public BaseResult
        {
            GetContentDownloadUrlResult() : PlayFabServerGetContentDownloadUrlResult{}
            {
            }

            GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
                PlayFabServerGetContentDownloadUrlResult{ src },
                m_uRL{ src.m_uRL }
            {
                uRL = m_uRL.empty() ? nullptr : m_uRL.data();
            }

            ~GetContentDownloadUrlResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "URL", m_uRL, uRL);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetContentDownloadUrlResult>(*this);
            }

        private:
            String m_uRL;
        };

        struct PlayerProfileViewConstraints : public PlayFabServerPlayerProfileViewConstraints, public BaseModel
        {
            PlayerProfileViewConstraints() : PlayFabServerPlayerProfileViewConstraints{}
            {
            }

            PlayerProfileViewConstraints(const PlayerProfileViewConstraints&) = default;

            ~PlayerProfileViewConstraints() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerPlayerProfileViewConstraints>(*this);
            }

        private:
        };

        struct GetFriendLeaderboardRequest : public PlayFabServerGetFriendLeaderboardRequest, public BaseRequest
        {
            GetFriendLeaderboardRequest() : PlayFabServerGetFriendLeaderboardRequest{}
            {
            }

            GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src) :
                PlayFabServerGetFriendLeaderboardRequest{ src },
                m_customTags{ src.m_customTags },
                m_includeFacebookFriends{ src.m_includeFacebookFriends },
                m_includeSteamFriends{ src.m_includeSteamFriends },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version },
                m_xboxToken{ src.m_xboxToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
                includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~GetFriendLeaderboardRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
                JsonUtils:: ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StartPosition", startPosition);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetFriendLeaderboardRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_includeFacebookFriends;
            StdExtra::optional<bool> m_includeSteamFriends;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
            String m_xboxToken;
        };

        struct GetFriendsListRequest : public PlayFabServerGetFriendsListRequest, public BaseRequest
        {
            GetFriendsListRequest() : PlayFabServerGetFriendsListRequest{}
            {
            }

            GetFriendsListRequest(const GetFriendsListRequest& src) :
                PlayFabServerGetFriendsListRequest{ src },
                m_customTags{ src.m_customTags },
                m_includeFacebookFriends{ src.m_includeFacebookFriends },
                m_includeSteamFriends{ src.m_includeSteamFriends },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints },
                m_xboxToken{ src.m_xboxToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
                includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~GetFriendsListRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
                JsonUtils:: ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetFriendsListRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_includeFacebookFriends;
            StdExtra::optional<bool> m_includeSteamFriends;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_xboxToken;
        };

        struct GetFriendsListResult : public PlayFabServerGetFriendsListResult, public BaseResult
        {
            GetFriendsListResult() : PlayFabServerGetFriendsListResult{}
            {
            }

            GetFriendsListResult(const GetFriendsListResult& src) :
                PlayFabServerGetFriendsListResult{ src },
                m_friends{ src.m_friends }
            {
                friends = m_friends.Empty() ? nullptr : m_friends.Data();
            }

            ~GetFriendsListResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Friends", m_friends, friends, friendsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetFriendsListResult>(*this);
            }

        private:
            PointerArray<PlayFabServerFriendInfo, FriendInfo> m_friends;
        };

        struct GetLeaderboardAroundCharacterRequest : public PlayFabServerGetLeaderboardAroundCharacterRequest, public BaseRequest
        {
            GetLeaderboardAroundCharacterRequest() : PlayFabServerGetLeaderboardAroundCharacterRequest{}
            {
            }

            GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src) :
                PlayFabServerGetLeaderboardAroundCharacterRequest{ src },
                m_characterId{ src.m_characterId },
                m_characterType{ src.m_characterType },
                m_playFabId{ src.m_playFabId },
                m_statisticName{ src.m_statisticName }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetLeaderboardAroundCharacterRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundCharacterRequest>(*this);
            }

        private:
            String m_characterId;
            String m_characterType;
            String m_playFabId;
            String m_statisticName;
        };

        struct GetLeaderboardAroundCharacterResult : public PlayFabServerGetLeaderboardAroundCharacterResult, public BaseResult
        {
            GetLeaderboardAroundCharacterResult() : PlayFabServerGetLeaderboardAroundCharacterResult{}
            {
            }

            GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
                PlayFabServerGetLeaderboardAroundCharacterResult{ src },
                m_leaderboard{ src.m_leaderboard }
            {
                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
            }

            ~GetLeaderboardAroundCharacterResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundCharacterResult>(*this);
            }

        private:
            PointerArray<PlayFabServerCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
        };

        struct GetLeaderboardAroundUserRequest : public PlayFabServerGetLeaderboardAroundUserRequest, public BaseRequest
        {
            GetLeaderboardAroundUserRequest() : PlayFabServerGetLeaderboardAroundUserRequest{}
            {
            }

            GetLeaderboardAroundUserRequest(const GetLeaderboardAroundUserRequest& src) :
                PlayFabServerGetLeaderboardAroundUserRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~GetLeaderboardAroundUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundUserRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
        };

        struct PlayerLeaderboardEntry : public PlayFabServerPlayerLeaderboardEntry, public BaseModel
        {
            PlayerLeaderboardEntry() : PlayFabServerPlayerLeaderboardEntry{}
            {
            }

            PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
                PlayFabServerPlayerLeaderboardEntry{ src },
                m_displayName{ src.m_displayName },
                m_playFabId{ src.m_playFabId },
                m_profile{ src.m_profile }
            {
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profile = m_profile ? m_profile.operator->() : nullptr;
            }

            ~PlayerLeaderboardEntry() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Position", position);
                JsonUtils:: ObjectGetMember(input, "Profile", m_profile, profile);
                JsonUtils:: ObjectGetMember(input, "StatValue", statValue);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPlayerLeaderboardEntry>(*this);
            }

        private:
            String m_displayName;
            String m_playFabId;
            StdExtra::optional<PlayerProfileModel> m_profile;
        };

        struct GetLeaderboardAroundUserResult : public PlayFabServerGetLeaderboardAroundUserResult, public BaseResult
        {
            GetLeaderboardAroundUserResult() : PlayFabServerGetLeaderboardAroundUserResult{}
            {
            }

            GetLeaderboardAroundUserResult(const GetLeaderboardAroundUserResult& src) :
                PlayFabServerGetLeaderboardAroundUserResult{ src },
                m_leaderboard{ src.m_leaderboard },
                m_nextReset{ src.m_nextReset }
            {
                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
                nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
            }

            ~GetLeaderboardAroundUserResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
                JsonUtils:: ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundUserResult>(*this);
            }

        private:
            PointerArray<PlayFabServerPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
            StdExtra::optional<time_t> m_nextReset;
        };

        struct GetLeaderboardForUsersCharactersRequest : public PlayFabServerGetLeaderboardForUsersCharactersRequest, public BaseRequest
        {
            GetLeaderboardForUsersCharactersRequest() : PlayFabServerGetLeaderboardForUsersCharactersRequest{}
            {
            }

            GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src) :
                PlayFabServerGetLeaderboardForUsersCharactersRequest{ src },
                m_playFabId{ src.m_playFabId },
                m_statisticName{ src.m_statisticName }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetLeaderboardForUsersCharactersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardForUsersCharactersRequest>(*this);
            }

        private:
            String m_playFabId;
            String m_statisticName;
        };

        struct GetLeaderboardForUsersCharactersResult : public PlayFabServerGetLeaderboardForUsersCharactersResult, public BaseResult
        {
            GetLeaderboardForUsersCharactersResult() : PlayFabServerGetLeaderboardForUsersCharactersResult{}
            {
            }

            GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
                PlayFabServerGetLeaderboardForUsersCharactersResult{ src },
                m_leaderboard{ src.m_leaderboard }
            {
                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
            }

            ~GetLeaderboardForUsersCharactersResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardForUsersCharactersResult>(*this);
            }

        private:
            PointerArray<PlayFabServerCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
        };

        struct GetLeaderboardRequest : public PlayFabServerGetLeaderboardRequest, public BaseRequest
        {
            GetLeaderboardRequest() : PlayFabServerGetLeaderboardRequest{}
            {
            }

            GetLeaderboardRequest(const GetLeaderboardRequest& src) :
                PlayFabServerGetLeaderboardRequest{ src },
                m_customTags{ src.m_customTags },
                m_profileConstraints{ src.m_profileConstraints },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~GetLeaderboardRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
                JsonUtils:: ObjectGetMember(input, "StartPosition", startPosition);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            String m_statisticName;
            StdExtra::optional<int32_t> m_version;
        };

        struct GetLeaderboardResult : public PlayFabServerGetLeaderboardResult, public BaseResult
        {
            GetLeaderboardResult() : PlayFabServerGetLeaderboardResult{}
            {
            }

            GetLeaderboardResult(const GetLeaderboardResult& src) :
                PlayFabServerGetLeaderboardResult{ src },
                m_leaderboard{ src.m_leaderboard },
                m_nextReset{ src.m_nextReset }
            {
                leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
                nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
            }

            ~GetLeaderboardResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
                JsonUtils:: ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetLeaderboardResult>(*this);
            }

        private:
            PointerArray<PlayFabServerPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
            StdExtra::optional<time_t> m_nextReset;
        };

        struct GetPlayerCombinedInfoRequestParams : public PlayFabServerGetPlayerCombinedInfoRequestParams, public BaseModel
        {
            GetPlayerCombinedInfoRequestParams() : PlayFabServerGetPlayerCombinedInfoRequestParams{}
            {
            }

            GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src) :
                PlayFabServerGetPlayerCombinedInfoRequestParams{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoRequestParams>(*this);
            }

        private:
            PointerArray<const char, String> m_playerStatisticNames;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
            PointerArray<const char, String> m_titleDataKeys;
            PointerArray<const char, String> m_userDataKeys;
            PointerArray<const char, String> m_userReadOnlyDataKeys;
        };

        struct GetPlayerCombinedInfoRequest : public PlayFabServerGetPlayerCombinedInfoRequest, public BaseRequest
        {
            GetPlayerCombinedInfoRequest() : PlayFabServerGetPlayerCombinedInfoRequest{}
            {
            }

            GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src) :
                PlayFabServerGetPlayerCombinedInfoRequest{ src },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = (PlayFabServerGetPlayerCombinedInfoRequestParams*)&m_infoRequestParameters;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerCombinedInfoRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            GetPlayerCombinedInfoRequestParams m_infoRequestParameters;
            String m_playFabId;
        };

        struct StatisticValue : public PlayFabServerStatisticValue, public BaseModel
        {
            StatisticValue() : PlayFabServerStatisticValue{}
            {
            }

            StatisticValue(const StatisticValue& src) :
                PlayFabServerStatisticValue{ src },
                m_statisticName{ src.m_statisticName }
            {
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~StatisticValue() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Value", value);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerStatisticValue>(*this);
            }

        private:
            String m_statisticName;
        };

        struct GetPlayerCombinedInfoResultPayload : public PlayFabServerGetPlayerCombinedInfoResultPayload, public BaseModel
        {
            GetPlayerCombinedInfoResultPayload() : PlayFabServerGetPlayerCombinedInfoResultPayload{}
            {
            }

            GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src) :
                PlayFabServerGetPlayerCombinedInfoResultPayload{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoResultPayload>(*this);
            }

        private:
            StdExtra::optional<UserAccountInfo> m_accountInfo;
            PointerArray<PlayFabServerCharacterInventory, CharacterInventory> m_characterInventories;
            PointerArray<PlayFabServerCharacterResult, CharacterResult> m_characterList;
            StdExtra::optional<PlayerProfileModel> m_playerProfile;
            PointerArray<PlayFabServerStatisticValue, StatisticValue> m_playerStatistics;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_titleData;
            AssociativeArray<PlayFabServerUserDataRecordDictionaryEntry, UserDataRecord> m_userData;
            PointerArray<PlayFabServerItemInstance, ItemInstance> m_userInventory;
            AssociativeArray<PlayFabServerUserDataRecordDictionaryEntry, UserDataRecord> m_userReadOnlyData;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_userVirtualCurrency;
            AssociativeArray<PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_userVirtualCurrencyRechargeTimes;
        };

        struct GetPlayerCombinedInfoResult : public PlayFabServerGetPlayerCombinedInfoResult, public BaseResult
        {
            GetPlayerCombinedInfoResult() : PlayFabServerGetPlayerCombinedInfoResult{}
            {
            }

            GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src) :
                PlayFabServerGetPlayerCombinedInfoResult{ src },
                m_infoResultPayload{ src.m_infoResultPayload },
                m_playFabId{ src.m_playFabId }
            {
                infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerCombinedInfoResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "InfoResultPayload", m_infoResultPayload, infoResultPayload);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoResult>(*this);
            }

        private:
            StdExtra::optional<GetPlayerCombinedInfoResultPayload> m_infoResultPayload;
            String m_playFabId;
        };

        struct GetPlayerProfileRequest : public PlayFabServerGetPlayerProfileRequest, public BaseRequest
        {
            GetPlayerProfileRequest() : PlayFabServerGetPlayerProfileRequest{}
            {
            }

            GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
                PlayFabServerGetPlayerProfileRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_profileConstraints{ src.m_profileConstraints }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
            }

            ~GetPlayerProfileRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerProfileRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
        };

        struct GetPlayerProfileResult : public PlayFabServerGetPlayerProfileResult, public BaseResult
        {
            GetPlayerProfileResult() : PlayFabServerGetPlayerProfileResult{}
            {
            }

            GetPlayerProfileResult(const GetPlayerProfileResult& src) :
                PlayFabServerGetPlayerProfileResult{ src },
                m_playerProfile{ src.m_playerProfile }
            {
                playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
            }

            ~GetPlayerProfileResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerProfileResult>(*this);
            }

        private:
            StdExtra::optional<PlayerProfileModel> m_playerProfile;
        };

        struct GetPlayerSegmentsResult : public PlayFabServerGetPlayerSegmentsResult, public BaseResult
        {
            GetPlayerSegmentsResult() : PlayFabServerGetPlayerSegmentsResult{}
            {
            }

            GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
                PlayFabServerGetPlayerSegmentsResult{ src },
                m_segments{ src.m_segments }
            {
                segments = m_segments.Empty() ? nullptr : m_segments.Data();
            }

            ~GetPlayerSegmentsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerSegmentsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerGetSegmentResult, GetSegmentResult> m_segments;
        };

        struct GetPlayersInSegmentRequest : public PlayFabServerGetPlayersInSegmentRequest, public BaseRequest
        {
            GetPlayersInSegmentRequest() : PlayFabServerGetPlayersInSegmentRequest{}
            {
            }

            GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src) :
                PlayFabServerGetPlayersInSegmentRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MaxBatchSize", m_maxBatchSize, maxBatchSize);
                JsonUtils:: ObjectGetMember(input, "SecondsToLive", m_secondsToLive, secondsToLive);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayersInSegmentRequest>(*this);
            }

        private:
            String m_continuationToken;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<uint32_t> m_maxBatchSize;
            StdExtra::optional<uint32_t> m_secondsToLive;
            String m_segmentId;
        };

        struct PlayerLinkedAccount : public PlayFabServerPlayerLinkedAccount, public BaseModel
        {
            PlayerLinkedAccount() : PlayFabServerPlayerLinkedAccount{}
            {
            }

            PlayerLinkedAccount(const PlayerLinkedAccount& src) :
                PlayFabServerPlayerLinkedAccount{ src },
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
                return JsonUtils::ToJson<PlayFabServerPlayerLinkedAccount>(*this);
            }

        private:
            String m_email;
            StdExtra::optional<PlayFabServerLoginIdentityProvider> m_platform;
            String m_platformUserId;
            String m_username;
        };

        struct PlayerLocation : public PlayFabServerPlayerLocation, public BaseModel
        {
            PlayerLocation() : PlayFabServerPlayerLocation{}
            {
            }

            PlayerLocation(const PlayerLocation& src) :
                PlayFabServerPlayerLocation{ src },
                m_city{ src.m_city },
                m_latitude{ src.m_latitude },
                m_longitude{ src.m_longitude }
            {
                city = m_city.empty() ? nullptr : m_city.data();
                latitude = m_latitude ? m_latitude.operator->() : nullptr;
                longitude = m_longitude ? m_longitude.operator->() : nullptr;
            }

            ~PlayerLocation() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "City", m_city, city);
                JsonUtils:: ObjectGetMember(input, "ContinentCode", continentCode);
                JsonUtils:: ObjectGetMember(input, "CountryCode", countryCode);
                JsonUtils:: ObjectGetMember(input, "Latitude", m_latitude, latitude);
                JsonUtils:: ObjectGetMember(input, "Longitude", m_longitude, longitude);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPlayerLocation>(*this);
            }

        private:
            String m_city;
            StdExtra::optional<double> m_latitude;
            StdExtra::optional<double> m_longitude;
        };

        struct PlayerStatistic : public PlayFabServerPlayerStatistic, public BaseModel
        {
            PlayerStatistic() : PlayFabServerPlayerStatistic{}
            {
            }

            PlayerStatistic(const PlayerStatistic& src) :
                PlayFabServerPlayerStatistic{ src },
                m_id{ src.m_id },
                m_name{ src.m_name }
            {
                id = m_id.empty() ? nullptr : m_id.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~PlayerStatistic() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "StatisticValue", statisticValue);
                JsonUtils:: ObjectGetMember(input, "StatisticVersion", statisticVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPlayerStatistic>(*this);
            }

        private:
            String m_id;
            String m_name;
        };

        struct PushNotificationRegistration : public PlayFabServerPushNotificationRegistration, public BaseModel
        {
            PushNotificationRegistration() : PlayFabServerPushNotificationRegistration{}
            {
            }

            PushNotificationRegistration(const PushNotificationRegistration& src) :
                PlayFabServerPushNotificationRegistration{ src },
                m_notificationEndpointARN{ src.m_notificationEndpointARN },
                m_platform{ src.m_platform }
            {
                notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
                platform = m_platform ? m_platform.operator->() : nullptr;
            }

            ~PushNotificationRegistration() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPushNotificationRegistration>(*this);
            }

        private:
            String m_notificationEndpointARN;
            StdExtra::optional<PlayFabServerPushNotificationPlatform> m_platform;
        };

        struct PlayerProfile : public PlayFabServerPlayerProfile, public BaseModel
        {
            PlayerProfile() : PlayFabServerPlayerProfile{}
            {
            }

            PlayerProfile(const PlayerProfile& src) :
                PlayFabServerPlayerProfile{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerPlayerProfile>(*this);
            }

        private:
            PointerArray<PlayFabServerAdCampaignAttribution, AdCampaignAttribution> m_adCampaignAttributions;
            String m_avatarUrl;
            StdExtra::optional<time_t> m_bannedUntil;
            PointerArray<PlayFabServerContactEmailInfo, ContactEmailInfo> m_contactEmailAddresses;
            StdExtra::optional<time_t> m_created;
            String m_displayName;
            StdExtra::optional<time_t> m_lastLogin;
            PointerArray<PlayFabServerPlayerLinkedAccount, PlayerLinkedAccount> m_linkedAccounts;
            AssociativeArray<PlayFabServerPlayerLocationDictionaryEntry, PlayerLocation> m_locations;
            StdExtra::optional<PlayFabServerLoginIdentityProvider> m_origination;
            PointerArray<const char, String> m_playerExperimentVariants;
            String m_playerId;
            PointerArray<PlayFabServerPlayerStatistic, PlayerStatistic> m_playerStatistics;
            String m_publisherId;
            PointerArray<PlayFabServerPushNotificationRegistration, PushNotificationRegistration> m_pushNotificationRegistrations;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_statistics;
            PointerArray<const char, String> m_tags;
            String m_titleId;
            StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_valuesToDate;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrencyBalances;
        };

        struct GetPlayersInSegmentResult : public PlayFabServerGetPlayersInSegmentResult, public BaseResult
        {
            GetPlayersInSegmentResult() : PlayFabServerGetPlayersInSegmentResult{}
            {
            }

            GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src) :
                PlayFabServerGetPlayersInSegmentResult{ src },
                m_continuationToken{ src.m_continuationToken },
                m_playerProfiles{ src.m_playerProfiles }
            {
                continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
                playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
            }

            ~GetPlayersInSegmentResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
                JsonUtils:: ObjectGetMember(input, "PlayerProfiles", m_playerProfiles, playerProfiles, playerProfilesCount);
                JsonUtils:: ObjectGetMember(input, "ProfilesInSegment", profilesInSegment);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayersInSegmentResult>(*this);
            }

        private:
            String m_continuationToken;
            PointerArray<PlayFabServerPlayerProfile, PlayerProfile> m_playerProfiles;
        };

        struct GetPlayersSegmentsRequest : public PlayFabServerGetPlayersSegmentsRequest, public BaseRequest
        {
            GetPlayersSegmentsRequest() : PlayFabServerGetPlayersSegmentsRequest{}
            {
            }

            GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src) :
                PlayFabServerGetPlayersSegmentsRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayersSegmentsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayersSegmentsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct StatisticNameVersion : public PlayFabServerStatisticNameVersion, public BaseModel
        {
            StatisticNameVersion() : PlayFabServerStatisticNameVersion{}
            {
            }

            StatisticNameVersion(const StatisticNameVersion& src) :
                PlayFabServerStatisticNameVersion{ src },
                m_statisticName{ src.m_statisticName }
            {
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~StatisticNameVersion() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerStatisticNameVersion>(*this);
            }

        private:
            String m_statisticName;
        };

        struct GetPlayerStatisticsRequest : public PlayFabServerGetPlayerStatisticsRequest, public BaseRequest
        {
            GetPlayerStatisticsRequest() : PlayFabServerGetPlayerStatisticsRequest{}
            {
            }

            GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src) :
                PlayFabServerGetPlayerStatisticsRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_statisticNames{ src.m_statisticNames },
                m_statisticNameVersions{ src.m_statisticNameVersions }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
                statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
            }

            ~GetPlayerStatisticsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "StatisticNames", m_statisticNames, statisticNames, statisticNamesCount);
                JsonUtils:: ObjectGetMember(input, "StatisticNameVersions", m_statisticNameVersions, statisticNameVersions, statisticNameVersionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            PointerArray<const char, String> m_statisticNames;
            PointerArray<PlayFabServerStatisticNameVersion, StatisticNameVersion> m_statisticNameVersions;
        };

        struct GetPlayerStatisticsResult : public PlayFabServerGetPlayerStatisticsResult, public BaseResult
        {
            GetPlayerStatisticsResult() : PlayFabServerGetPlayerStatisticsResult{}
            {
            }

            GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src) :
                PlayFabServerGetPlayerStatisticsResult{ src },
                m_playFabId{ src.m_playFabId },
                m_statistics{ src.m_statistics }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
            }

            ~GetPlayerStatisticsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticsResult>(*this);
            }

        private:
            String m_playFabId;
            PointerArray<PlayFabServerStatisticValue, StatisticValue> m_statistics;
        };

        struct GetPlayerStatisticVersionsRequest : public PlayFabServerGetPlayerStatisticVersionsRequest, public BaseRequest
        {
            GetPlayerStatisticVersionsRequest() : PlayFabServerGetPlayerStatisticVersionsRequest{}
            {
            }

            GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
                PlayFabServerGetPlayerStatisticVersionsRequest{ src },
                m_customTags{ src.m_customTags },
                m_statisticName{ src.m_statisticName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
            }

            ~GetPlayerStatisticVersionsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticVersionsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_statisticName;
        };

        struct PlayerStatisticVersion : public PlayFabServerPlayerStatisticVersion, public BaseModel
        {
            PlayerStatisticVersion() : PlayFabServerPlayerStatisticVersion{}
            {
            }

            PlayerStatisticVersion(const PlayerStatisticVersion& src) :
                PlayFabServerPlayerStatisticVersion{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ActivationTime", activationTime, true);
                JsonUtils:: ObjectGetMember(input, "DeactivationTime", m_deactivationTime, deactivationTime, true);
                JsonUtils:: ObjectGetMember(input, "ScheduledActivationTime", m_scheduledActivationTime, scheduledActivationTime, true);
                JsonUtils:: ObjectGetMember(input, "ScheduledDeactivationTime", m_scheduledDeactivationTime, scheduledDeactivationTime, true);
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPlayerStatisticVersion>(*this);
            }

        private:
            StdExtra::optional<time_t> m_deactivationTime;
            StdExtra::optional<time_t> m_scheduledActivationTime;
            StdExtra::optional<time_t> m_scheduledDeactivationTime;
            String m_statisticName;
        };

        struct GetPlayerStatisticVersionsResult : public PlayFabServerGetPlayerStatisticVersionsResult, public BaseResult
        {
            GetPlayerStatisticVersionsResult() : PlayFabServerGetPlayerStatisticVersionsResult{}
            {
            }

            GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
                PlayFabServerGetPlayerStatisticVersionsResult{ src },
                m_statisticVersions{ src.m_statisticVersions }
            {
                statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
            }

            ~GetPlayerStatisticVersionsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "StatisticVersions", m_statisticVersions, statisticVersions, statisticVersionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticVersionsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
        };

        struct GetPlayerTagsRequest : public PlayFabServerGetPlayerTagsRequest, public BaseRequest
        {
            GetPlayerTagsRequest() : PlayFabServerGetPlayerTagsRequest{}
            {
            }

            GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
                PlayFabServerGetPlayerTagsRequest{ src },
                m_customTags{ src.m_customTags },
                m_playfabNamespace{ src.m_playfabNamespace },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetPlayerTagsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Namespace", m_playfabNamespace, playfabNamespace);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerTagsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playfabNamespace;
            String m_playFabId;
        };

        struct GetPlayerTagsResult : public PlayFabServerGetPlayerTagsResult, public BaseResult
        {
            GetPlayerTagsResult() : PlayFabServerGetPlayerTagsResult{}
            {
            }

            GetPlayerTagsResult(const GetPlayerTagsResult& src) :
                PlayFabServerGetPlayerTagsResult{ src },
                m_playFabId{ src.m_playFabId },
                m_tags{ src.m_tags }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~GetPlayerTagsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayerTagsResult>(*this);
            }

        private:
            String m_playFabId;
            PointerArray<const char, String> m_tags;
        };

        struct GetPlayFabIDsFromFacebookIDsRequest : public PlayFabServerGetPlayFabIDsFromFacebookIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromFacebookIDsRequest() : PlayFabServerGetPlayFabIDsFromFacebookIDsRequest{}
            {
            }

            GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
                PlayFabServerGetPlayFabIDsFromFacebookIDsRequest{ src },
                m_facebookIDs{ src.m_facebookIDs }
            {
                facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
            }

            ~GetPlayFabIDsFromFacebookIDsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FacebookIDs", m_facebookIDs, facebookIDs, facebookIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_facebookIDs;
        };

        struct GetPlayFabIDsFromFacebookIDsResult : public PlayFabServerGetPlayFabIDsFromFacebookIDsResult, public BaseResult
        {
            GetPlayFabIDsFromFacebookIDsResult() : PlayFabServerGetPlayFabIDsFromFacebookIDsResult{}
            {
            }

            GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
                PlayFabServerGetPlayFabIDsFromFacebookIDsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromFacebookIDsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerFacebookPlayFabIdPair, FacebookPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest, public BaseRequest
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsRequest() : PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest{}
            {
            }

            GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src) :
                PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
                m_facebookInstantGamesIds{ src.m_facebookInstantGamesIds }
            {
                facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
            }

            ~GetPlayFabIDsFromFacebookInstantGamesIdsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FacebookInstantGamesIds", m_facebookInstantGamesIds, facebookInstantGamesIds, facebookInstantGamesIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_facebookInstantGamesIds;
        };

        struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult, public BaseResult
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsResult() : PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult{}
            {
            }

            GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src) :
                PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromFacebookInstantGamesIdsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerFacebookInstantGamesPlayFabIdPair, FacebookInstantGamesPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromGenericIDsRequest : public PlayFabServerGetPlayFabIDsFromGenericIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromGenericIDsRequest() : PlayFabServerGetPlayFabIDsFromGenericIDsRequest{}
            {
            }

            GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src) :
                PlayFabServerGetPlayFabIDsFromGenericIDsRequest{ src },
                m_genericIDs{ src.m_genericIDs }
            {
                genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
            }

            ~GetPlayFabIDsFromGenericIDsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GenericIDs", m_genericIDs, genericIDs, genericIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromGenericIDsRequest>(*this);
            }

        private:
            PointerArray<PlayFabServerGenericServiceId, GenericServiceId> m_genericIDs;
        };

        struct GetPlayFabIDsFromGenericIDsResult : public PlayFabServerGetPlayFabIDsFromGenericIDsResult, public BaseResult
        {
            GetPlayFabIDsFromGenericIDsResult() : PlayFabServerGetPlayFabIDsFromGenericIDsResult{}
            {
            }

            GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src) :
                PlayFabServerGetPlayFabIDsFromGenericIDsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromGenericIDsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromGenericIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerGenericPlayFabIdPair, GenericPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, public BaseRequest
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() : PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{}
            {
            }

            GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src) :
                PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
                m_nintendoSwitchDeviceIds{ src.m_nintendoSwitchDeviceIds }
            {
                nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
            }

            ~GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceIds", m_nintendoSwitchDeviceIds, nintendoSwitchDeviceIds, nintendoSwitchDeviceIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_nintendoSwitchDeviceIds;
        };

        struct NintendoSwitchPlayFabIdPair : public PlayFabServerNintendoSwitchPlayFabIdPair, public BaseModel
        {
            NintendoSwitchPlayFabIdPair() : PlayFabServerNintendoSwitchPlayFabIdPair{}
            {
            }

            NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src) :
                PlayFabServerNintendoSwitchPlayFabIdPair{ src },
                m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
                m_playFabId{ src.m_playFabId }
            {
                nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~NintendoSwitchPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerNintendoSwitchPlayFabIdPair>(*this);
            }

        private:
            String m_nintendoSwitchDeviceId;
            String m_playFabId;
        };

        struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, public BaseResult
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() : PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{}
            {
            }

            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src) :
                PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerNintendoSwitchPlayFabIdPair, NintendoSwitchPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromPSNAccountIDsRequest : public PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromPSNAccountIDsRequest() : PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest{}
            {
            }

            GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src) :
                PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest{ src },
                m_issuerId{ src.m_issuerId },
                m_pSNAccountIDs{ src.m_pSNAccountIDs }
            {
                issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
                pSNAccountIDs = m_pSNAccountIDs.Empty() ? nullptr : m_pSNAccountIDs.Data();
            }

            ~GetPlayFabIDsFromPSNAccountIDsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
                JsonUtils:: ObjectGetMember(input, "PSNAccountIDs", m_pSNAccountIDs, pSNAccountIDs, pSNAccountIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest>(*this);
            }

        private:
            StdExtra::optional<int32_t> m_issuerId;
            PointerArray<const char, String> m_pSNAccountIDs;
        };

        struct PSNAccountPlayFabIdPair : public PlayFabServerPSNAccountPlayFabIdPair, public BaseModel
        {
            PSNAccountPlayFabIdPair() : PlayFabServerPSNAccountPlayFabIdPair{}
            {
            }

            PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src) :
                PlayFabServerPSNAccountPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_pSNAccountId{ src.m_pSNAccountId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                pSNAccountId = m_pSNAccountId.empty() ? nullptr : m_pSNAccountId.data();
            }

            ~PSNAccountPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "PSNAccountId", m_pSNAccountId, pSNAccountId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPSNAccountPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_pSNAccountId;
        };

        struct GetPlayFabIDsFromPSNAccountIDsResult : public PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult, public BaseResult
        {
            GetPlayFabIDsFromPSNAccountIDsResult() : PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult{}
            {
            }

            GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src) :
                PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromPSNAccountIDsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerPSNAccountPlayFabIdPair, PSNAccountPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromSteamIDsRequest : public PlayFabServerGetPlayFabIDsFromSteamIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromSteamIDsRequest() : PlayFabServerGetPlayFabIDsFromSteamIDsRequest{}
            {
            }

            GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src) :
                PlayFabServerGetPlayFabIDsFromSteamIDsRequest{ src },
                m_steamStringIDs{ src.m_steamStringIDs }
            {
                steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
            }

            ~GetPlayFabIDsFromSteamIDsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SteamStringIDs", m_steamStringIDs, steamStringIDs, steamStringIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromSteamIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_steamStringIDs;
        };

        struct SteamPlayFabIdPair : public PlayFabServerSteamPlayFabIdPair, public BaseModel
        {
            SteamPlayFabIdPair() : PlayFabServerSteamPlayFabIdPair{}
            {
            }

            SteamPlayFabIdPair(const SteamPlayFabIdPair& src) :
                PlayFabServerSteamPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_steamStringId{ src.m_steamStringId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
            }

            ~SteamPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "SteamStringId", m_steamStringId, steamStringId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSteamPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_steamStringId;
        };

        struct GetPlayFabIDsFromSteamIDsResult : public PlayFabServerGetPlayFabIDsFromSteamIDsResult, public BaseResult
        {
            GetPlayFabIDsFromSteamIDsResult() : PlayFabServerGetPlayFabIDsFromSteamIDsResult{}
            {
            }

            GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src) :
                PlayFabServerGetPlayFabIDsFromSteamIDsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromSteamIDsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromSteamIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerSteamPlayFabIdPair, SteamPlayFabIdPair> m_data;
        };

        struct GetPlayFabIDsFromXboxLiveIDsRequest : public PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest, public BaseRequest
        {
            GetPlayFabIDsFromXboxLiveIDsRequest() : PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest{}
            {
            }

            GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src) :
                PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest{ src },
                m_sandbox{ src.m_sandbox },
                m_xboxLiveAccountIDs{ src.m_xboxLiveAccountIDs }
            {
                sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
                xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
            }

            ~GetPlayFabIDsFromXboxLiveIDsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
                JsonUtils:: ObjectGetMember(input, "XboxLiveAccountIDs", m_xboxLiveAccountIDs, xboxLiveAccountIDs, xboxLiveAccountIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest>(*this);
            }

        private:
            String m_sandbox;
            PointerArray<const char, String> m_xboxLiveAccountIDs;
        };

        struct XboxLiveAccountPlayFabIdPair : public PlayFabServerXboxLiveAccountPlayFabIdPair, public BaseModel
        {
            XboxLiveAccountPlayFabIdPair() : PlayFabServerXboxLiveAccountPlayFabIdPair{}
            {
            }

            XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src) :
                PlayFabServerXboxLiveAccountPlayFabIdPair{ src },
                m_playFabId{ src.m_playFabId },
                m_xboxLiveAccountId{ src.m_xboxLiveAccountId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
            }

            ~XboxLiveAccountPlayFabIdPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "XboxLiveAccountId", m_xboxLiveAccountId, xboxLiveAccountId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerXboxLiveAccountPlayFabIdPair>(*this);
            }

        private:
            String m_playFabId;
            String m_xboxLiveAccountId;
        };

        struct GetPlayFabIDsFromXboxLiveIDsResult : public PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult, public BaseResult
        {
            GetPlayFabIDsFromXboxLiveIDsResult() : PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult{}
            {
            }

            GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src) :
                PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPlayFabIDsFromXboxLiveIDsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerXboxLiveAccountPlayFabIdPair, XboxLiveAccountPlayFabIdPair> m_data;
        };

        struct GetPublisherDataRequest : public PlayFabServerGetPublisherDataRequest, public BaseRequest
        {
            GetPublisherDataRequest() : PlayFabServerGetPublisherDataRequest{}
            {
            }

            GetPublisherDataRequest(const GetPublisherDataRequest& src) :
                PlayFabServerGetPublisherDataRequest{ src },
                m_keys{ src.m_keys }
            {
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
            }

            ~GetPublisherDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPublisherDataRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_keys;
        };

        struct GetPublisherDataResult : public PlayFabServerGetPublisherDataResult, public BaseResult
        {
            GetPublisherDataResult() : PlayFabServerGetPublisherDataResult{}
            {
            }

            GetPublisherDataResult(const GetPublisherDataResult& src) :
                PlayFabServerGetPublisherDataResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetPublisherDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetPublisherDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct GetRandomResultTablesRequest : public PlayFabServerGetRandomResultTablesRequest, public BaseRequest
        {
            GetRandomResultTablesRequest() : PlayFabServerGetRandomResultTablesRequest{}
            {
            }

            GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
                PlayFabServerGetRandomResultTablesRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_tableIDs{ src.m_tableIDs }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                tableIDs = m_tableIDs.Empty() ? nullptr : m_tableIDs.Data();
            }

            ~GetRandomResultTablesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "TableIDs", m_tableIDs, tableIDs, tableIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetRandomResultTablesRequest>(*this);
            }

        private:
            String m_catalogVersion;
            PointerArray<const char, String> m_tableIDs;
        };

        struct ResultTableNode : public PlayFabServerResultTableNode, public BaseModel
        {
            ResultTableNode() : PlayFabServerResultTableNode{}
            {
            }

            ResultTableNode(const ResultTableNode& src) :
                PlayFabServerResultTableNode{ src },
                m_resultItem{ src.m_resultItem }
            {
                resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
            }

            ~ResultTableNode() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ResultItem", m_resultItem, resultItem);
                JsonUtils:: ObjectGetMember(input, "ResultItemType", resultItemType);
                JsonUtils:: ObjectGetMember(input, "Weight", weight);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerResultTableNode>(*this);
            }

        private:
            String m_resultItem;
        };

        struct RandomResultTableListing : public PlayFabServerRandomResultTableListing, public BaseModel
        {
            RandomResultTableListing() : PlayFabServerRandomResultTableListing{}
            {
            }

            RandomResultTableListing(const RandomResultTableListing& src) :
                PlayFabServerRandomResultTableListing{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_nodes{ src.m_nodes },
                m_tableId{ src.m_tableId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
                tableId = m_tableId.empty() ? nullptr : m_tableId.data();
            }

            ~RandomResultTableListing() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
                JsonUtils:: ObjectGetMember(input, "TableId", m_tableId, tableId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRandomResultTableListing>(*this);
            }

        private:
            String m_catalogVersion;
            PointerArray<PlayFabServerResultTableNode, ResultTableNode> m_nodes;
            String m_tableId;
        };

        struct GetRandomResultTablesResult : public PlayFabServerGetRandomResultTablesResult, public BaseResult
        {
            GetRandomResultTablesResult() : PlayFabServerGetRandomResultTablesResult{}
            {
            }

            GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
                PlayFabServerGetRandomResultTablesResult{ src },
                m_tables{ src.m_tables }
            {
                tables = m_tables.Empty() ? nullptr : m_tables.Data();
            }

            ~GetRandomResultTablesResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetRandomResultTablesResult>(*this);
            }

        private:
            AssociativeArray<PlayFabServerRandomResultTableListingDictionaryEntry, RandomResultTableListing> m_tables;
        };

        struct GetServerCustomIDsFromPlayFabIDsRequest : public PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest, public BaseRequest
        {
            GetServerCustomIDsFromPlayFabIDsRequest() : PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest{}
            {
            }

            GetServerCustomIDsFromPlayFabIDsRequest(const GetServerCustomIDsFromPlayFabIDsRequest& src) :
                PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest{ src },
                m_playFabIDs{ src.m_playFabIDs }
            {
                playFabIDs = m_playFabIDs.Empty() ? nullptr : m_playFabIDs.Data();
            }

            ~GetServerCustomIDsFromPlayFabIDsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabIDs", m_playFabIDs, playFabIDs, playFabIDsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_playFabIDs;
        };

        struct ServerCustomIDPlayFabIDPair : public PlayFabServerServerCustomIDPlayFabIDPair, public BaseModel
        {
            ServerCustomIDPlayFabIDPair() : PlayFabServerServerCustomIDPlayFabIDPair{}
            {
            }

            ServerCustomIDPlayFabIDPair(const ServerCustomIDPlayFabIDPair& src) :
                PlayFabServerServerCustomIDPlayFabIDPair{ src },
                m_playFabId{ src.m_playFabId },
                m_serverCustomId{ src.m_serverCustomId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
            }

            ~ServerCustomIDPlayFabIDPair() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerServerCustomIDPlayFabIDPair>(*this);
            }

        private:
            String m_playFabId;
            String m_serverCustomId;
        };

        struct GetServerCustomIDsFromPlayFabIDsResult : public PlayFabServerGetServerCustomIDsFromPlayFabIDsResult, public BaseResult
        {
            GetServerCustomIDsFromPlayFabIDsResult() : PlayFabServerGetServerCustomIDsFromPlayFabIDsResult{}
            {
            }

            GetServerCustomIDsFromPlayFabIDsResult(const GetServerCustomIDsFromPlayFabIDsResult& src) :
                PlayFabServerGetServerCustomIDsFromPlayFabIDsResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetServerCustomIDsFromPlayFabIDsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetServerCustomIDsFromPlayFabIDsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerServerCustomIDPlayFabIDPair, ServerCustomIDPlayFabIDPair> m_data;
        };

        struct GetSharedGroupDataRequest : public PlayFabServerGetSharedGroupDataRequest, public BaseRequest
        {
            GetSharedGroupDataRequest() : PlayFabServerGetSharedGroupDataRequest{}
            {
            }

            GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
                PlayFabServerGetSharedGroupDataRequest{ src },
                m_getMembers{ src.m_getMembers },
                m_keys{ src.m_keys },
                m_sharedGroupId{ src.m_sharedGroupId }
            {
                getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~GetSharedGroupDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GetMembers", m_getMembers, getMembers);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetSharedGroupDataRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_getMembers;
            PointerArray<const char, String> m_keys;
            String m_sharedGroupId;
        };

        struct SharedGroupDataRecord : public PlayFabServerSharedGroupDataRecord, public BaseModel
        {
            SharedGroupDataRecord() : PlayFabServerSharedGroupDataRecord{}
            {
            }

            SharedGroupDataRecord(const SharedGroupDataRecord& src) :
                PlayFabServerSharedGroupDataRecord{ src },
                m_lastUpdatedBy{ src.m_lastUpdatedBy },
                m_permission{ src.m_permission },
                m_value{ src.m_value }
            {
                lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
                permission = m_permission ? m_permission.operator->() : nullptr;
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~SharedGroupDataRecord() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LastUpdated", lastUpdated, true);
                JsonUtils:: ObjectGetMember(input, "LastUpdatedBy", m_lastUpdatedBy, lastUpdatedBy);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSharedGroupDataRecord>(*this);
            }

        private:
            String m_lastUpdatedBy;
            StdExtra::optional<PlayFabServerUserDataPermission> m_permission;
            String m_value;
        };

        struct GetSharedGroupDataResult : public PlayFabServerGetSharedGroupDataResult, public BaseResult
        {
            GetSharedGroupDataResult() : PlayFabServerGetSharedGroupDataResult{}
            {
            }

            GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
                PlayFabServerGetSharedGroupDataResult{ src },
                m_data{ src.m_data },
                m_members{ src.m_members }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
                members = m_members.Empty() ? nullptr : m_members.Data();
            }

            ~GetSharedGroupDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetSharedGroupDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabServerSharedGroupDataRecordDictionaryEntry, SharedGroupDataRecord> m_data;
            PointerArray<const char, String> m_members;
        };

        struct StoreMarketingModel : public PlayFabServerStoreMarketingModel, public BaseModel
        {
            StoreMarketingModel() : PlayFabServerStoreMarketingModel{}
            {
            }

            StoreMarketingModel(const StoreMarketingModel& src) :
                PlayFabServerStoreMarketingModel{ src },
                m_description{ src.m_description },
                m_displayName{ src.m_displayName },
                m_metadata{ src.m_metadata }
            {
                description = m_description.empty() ? nullptr : m_description.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                metadata.stringValue = m_metadata.StringValue();
            }

            ~StoreMarketingModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerStoreMarketingModel>(*this);
            }

        private:
            String m_description;
            String m_displayName;
            JsonObject m_metadata;
        };

        struct StoreItem : public PlayFabServerStoreItem, public BaseModel
        {
            StoreItem() : PlayFabServerStoreItem{}
            {
            }

            StoreItem(const StoreItem& src) :
                PlayFabServerStoreItem{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomData", m_customData, customData);
                JsonUtils:: ObjectGetMember(input, "DisplayPosition", m_displayPosition, displayPosition);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerStoreItem>(*this);
            }

        private:
            JsonObject m_customData;
            StdExtra::optional<uint32_t> m_displayPosition;
            String m_itemId;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
        };

        struct GetStoreItemsResult : public PlayFabServerGetStoreItemsResult, public BaseResult
        {
            GetStoreItemsResult() : PlayFabServerGetStoreItemsResult{}
            {
            }

            GetStoreItemsResult(const GetStoreItemsResult& src) :
                PlayFabServerGetStoreItemsResult{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
                JsonUtils:: ObjectGetMember(input, "Source", m_source, source);
                JsonUtils:: ObjectGetMember(input, "Store", m_store, store, storeCount);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetStoreItemsResult>(*this);
            }

        private:
            String m_catalogVersion;
            StdExtra::optional<StoreMarketingModel> m_marketingData;
            StdExtra::optional<PlayFabServerSourceType> m_source;
            PointerArray<PlayFabServerStoreItem, StoreItem> m_store;
            String m_storeId;
        };

        struct GetStoreItemsServerRequest : public PlayFabServerGetStoreItemsServerRequest, public BaseRequest
        {
            GetStoreItemsServerRequest() : PlayFabServerGetStoreItemsServerRequest{}
            {
            }

            GetStoreItemsServerRequest(const GetStoreItemsServerRequest& src) :
                PlayFabServerGetStoreItemsServerRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_storeId{ src.m_storeId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                storeId = m_storeId.empty() ? nullptr : m_storeId.data();
            }

            ~GetStoreItemsServerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "StoreId", m_storeId, storeId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetStoreItemsServerRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_storeId;
        };

        struct GetTimeResult : public PlayFabServerGetTimeResult, public BaseResult
        {
            GetTimeResult() : PlayFabServerGetTimeResult{}
            {
            }

            GetTimeResult(const GetTimeResult&) = default;

            ~GetTimeResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Time", time, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetTimeResult>(*this);
            }

        private:
        };

        struct GetTitleDataRequest : public PlayFabServerGetTitleDataRequest, public BaseRequest
        {
            GetTitleDataRequest() : PlayFabServerGetTitleDataRequest{}
            {
            }

            GetTitleDataRequest(const GetTitleDataRequest& src) :
                PlayFabServerGetTitleDataRequest{ src },
                m_keys{ src.m_keys },
                m_overrideLabel{ src.m_overrideLabel }
            {
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
            }

            ~GetTitleDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetTitleDataRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_keys;
            String m_overrideLabel;
        };

        struct GetTitleDataResult : public PlayFabServerGetTitleDataResult, public BaseResult
        {
            GetTitleDataResult() : PlayFabServerGetTitleDataResult{}
            {
            }

            GetTitleDataResult(const GetTitleDataResult& src) :
                PlayFabServerGetTitleDataResult{ src },
                m_data{ src.m_data }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
            }

            ~GetTitleDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetTitleDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
        };

        struct GetTitleNewsRequest : public PlayFabServerGetTitleNewsRequest, public BaseRequest
        {
            GetTitleNewsRequest() : PlayFabServerGetTitleNewsRequest{}
            {
            }

            GetTitleNewsRequest(const GetTitleNewsRequest& src) :
                PlayFabServerGetTitleNewsRequest{ src },
                m_count{ src.m_count }
            {
                count = m_count ? m_count.operator->() : nullptr;
            }

            ~GetTitleNewsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Count", m_count, count);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetTitleNewsRequest>(*this);
            }

        private:
            StdExtra::optional<int32_t> m_count;
        };

        struct TitleNewsItem : public PlayFabServerTitleNewsItem, public BaseModel
        {
            TitleNewsItem() : PlayFabServerTitleNewsItem{}
            {
            }

            TitleNewsItem(const TitleNewsItem& src) :
                PlayFabServerTitleNewsItem{ src },
                m_body{ src.m_body },
                m_newsId{ src.m_newsId },
                m_title{ src.m_title }
            {
                body = m_body.empty() ? nullptr : m_body.data();
                newsId = m_newsId.empty() ? nullptr : m_newsId.data();
                title = m_title.empty() ? nullptr : m_title.data();
            }

            ~TitleNewsItem() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "NewsId", m_newsId, newsId);
                JsonUtils:: ObjectGetMember(input, "Timestamp", timestamp, true);
                JsonUtils:: ObjectGetMember(input, "Title", m_title, title);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerTitleNewsItem>(*this);
            }

        private:
            String m_body;
            String m_newsId;
            String m_title;
        };

        struct GetTitleNewsResult : public PlayFabServerGetTitleNewsResult, public BaseResult
        {
            GetTitleNewsResult() : PlayFabServerGetTitleNewsResult{}
            {
            }

            GetTitleNewsResult(const GetTitleNewsResult& src) :
                PlayFabServerGetTitleNewsResult{ src },
                m_news{ src.m_news }
            {
                news = m_news.Empty() ? nullptr : m_news.Data();
            }

            ~GetTitleNewsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "News", m_news, news, newsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetTitleNewsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerTitleNewsItem, TitleNewsItem> m_news;
        };

        struct GetUserAccountInfoRequest : public PlayFabServerGetUserAccountInfoRequest, public BaseRequest
        {
            GetUserAccountInfoRequest() : PlayFabServerGetUserAccountInfoRequest{}
            {
            }

            GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src) :
                PlayFabServerGetUserAccountInfoRequest{ src },
                m_playFabId{ src.m_playFabId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserAccountInfoRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserAccountInfoRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct GetUserAccountInfoResult : public PlayFabServerGetUserAccountInfoResult, public BaseResult
        {
            GetUserAccountInfoResult() : PlayFabServerGetUserAccountInfoResult{}
            {
            }

            GetUserAccountInfoResult(const GetUserAccountInfoResult& src) :
                PlayFabServerGetUserAccountInfoResult{ src },
                m_userInfo{ src.m_userInfo }
            {
                userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
            }

            ~GetUserAccountInfoResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserAccountInfoResult>(*this);
            }

        private:
            StdExtra::optional<UserAccountInfo> m_userInfo;
        };

        struct GetUserBansRequest : public PlayFabServerGetUserBansRequest, public BaseRequest
        {
            GetUserBansRequest() : PlayFabServerGetUserBansRequest{}
            {
            }

            GetUserBansRequest(const GetUserBansRequest& src) :
                PlayFabServerGetUserBansRequest{ src },
                m_playFabId{ src.m_playFabId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserBansRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserBansRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct GetUserBansResult : public PlayFabServerGetUserBansResult, public BaseResult
        {
            GetUserBansResult() : PlayFabServerGetUserBansResult{}
            {
            }

            GetUserBansResult(const GetUserBansResult& src) :
                PlayFabServerGetUserBansResult{ src },
                m_banData{ src.m_banData }
            {
                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~GetUserBansResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserBansResult>(*this);
            }

        private:
            PointerArray<PlayFabServerBanInfo, BanInfo> m_banData;
        };

        struct GetUserDataRequest : public PlayFabServerGetUserDataRequest, public BaseRequest
        {
            GetUserDataRequest() : PlayFabServerGetUserDataRequest{}
            {
            }

            GetUserDataRequest(const GetUserDataRequest& src) :
                PlayFabServerGetUserDataRequest{ src },
                m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
                m_keys{ src.m_keys },
                m_playFabId{ src.m_playFabId }
            {
                ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
                keys = m_keys.Empty() ? nullptr : m_keys.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
                JsonUtils:: ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserDataRequest>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
            PointerArray<const char, String> m_keys;
            String m_playFabId;
        };

        struct GetUserDataResult : public PlayFabServerGetUserDataResult, public BaseResult
        {
            GetUserDataResult() : PlayFabServerGetUserDataResult{}
            {
            }

            GetUserDataResult(const GetUserDataResult& src) :
                PlayFabServerGetUserDataResult{ src },
                m_data{ src.m_data },
                m_playFabId{ src.m_playFabId }
            {
                data = m_data.Empty() ? nullptr : m_data.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserDataResult>(*this);
            }

        private:
            AssociativeArray<PlayFabServerUserDataRecordDictionaryEntry, UserDataRecord> m_data;
            String m_playFabId;
        };

        struct GetUserInventoryRequest : public PlayFabServerGetUserInventoryRequest, public BaseRequest
        {
            GetUserInventoryRequest() : PlayFabServerGetUserInventoryRequest{}
            {
            }

            GetUserInventoryRequest(const GetUserInventoryRequest& src) :
                PlayFabServerGetUserInventoryRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GetUserInventoryRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserInventoryRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct GetUserInventoryResult : public PlayFabServerGetUserInventoryResult, public BaseResult
        {
            GetUserInventoryResult() : PlayFabServerGetUserInventoryResult{}
            {
            }

            GetUserInventoryResult(const GetUserInventoryResult& src) :
                PlayFabServerGetUserInventoryResult{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGetUserInventoryResult>(*this);
            }

        private:
            PointerArray<PlayFabServerItemInstance, ItemInstance> m_inventory;
            String m_playFabId;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
            AssociativeArray<PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
        };

        struct GrantCharacterToUserRequest : public PlayFabServerGrantCharacterToUserRequest, public BaseRequest
        {
            GrantCharacterToUserRequest() : PlayFabServerGrantCharacterToUserRequest{}
            {
            }

            GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src) :
                PlayFabServerGrantCharacterToUserRequest{ src },
                m_characterName{ src.m_characterName },
                m_characterType{ src.m_characterType },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                characterName = m_characterName.empty() ? nullptr : m_characterName.data();
                characterType = m_characterType.empty() ? nullptr : m_characterType.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GrantCharacterToUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterName", m_characterName, characterName);
                JsonUtils:: ObjectGetMember(input, "CharacterType", m_characterType, characterType);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantCharacterToUserRequest>(*this);
            }

        private:
            String m_characterName;
            String m_characterType;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct GrantCharacterToUserResult : public PlayFabServerGrantCharacterToUserResult, public BaseResult
        {
            GrantCharacterToUserResult() : PlayFabServerGrantCharacterToUserResult{}
            {
            }

            GrantCharacterToUserResult(const GrantCharacterToUserResult& src) :
                PlayFabServerGrantCharacterToUserResult{ src },
                m_characterId{ src.m_characterId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
            }

            ~GrantCharacterToUserResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantCharacterToUserResult>(*this);
            }

        private:
            String m_characterId;
        };

        struct GrantedItemInstance : public PlayFabServerGrantedItemInstance, public BaseModel
        {
            GrantedItemInstance() : PlayFabServerGrantedItemInstance{}
            {
            }

            GrantedItemInstance(const GrantedItemInstance& src) :
                PlayFabServerGrantedItemInstance{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerGrantedItemInstance>(*this);
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

        struct GrantItemsToCharacterRequest : public PlayFabServerGrantItemsToCharacterRequest, public BaseRequest
        {
            GrantItemsToCharacterRequest() : PlayFabServerGrantItemsToCharacterRequest{}
            {
            }

            GrantItemsToCharacterRequest(const GrantItemsToCharacterRequest& src) :
                PlayFabServerGrantItemsToCharacterRequest{ src },
                m_annotation{ src.m_annotation },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_itemIds{ src.m_itemIds },
                m_playFabId{ src.m_playFabId }
            {
                annotation = m_annotation.empty() ? nullptr : m_annotation.data();
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GrantItemsToCharacterRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemIds", m_itemIds, itemIds, itemIdsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantItemsToCharacterRequest>(*this);
            }

        private:
            String m_annotation;
            String m_catalogVersion;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<const char, String> m_itemIds;
            String m_playFabId;
        };

        struct GrantItemsToCharacterResult : public PlayFabServerGrantItemsToCharacterResult, public BaseResult
        {
            GrantItemsToCharacterResult() : PlayFabServerGrantItemsToCharacterResult{}
            {
            }

            GrantItemsToCharacterResult(const GrantItemsToCharacterResult& src) :
                PlayFabServerGrantItemsToCharacterResult{ src },
                m_itemGrantResults{ src.m_itemGrantResults }
            {
                itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
            }

            ~GrantItemsToCharacterResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantItemsToCharacterResult>(*this);
            }

        private:
            PointerArray<PlayFabServerGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
        };

        struct GrantItemsToUserRequest : public PlayFabServerGrantItemsToUserRequest, public BaseRequest
        {
            GrantItemsToUserRequest() : PlayFabServerGrantItemsToUserRequest{}
            {
            }

            GrantItemsToUserRequest(const GrantItemsToUserRequest& src) :
                PlayFabServerGrantItemsToUserRequest{ src },
                m_annotation{ src.m_annotation },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_itemIds{ src.m_itemIds },
                m_playFabId{ src.m_playFabId }
            {
                annotation = m_annotation.empty() ? nullptr : m_annotation.data();
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~GrantItemsToUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemIds", m_itemIds, itemIds, itemIdsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantItemsToUserRequest>(*this);
            }

        private:
            String m_annotation;
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<const char, String> m_itemIds;
            String m_playFabId;
        };

        struct GrantItemsToUserResult : public PlayFabServerGrantItemsToUserResult, public BaseResult
        {
            GrantItemsToUserResult() : PlayFabServerGrantItemsToUserResult{}
            {
            }

            GrantItemsToUserResult(const GrantItemsToUserResult& src) :
                PlayFabServerGrantItemsToUserResult{ src },
                m_itemGrantResults{ src.m_itemGrantResults }
            {
                itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
            }

            ~GrantItemsToUserResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantItemsToUserResult>(*this);
            }

        private:
            PointerArray<PlayFabServerGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
        };

        struct ItemGrant : public PlayFabServerItemGrant, public BaseModel
        {
            ItemGrant() : PlayFabServerItemGrant{}
            {
            }

            ItemGrant(const ItemGrant& src) :
                PlayFabServerItemGrant{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Annotation", m_annotation, annotation);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "ItemId", m_itemId, itemId);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerItemGrant>(*this);
            }

        private:
            String m_annotation;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            String m_itemId;
            PointerArray<const char, String> m_keysToRemove;
            String m_playFabId;
        };

        struct GrantItemsToUsersRequest : public PlayFabServerGrantItemsToUsersRequest, public BaseRequest
        {
            GrantItemsToUsersRequest() : PlayFabServerGrantItemsToUsersRequest{}
            {
            }

            GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
                PlayFabServerGrantItemsToUsersRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_customTags{ src.m_customTags },
                m_itemGrants{ src.m_itemGrants }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
            }

            ~GrantItemsToUsersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemGrants", m_itemGrants, itemGrants, itemGrantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantItemsToUsersRequest>(*this);
            }

        private:
            String m_catalogVersion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabServerItemGrant, ItemGrant> m_itemGrants;
        };

        struct GrantItemsToUsersResult : public PlayFabServerGrantItemsToUsersResult, public BaseResult
        {
            GrantItemsToUsersResult() : PlayFabServerGrantItemsToUsersResult{}
            {
            }

            GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
                PlayFabServerGrantItemsToUsersResult{ src },
                m_itemGrantResults{ src.m_itemGrantResults }
            {
                itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
            }

            ~GrantItemsToUsersResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerGrantItemsToUsersResult>(*this);
            }

        private:
            PointerArray<PlayFabServerGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
        };

        struct LinkPSNAccountRequest : public PlayFabServerLinkPSNAccountRequest, public BaseRequest
        {
            LinkPSNAccountRequest() : PlayFabServerLinkPSNAccountRequest{}
            {
            }

            LinkPSNAccountRequest(const LinkPSNAccountRequest& src) :
                PlayFabServerLinkPSNAccountRequest{ src },
                m_authCode{ src.m_authCode },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_issuerId{ src.m_issuerId },
                m_playFabId{ src.m_playFabId },
                m_redirectUri{ src.m_redirectUri }
            {
                authCode = m_authCode.empty() ? nullptr : m_authCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
            }

            ~LinkPSNAccountRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AuthCode", m_authCode, authCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLinkPSNAccountRequest>(*this);
            }

        private:
            String m_authCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            StdExtra::optional<int32_t> m_issuerId;
            String m_playFabId;
            String m_redirectUri;
        };

        struct LinkServerCustomIdRequest : public PlayFabServerLinkServerCustomIdRequest, public BaseRequest
        {
            LinkServerCustomIdRequest() : PlayFabServerLinkServerCustomIdRequest{}
            {
            }

            LinkServerCustomIdRequest(const LinkServerCustomIdRequest& src) :
                PlayFabServerLinkServerCustomIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_playFabId{ src.m_playFabId },
                m_serverCustomId{ src.m_serverCustomId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
            }

            ~LinkServerCustomIdRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLinkServerCustomIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_playFabId;
            String m_serverCustomId;
        };

        struct LinkXboxAccountRequest : public PlayFabServerLinkXboxAccountRequest, public BaseRequest
        {
            LinkXboxAccountRequest() : PlayFabServerLinkXboxAccountRequest{}
            {
            }

            LinkXboxAccountRequest(const LinkXboxAccountRequest& src) :
                PlayFabServerLinkXboxAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceLink{ src.m_forceLink },
                m_playFabId{ src.m_playFabId },
                m_xboxToken{ src.m_xboxToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~LinkXboxAccountRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLinkXboxAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceLink;
            String m_playFabId;
            String m_xboxToken;
        };

        struct ListUsersCharactersRequest : public PlayFabServerListUsersCharactersRequest, public BaseRequest
        {
            ListUsersCharactersRequest() : PlayFabServerListUsersCharactersRequest{}
            {
            }

            ListUsersCharactersRequest(const ListUsersCharactersRequest& src) :
                PlayFabServerListUsersCharactersRequest{ src },
                m_playFabId{ src.m_playFabId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ListUsersCharactersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerListUsersCharactersRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct ListUsersCharactersResult : public PlayFabServerListUsersCharactersResult, public BaseResult
        {
            ListUsersCharactersResult() : PlayFabServerListUsersCharactersResult{}
            {
            }

            ListUsersCharactersResult(const ListUsersCharactersResult& src) :
                PlayFabServerListUsersCharactersResult{ src },
                m_characters{ src.m_characters }
            {
                characters = m_characters.Empty() ? nullptr : m_characters.Data();
            }

            ~ListUsersCharactersResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Characters", m_characters, characters, charactersCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerListUsersCharactersResult>(*this);
            }

        private:
            PointerArray<PlayFabServerCharacterResult, CharacterResult> m_characters;
        };

        struct LocalizedPushNotificationProperties : public PlayFabServerLocalizedPushNotificationProperties, public BaseModel
        {
            LocalizedPushNotificationProperties() : PlayFabServerLocalizedPushNotificationProperties{}
            {
            }

            LocalizedPushNotificationProperties(const LocalizedPushNotificationProperties& src) :
                PlayFabServerLocalizedPushNotificationProperties{ src },
                m_message{ src.m_message },
                m_subject{ src.m_subject }
            {
                message = m_message.empty() ? nullptr : m_message.data();
                subject = m_subject.empty() ? nullptr : m_subject.data();
            }

            ~LocalizedPushNotificationProperties() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "Subject", m_subject, subject);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLocalizedPushNotificationProperties>(*this);
            }

        private:
            String m_message;
            String m_subject;
        };

        struct LoginWithServerCustomIdRequest : public PlayFabServerLoginWithServerCustomIdRequest, public BaseRequest
        {
            LoginWithServerCustomIdRequest() : PlayFabServerLoginWithServerCustomIdRequest{}
            {
            }

            LoginWithServerCustomIdRequest(const LoginWithServerCustomIdRequest& src) :
                PlayFabServerLoginWithServerCustomIdRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_playerSecret{ src.m_playerSecret },
                m_serverCustomId{ src.m_serverCustomId }
            {
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
            }

            ~LoginWithServerCustomIdRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLoginWithServerCustomIdRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_playerSecret;
            String m_serverCustomId;
        };

        struct LoginWithSteamIdRequest : public PlayFabServerLoginWithSteamIdRequest, public BaseRequest
        {
            LoginWithSteamIdRequest() : PlayFabServerLoginWithSteamIdRequest{}
            {
            }

            LoginWithSteamIdRequest(const LoginWithSteamIdRequest& src) :
                PlayFabServerLoginWithSteamIdRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_steamId{ src.m_steamId }
            {
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                steamId = m_steamId.empty() ? nullptr : m_steamId.data();
            }

            ~LoginWithSteamIdRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "SteamId", m_steamId, steamId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLoginWithSteamIdRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_steamId;
        };

        struct LoginWithXboxIdRequest : public PlayFabServerLoginWithXboxIdRequest, public BaseRequest
        {
            LoginWithXboxIdRequest() : PlayFabServerLoginWithXboxIdRequest{}
            {
            }

            LoginWithXboxIdRequest(const LoginWithXboxIdRequest& src) :
                PlayFabServerLoginWithXboxIdRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_sandbox{ src.m_sandbox },
                m_xboxId{ src.m_xboxId }
            {
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
                xboxId = m_xboxId.empty() ? nullptr : m_xboxId.data();
            }

            ~LoginWithXboxIdRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
                JsonUtils:: ObjectGetMember(input, "XboxId", m_xboxId, xboxId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLoginWithXboxIdRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_sandbox;
            String m_xboxId;
        };

        struct LoginWithXboxRequest : public PlayFabServerLoginWithXboxRequest, public BaseRequest
        {
            LoginWithXboxRequest() : PlayFabServerLoginWithXboxRequest{}
            {
            }

            LoginWithXboxRequest(const LoginWithXboxRequest& src) :
                PlayFabServerLoginWithXboxRequest{ src },
                m_createAccount{ src.m_createAccount },
                m_customTags{ src.m_customTags },
                m_infoRequestParameters{ src.m_infoRequestParameters },
                m_xboxToken{ src.m_xboxToken }
            {
                createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
                xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
            }

            ~LoginWithXboxRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
                JsonUtils:: ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerLoginWithXboxRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_createAccount;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
            String m_xboxToken;
        };

        struct ModifyCharacterVirtualCurrencyResult : public PlayFabServerModifyCharacterVirtualCurrencyResult, public BaseResult
        {
            ModifyCharacterVirtualCurrencyResult() : PlayFabServerModifyCharacterVirtualCurrencyResult{}
            {
            }

            ModifyCharacterVirtualCurrencyResult(const ModifyCharacterVirtualCurrencyResult& src) :
                PlayFabServerModifyCharacterVirtualCurrencyResult{ src },
                m_virtualCurrency{ src.m_virtualCurrency }
            {
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~ModifyCharacterVirtualCurrencyResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Balance", balance);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerModifyCharacterVirtualCurrencyResult>(*this);
            }

        private:
            String m_virtualCurrency;
        };

        struct ModifyItemUsesRequest : public PlayFabServerModifyItemUsesRequest, public BaseRequest
        {
            ModifyItemUsesRequest() : PlayFabServerModifyItemUsesRequest{}
            {
            }

            ModifyItemUsesRequest(const ModifyItemUsesRequest& src) :
                PlayFabServerModifyItemUsesRequest{ src },
                m_customTags{ src.m_customTags },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~ModifyItemUsesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "UsesToAdd", usesToAdd);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerModifyItemUsesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct ModifyItemUsesResult : public PlayFabServerModifyItemUsesResult, public BaseResult
        {
            ModifyItemUsesResult() : PlayFabServerModifyItemUsesResult{}
            {
            }

            ModifyItemUsesResult(const ModifyItemUsesResult& src) :
                PlayFabServerModifyItemUsesResult{ src },
                m_itemInstanceId{ src.m_itemInstanceId }
            {
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
            }

            ~ModifyItemUsesResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "RemainingUses", remainingUses);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerModifyItemUsesResult>(*this);
            }

        private:
            String m_itemInstanceId;
        };

        struct ModifyUserVirtualCurrencyResult : public PlayFabServerModifyUserVirtualCurrencyResult, public BaseResult
        {
            ModifyUserVirtualCurrencyResult() : PlayFabServerModifyUserVirtualCurrencyResult{}
            {
            }

            ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
                PlayFabServerModifyUserVirtualCurrencyResult{ src },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~ModifyUserVirtualCurrencyResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Balance", balance);
                JsonUtils:: ObjectGetMember(input, "BalanceChange", balanceChange);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerModifyUserVirtualCurrencyResult>(*this);
            }

        private:
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct MoveItemToCharacterFromCharacterRequest : public PlayFabServerMoveItemToCharacterFromCharacterRequest, public BaseRequest
        {
            MoveItemToCharacterFromCharacterRequest() : PlayFabServerMoveItemToCharacterFromCharacterRequest{}
            {
            }

            MoveItemToCharacterFromCharacterRequest(const MoveItemToCharacterFromCharacterRequest& src) :
                PlayFabServerMoveItemToCharacterFromCharacterRequest{ src },
                m_givingCharacterId{ src.m_givingCharacterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId },
                m_receivingCharacterId{ src.m_receivingCharacterId }
            {
                givingCharacterId = m_givingCharacterId.empty() ? nullptr : m_givingCharacterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                receivingCharacterId = m_receivingCharacterId.empty() ? nullptr : m_receivingCharacterId.data();
            }

            ~MoveItemToCharacterFromCharacterRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GivingCharacterId", m_givingCharacterId, givingCharacterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ReceivingCharacterId", m_receivingCharacterId, receivingCharacterId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerMoveItemToCharacterFromCharacterRequest>(*this);
            }

        private:
            String m_givingCharacterId;
            String m_itemInstanceId;
            String m_playFabId;
            String m_receivingCharacterId;
        };

        struct MoveItemToCharacterFromUserRequest : public PlayFabServerMoveItemToCharacterFromUserRequest, public BaseRequest
        {
            MoveItemToCharacterFromUserRequest() : PlayFabServerMoveItemToCharacterFromUserRequest{}
            {
            }

            MoveItemToCharacterFromUserRequest(const MoveItemToCharacterFromUserRequest& src) :
                PlayFabServerMoveItemToCharacterFromUserRequest{ src },
                m_characterId{ src.m_characterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~MoveItemToCharacterFromUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerMoveItemToCharacterFromUserRequest>(*this);
            }

        private:
            String m_characterId;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct MoveItemToUserFromCharacterRequest : public PlayFabServerMoveItemToUserFromCharacterRequest, public BaseRequest
        {
            MoveItemToUserFromCharacterRequest() : PlayFabServerMoveItemToUserFromCharacterRequest{}
            {
            }

            MoveItemToUserFromCharacterRequest(const MoveItemToUserFromCharacterRequest& src) :
                PlayFabServerMoveItemToUserFromCharacterRequest{ src },
                m_characterId{ src.m_characterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~MoveItemToUserFromCharacterRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerMoveItemToUserFromCharacterRequest>(*this);
            }

        private:
            String m_characterId;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct NotifyMatchmakerPlayerLeftRequest : public PlayFabServerNotifyMatchmakerPlayerLeftRequest, public BaseRequest
        {
            NotifyMatchmakerPlayerLeftRequest() : PlayFabServerNotifyMatchmakerPlayerLeftRequest{}
            {
            }

            NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src) :
                PlayFabServerNotifyMatchmakerPlayerLeftRequest{ src },
                m_customTags{ src.m_customTags },
                m_lobbyId{ src.m_lobbyId },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~NotifyMatchmakerPlayerLeftRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerNotifyMatchmakerPlayerLeftRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_lobbyId;
            String m_playFabId;
        };

        struct NotifyMatchmakerPlayerLeftResult : public PlayFabServerNotifyMatchmakerPlayerLeftResult, public BaseResult
        {
            NotifyMatchmakerPlayerLeftResult() : PlayFabServerNotifyMatchmakerPlayerLeftResult{}
            {
            }

            NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src) :
                PlayFabServerNotifyMatchmakerPlayerLeftResult{ src },
                m_playerState{ src.m_playerState }
            {
                playerState = m_playerState ? m_playerState.operator->() : nullptr;
            }

            ~NotifyMatchmakerPlayerLeftResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayerState", m_playerState, playerState);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerNotifyMatchmakerPlayerLeftResult>(*this);
            }

        private:
            StdExtra::optional<PlayFabServerPlayerConnectionState> m_playerState;
        };

        struct PushNotificationPackage : public PlayFabServerPushNotificationPackage, public BaseModel
        {
            PushNotificationPackage() : PlayFabServerPushNotificationPackage{}
            {
            }

            PushNotificationPackage(const PushNotificationPackage& src) :
                PlayFabServerPushNotificationPackage{ src },
                m_customData{ src.m_customData },
                m_icon{ src.m_icon },
                m_message{ src.m_message },
                m_sound{ src.m_sound },
                m_title{ src.m_title }
            {
                customData = m_customData.empty() ? nullptr : m_customData.data();
                icon = m_icon.empty() ? nullptr : m_icon.data();
                message = m_message.empty() ? nullptr : m_message.data();
                sound = m_sound.empty() ? nullptr : m_sound.data();
                title = m_title.empty() ? nullptr : m_title.data();
            }

            ~PushNotificationPackage() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Badge", badge);
                JsonUtils:: ObjectGetMember(input, "CustomData", m_customData, customData);
                JsonUtils:: ObjectGetMember(input, "Icon", m_icon, icon);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "Sound", m_sound, sound);
                JsonUtils:: ObjectGetMember(input, "Title", m_title, title);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerPushNotificationPackage>(*this);
            }

        private:
            String m_customData;
            String m_icon;
            String m_message;
            String m_sound;
            String m_title;
        };

        struct RedeemCouponRequest : public PlayFabServerRedeemCouponRequest, public BaseRequest
        {
            RedeemCouponRequest() : PlayFabServerRedeemCouponRequest{}
            {
            }

            RedeemCouponRequest(const RedeemCouponRequest& src) :
                PlayFabServerRedeemCouponRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_couponCode{ src.m_couponCode },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RedeemCouponRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CouponCode", m_couponCode, couponCode);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRedeemCouponRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            String m_couponCode;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct RedeemCouponResult : public PlayFabServerRedeemCouponResult, public BaseResult
        {
            RedeemCouponResult() : PlayFabServerRedeemCouponResult{}
            {
            }

            RedeemCouponResult(const RedeemCouponResult& src) :
                PlayFabServerRedeemCouponResult{ src },
                m_grantedItems{ src.m_grantedItems }
            {
                grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
            }

            ~RedeemCouponResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRedeemCouponResult>(*this);
            }

        private:
            PointerArray<PlayFabServerItemInstance, ItemInstance> m_grantedItems;
        };

        struct RedeemMatchmakerTicketRequest : public PlayFabServerRedeemMatchmakerTicketRequest, public BaseRequest
        {
            RedeemMatchmakerTicketRequest() : PlayFabServerRedeemMatchmakerTicketRequest{}
            {
            }

            RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src) :
                PlayFabServerRedeemMatchmakerTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_lobbyId{ src.m_lobbyId },
                m_ticket{ src.m_ticket }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                ticket = m_ticket.empty() ? nullptr : m_ticket.data();
            }

            ~RedeemMatchmakerTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "Ticket", m_ticket, ticket);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRedeemMatchmakerTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_lobbyId;
            String m_ticket;
        };

        struct RedeemMatchmakerTicketResult : public PlayFabServerRedeemMatchmakerTicketResult, public BaseResult
        {
            RedeemMatchmakerTicketResult() : PlayFabServerRedeemMatchmakerTicketResult{}
            {
            }

            RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src) :
                PlayFabServerRedeemMatchmakerTicketResult{ src },
                m_error{ src.m_error },
                m_userInfo{ src.m_userInfo }
            {
                error = m_error.empty() ? nullptr : m_error.data();
                userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
            }

            ~RedeemMatchmakerTicketResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "TicketIsValid", ticketIsValid);
                JsonUtils:: ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRedeemMatchmakerTicketResult>(*this);
            }

        private:
            String m_error;
            StdExtra::optional<UserAccountInfo> m_userInfo;
        };

        struct RefreshGameServerInstanceHeartbeatRequest : public PlayFabServerRefreshGameServerInstanceHeartbeatRequest, public BaseRequest
        {
            RefreshGameServerInstanceHeartbeatRequest() : PlayFabServerRefreshGameServerInstanceHeartbeatRequest{}
            {
            }

            RefreshGameServerInstanceHeartbeatRequest(const RefreshGameServerInstanceHeartbeatRequest& src) :
                PlayFabServerRefreshGameServerInstanceHeartbeatRequest{ src },
                m_lobbyId{ src.m_lobbyId }
            {
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
            }

            ~RefreshGameServerInstanceHeartbeatRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRefreshGameServerInstanceHeartbeatRequest>(*this);
            }

        private:
            String m_lobbyId;
        };

        struct RegisterGameRequest : public PlayFabServerRegisterGameRequest, public BaseRequest
        {
            RegisterGameRequest() : PlayFabServerRegisterGameRequest{}
            {
            }

            RegisterGameRequest(const RegisterGameRequest& src) :
                PlayFabServerRegisterGameRequest{ src },
                m_build{ src.m_build },
                m_customTags{ src.m_customTags },
                m_gameMode{ src.m_gameMode },
                m_lobbyId{ src.m_lobbyId },
                m_serverIPV4Address{ src.m_serverIPV4Address },
                m_serverIPV6Address{ src.m_serverIPV6Address },
                m_serverPort{ src.m_serverPort },
                m_serverPublicDNSName{ src.m_serverPublicDNSName },
                m_tags{ src.m_tags }
            {
                build = m_build.empty() ? nullptr : m_build.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
                serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
                serverPort = m_serverPort.empty() ? nullptr : m_serverPort.data();
                serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~RegisterGameRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Build", m_build, build);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "Region", region);
                JsonUtils:: ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
                JsonUtils:: ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
                JsonUtils:: ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
                JsonUtils:: ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRegisterGameRequest>(*this);
            }

        private:
            String m_build;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_gameMode;
            String m_lobbyId;
            String m_serverIPV4Address;
            String m_serverIPV6Address;
            String m_serverPort;
            String m_serverPublicDNSName;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_tags;
        };

        struct RegisterGameResponse : public PlayFabServerRegisterGameResponse, public BaseResult
        {
            RegisterGameResponse() : PlayFabServerRegisterGameResponse{}
            {
            }

            RegisterGameResponse(const RegisterGameResponse& src) :
                PlayFabServerRegisterGameResponse{ src },
                m_lobbyId{ src.m_lobbyId }
            {
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
            }

            ~RegisterGameResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRegisterGameResponse>(*this);
            }

        private:
            String m_lobbyId;
        };

        struct RemoveFriendRequest : public PlayFabServerRemoveFriendRequest, public BaseRequest
        {
            RemoveFriendRequest() : PlayFabServerRemoveFriendRequest{}
            {
            }

            RemoveFriendRequest(const RemoveFriendRequest& src) :
                PlayFabServerRemoveFriendRequest{ src },
                m_friendPlayFabId{ src.m_friendPlayFabId },
                m_playFabId{ src.m_playFabId }
            {
                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RemoveFriendRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRemoveFriendRequest>(*this);
            }

        private:
            String m_friendPlayFabId;
            String m_playFabId;
        };

        struct RemoveGenericIDRequest : public PlayFabServerRemoveGenericIDRequest, public BaseRequest
        {
            RemoveGenericIDRequest() : PlayFabServerRemoveGenericIDRequest{}
            {
            }

            RemoveGenericIDRequest(const RemoveGenericIDRequest& src) :
                PlayFabServerRemoveGenericIDRequest{ src },
                m_genericId{ src.m_genericId },
                m_playFabId{ src.m_playFabId }
            {
                genericId = (PlayFabServerGenericServiceId*)&m_genericId;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RemoveGenericIDRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GenericId", m_genericId, genericId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRemoveGenericIDRequest>(*this);
            }

        private:
            GenericServiceId m_genericId;
            String m_playFabId;
        };

        struct RemovePlayerTagRequest : public PlayFabServerRemovePlayerTagRequest, public BaseRequest
        {
            RemovePlayerTagRequest() : PlayFabServerRemovePlayerTagRequest{}
            {
            }

            RemovePlayerTagRequest(const RemovePlayerTagRequest& src) :
                PlayFabServerRemovePlayerTagRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_tagName{ src.m_tagName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tagName = m_tagName.empty() ? nullptr : m_tagName.data();
            }

            ~RemovePlayerTagRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "TagName", m_tagName, tagName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRemovePlayerTagRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_tagName;
        };

        struct RemoveSharedGroupMembersRequest : public PlayFabServerRemoveSharedGroupMembersRequest, public BaseRequest
        {
            RemoveSharedGroupMembersRequest() : PlayFabServerRemoveSharedGroupMembersRequest{}
            {
            }

            RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
                PlayFabServerRemoveSharedGroupMembersRequest{ src },
                m_playFabIds{ src.m_playFabIds },
                m_sharedGroupId{ src.m_sharedGroupId }
            {
                playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
                sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
            }

            ~RemoveSharedGroupMembersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRemoveSharedGroupMembersRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_playFabIds;
            String m_sharedGroupId;
        };

        struct ReportPlayerServerRequest : public PlayFabServerReportPlayerServerRequest, public BaseRequest
        {
            ReportPlayerServerRequest() : PlayFabServerReportPlayerServerRequest{}
            {
            }

            ReportPlayerServerRequest(const ReportPlayerServerRequest& src) :
                PlayFabServerReportPlayerServerRequest{ src },
                m_comment{ src.m_comment },
                m_customTags{ src.m_customTags },
                m_reporteeId{ src.m_reporteeId },
                m_reporterId{ src.m_reporterId }
            {
                comment = m_comment.empty() ? nullptr : m_comment.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
                reporterId = m_reporterId.empty() ? nullptr : m_reporterId.data();
            }

            ~ReportPlayerServerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ReporteeId", m_reporteeId, reporteeId);
                JsonUtils:: ObjectGetMember(input, "ReporterId", m_reporterId, reporterId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerReportPlayerServerRequest>(*this);
            }

        private:
            String m_comment;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_reporteeId;
            String m_reporterId;
        };

        struct ReportPlayerServerResult : public PlayFabServerReportPlayerServerResult, public BaseResult
        {
            ReportPlayerServerResult() : PlayFabServerReportPlayerServerResult{}
            {
            }

            ReportPlayerServerResult(const ReportPlayerServerResult&) = default;

            ~ReportPlayerServerResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "SubmissionsRemaining", submissionsRemaining);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerReportPlayerServerResult>(*this);
            }

        private:
        };

        struct RevokeAllBansForUserRequest : public PlayFabServerRevokeAllBansForUserRequest, public BaseRequest
        {
            RevokeAllBansForUserRequest() : PlayFabServerRevokeAllBansForUserRequest{}
            {
            }

            RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src) :
                PlayFabServerRevokeAllBansForUserRequest{ src },
                m_playFabId{ src.m_playFabId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RevokeAllBansForUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeAllBansForUserRequest>(*this);
            }

        private:
            String m_playFabId;
        };

        struct RevokeAllBansForUserResult : public PlayFabServerRevokeAllBansForUserResult, public BaseResult
        {
            RevokeAllBansForUserResult() : PlayFabServerRevokeAllBansForUserResult{}
            {
            }

            RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src) :
                PlayFabServerRevokeAllBansForUserResult{ src },
                m_banData{ src.m_banData }
            {
                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~RevokeAllBansForUserResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeAllBansForUserResult>(*this);
            }

        private:
            PointerArray<PlayFabServerBanInfo, BanInfo> m_banData;
        };

        struct RevokeBansRequest : public PlayFabServerRevokeBansRequest, public BaseRequest
        {
            RevokeBansRequest() : PlayFabServerRevokeBansRequest{}
            {
            }

            RevokeBansRequest(const RevokeBansRequest& src) :
                PlayFabServerRevokeBansRequest{ src },
                m_banIds{ src.m_banIds }
            {
                banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
            }

            ~RevokeBansRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BanIds", m_banIds, banIds, banIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeBansRequest>(*this);
            }

        private:
            PointerArray<const char, String> m_banIds;
        };

        struct RevokeBansResult : public PlayFabServerRevokeBansResult, public BaseResult
        {
            RevokeBansResult() : PlayFabServerRevokeBansResult{}
            {
            }

            RevokeBansResult(const RevokeBansResult& src) :
                PlayFabServerRevokeBansResult{ src },
                m_banData{ src.m_banData }
            {
                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~RevokeBansResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeBansResult>(*this);
            }

        private:
            PointerArray<PlayFabServerBanInfo, BanInfo> m_banData;
        };

        struct RevokeInventoryItem : public PlayFabServerRevokeInventoryItem, public BaseModel
        {
            RevokeInventoryItem() : PlayFabServerRevokeInventoryItem{}
            {
            }

            RevokeInventoryItem(const RevokeInventoryItem& src) :
                PlayFabServerRevokeInventoryItem{ src },
                m_characterId{ src.m_characterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RevokeInventoryItem() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeInventoryItem>(*this);
            }

        private:
            String m_characterId;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct RevokeInventoryItemRequest : public PlayFabServerRevokeInventoryItemRequest, public BaseRequest
        {
            RevokeInventoryItemRequest() : PlayFabServerRevokeInventoryItemRequest{}
            {
            }

            RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
                PlayFabServerRevokeInventoryItemRequest{ src },
                m_characterId{ src.m_characterId },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~RevokeInventoryItemRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeInventoryItemRequest>(*this);
            }

        private:
            String m_characterId;
            String m_itemInstanceId;
            String m_playFabId;
        };

        struct RevokeInventoryItemsRequest : public PlayFabServerRevokeInventoryItemsRequest, public BaseRequest
        {
            RevokeInventoryItemsRequest() : PlayFabServerRevokeInventoryItemsRequest{}
            {
            }

            RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src) :
                PlayFabServerRevokeInventoryItemsRequest{ src },
                m_items{ src.m_items }
            {
                items = m_items.Empty() ? nullptr : m_items.Data();
            }

            ~RevokeInventoryItemsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Items", m_items, items, itemsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeInventoryItemsRequest>(*this);
            }

        private:
            PointerArray<PlayFabServerRevokeInventoryItem, RevokeInventoryItem> m_items;
        };

        struct RevokeItemError : public PlayFabServerRevokeItemError, public BaseModel
        {
            RevokeItemError() : PlayFabServerRevokeItemError{}
            {
            }

            RevokeItemError(const RevokeItemError& src) :
                PlayFabServerRevokeItemError{ src },
                m_error{ src.m_error },
                m_item{ src.m_item }
            {
                error = m_error ? m_error.operator->() : nullptr;
                item = m_item ? m_item.operator->() : nullptr;
            }

            ~RevokeItemError() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "Item", m_item, item);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeItemError>(*this);
            }

        private:
            StdExtra::optional<PlayFabServerGenericErrorCodes> m_error;
            StdExtra::optional<RevokeInventoryItem> m_item;
        };

        struct RevokeInventoryItemsResult : public PlayFabServerRevokeInventoryItemsResult, public BaseResult
        {
            RevokeInventoryItemsResult() : PlayFabServerRevokeInventoryItemsResult{}
            {
            }

            RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src) :
                PlayFabServerRevokeInventoryItemsResult{ src },
                m_errors{ src.m_errors }
            {
                errors = m_errors.Empty() ? nullptr : m_errors.Data();
            }

            ~RevokeInventoryItemsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Errors", m_errors, errors, errorsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerRevokeInventoryItemsResult>(*this);
            }

        private:
            PointerArray<PlayFabServerRevokeItemError, RevokeItemError> m_errors;
        };

        struct SavePushNotificationTemplateRequest : public PlayFabServerSavePushNotificationTemplateRequest, public BaseRequest
        {
            SavePushNotificationTemplateRequest() : PlayFabServerSavePushNotificationTemplateRequest{}
            {
            }

            SavePushNotificationTemplateRequest(const SavePushNotificationTemplateRequest& src) :
                PlayFabServerSavePushNotificationTemplateRequest{ src },
                m_androidPayload{ src.m_androidPayload },
                m_id{ src.m_id },
                m_iOSPayload{ src.m_iOSPayload },
                m_localizedPushNotificationTemplates{ src.m_localizedPushNotificationTemplates },
                m_name{ src.m_name }
            {
                androidPayload = m_androidPayload.empty() ? nullptr : m_androidPayload.data();
                id = m_id.empty() ? nullptr : m_id.data();
                iOSPayload = m_iOSPayload.empty() ? nullptr : m_iOSPayload.data();
                localizedPushNotificationTemplates = m_localizedPushNotificationTemplates.Empty() ? nullptr : m_localizedPushNotificationTemplates.Data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~SavePushNotificationTemplateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AndroidPayload", m_androidPayload, androidPayload);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "IOSPayload", m_iOSPayload, iOSPayload);
                JsonUtils:: ObjectGetMember(input, "LocalizedPushNotificationTemplates", m_localizedPushNotificationTemplates, localizedPushNotificationTemplates, localizedPushNotificationTemplatesCount);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSavePushNotificationTemplateRequest>(*this);
            }

        private:
            String m_androidPayload;
            String m_id;
            String m_iOSPayload;
            AssociativeArray<PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry, LocalizedPushNotificationProperties> m_localizedPushNotificationTemplates;
            String m_name;
        };

        struct SavePushNotificationTemplateResult : public PlayFabServerSavePushNotificationTemplateResult, public BaseResult
        {
            SavePushNotificationTemplateResult() : PlayFabServerSavePushNotificationTemplateResult{}
            {
            }

            SavePushNotificationTemplateResult(const SavePushNotificationTemplateResult& src) :
                PlayFabServerSavePushNotificationTemplateResult{ src },
                m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
            {
                pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
            }

            ~SavePushNotificationTemplateResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSavePushNotificationTemplateResult>(*this);
            }

        private:
            String m_pushNotificationTemplateId;
        };

        struct SendCustomAccountRecoveryEmailRequest : public PlayFabServerSendCustomAccountRecoveryEmailRequest, public BaseRequest
        {
            SendCustomAccountRecoveryEmailRequest() : PlayFabServerSendCustomAccountRecoveryEmailRequest{}
            {
            }

            SendCustomAccountRecoveryEmailRequest(const SendCustomAccountRecoveryEmailRequest& src) :
                PlayFabServerSendCustomAccountRecoveryEmailRequest{ src },
                m_customTags{ src.m_customTags },
                m_email{ src.m_email },
                m_emailTemplateId{ src.m_emailTemplateId },
                m_username{ src.m_username }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                email = m_email.empty() ? nullptr : m_email.data();
                emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~SendCustomAccountRecoveryEmailRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSendCustomAccountRecoveryEmailRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_email;
            String m_emailTemplateId;
            String m_username;
        };

        struct SendEmailFromTemplateRequest : public PlayFabServerSendEmailFromTemplateRequest, public BaseRequest
        {
            SendEmailFromTemplateRequest() : PlayFabServerSendEmailFromTemplateRequest{}
            {
            }

            SendEmailFromTemplateRequest(const SendEmailFromTemplateRequest& src) :
                PlayFabServerSendEmailFromTemplateRequest{ src },
                m_customTags{ src.m_customTags },
                m_emailTemplateId{ src.m_emailTemplateId },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~SendEmailFromTemplateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSendEmailFromTemplateRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_emailTemplateId;
            String m_playFabId;
        };

        struct SendPushNotificationFromTemplateRequest : public PlayFabServerSendPushNotificationFromTemplateRequest, public BaseRequest
        {
            SendPushNotificationFromTemplateRequest() : PlayFabServerSendPushNotificationFromTemplateRequest{}
            {
            }

            SendPushNotificationFromTemplateRequest(const SendPushNotificationFromTemplateRequest& src) :
                PlayFabServerSendPushNotificationFromTemplateRequest{ src },
                m_customTags{ src.m_customTags },
                m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId },
                m_recipient{ src.m_recipient }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
                recipient = m_recipient.empty() ? nullptr : m_recipient.data();
            }

            ~SendPushNotificationFromTemplateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
                JsonUtils:: ObjectGetMember(input, "Recipient", m_recipient, recipient);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSendPushNotificationFromTemplateRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_pushNotificationTemplateId;
            String m_recipient;
        };

        struct SendPushNotificationRequest : public PlayFabServerSendPushNotificationRequest, public BaseRequest
        {
            SendPushNotificationRequest() : PlayFabServerSendPushNotificationRequest{}
            {
            }

            SendPushNotificationRequest(const SendPushNotificationRequest& src) :
                PlayFabServerSendPushNotificationRequest{ src },
                m_advancedPlatformDelivery{ src.m_advancedPlatformDelivery },
                m_customTags{ src.m_customTags },
                m_message{ src.m_message },
                m_package{ src.m_package },
                m_recipient{ src.m_recipient },
                m_subject{ src.m_subject },
                m_targetPlatforms{ src.m_targetPlatforms }
            {
                advancedPlatformDelivery = m_advancedPlatformDelivery.Empty() ? nullptr : m_advancedPlatformDelivery.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                message = m_message.empty() ? nullptr : m_message.data();
                package = m_package ? m_package.operator->() : nullptr;
                recipient = m_recipient.empty() ? nullptr : m_recipient.data();
                subject = m_subject.empty() ? nullptr : m_subject.data();
                targetPlatforms = m_targetPlatforms.empty() ? nullptr : m_targetPlatforms.data();
            }

            ~SendPushNotificationRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AdvancedPlatformDelivery", m_advancedPlatformDelivery, advancedPlatformDelivery, advancedPlatformDeliveryCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "Package", m_package, package);
                JsonUtils:: ObjectGetMember(input, "Recipient", m_recipient, recipient);
                JsonUtils:: ObjectGetMember(input, "Subject", m_subject, subject);
                JsonUtils:: ObjectGetMember(input, "TargetPlatforms", m_targetPlatforms, targetPlatforms, targetPlatformsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSendPushNotificationRequest>(*this);
            }

        private:
            PointerArray<PlayFabServerAdvancedPushPlatformMsg, AdvancedPushPlatformMsg> m_advancedPlatformDelivery;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_message;
            StdExtra::optional<PushNotificationPackage> m_package;
            String m_recipient;
            String m_subject;
            Vector<PlayFabServerPushNotificationPlatform> m_targetPlatforms;
        };

        struct UserSettings : public PlayFabServerUserSettings, public BaseModel
        {
            UserSettings() : PlayFabServerUserSettings{}
            {
            }

            UserSettings(const UserSettings&) = default;

            ~UserSettings() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GatherDeviceInfo", gatherDeviceInfo);
                JsonUtils:: ObjectGetMember(input, "GatherFocusInfo", gatherFocusInfo);
                JsonUtils:: ObjectGetMember(input, "NeedsAttribution", needsAttribution);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUserSettings>(*this);
            }

        private:
        };

        struct Variable : public PlayFabServerVariable, public BaseModel
        {
            Variable() : PlayFabServerVariable{}
            {
            }

            Variable(const Variable& src) :
                PlayFabServerVariable{ src },
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
                return JsonUtils::ToJson<PlayFabServerVariable>(*this);
            }

        private:
            String m_name;
            String m_value;
        };

        struct TreatmentAssignment : public PlayFabServerTreatmentAssignment, public BaseModel
        {
            TreatmentAssignment() : PlayFabServerTreatmentAssignment{}
            {
            }

            TreatmentAssignment(const TreatmentAssignment& src) :
                PlayFabServerTreatmentAssignment{ src },
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
                return JsonUtils::ToJson<PlayFabServerTreatmentAssignment>(*this);
            }

        private:
            PointerArray<PlayFabServerVariable, Variable> m_variables;
            PointerArray<const char, String> m_variants;
        };

        struct ServerLoginResult : public PlayFabServerServerLoginResult, public PlayFabLoginResultCommon
        {
            ServerLoginResult() : PlayFabServerServerLoginResult{}
            {
            }

            ServerLoginResult(const ServerLoginResult& src) :
                PlayFabServerServerLoginResult{ src },
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

            ~ServerLoginResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerServerLoginResult>(*this);
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

        struct SetFriendTagsRequest : public PlayFabServerSetFriendTagsRequest, public BaseRequest
        {
            SetFriendTagsRequest() : PlayFabServerSetFriendTagsRequest{}
            {
            }

            SetFriendTagsRequest(const SetFriendTagsRequest& src) :
                PlayFabServerSetFriendTagsRequest{ src },
                m_friendPlayFabId{ src.m_friendPlayFabId },
                m_playFabId{ src.m_playFabId },
                m_tags{ src.m_tags }
            {
                friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~SetFriendTagsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetFriendTagsRequest>(*this);
            }

        private:
            String m_friendPlayFabId;
            String m_playFabId;
            PointerArray<const char, String> m_tags;
        };

        struct SetGameServerInstanceDataRequest : public PlayFabServerSetGameServerInstanceDataRequest, public BaseRequest
        {
            SetGameServerInstanceDataRequest() : PlayFabServerSetGameServerInstanceDataRequest{}
            {
            }

            SetGameServerInstanceDataRequest(const SetGameServerInstanceDataRequest& src) :
                PlayFabServerSetGameServerInstanceDataRequest{ src },
                m_gameServerData{ src.m_gameServerData },
                m_lobbyId{ src.m_lobbyId }
            {
                gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
            }

            ~SetGameServerInstanceDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GameServerData", m_gameServerData, gameServerData);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetGameServerInstanceDataRequest>(*this);
            }

        private:
            String m_gameServerData;
            String m_lobbyId;
        };

        struct SetGameServerInstanceStateRequest : public PlayFabServerSetGameServerInstanceStateRequest, public BaseRequest
        {
            SetGameServerInstanceStateRequest() : PlayFabServerSetGameServerInstanceStateRequest{}
            {
            }

            SetGameServerInstanceStateRequest(const SetGameServerInstanceStateRequest& src) :
                PlayFabServerSetGameServerInstanceStateRequest{ src },
                m_lobbyId{ src.m_lobbyId }
            {
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
            }

            ~SetGameServerInstanceStateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "State", state);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetGameServerInstanceStateRequest>(*this);
            }

        private:
            String m_lobbyId;
        };

        struct SetGameServerInstanceTagsRequest : public PlayFabServerSetGameServerInstanceTagsRequest, public BaseRequest
        {
            SetGameServerInstanceTagsRequest() : PlayFabServerSetGameServerInstanceTagsRequest{}
            {
            }

            SetGameServerInstanceTagsRequest(const SetGameServerInstanceTagsRequest& src) :
                PlayFabServerSetGameServerInstanceTagsRequest{ src },
                m_lobbyId{ src.m_lobbyId },
                m_tags{ src.m_tags }
            {
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~SetGameServerInstanceTagsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetGameServerInstanceTagsRequest>(*this);
            }

        private:
            String m_lobbyId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_tags;
        };

        struct SetPlayerSecretRequest : public PlayFabServerSetPlayerSecretRequest, public BaseRequest
        {
            SetPlayerSecretRequest() : PlayFabServerSetPlayerSecretRequest{}
            {
            }

            SetPlayerSecretRequest(const SetPlayerSecretRequest& src) :
                PlayFabServerSetPlayerSecretRequest{ src },
                m_playerSecret{ src.m_playerSecret },
                m_playFabId{ src.m_playFabId }
            {
                playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~SetPlayerSecretRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetPlayerSecretRequest>(*this);
            }

        private:
            String m_playerSecret;
            String m_playFabId;
        };

        struct SetPublisherDataRequest : public PlayFabServerSetPublisherDataRequest, public BaseRequest
        {
            SetPublisherDataRequest() : PlayFabServerSetPublisherDataRequest{}
            {
            }

            SetPublisherDataRequest(const SetPublisherDataRequest& src) :
                PlayFabServerSetPublisherDataRequest{ src },
                m_key{ src.m_key },
                m_value{ src.m_value }
            {
                key = m_key.empty() ? nullptr : m_key.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~SetPublisherDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetPublisherDataRequest>(*this);
            }

        private:
            String m_key;
            String m_value;
        };

        struct SetTitleDataRequest : public PlayFabServerSetTitleDataRequest, public BaseRequest
        {
            SetTitleDataRequest() : PlayFabServerSetTitleDataRequest{}
            {
            }

            SetTitleDataRequest(const SetTitleDataRequest& src) :
                PlayFabServerSetTitleDataRequest{ src },
                m_key{ src.m_key },
                m_value{ src.m_value }
            {
                key = m_key.empty() ? nullptr : m_key.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~SetTitleDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSetTitleDataRequest>(*this);
            }

        private:
            String m_key;
            String m_value;
        };

        struct StatisticUpdate : public PlayFabServerStatisticUpdate, public BaseModel
        {
            StatisticUpdate() : PlayFabServerStatisticUpdate{}
            {
            }

            StatisticUpdate(const StatisticUpdate& src) :
                PlayFabServerStatisticUpdate{ src },
                m_statisticName{ src.m_statisticName },
                m_version{ src.m_version }
            {
                statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
                version = m_version ? m_version.operator->() : nullptr;
            }

            ~StatisticUpdate() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
                JsonUtils:: ObjectGetMember(input, "Value", value);
                JsonUtils:: ObjectGetMember(input, "Version", m_version, version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerStatisticUpdate>(*this);
            }

        private:
            String m_statisticName;
            StdExtra::optional<uint32_t> m_version;
        };

        struct SubtractCharacterVirtualCurrencyRequest : public PlayFabServerSubtractCharacterVirtualCurrencyRequest, public BaseRequest
        {
            SubtractCharacterVirtualCurrencyRequest() : PlayFabServerSubtractCharacterVirtualCurrencyRequest{}
            {
            }

            SubtractCharacterVirtualCurrencyRequest(const SubtractCharacterVirtualCurrencyRequest& src) :
                PlayFabServerSubtractCharacterVirtualCurrencyRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~SubtractCharacterVirtualCurrencyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSubtractCharacterVirtualCurrencyRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct SubtractUserVirtualCurrencyRequest : public PlayFabServerSubtractUserVirtualCurrencyRequest, public BaseRequest
        {
            SubtractUserVirtualCurrencyRequest() : PlayFabServerSubtractUserVirtualCurrencyRequest{}
            {
            }

            SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
                PlayFabServerSubtractUserVirtualCurrencyRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_virtualCurrency{ src.m_virtualCurrency }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
            }

            ~SubtractUserVirtualCurrencyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Amount", amount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerSubtractUserVirtualCurrencyRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_virtualCurrency;
        };

        struct UnlinkPSNAccountRequest : public PlayFabServerUnlinkPSNAccountRequest, public BaseRequest
        {
            UnlinkPSNAccountRequest() : PlayFabServerUnlinkPSNAccountRequest{}
            {
            }

            UnlinkPSNAccountRequest(const UnlinkPSNAccountRequest& src) :
                PlayFabServerUnlinkPSNAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UnlinkPSNAccountRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUnlinkPSNAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct UnlinkServerCustomIdRequest : public PlayFabServerUnlinkServerCustomIdRequest, public BaseRequest
        {
            UnlinkServerCustomIdRequest() : PlayFabServerUnlinkServerCustomIdRequest{}
            {
            }

            UnlinkServerCustomIdRequest(const UnlinkServerCustomIdRequest& src) :
                PlayFabServerUnlinkServerCustomIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId },
                m_serverCustomId{ src.m_serverCustomId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
            }

            ~UnlinkServerCustomIdRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUnlinkServerCustomIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
            String m_serverCustomId;
        };

        struct UnlinkXboxAccountRequest : public PlayFabServerUnlinkXboxAccountRequest, public BaseRequest
        {
            UnlinkXboxAccountRequest() : PlayFabServerUnlinkXboxAccountRequest{}
            {
            }

            UnlinkXboxAccountRequest(const UnlinkXboxAccountRequest& src) :
                PlayFabServerUnlinkXboxAccountRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UnlinkXboxAccountRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUnlinkXboxAccountRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct UnlockContainerInstanceRequest : public PlayFabServerUnlockContainerInstanceRequest, public BaseRequest
        {
            UnlockContainerInstanceRequest() : PlayFabServerUnlockContainerInstanceRequest{}
            {
            }

            UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src) :
                PlayFabServerUnlockContainerInstanceRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_containerItemInstanceId{ src.m_containerItemInstanceId },
                m_customTags{ src.m_customTags },
                m_keyItemInstanceId{ src.m_keyItemInstanceId },
                m_playFabId{ src.m_playFabId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UnlockContainerInstanceRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ContainerItemInstanceId", m_containerItemInstanceId, containerItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "KeyItemInstanceId", m_keyItemInstanceId, keyItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUnlockContainerInstanceRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            String m_containerItemInstanceId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_keyItemInstanceId;
            String m_playFabId;
        };

        struct UnlockContainerItemRequest : public PlayFabServerUnlockContainerItemRequest, public BaseRequest
        {
            UnlockContainerItemRequest() : PlayFabServerUnlockContainerItemRequest{}
            {
            }

            UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
                PlayFabServerUnlockContainerItemRequest{ src },
                m_catalogVersion{ src.m_catalogVersion },
                m_characterId{ src.m_characterId },
                m_containerItemId{ src.m_containerItemId },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UnlockContainerItemRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "ContainerItemId", m_containerItemId, containerItemId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUnlockContainerItemRequest>(*this);
            }

        private:
            String m_catalogVersion;
            String m_characterId;
            String m_containerItemId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct UnlockContainerItemResult : public PlayFabServerUnlockContainerItemResult, public BaseResult
        {
            UnlockContainerItemResult() : PlayFabServerUnlockContainerItemResult{}
            {
            }

            UnlockContainerItemResult(const UnlockContainerItemResult& src) :
                PlayFabServerUnlockContainerItemResult{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
                JsonUtils:: ObjectGetMember(input, "UnlockedItemInstanceId", m_unlockedItemInstanceId, unlockedItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "UnlockedWithItemInstanceId", m_unlockedWithItemInstanceId, unlockedWithItemInstanceId);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUnlockContainerItemResult>(*this);
            }

        private:
            PointerArray<PlayFabServerItemInstance, ItemInstance> m_grantedItems;
            String m_unlockedItemInstanceId;
            String m_unlockedWithItemInstanceId;
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_virtualCurrency;
        };

        struct UpdateAvatarUrlRequest : public PlayFabServerUpdateAvatarUrlRequest, public BaseRequest
        {
            UpdateAvatarUrlRequest() : PlayFabServerUpdateAvatarUrlRequest{}
            {
            }

            UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src) :
                PlayFabServerUpdateAvatarUrlRequest{ src },
                m_imageUrl{ src.m_imageUrl },
                m_playFabId{ src.m_playFabId }
            {
                imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UpdateAvatarUrlRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ImageUrl", m_imageUrl, imageUrl);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateAvatarUrlRequest>(*this);
            }

        private:
            String m_imageUrl;
            String m_playFabId;
        };

        struct UpdateBanRequest : public PlayFabServerUpdateBanRequest, public BaseRequest
        {
            UpdateBanRequest() : PlayFabServerUpdateBanRequest{}
            {
            }

            UpdateBanRequest(const UpdateBanRequest& src) :
                PlayFabServerUpdateBanRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
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
                return JsonUtils::ToJson<PlayFabServerUpdateBanRequest>(*this);
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

        struct UpdateBansRequest : public PlayFabServerUpdateBansRequest, public BaseRequest
        {
            UpdateBansRequest() : PlayFabServerUpdateBansRequest{}
            {
            }

            UpdateBansRequest(const UpdateBansRequest& src) :
                PlayFabServerUpdateBansRequest{ src },
                m_bans{ src.m_bans }
            {
                bans = m_bans.Empty() ? nullptr : m_bans.Data();
            }

            ~UpdateBansRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateBansRequest>(*this);
            }

        private:
            PointerArray<PlayFabServerUpdateBanRequest, UpdateBanRequest> m_bans;
        };

        struct UpdateBansResult : public PlayFabServerUpdateBansResult, public BaseResult
        {
            UpdateBansResult() : PlayFabServerUpdateBansResult{}
            {
            }

            UpdateBansResult(const UpdateBansResult& src) :
                PlayFabServerUpdateBansResult{ src },
                m_banData{ src.m_banData }
            {
                banData = m_banData.Empty() ? nullptr : m_banData.Data();
            }

            ~UpdateBansResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateBansResult>(*this);
            }

        private:
            PointerArray<PlayFabServerBanInfo, BanInfo> m_banData;
        };

        struct UpdateCharacterDataRequest : public PlayFabServerUpdateCharacterDataRequest, public BaseRequest
        {
            UpdateCharacterDataRequest() : PlayFabServerUpdateCharacterDataRequest{}
            {
            }

            UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src) :
                PlayFabServerUpdateCharacterDataRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_data{ src.m_data },
                m_keysToRemove{ src.m_keysToRemove },
                m_permission{ src.m_permission },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                data = m_data.Empty() ? nullptr : m_data.Data();
                keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
                permission = m_permission ? m_permission.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UpdateCharacterDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateCharacterDataRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabServerUserDataPermission> m_permission;
            String m_playFabId;
        };

        struct UpdateCharacterDataResult : public PlayFabServerUpdateCharacterDataResult, public BaseResult
        {
            UpdateCharacterDataResult() : PlayFabServerUpdateCharacterDataResult{}
            {
            }

            UpdateCharacterDataResult(const UpdateCharacterDataResult&) = default;

            ~UpdateCharacterDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateCharacterDataResult>(*this);
            }

        private:
        };

        struct UpdateCharacterStatisticsRequest : public PlayFabServerUpdateCharacterStatisticsRequest, public BaseRequest
        {
            UpdateCharacterStatisticsRequest() : PlayFabServerUpdateCharacterStatisticsRequest{}
            {
            }

            UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src) :
                PlayFabServerUpdateCharacterStatisticsRequest{ src },
                m_characterId{ src.m_characterId },
                m_characterStatistics{ src.m_characterStatistics },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UpdateCharacterStatisticsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateCharacterStatisticsRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct UpdatePlayerStatisticsRequest : public PlayFabServerUpdatePlayerStatisticsRequest, public BaseRequest
        {
            UpdatePlayerStatisticsRequest() : PlayFabServerUpdatePlayerStatisticsRequest{}
            {
            }

            UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src) :
                PlayFabServerUpdatePlayerStatisticsRequest{ src },
                m_customTags{ src.m_customTags },
                m_forceUpdate{ src.m_forceUpdate },
                m_playFabId{ src.m_playFabId },
                m_statistics{ src.m_statistics }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                forceUpdate = m_forceUpdate ? m_forceUpdate.operator->() : nullptr;
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
            }

            ~UpdatePlayerStatisticsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ForceUpdate", m_forceUpdate, forceUpdate);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdatePlayerStatisticsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_forceUpdate;
            String m_playFabId;
            PointerArray<PlayFabServerStatisticUpdate, StatisticUpdate> m_statistics;
        };

        struct UpdateSharedGroupDataRequest : public PlayFabServerUpdateSharedGroupDataRequest, public BaseRequest
        {
            UpdateSharedGroupDataRequest() : PlayFabServerUpdateSharedGroupDataRequest{}
            {
            }

            UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
                PlayFabServerUpdateSharedGroupDataRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateSharedGroupDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabServerUserDataPermission> m_permission;
            String m_sharedGroupId;
        };

        struct UpdateUserDataRequest : public PlayFabServerUpdateUserDataRequest, public BaseRequest
        {
            UpdateUserDataRequest() : PlayFabServerUpdateUserDataRequest{}
            {
            }

            UpdateUserDataRequest(const UpdateUserDataRequest& src) :
                PlayFabServerUpdateUserDataRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "Permission", m_permission, permission);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateUserDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            StdExtra::optional<PlayFabServerUserDataPermission> m_permission;
            String m_playFabId;
        };

        struct UpdateUserDataResult : public PlayFabServerUpdateUserDataResult, public BaseResult
        {
            UpdateUserDataResult() : PlayFabServerUpdateUserDataResult{}
            {
            }

            UpdateUserDataResult(const UpdateUserDataResult&) = default;

            ~UpdateUserDataResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DataVersion", dataVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateUserDataResult>(*this);
            }

        private:
        };

        struct UpdateUserInternalDataRequest : public PlayFabServerUpdateUserInternalDataRequest, public BaseRequest
        {
            UpdateUserInternalDataRequest() : PlayFabServerUpdateUserInternalDataRequest{}
            {
            }

            UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src) :
                PlayFabServerUpdateUserInternalDataRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateUserInternalDataRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            PointerArray<const char, String> m_keysToRemove;
            String m_playFabId;
        };

        struct UpdateUserInventoryItemDataRequest : public PlayFabServerUpdateUserInventoryItemDataRequest, public BaseRequest
        {
            UpdateUserInventoryItemDataRequest() : PlayFabServerUpdateUserInventoryItemDataRequest{}
            {
            }

            UpdateUserInventoryItemDataRequest(const UpdateUserInventoryItemDataRequest& src) :
                PlayFabServerUpdateUserInventoryItemDataRequest{ src },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_data{ src.m_data },
                m_itemInstanceId{ src.m_itemInstanceId },
                m_keysToRemove{ src.m_keysToRemove },
                m_playFabId{ src.m_playFabId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                data = m_data.Empty() ? nullptr : m_data.Data();
                itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
                keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UpdateUserInventoryItemDataRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data, dataCount);
                JsonUtils:: ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
                JsonUtils:: ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerUpdateUserInventoryItemDataRequest>(*this);
            }

        private:
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_data;
            String m_itemInstanceId;
            PointerArray<const char, String> m_keysToRemove;
            String m_playFabId;
        };

        struct WriteEventResponse : public PlayFabServerWriteEventResponse, public BaseResult
        {
            WriteEventResponse() : PlayFabServerWriteEventResponse{}
            {
            }

            WriteEventResponse(const WriteEventResponse& src) :
                PlayFabServerWriteEventResponse{ src },
                m_eventId{ src.m_eventId }
            {
                eventId = m_eventId.empty() ? nullptr : m_eventId.data();
            }

            ~WriteEventResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "EventId", m_eventId, eventId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerWriteEventResponse>(*this);
            }

        private:
            String m_eventId;
        };

        struct WriteServerCharacterEventRequest : public PlayFabServerWriteServerCharacterEventRequest, public BaseRequest
        {
            WriteServerCharacterEventRequest() : PlayFabServerWriteServerCharacterEventRequest{}
            {
            }

            WriteServerCharacterEventRequest(const WriteServerCharacterEventRequest& src) :
                PlayFabServerWriteServerCharacterEventRequest{ src },
                m_body{ src.m_body },
                m_characterId{ src.m_characterId },
                m_customTags{ src.m_customTags },
                m_eventName{ src.m_eventName },
                m_playFabId{ src.m_playFabId },
                m_timestamp{ src.m_timestamp }
            {
                body.stringValue = m_body.StringValue();
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                eventName = m_eventName.empty() ? nullptr : m_eventName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
            }

            ~WriteServerCharacterEventRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerWriteServerCharacterEventRequest>(*this);
            }

        private:
            JsonObject m_body;
            String m_characterId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_eventName;
            String m_playFabId;
            StdExtra::optional<time_t> m_timestamp;
        };

        struct WriteServerPlayerEventRequest : public PlayFabServerWriteServerPlayerEventRequest, public BaseRequest
        {
            WriteServerPlayerEventRequest() : PlayFabServerWriteServerPlayerEventRequest{}
            {
            }

            WriteServerPlayerEventRequest(const WriteServerPlayerEventRequest& src) :
                PlayFabServerWriteServerPlayerEventRequest{ src },
                m_body{ src.m_body },
                m_customTags{ src.m_customTags },
                m_eventName{ src.m_eventName },
                m_playFabId{ src.m_playFabId },
                m_timestamp{ src.m_timestamp }
            {
                body.stringValue = m_body.StringValue();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                eventName = m_eventName.empty() ? nullptr : m_eventName.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
            }

            ~WriteServerPlayerEventRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerWriteServerPlayerEventRequest>(*this);
            }

        private:
            JsonObject m_body;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_eventName;
            String m_playFabId;
            StdExtra::optional<time_t> m_timestamp;
        };

        struct WriteTitleEventRequest : public PlayFabServerWriteTitleEventRequest, public BaseRequest
        {
            WriteTitleEventRequest() : PlayFabServerWriteTitleEventRequest{}
            {
            }

            WriteTitleEventRequest(const WriteTitleEventRequest& src) :
                PlayFabServerWriteTitleEventRequest{ src },
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

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Body", m_body, body);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabServerWriteTitleEventRequest>(*this);
            }

        private:
            JsonObject m_body;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_eventName;
            StdExtra::optional<time_t> m_timestamp;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabServerCloudScriptRevisionOption>
    {
        static constexpr PlayFabServerCloudScriptRevisionOption maxValue = PlayFabServerCloudScriptRevisionOption::Specific;
    };

    template<> struct EnumRange<PlayFabServerContinentCode>
    {
        static constexpr PlayFabServerContinentCode maxValue = PlayFabServerContinentCode::SA;
    };

    template<> struct EnumRange<PlayFabServerCountryCode>
    {
        static constexpr PlayFabServerCountryCode maxValue = PlayFabServerCountryCode::ZW;
    };

    template<> struct EnumRange<PlayFabServerCurrency>
    {
        static constexpr PlayFabServerCurrency maxValue = PlayFabServerCurrency::ZWD;
    };

    template<> struct EnumRange<PlayFabServerEmailVerificationStatus>
    {
        static constexpr PlayFabServerEmailVerificationStatus maxValue = PlayFabServerEmailVerificationStatus::Confirmed;
    };

    template<> struct EnumRange<PlayFabServerGameInstanceState>
    {
        static constexpr PlayFabServerGameInstanceState maxValue = PlayFabServerGameInstanceState::Closed;
    };

    template<> struct EnumRange<PlayFabServerGenericErrorCodes>
    {
        static constexpr PlayFabServerGenericErrorCodes maxValue = PlayFabServerGenericErrorCodes::InventoryApiNotImplemented;
    };

    template<> struct EnumRange<PlayFabServerLoginIdentityProvider>
    {
        static constexpr PlayFabServerLoginIdentityProvider maxValue = PlayFabServerLoginIdentityProvider::NintendoSwitchAccount;
    };

    template<> struct EnumRange<PlayFabServerPlayerConnectionState>
    {
        static constexpr PlayFabServerPlayerConnectionState maxValue = PlayFabServerPlayerConnectionState::Participated;
    };

    template<> struct EnumRange<PlayFabServerPushNotificationPlatform>
    {
        static constexpr PlayFabServerPushNotificationPlatform maxValue = PlayFabServerPushNotificationPlatform::GoogleCloudMessaging;
    };

    template<> struct EnumRange<PlayFabServerRegion>
    {
        static constexpr PlayFabServerRegion maxValue = PlayFabServerRegion::Australia;
    };

    template<> struct EnumRange<PlayFabServerResultTableNodeType>
    {
        static constexpr PlayFabServerResultTableNodeType maxValue = PlayFabServerResultTableNodeType::TableId;
    };

    template<> struct EnumRange<PlayFabServerSourceType>
    {
        static constexpr PlayFabServerSourceType maxValue = PlayFabServerSourceType::API;
    };

    template<> struct EnumRange<PlayFabServerSubscriptionProviderStatus>
    {
        static constexpr PlayFabServerSubscriptionProviderStatus maxValue = PlayFabServerSubscriptionProviderStatus::PaymentPending;
    };

    template<> struct EnumRange<PlayFabServerTitleActivationStatus>
    {
        static constexpr PlayFabServerTitleActivationStatus maxValue = PlayFabServerTitleActivationStatus::RevokedSteam;
    };

    template<> struct EnumRange<PlayFabServerUserDataPermission>
    {
        static constexpr PlayFabServerUserDataPermission maxValue = PlayFabServerUserDataPermission::Public;
    };

    template<> struct EnumRange<PlayFabServerUserOrigination>
    {
        static constexpr PlayFabServerUserOrigination maxValue = PlayFabServerUserOrigination::NintendoSwitchAccount;
    };

}

#endif
