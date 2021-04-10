#pragma once

#include <playfab/PlayFabMatchmakerDataModels.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerAuthUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AuthorizationTicket", input.authorizationTicket);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerAuthUserResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Authorized", input.authorized);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerItemInstance& input)
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
        inline JsonValue ToJson<>(const PlayFabMatchmakerPlayerJoinedRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerPlayerLeftRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerStartGameRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Build", input.build);
            JsonUtils::ObjectAddMember(output, "CustomCommandLineData", input.customCommandLineData);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ExternalMatchmakerEventEndpoint", input.externalMatchmakerEventEndpoint);
            JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerStartGameResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GameID", input.gameID);
            JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
            JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
            JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
            JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerUserInfoRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MinCatalogVersion", input.minCatalogVersion);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerVirtualCurrencyRechargeTime& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
            JsonUtils::ObjectAddMember(output, "RechargeTime", input.rechargeTime, true);
            JsonUtils::ObjectAddMember(output, "SecondsToRecharge", input.secondsToRecharge);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMatchmakerUserInfoResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
            JsonUtils::ObjectAddMember(output, "IsDeveloper", input.isDeveloper);
            JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
            JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
            JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
            JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
            return output;
        }

    }

    namespace MatchmakerModels
    {
        // Matchmaker Classes
        struct AuthUserRequest : public PlayFabMatchmakerAuthUserRequest, public SerializableModel
        {
            AuthUserRequest() : PlayFabMatchmakerAuthUserRequest{}
            {
            }

            AuthUserRequest(const AuthUserRequest& src) :
                PlayFabMatchmakerAuthUserRequest{ src },
                m_authorizationTicket{ src.m_authorizationTicket }
            {
                authorizationTicket = m_authorizationTicket.empty() ? nullptr : m_authorizationTicket.data();
            }

            ~AuthUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AuthorizationTicket", m_authorizationTicket, authorizationTicket);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerAuthUserRequest>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabMatchmakerAuthUserRequest) };
                serializedSize += (m_authorizationTicket.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabMatchmakerAuthUserRequest{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerAuthUserRequest);
        
                memcpy(stringBuffer, m_authorizationTicket.data(), m_authorizationTicket.size() + 1);
                stringBuffer +=  m_authorizationTicket.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_authorizationTicket;
        };

        struct AuthUserResponse : public PlayFabMatchmakerAuthUserResponse, public SerializableModel
        {
            AuthUserResponse() : PlayFabMatchmakerAuthUserResponse{}
            {
            }

            AuthUserResponse(const AuthUserResponse& src) :
                PlayFabMatchmakerAuthUserResponse{ src },
                m_playFabId{ src.m_playFabId }
            {
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~AuthUserResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Authorized", authorized);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerAuthUserResponse>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabMatchmakerAuthUserResponse) };
                serializedSize += (m_playFabId.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabMatchmakerAuthUserResponse{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerAuthUserResponse);
        
                memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
                stringBuffer +=  m_playFabId.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_playFabId;
        };

        struct ItemInstance : public PlayFabMatchmakerItemInstance, public BaseModel
        {
            ItemInstance() : PlayFabMatchmakerItemInstance{}
            {
            }

            ItemInstance(const ItemInstance& src) :
                PlayFabMatchmakerItemInstance{ src },
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
                return JsonUtils::ToJson<PlayFabMatchmakerItemInstance>(*this);
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

        struct PlayerJoinedRequest : public PlayFabMatchmakerPlayerJoinedRequest, public BaseModel
        {
            PlayerJoinedRequest() : PlayFabMatchmakerPlayerJoinedRequest{}
            {
            }

            PlayerJoinedRequest(const PlayerJoinedRequest& src) :
                PlayFabMatchmakerPlayerJoinedRequest{ src },
                m_customTags{ src.m_customTags },
                m_lobbyId{ src.m_lobbyId },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~PlayerJoinedRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerPlayerJoinedRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_lobbyId;
            String m_playFabId;
        };

        struct PlayerLeftRequest : public PlayFabMatchmakerPlayerLeftRequest, public BaseModel
        {
            PlayerLeftRequest() : PlayFabMatchmakerPlayerLeftRequest{}
            {
            }

            PlayerLeftRequest(const PlayerLeftRequest& src) :
                PlayFabMatchmakerPlayerLeftRequest{ src },
                m_customTags{ src.m_customTags },
                m_lobbyId{ src.m_lobbyId },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~PlayerLeftRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerPlayerLeftRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_lobbyId;
            String m_playFabId;
        };

        struct StartGameRequest : public PlayFabMatchmakerStartGameRequest, public BaseModel
        {
            StartGameRequest() : PlayFabMatchmakerStartGameRequest{}
            {
            }

            StartGameRequest(const StartGameRequest& src) :
                PlayFabMatchmakerStartGameRequest{ src },
                m_build{ src.m_build },
                m_customCommandLineData{ src.m_customCommandLineData },
                m_customTags{ src.m_customTags },
                m_externalMatchmakerEventEndpoint{ src.m_externalMatchmakerEventEndpoint },
                m_gameMode{ src.m_gameMode }
            {
                build = m_build.empty() ? nullptr : m_build.data();
                customCommandLineData = m_customCommandLineData.empty() ? nullptr : m_customCommandLineData.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                externalMatchmakerEventEndpoint = m_externalMatchmakerEventEndpoint.empty() ? nullptr : m_externalMatchmakerEventEndpoint.data();
                gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
            }

            ~StartGameRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Build", m_build, build);
                JsonUtils:: ObjectGetMember(input, "CustomCommandLineData", m_customCommandLineData, customCommandLineData);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExternalMatchmakerEventEndpoint", m_externalMatchmakerEventEndpoint, externalMatchmakerEventEndpoint);
                JsonUtils:: ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
                JsonUtils:: ObjectGetMember(input, "Region", region);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerStartGameRequest>(*this);
            }
    
        private:
            String m_build;
            String m_customCommandLineData;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_externalMatchmakerEventEndpoint;
            String m_gameMode;
        };

        struct StartGameResponse : public PlayFabMatchmakerStartGameResponse, public SerializableModel
        {
            StartGameResponse() : PlayFabMatchmakerStartGameResponse{}
            {
            }

            StartGameResponse(const StartGameResponse& src) :
                PlayFabMatchmakerStartGameResponse{ src },
                m_gameID{ src.m_gameID },
                m_serverIPV4Address{ src.m_serverIPV4Address },
                m_serverIPV6Address{ src.m_serverIPV6Address },
                m_serverPublicDNSName{ src.m_serverPublicDNSName }
            {
                gameID = m_gameID.empty() ? nullptr : m_gameID.data();
                serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
                serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
                serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
            }

            ~StartGameResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GameID", m_gameID, gameID);
                JsonUtils:: ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
                JsonUtils:: ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
                JsonUtils:: ObjectGetMember(input, "ServerPort", serverPort);
                JsonUtils:: ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerStartGameResponse>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabMatchmakerStartGameResponse) };
                serializedSize += (m_gameID.size() + 1);
                serializedSize += (m_serverIPV4Address.size() + 1);
                serializedSize += (m_serverIPV6Address.size() + 1);
                serializedSize += (m_serverPublicDNSName.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabMatchmakerStartGameResponse{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerStartGameResponse);
        
                memcpy(stringBuffer, m_gameID.data(), m_gameID.size() + 1);
                stringBuffer +=  m_gameID.size() + 1; 
                memcpy(stringBuffer, m_serverIPV4Address.data(), m_serverIPV4Address.size() + 1);
                stringBuffer +=  m_serverIPV4Address.size() + 1; 
                memcpy(stringBuffer, m_serverIPV6Address.data(), m_serverIPV6Address.size() + 1);
                stringBuffer +=  m_serverIPV6Address.size() + 1; 
                memcpy(stringBuffer, m_serverPublicDNSName.data(), m_serverPublicDNSName.size() + 1);
                stringBuffer +=  m_serverPublicDNSName.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_gameID;
            String m_serverIPV4Address;
            String m_serverIPV6Address;
            String m_serverPublicDNSName;
        };

        struct UserInfoRequest : public PlayFabMatchmakerUserInfoRequest, public BaseModel
        {
            UserInfoRequest() : PlayFabMatchmakerUserInfoRequest{}
            {
            }

            UserInfoRequest(const UserInfoRequest& src) :
                PlayFabMatchmakerUserInfoRequest{ src },
                m_customTags{ src.m_customTags },
                m_playFabId{ src.m_playFabId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
            }

            ~UserInfoRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MinCatalogVersion", minCatalogVersion);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerUserInfoRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_playFabId;
        };

        struct VirtualCurrencyRechargeTime : public PlayFabMatchmakerVirtualCurrencyRechargeTime, public SerializableModel
        {
            VirtualCurrencyRechargeTime() : PlayFabMatchmakerVirtualCurrencyRechargeTime{}
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
                return JsonUtils::ToJson<PlayFabMatchmakerVirtualCurrencyRechargeTime>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabMatchmakerVirtualCurrencyRechargeTime) };
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabMatchmakerVirtualCurrencyRechargeTime{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerVirtualCurrencyRechargeTime);
        
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
        };

        struct UserInfoResponse : public PlayFabMatchmakerUserInfoResponse, public BaseModel
        {
            UserInfoResponse() : PlayFabMatchmakerUserInfoResponse{}
            {
            }

            UserInfoResponse(const UserInfoResponse& src) :
                PlayFabMatchmakerUserInfoResponse{ src },
                m_inventory{ src.m_inventory },
                m_playFabId{ src.m_playFabId },
                m_steamId{ src.m_steamId },
                m_titleDisplayName{ src.m_titleDisplayName },
                m_username{ src.m_username },
                m_virtualCurrency{ src.m_virtualCurrency },
                m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
            {
                inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
                playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
                steamId = m_steamId.empty() ? nullptr : m_steamId.data();
                titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
                username = m_username.empty() ? nullptr : m_username.data();
                virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
                virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
            }

            ~UserInfoResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
                JsonUtils:: ObjectGetMember(input, "IsDeveloper", isDeveloper);
                JsonUtils:: ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
                JsonUtils:: ObjectGetMember(input, "SteamId", m_steamId, steamId);
                JsonUtils:: ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
                JsonUtils:: ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMatchmakerUserInfoResponse>(*this);
            }
    
        private:
            PointerArray<PlayFabMatchmakerItemInstance, ItemInstance> m_inventory;
            String m_playFabId;
            String m_steamId;
            String m_titleDisplayName;
            String m_username;
            AssociativeArray<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
            AssociativeArray<PlayFabMatchmakerVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabMatchmakerRegion>
    {
        static constexpr PlayFabMatchmakerRegion maxValue = PlayFabMatchmakerRegion::Australia;
    };


}
