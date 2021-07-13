#pragma once

#include <playfab/PlayFabServerDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ServerModels
{

// Server Classes
struct AdCampaignAttribution : public PlayFabServerAdCampaignAttribution, public SerializableModel
{
    AdCampaignAttribution();
    AdCampaignAttribution(const AdCampaignAttribution& src);
    AdCampaignAttribution(AdCampaignAttribution&& src);
    AdCampaignAttribution(const PlayFabServerAdCampaignAttribution& src);
    AdCampaignAttribution& operator=(const AdCampaignAttribution&) = delete;
    ~AdCampaignAttribution() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_campaignId;
    String m_platform;
};

struct AddCharacterVirtualCurrencyRequest : public PlayFabServerAddCharacterVirtualCurrencyRequest, public BaseModel
{
    AddCharacterVirtualCurrencyRequest();
    AddCharacterVirtualCurrencyRequest(const AddCharacterVirtualCurrencyRequest& src);
    AddCharacterVirtualCurrencyRequest(AddCharacterVirtualCurrencyRequest&& src);
    AddCharacterVirtualCurrencyRequest(const PlayFabServerAddCharacterVirtualCurrencyRequest& src);
    AddCharacterVirtualCurrencyRequest& operator=(const AddCharacterVirtualCurrencyRequest&) = delete;
    ~AddCharacterVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct AddFriendRequest : public PlayFabServerAddFriendRequest, public SerializableModel
{
    AddFriendRequest();
    AddFriendRequest(const AddFriendRequest& src);
    AddFriendRequest(AddFriendRequest&& src);
    AddFriendRequest(const PlayFabServerAddFriendRequest& src);
    AddFriendRequest& operator=(const AddFriendRequest&) = delete;
    ~AddFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendEmail;
    String m_friendPlayFabId;
    String m_friendTitleDisplayName;
    String m_friendUsername;
    String m_playFabId;
};

struct GenericServiceId : public PlayFabServerGenericServiceId, public SerializableModel
{
    GenericServiceId();
    GenericServiceId(const GenericServiceId& src);
    GenericServiceId(GenericServiceId&& src);
    GenericServiceId(const PlayFabServerGenericServiceId& src);
    GenericServiceId& operator=(const GenericServiceId&) = delete;
    ~GenericServiceId() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_serviceName;
    String m_userId;
};

struct AddGenericIDRequest : public PlayFabServerAddGenericIDRequest, public BaseModel
{
    AddGenericIDRequest();
    AddGenericIDRequest(const AddGenericIDRequest& src);
    AddGenericIDRequest(AddGenericIDRequest&& src);
    AddGenericIDRequest(const PlayFabServerAddGenericIDRequest& src);
    AddGenericIDRequest& operator=(const AddGenericIDRequest&) = delete;
    ~AddGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
    String m_playFabId;
};

struct AddPlayerTagRequest : public PlayFabServerAddPlayerTagRequest, public BaseModel
{
    AddPlayerTagRequest();
    AddPlayerTagRequest(const AddPlayerTagRequest& src);
    AddPlayerTagRequest(AddPlayerTagRequest&& src);
    AddPlayerTagRequest(const PlayFabServerAddPlayerTagRequest& src);
    AddPlayerTagRequest& operator=(const AddPlayerTagRequest&) = delete;
    ~AddPlayerTagRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_tagName;
};

struct AddSharedGroupMembersRequest : public PlayFabServerAddSharedGroupMembersRequest, public BaseModel
{
    AddSharedGroupMembersRequest();
    AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src);
    AddSharedGroupMembersRequest(AddSharedGroupMembersRequest&& src);
    AddSharedGroupMembersRequest(const PlayFabServerAddSharedGroupMembersRequest& src);
    AddSharedGroupMembersRequest& operator=(const AddSharedGroupMembersRequest&) = delete;
    ~AddSharedGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIds;
    String m_sharedGroupId;
};

struct AddUserVirtualCurrencyRequest : public PlayFabServerAddUserVirtualCurrencyRequest, public BaseModel
{
    AddUserVirtualCurrencyRequest();
    AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src);
    AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest&& src);
    AddUserVirtualCurrencyRequest(const PlayFabServerAddUserVirtualCurrencyRequest& src);
    AddUserVirtualCurrencyRequest& operator=(const AddUserVirtualCurrencyRequest&) = delete;
    ~AddUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct AdvancedPushPlatformMsg : public PlayFabServerAdvancedPushPlatformMsg, public BaseModel
{
    AdvancedPushPlatformMsg();
    AdvancedPushPlatformMsg(const AdvancedPushPlatformMsg& src);
    AdvancedPushPlatformMsg(AdvancedPushPlatformMsg&& src);
    AdvancedPushPlatformMsg(const PlayFabServerAdvancedPushPlatformMsg& src);
    AdvancedPushPlatformMsg& operator=(const AdvancedPushPlatformMsg&) = delete;
    ~AdvancedPushPlatformMsg() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_gCMDataOnly;
    String m_json;
};

struct AuthenticateSessionTicketRequest : public PlayFabServerAuthenticateSessionTicketRequest, public SerializableModel
{
    AuthenticateSessionTicketRequest();
    AuthenticateSessionTicketRequest(const AuthenticateSessionTicketRequest& src);
    AuthenticateSessionTicketRequest(AuthenticateSessionTicketRequest&& src);
    AuthenticateSessionTicketRequest(const PlayFabServerAuthenticateSessionTicketRequest& src);
    AuthenticateSessionTicketRequest& operator=(const AuthenticateSessionTicketRequest&) = delete;
    ~AuthenticateSessionTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sessionTicket;
};

struct AuthenticateSessionTicketResult : public PlayFabServerAuthenticateSessionTicketResult, public BaseModel, public ApiResult
{
    AuthenticateSessionTicketResult();
    AuthenticateSessionTicketResult(const AuthenticateSessionTicketResult& src);
    AuthenticateSessionTicketResult(AuthenticateSessionTicketResult&& src);
    AuthenticateSessionTicketResult(const PlayFabServerAuthenticateSessionTicketResult& src);
    AuthenticateSessionTicketResult& operator=(const AuthenticateSessionTicketResult&) = delete;
    ~AuthenticateSessionTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_isSessionTicketExpired;
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct AwardSteamAchievementItem : public PlayFabServerAwardSteamAchievementItem, public SerializableModel
{
    AwardSteamAchievementItem();
    AwardSteamAchievementItem(const AwardSteamAchievementItem& src);
    AwardSteamAchievementItem(AwardSteamAchievementItem&& src);
    AwardSteamAchievementItem(const PlayFabServerAwardSteamAchievementItem& src);
    AwardSteamAchievementItem& operator=(const AwardSteamAchievementItem&) = delete;
    ~AwardSteamAchievementItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_achievementName;
    String m_playFabId;
};

struct AwardSteamAchievementRequest : public PlayFabServerAwardSteamAchievementRequest, public BaseModel
{
    AwardSteamAchievementRequest();
    AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src);
    AwardSteamAchievementRequest(AwardSteamAchievementRequest&& src);
    AwardSteamAchievementRequest(const PlayFabServerAwardSteamAchievementRequest& src);
    AwardSteamAchievementRequest& operator=(const AwardSteamAchievementRequest&) = delete;
    ~AwardSteamAchievementRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerAwardSteamAchievementItem, AwardSteamAchievementItem> m_achievements;
};

struct AwardSteamAchievementResult : public PlayFabServerAwardSteamAchievementResult, public BaseModel, public ApiResult
{
    AwardSteamAchievementResult();
    AwardSteamAchievementResult(const AwardSteamAchievementResult& src);
    AwardSteamAchievementResult(AwardSteamAchievementResult&& src);
    AwardSteamAchievementResult(const PlayFabServerAwardSteamAchievementResult& src);
    AwardSteamAchievementResult& operator=(const AwardSteamAchievementResult&) = delete;
    ~AwardSteamAchievementResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerAwardSteamAchievementItem, AwardSteamAchievementItem> m_achievementResults;
};

struct BanInfo : public PlayFabServerBanInfo, public BaseModel
{
    BanInfo();
    BanInfo(const BanInfo& src);
    BanInfo(BanInfo&& src);
    BanInfo(const PlayFabServerBanInfo& src);
    BanInfo& operator=(const BanInfo&) = delete;
    ~BanInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_banId;
    StdExtra::optional<time_t> m_created;
    StdExtra::optional<time_t> m_expires;
    String m_IPAddress;
    String m_MACAddress;
    String m_playFabId;
    String m_reason;
};

struct BanRequest : public PlayFabServerBanRequest, public BaseModel
{
    BanRequest();
    BanRequest(const BanRequest& src);
    BanRequest(BanRequest&& src);
    BanRequest(const PlayFabServerBanRequest& src);
    BanRequest& operator=(const BanRequest&) = delete;
    ~BanRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_durationInHours;
    String m_IPAddress;
    String m_MACAddress;
    String m_playFabId;
    String m_reason;
};

struct BanUsersRequest : public PlayFabServerBanUsersRequest, public BaseModel
{
    BanUsersRequest();
    BanUsersRequest(const BanUsersRequest& src);
    BanUsersRequest(BanUsersRequest&& src);
    BanUsersRequest(const PlayFabServerBanUsersRequest& src);
    BanUsersRequest& operator=(const BanUsersRequest&) = delete;
    ~BanUsersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerBanRequest, BanRequest> m_bans;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct BanUsersResult : public PlayFabServerBanUsersResult, public BaseModel, public ApiResult
{
    BanUsersResult();
    BanUsersResult(const BanUsersResult& src);
    BanUsersResult(BanUsersResult&& src);
    BanUsersResult(const PlayFabServerBanUsersResult& src);
    BanUsersResult& operator=(const BanUsersResult&) = delete;
    ~BanUsersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerBanInfo, BanInfo> m_banData;
};

struct CatalogItemBundleInfo : public PlayFabServerCatalogItemBundleInfo, public BaseModel
{
    CatalogItemBundleInfo();
    CatalogItemBundleInfo(const CatalogItemBundleInfo& src);
    CatalogItemBundleInfo(CatalogItemBundleInfo&& src);
    CatalogItemBundleInfo(const PlayFabServerCatalogItemBundleInfo& src);
    CatalogItemBundleInfo& operator=(const CatalogItemBundleInfo&) = delete;
    ~CatalogItemBundleInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_bundledItems;
    PointerArrayModel<char, String> m_bundledResultTables;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
};

struct CatalogItemConsumableInfo : public PlayFabServerCatalogItemConsumableInfo, public BaseModel
{
    CatalogItemConsumableInfo();
    CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src);
    CatalogItemConsumableInfo(const PlayFabServerCatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo& operator=(const CatalogItemConsumableInfo&) = delete;
    ~CatalogItemConsumableInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_usageCount;
    StdExtra::optional<uint32_t> m_usagePeriod;
    String m_usagePeriodGroup;
};

struct CatalogItemContainerInfo : public PlayFabServerCatalogItemContainerInfo, public BaseModel
{
    CatalogItemContainerInfo();
    CatalogItemContainerInfo(const CatalogItemContainerInfo& src);
    CatalogItemContainerInfo(CatalogItemContainerInfo&& src);
    CatalogItemContainerInfo(const PlayFabServerCatalogItemContainerInfo& src);
    CatalogItemContainerInfo& operator=(const CatalogItemContainerInfo&) = delete;
    ~CatalogItemContainerInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_itemContents;
    String m_keyItemId;
    PointerArrayModel<char, String> m_resultTableContents;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyContents;
};

struct CatalogItem : public PlayFabServerCatalogItem, public BaseModel
{
    CatalogItem();
    CatalogItem(const CatalogItem& src);
    CatalogItem(CatalogItem&& src);
    CatalogItem(const PlayFabServerCatalogItem& src);
    CatalogItem& operator=(const CatalogItem&) = delete;
    ~CatalogItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

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
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    PointerArrayModel<char, String> m_tags;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct CharacterLeaderboardEntry : public PlayFabServerCharacterLeaderboardEntry, public SerializableModel
{
    CharacterLeaderboardEntry();
    CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src);
    CharacterLeaderboardEntry(CharacterLeaderboardEntry&& src);
    CharacterLeaderboardEntry(const PlayFabServerCharacterLeaderboardEntry& src);
    CharacterLeaderboardEntry& operator=(const CharacterLeaderboardEntry&) = delete;
    ~CharacterLeaderboardEntry() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterName;
    String m_characterType;
    String m_displayName;
    String m_playFabId;
};

struct ConsumeItemRequest : public PlayFabServerConsumeItemRequest, public BaseModel
{
    ConsumeItemRequest();
    ConsumeItemRequest(const ConsumeItemRequest& src);
    ConsumeItemRequest(ConsumeItemRequest&& src);
    ConsumeItemRequest(const PlayFabServerConsumeItemRequest& src);
    ConsumeItemRequest& operator=(const ConsumeItemRequest&) = delete;
    ~ConsumeItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_itemInstanceId;
    String m_playFabId;
};

struct ConsumeItemResult : public PlayFabServerConsumeItemResult, public SerializableModel, public ApiResult
{
    ConsumeItemResult();
    ConsumeItemResult(const ConsumeItemResult& src);
    ConsumeItemResult(ConsumeItemResult&& src);
    ConsumeItemResult(const PlayFabServerConsumeItemResult& src);
    ConsumeItemResult& operator=(const ConsumeItemResult&) = delete;
    ~ConsumeItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_itemInstanceId;
};

struct ContactEmailInfo : public PlayFabServerContactEmailInfo, public BaseModel
{
    ContactEmailInfo();
    ContactEmailInfo(const ContactEmailInfo& src);
    ContactEmailInfo(ContactEmailInfo&& src);
    ContactEmailInfo(const PlayFabServerContactEmailInfo& src);
    ContactEmailInfo& operator=(const ContactEmailInfo&) = delete;
    ~ContactEmailInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_emailAddress;
    String m_name;
    StdExtra::optional<PlayFabEmailVerificationStatus> m_verificationStatus;
};

struct CreateSharedGroupRequest : public PlayFabServerCreateSharedGroupRequest, public SerializableModel
{
    CreateSharedGroupRequest();
    CreateSharedGroupRequest(const CreateSharedGroupRequest& src);
    CreateSharedGroupRequest(CreateSharedGroupRequest&& src);
    CreateSharedGroupRequest(const PlayFabServerCreateSharedGroupRequest& src);
    CreateSharedGroupRequest& operator=(const CreateSharedGroupRequest&) = delete;
    ~CreateSharedGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct CreateSharedGroupResult : public PlayFabServerCreateSharedGroupResult, public SerializableModel, public ApiResult
{
    CreateSharedGroupResult();
    CreateSharedGroupResult(const CreateSharedGroupResult& src);
    CreateSharedGroupResult(CreateSharedGroupResult&& src);
    CreateSharedGroupResult(const PlayFabServerCreateSharedGroupResult& src);
    CreateSharedGroupResult& operator=(const CreateSharedGroupResult&) = delete;
    ~CreateSharedGroupResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct DeleteCharacterFromUserRequest : public PlayFabServerDeleteCharacterFromUserRequest, public BaseModel
{
    DeleteCharacterFromUserRequest();
    DeleteCharacterFromUserRequest(const DeleteCharacterFromUserRequest& src);
    DeleteCharacterFromUserRequest(DeleteCharacterFromUserRequest&& src);
    DeleteCharacterFromUserRequest(const PlayFabServerDeleteCharacterFromUserRequest& src);
    DeleteCharacterFromUserRequest& operator=(const DeleteCharacterFromUserRequest&) = delete;
    ~DeleteCharacterFromUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct DeletePlayerRequest : public PlayFabServerDeletePlayerRequest, public SerializableModel
{
    DeletePlayerRequest();
    DeletePlayerRequest(const DeletePlayerRequest& src);
    DeletePlayerRequest(DeletePlayerRequest&& src);
    DeletePlayerRequest(const PlayFabServerDeletePlayerRequest& src);
    DeletePlayerRequest& operator=(const DeletePlayerRequest&) = delete;
    ~DeletePlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct DeletePushNotificationTemplateRequest : public PlayFabServerDeletePushNotificationTemplateRequest, public SerializableModel
{
    DeletePushNotificationTemplateRequest();
    DeletePushNotificationTemplateRequest(const DeletePushNotificationTemplateRequest& src);
    DeletePushNotificationTemplateRequest(DeletePushNotificationTemplateRequest&& src);
    DeletePushNotificationTemplateRequest(const PlayFabServerDeletePushNotificationTemplateRequest& src);
    DeletePushNotificationTemplateRequest& operator=(const DeletePushNotificationTemplateRequest&) = delete;
    ~DeletePushNotificationTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_pushNotificationTemplateId;
};

struct DeleteSharedGroupRequest : public PlayFabServerDeleteSharedGroupRequest, public SerializableModel
{
    DeleteSharedGroupRequest();
    DeleteSharedGroupRequest(const DeleteSharedGroupRequest& src);
    DeleteSharedGroupRequest(DeleteSharedGroupRequest&& src);
    DeleteSharedGroupRequest(const PlayFabServerDeleteSharedGroupRequest& src);
    DeleteSharedGroupRequest& operator=(const DeleteSharedGroupRequest&) = delete;
    ~DeleteSharedGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct DeregisterGameRequest : public PlayFabServerDeregisterGameRequest, public BaseModel
{
    DeregisterGameRequest();
    DeregisterGameRequest(const DeregisterGameRequest& src);
    DeregisterGameRequest(DeregisterGameRequest&& src);
    DeregisterGameRequest(const PlayFabServerDeregisterGameRequest& src);
    DeregisterGameRequest& operator=(const DeregisterGameRequest&) = delete;
    ~DeregisterGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
};

struct EvaluateRandomResultTableRequest : public PlayFabServerEvaluateRandomResultTableRequest, public SerializableModel
{
    EvaluateRandomResultTableRequest();
    EvaluateRandomResultTableRequest(const EvaluateRandomResultTableRequest& src);
    EvaluateRandomResultTableRequest(EvaluateRandomResultTableRequest&& src);
    EvaluateRandomResultTableRequest(const PlayFabServerEvaluateRandomResultTableRequest& src);
    EvaluateRandomResultTableRequest& operator=(const EvaluateRandomResultTableRequest&) = delete;
    ~EvaluateRandomResultTableRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
    String m_tableId;
};

struct EvaluateRandomResultTableResult : public PlayFabServerEvaluateRandomResultTableResult, public SerializableModel, public ApiResult
{
    EvaluateRandomResultTableResult();
    EvaluateRandomResultTableResult(const EvaluateRandomResultTableResult& src);
    EvaluateRandomResultTableResult(EvaluateRandomResultTableResult&& src);
    EvaluateRandomResultTableResult(const PlayFabServerEvaluateRandomResultTableResult& src);
    EvaluateRandomResultTableResult& operator=(const EvaluateRandomResultTableResult&) = delete;
    ~EvaluateRandomResultTableResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_resultItemId;
};

struct ScriptExecutionError : public PlayFabServerScriptExecutionError, public SerializableModel
{
    ScriptExecutionError();
    ScriptExecutionError(const ScriptExecutionError& src);
    ScriptExecutionError(ScriptExecutionError&& src);
    ScriptExecutionError(const PlayFabServerScriptExecutionError& src);
    ScriptExecutionError& operator=(const ScriptExecutionError&) = delete;
    ~ScriptExecutionError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_error;
    String m_message;
    String m_stackTrace;
};

struct LogStatement : public PlayFabServerLogStatement, public BaseModel
{
    LogStatement();
    LogStatement(const LogStatement& src);
    LogStatement(LogStatement&& src);
    LogStatement(const PlayFabServerLogStatement& src);
    LogStatement& operator=(const LogStatement&) = delete;
    ~LogStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_data;
    String m_level;
    String m_message;
};

struct ExecuteCloudScriptResult : public PlayFabServerExecuteCloudScriptResult, public BaseModel, public ApiResult
{
    ExecuteCloudScriptResult();
    ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src);
    ExecuteCloudScriptResult(const PlayFabServerExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult& operator=(const ExecuteCloudScriptResult&) = delete;
    ~ExecuteCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ScriptExecutionError> m_error;
    String m_functionName;
    JsonObject m_functionResult;
    StdExtra::optional<bool> m_functionResultTooLarge;
    PointerArrayModel<PlayFabServerLogStatement, LogStatement> m_logs;
    StdExtra::optional<bool> m_logsTooLarge;
};

struct ExecuteCloudScriptServerRequest : public PlayFabServerExecuteCloudScriptServerRequest, public BaseModel
{
    ExecuteCloudScriptServerRequest();
    ExecuteCloudScriptServerRequest(const ExecuteCloudScriptServerRequest& src);
    ExecuteCloudScriptServerRequest(ExecuteCloudScriptServerRequest&& src);
    ExecuteCloudScriptServerRequest(const PlayFabServerExecuteCloudScriptServerRequest& src);
    ExecuteCloudScriptServerRequest& operator=(const ExecuteCloudScriptServerRequest&) = delete;
    ~ExecuteCloudScriptServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
    String m_playFabId;
    StdExtra::optional<PlayFabServerCloudScriptRevisionOption> m_revisionSelection;
    StdExtra::optional<int32_t> m_specificRevision;
};

struct FacebookInstantGamesPlayFabIdPair : public PlayFabServerFacebookInstantGamesPlayFabIdPair, public SerializableModel
{
    FacebookInstantGamesPlayFabIdPair();
    FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src);
    FacebookInstantGamesPlayFabIdPair(FacebookInstantGamesPlayFabIdPair&& src);
    FacebookInstantGamesPlayFabIdPair(const PlayFabServerFacebookInstantGamesPlayFabIdPair& src);
    FacebookInstantGamesPlayFabIdPair& operator=(const FacebookInstantGamesPlayFabIdPair&) = delete;
    ~FacebookInstantGamesPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookInstantGamesId;
    String m_playFabId;
};

struct FacebookPlayFabIdPair : public PlayFabServerFacebookPlayFabIdPair, public SerializableModel
{
    FacebookPlayFabIdPair();
    FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src);
    FacebookPlayFabIdPair(FacebookPlayFabIdPair&& src);
    FacebookPlayFabIdPair(const PlayFabServerFacebookPlayFabIdPair& src);
    FacebookPlayFabIdPair& operator=(const FacebookPlayFabIdPair&) = delete;
    ~FacebookPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookId;
    String m_playFabId;
};

struct FriendInfo : public PlayFabServerFriendInfo, public BaseModel
{
    FriendInfo();
    FriendInfo(const FriendInfo& src);
    FriendInfo(FriendInfo&& src);
    FriendInfo(const PlayFabServerFriendInfo& src);
    FriendInfo& operator=(const FriendInfo&) = delete;
    ~FriendInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserFacebookInfo> m_facebookInfo;
    String m_friendPlayFabId;
    StdExtra::optional<UserGameCenterInfo> m_gameCenterInfo;
    StdExtra::optional<PlayerProfileModel> m_profile;
    StdExtra::optional<UserPsnInfo> m_PSNInfo;
    StdExtra::optional<UserSteamInfo> m_steamInfo;
    PointerArrayModel<char, String> m_tags;
    String m_titleDisplayName;
    String m_username;
    StdExtra::optional<UserXboxInfo> m_xboxInfo;
};

struct GenericPlayFabIdPair : public PlayFabServerGenericPlayFabIdPair, public BaseModel
{
    GenericPlayFabIdPair();
    GenericPlayFabIdPair(const GenericPlayFabIdPair& src);
    GenericPlayFabIdPair(GenericPlayFabIdPair&& src);
    GenericPlayFabIdPair(const PlayFabServerGenericPlayFabIdPair& src);
    GenericPlayFabIdPair& operator=(const GenericPlayFabIdPair&) = delete;
    ~GenericPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<GenericServiceId> m_genericId;
    String m_playFabId;
};

struct GetSegmentResult : public PlayFabServerGetSegmentResult, public SerializableModel, public ApiResult
{
    GetSegmentResult();
    GetSegmentResult(const GetSegmentResult& src);
    GetSegmentResult(GetSegmentResult&& src);
    GetSegmentResult(const PlayFabServerGetSegmentResult& src);
    GetSegmentResult& operator=(const GetSegmentResult&) = delete;
    ~GetSegmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aBTestParent;
    String m_id;
    String m_name;
};

struct GetAllSegmentsResult : public PlayFabServerGetAllSegmentsResult, public BaseModel, public ApiResult
{
    GetAllSegmentsResult();
    GetAllSegmentsResult(const GetAllSegmentsResult& src);
    GetAllSegmentsResult(GetAllSegmentsResult&& src);
    GetAllSegmentsResult(const PlayFabServerGetAllSegmentsResult& src);
    GetAllSegmentsResult& operator=(const GetAllSegmentsResult&) = delete;
    ~GetAllSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGetSegmentResult, GetSegmentResult> m_segments;
};

struct GetCatalogItemsRequest : public PlayFabServerGetCatalogItemsRequest, public SerializableModel
{
    GetCatalogItemsRequest();
    GetCatalogItemsRequest(const GetCatalogItemsRequest& src);
    GetCatalogItemsRequest(GetCatalogItemsRequest&& src);
    GetCatalogItemsRequest(const PlayFabServerGetCatalogItemsRequest& src);
    GetCatalogItemsRequest& operator=(const GetCatalogItemsRequest&) = delete;
    ~GetCatalogItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
};

struct GetCatalogItemsResult : public PlayFabServerGetCatalogItemsResult, public BaseModel, public ApiResult
{
    GetCatalogItemsResult();
    GetCatalogItemsResult(const GetCatalogItemsResult& src);
    GetCatalogItemsResult(GetCatalogItemsResult&& src);
    GetCatalogItemsResult(const PlayFabServerGetCatalogItemsResult& src);
    GetCatalogItemsResult& operator=(const GetCatalogItemsResult&) = delete;
    ~GetCatalogItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerCatalogItem, CatalogItem> m_catalog;
};

struct GetCharacterDataRequest : public PlayFabServerGetCharacterDataRequest, public BaseModel
{
    GetCharacterDataRequest();
    GetCharacterDataRequest(const GetCharacterDataRequest& src);
    GetCharacterDataRequest(GetCharacterDataRequest&& src);
    GetCharacterDataRequest(const PlayFabServerGetCharacterDataRequest& src);
    GetCharacterDataRequest& operator=(const GetCharacterDataRequest&) = delete;
    ~GetCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct GetCharacterDataResult : public PlayFabServerGetCharacterDataResult, public BaseModel, public ApiResult
{
    GetCharacterDataResult();
    GetCharacterDataResult(const GetCharacterDataResult& src);
    GetCharacterDataResult(GetCharacterDataResult&& src);
    GetCharacterDataResult(const PlayFabServerGetCharacterDataResult& src);
    GetCharacterDataResult& operator=(const GetCharacterDataResult&) = delete;
    ~GetCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_data;
    String m_playFabId;
};

struct GetCharacterInventoryRequest : public PlayFabServerGetCharacterInventoryRequest, public BaseModel
{
    GetCharacterInventoryRequest();
    GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src);
    GetCharacterInventoryRequest(GetCharacterInventoryRequest&& src);
    GetCharacterInventoryRequest(const PlayFabServerGetCharacterInventoryRequest& src);
    GetCharacterInventoryRequest& operator=(const GetCharacterInventoryRequest&) = delete;
    ~GetCharacterInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct GetCharacterInventoryResult : public PlayFabServerGetCharacterInventoryResult, public BaseModel, public ApiResult
{
    GetCharacterInventoryResult();
    GetCharacterInventoryResult(const GetCharacterInventoryResult& src);
    GetCharacterInventoryResult(GetCharacterInventoryResult&& src);
    GetCharacterInventoryResult(const PlayFabServerGetCharacterInventoryResult& src);
    GetCharacterInventoryResult& operator=(const GetCharacterInventoryResult&) = delete;
    ~GetCharacterInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GetCharacterLeaderboardRequest : public PlayFabServerGetCharacterLeaderboardRequest, public SerializableModel
{
    GetCharacterLeaderboardRequest();
    GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src);
    GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest&& src);
    GetCharacterLeaderboardRequest(const PlayFabServerGetCharacterLeaderboardRequest& src);
    GetCharacterLeaderboardRequest& operator=(const GetCharacterLeaderboardRequest&) = delete;
    ~GetCharacterLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterType;
    String m_statisticName;
};

struct GetCharacterLeaderboardResult : public PlayFabServerGetCharacterLeaderboardResult, public BaseModel, public ApiResult
{
    GetCharacterLeaderboardResult();
    GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src);
    GetCharacterLeaderboardResult(GetCharacterLeaderboardResult&& src);
    GetCharacterLeaderboardResult(const PlayFabServerGetCharacterLeaderboardResult& src);
    GetCharacterLeaderboardResult& operator=(const GetCharacterLeaderboardResult&) = delete;
    ~GetCharacterLeaderboardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct GetCharacterStatisticsRequest : public PlayFabServerGetCharacterStatisticsRequest, public SerializableModel
{
    GetCharacterStatisticsRequest();
    GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src);
    GetCharacterStatisticsRequest(GetCharacterStatisticsRequest&& src);
    GetCharacterStatisticsRequest(const PlayFabServerGetCharacterStatisticsRequest& src);
    GetCharacterStatisticsRequest& operator=(const GetCharacterStatisticsRequest&) = delete;
    ~GetCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_playFabId;
};

struct GetCharacterStatisticsResult : public PlayFabServerGetCharacterStatisticsResult, public BaseModel, public ApiResult
{
    GetCharacterStatisticsResult();
    GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src);
    GetCharacterStatisticsResult(GetCharacterStatisticsResult&& src);
    GetCharacterStatisticsResult(const PlayFabServerGetCharacterStatisticsResult& src);
    GetCharacterStatisticsResult& operator=(const GetCharacterStatisticsResult&) = delete;
    ~GetCharacterStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
    String m_playFabId;
};

struct GetContentDownloadUrlRequest : public PlayFabServerGetContentDownloadUrlRequest, public BaseModel
{
    GetContentDownloadUrlRequest();
    GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src);
    GetContentDownloadUrlRequest(GetContentDownloadUrlRequest&& src);
    GetContentDownloadUrlRequest(const PlayFabServerGetContentDownloadUrlRequest& src);
    GetContentDownloadUrlRequest& operator=(const GetContentDownloadUrlRequest&) = delete;
    ~GetContentDownloadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_httpMethod;
    String m_key;
    StdExtra::optional<bool> m_thruCDN;
};

struct GetContentDownloadUrlResult : public PlayFabServerGetContentDownloadUrlResult, public SerializableModel, public ApiResult
{
    GetContentDownloadUrlResult();
    GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src);
    GetContentDownloadUrlResult(GetContentDownloadUrlResult&& src);
    GetContentDownloadUrlResult(const PlayFabServerGetContentDownloadUrlResult& src);
    GetContentDownloadUrlResult& operator=(const GetContentDownloadUrlResult&) = delete;
    ~GetContentDownloadUrlResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

struct PlayerProfileViewConstraints : public PlayFabServerPlayerProfileViewConstraints, public SerializableModel
{
    PlayerProfileViewConstraints();
    PlayerProfileViewConstraints(const PlayerProfileViewConstraints&) = default;
    PlayerProfileViewConstraints(PlayerProfileViewConstraints&&) = default;
    PlayerProfileViewConstraints(const PlayFabServerPlayerProfileViewConstraints& src);
    PlayerProfileViewConstraints& operator=(const PlayerProfileViewConstraints&) = delete;
    ~PlayerProfileViewConstraints() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetFriendLeaderboardRequest : public PlayFabServerGetFriendLeaderboardRequest, public BaseModel
{
    GetFriendLeaderboardRequest();
    GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src);
    GetFriendLeaderboardRequest(GetFriendLeaderboardRequest&& src);
    GetFriendLeaderboardRequest(const PlayFabServerGetFriendLeaderboardRequest& src);
    GetFriendLeaderboardRequest& operator=(const GetFriendLeaderboardRequest&) = delete;
    ~GetFriendLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
    String m_xboxToken;
};

struct GetFriendsListRequest : public PlayFabServerGetFriendsListRequest, public BaseModel
{
    GetFriendsListRequest();
    GetFriendsListRequest(const GetFriendsListRequest& src);
    GetFriendsListRequest(GetFriendsListRequest&& src);
    GetFriendsListRequest(const PlayFabServerGetFriendsListRequest& src);
    GetFriendsListRequest& operator=(const GetFriendsListRequest&) = delete;
    ~GetFriendsListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_xboxToken;
};

struct GetFriendsListResult : public PlayFabServerGetFriendsListResult, public BaseModel, public ApiResult
{
    GetFriendsListResult();
    GetFriendsListResult(const GetFriendsListResult& src);
    GetFriendsListResult(GetFriendsListResult&& src);
    GetFriendsListResult(const PlayFabServerGetFriendsListResult& src);
    GetFriendsListResult& operator=(const GetFriendsListResult&) = delete;
    ~GetFriendsListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerFriendInfo, FriendInfo> m_friends;
};

struct GetLeaderboardAroundCharacterRequest : public PlayFabServerGetLeaderboardAroundCharacterRequest, public SerializableModel
{
    GetLeaderboardAroundCharacterRequest();
    GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src);
    GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest&& src);
    GetLeaderboardAroundCharacterRequest(const PlayFabServerGetLeaderboardAroundCharacterRequest& src);
    GetLeaderboardAroundCharacterRequest& operator=(const GetLeaderboardAroundCharacterRequest&) = delete;
    ~GetLeaderboardAroundCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterType;
    String m_playFabId;
    String m_statisticName;
};

struct GetLeaderboardAroundCharacterResult : public PlayFabServerGetLeaderboardAroundCharacterResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundCharacterResult();
    GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src);
    GetLeaderboardAroundCharacterResult(GetLeaderboardAroundCharacterResult&& src);
    GetLeaderboardAroundCharacterResult(const PlayFabServerGetLeaderboardAroundCharacterResult& src);
    GetLeaderboardAroundCharacterResult& operator=(const GetLeaderboardAroundCharacterResult&) = delete;
    ~GetLeaderboardAroundCharacterResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct GetLeaderboardAroundUserRequest : public PlayFabServerGetLeaderboardAroundUserRequest, public BaseModel
{
    GetLeaderboardAroundUserRequest();
    GetLeaderboardAroundUserRequest(const GetLeaderboardAroundUserRequest& src);
    GetLeaderboardAroundUserRequest(GetLeaderboardAroundUserRequest&& src);
    GetLeaderboardAroundUserRequest(const PlayFabServerGetLeaderboardAroundUserRequest& src);
    GetLeaderboardAroundUserRequest& operator=(const GetLeaderboardAroundUserRequest&) = delete;
    ~GetLeaderboardAroundUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct PlayerLeaderboardEntry : public PlayFabServerPlayerLeaderboardEntry, public BaseModel
{
    PlayerLeaderboardEntry();
    PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src);
    PlayerLeaderboardEntry(PlayerLeaderboardEntry&& src);
    PlayerLeaderboardEntry(const PlayFabServerPlayerLeaderboardEntry& src);
    PlayerLeaderboardEntry& operator=(const PlayerLeaderboardEntry&) = delete;
    ~PlayerLeaderboardEntry() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_displayName;
    String m_playFabId;
    StdExtra::optional<PlayerProfileModel> m_profile;
};

struct GetLeaderboardAroundUserResult : public PlayFabServerGetLeaderboardAroundUserResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundUserResult();
    GetLeaderboardAroundUserResult(const GetLeaderboardAroundUserResult& src);
    GetLeaderboardAroundUserResult(GetLeaderboardAroundUserResult&& src);
    GetLeaderboardAroundUserResult(const PlayFabServerGetLeaderboardAroundUserResult& src);
    GetLeaderboardAroundUserResult& operator=(const GetLeaderboardAroundUserResult&) = delete;
    ~GetLeaderboardAroundUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetLeaderboardForUsersCharactersRequest : public PlayFabServerGetLeaderboardForUsersCharactersRequest, public SerializableModel
{
    GetLeaderboardForUsersCharactersRequest();
    GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src);
    GetLeaderboardForUsersCharactersRequest(GetLeaderboardForUsersCharactersRequest&& src);
    GetLeaderboardForUsersCharactersRequest(const PlayFabServerGetLeaderboardForUsersCharactersRequest& src);
    GetLeaderboardForUsersCharactersRequest& operator=(const GetLeaderboardForUsersCharactersRequest&) = delete;
    ~GetLeaderboardForUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_statisticName;
};

struct GetLeaderboardForUsersCharactersResult : public PlayFabServerGetLeaderboardForUsersCharactersResult, public BaseModel, public ApiResult
{
    GetLeaderboardForUsersCharactersResult();
    GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src);
    GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult&& src);
    GetLeaderboardForUsersCharactersResult(const PlayFabServerGetLeaderboardForUsersCharactersResult& src);
    GetLeaderboardForUsersCharactersResult& operator=(const GetLeaderboardForUsersCharactersResult&) = delete;
    ~GetLeaderboardForUsersCharactersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct GetLeaderboardRequest : public PlayFabServerGetLeaderboardRequest, public BaseModel
{
    GetLeaderboardRequest();
    GetLeaderboardRequest(const GetLeaderboardRequest& src);
    GetLeaderboardRequest(GetLeaderboardRequest&& src);
    GetLeaderboardRequest(const PlayFabServerGetLeaderboardRequest& src);
    GetLeaderboardRequest& operator=(const GetLeaderboardRequest&) = delete;
    ~GetLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct GetLeaderboardResult : public PlayFabServerGetLeaderboardResult, public BaseModel, public ApiResult
{
    GetLeaderboardResult();
    GetLeaderboardResult(const GetLeaderboardResult& src);
    GetLeaderboardResult(GetLeaderboardResult&& src);
    GetLeaderboardResult(const PlayFabServerGetLeaderboardResult& src);
    GetLeaderboardResult& operator=(const GetLeaderboardResult&) = delete;
    ~GetLeaderboardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetPlayerCombinedInfoRequestParams : public PlayFabServerGetPlayerCombinedInfoRequestParams, public BaseModel
{
    GetPlayerCombinedInfoRequestParams();
    GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src);
    GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams&& src);
    GetPlayerCombinedInfoRequestParams(const PlayFabServerGetPlayerCombinedInfoRequestParams& src);
    GetPlayerCombinedInfoRequestParams& operator=(const GetPlayerCombinedInfoRequestParams&) = delete;
    ~GetPlayerCombinedInfoRequestParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playerStatisticNames;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    PointerArrayModel<char, String> m_titleDataKeys;
    PointerArrayModel<char, String> m_userDataKeys;
    PointerArrayModel<char, String> m_userReadOnlyDataKeys;
};

struct GetPlayerCombinedInfoRequest : public PlayFabServerGetPlayerCombinedInfoRequest, public BaseModel
{
    GetPlayerCombinedInfoRequest();
    GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src);
    GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest&& src);
    GetPlayerCombinedInfoRequest(const PlayFabServerGetPlayerCombinedInfoRequest& src);
    GetPlayerCombinedInfoRequest& operator=(const GetPlayerCombinedInfoRequest&) = delete;
    ~GetPlayerCombinedInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    GetPlayerCombinedInfoRequestParams m_infoRequestParameters;
    String m_playFabId;
};

struct GetPlayerCombinedInfoResult : public PlayFabServerGetPlayerCombinedInfoResult, public BaseModel, public ApiResult
{
    GetPlayerCombinedInfoResult();
    GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src);
    GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult&& src);
    GetPlayerCombinedInfoResult(const PlayFabServerGetPlayerCombinedInfoResult& src);
    GetPlayerCombinedInfoResult& operator=(const GetPlayerCombinedInfoResult&) = delete;
    ~GetPlayerCombinedInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> m_infoResultPayload;
    String m_playFabId;
};

struct GetPlayerProfileRequest : public PlayFabServerGetPlayerProfileRequest, public BaseModel
{
    GetPlayerProfileRequest();
    GetPlayerProfileRequest(const GetPlayerProfileRequest& src);
    GetPlayerProfileRequest(GetPlayerProfileRequest&& src);
    GetPlayerProfileRequest(const PlayFabServerGetPlayerProfileRequest& src);
    GetPlayerProfileRequest& operator=(const GetPlayerProfileRequest&) = delete;
    ~GetPlayerProfileRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
};

struct GetPlayerProfileResult : public PlayFabServerGetPlayerProfileResult, public BaseModel, public ApiResult
{
    GetPlayerProfileResult();
    GetPlayerProfileResult(const GetPlayerProfileResult& src);
    GetPlayerProfileResult(GetPlayerProfileResult&& src);
    GetPlayerProfileResult(const PlayFabServerGetPlayerProfileResult& src);
    GetPlayerProfileResult& operator=(const GetPlayerProfileResult&) = delete;
    ~GetPlayerProfileResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerProfileModel> m_playerProfile;
};

struct GetPlayerSegmentsResult : public PlayFabServerGetPlayerSegmentsResult, public BaseModel, public ApiResult
{
    GetPlayerSegmentsResult();
    GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src);
    GetPlayerSegmentsResult(const PlayFabServerGetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult& operator=(const GetPlayerSegmentsResult&) = delete;
    ~GetPlayerSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGetSegmentResult, GetSegmentResult> m_segments;
};

struct GetPlayersInSegmentRequest : public PlayFabServerGetPlayersInSegmentRequest, public BaseModel
{
    GetPlayersInSegmentRequest();
    GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src);
    GetPlayersInSegmentRequest(GetPlayersInSegmentRequest&& src);
    GetPlayersInSegmentRequest(const PlayFabServerGetPlayersInSegmentRequest& src);
    GetPlayersInSegmentRequest& operator=(const GetPlayersInSegmentRequest&) = delete;
    ~GetPlayersInSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_continuationToken;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<uint32_t> m_maxBatchSize;
    StdExtra::optional<uint32_t> m_secondsToLive;
    String m_segmentId;
};

struct PlayerLinkedAccount : public PlayFabServerPlayerLinkedAccount, public BaseModel
{
    PlayerLinkedAccount();
    PlayerLinkedAccount(const PlayerLinkedAccount& src);
    PlayerLinkedAccount(PlayerLinkedAccount&& src);
    PlayerLinkedAccount(const PlayFabServerPlayerLinkedAccount& src);
    PlayerLinkedAccount& operator=(const PlayerLinkedAccount&) = delete;
    ~PlayerLinkedAccount() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_email;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_platform;
    String m_platformUserId;
    String m_username;
};

struct PlayerLocation : public PlayFabServerPlayerLocation, public BaseModel
{
    PlayerLocation();
    PlayerLocation(const PlayerLocation& src);
    PlayerLocation(PlayerLocation&& src);
    PlayerLocation(const PlayFabServerPlayerLocation& src);
    PlayerLocation& operator=(const PlayerLocation&) = delete;
    ~PlayerLocation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_city;
    StdExtra::optional<double> m_latitude;
    StdExtra::optional<double> m_longitude;
};

struct PlayerStatistic : public PlayFabServerPlayerStatistic, public SerializableModel
{
    PlayerStatistic();
    PlayerStatistic(const PlayerStatistic& src);
    PlayerStatistic(PlayerStatistic&& src);
    PlayerStatistic(const PlayFabServerPlayerStatistic& src);
    PlayerStatistic& operator=(const PlayerStatistic&) = delete;
    ~PlayerStatistic() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct PushNotificationRegistration : public PlayFabServerPushNotificationRegistration, public BaseModel
{
    PushNotificationRegistration();
    PushNotificationRegistration(const PushNotificationRegistration& src);
    PushNotificationRegistration(PushNotificationRegistration&& src);
    PushNotificationRegistration(const PlayFabServerPushNotificationRegistration& src);
    PushNotificationRegistration& operator=(const PushNotificationRegistration&) = delete;
    ~PushNotificationRegistration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_notificationEndpointARN;
    StdExtra::optional<PlayFabPushNotificationPlatform> m_platform;
};

struct PlayerProfile : public PlayFabServerPlayerProfile, public BaseModel
{
    PlayerProfile();
    PlayerProfile(const PlayerProfile& src);
    PlayerProfile(PlayerProfile&& src);
    PlayerProfile(const PlayFabServerPlayerProfile& src);
    PlayerProfile& operator=(const PlayerProfile&) = delete;
    ~PlayerProfile() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerAdCampaignAttribution, AdCampaignAttribution> m_adCampaignAttributions;
    String m_avatarUrl;
    StdExtra::optional<time_t> m_bannedUntil;
    PointerArrayModel<PlayFabServerContactEmailInfo, ContactEmailInfo> m_contactEmailAddresses;
    StdExtra::optional<time_t> m_created;
    String m_displayName;
    StdExtra::optional<time_t> m_lastLogin;
    PointerArrayModel<PlayFabServerPlayerLinkedAccount, PlayerLinkedAccount> m_linkedAccounts;
    AssociativeArrayModel<PlayFabServerPlayerLocationDictionaryEntry, PlayerLocation> m_locations;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_origination;
    PointerArrayModel<char, String> m_playerExperimentVariants;
    String m_playerId;
    PointerArrayModel<PlayFabServerPlayerStatistic, PlayerStatistic> m_playerStatistics;
    String m_publisherId;
    PointerArrayModel<PlayFabServerPushNotificationRegistration, PushNotificationRegistration> m_pushNotificationRegistrations;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_statistics;
    PointerArrayModel<char, String> m_tags;
    String m_titleId;
    StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_valuesToDate;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrencyBalances;
};

struct GetPlayersInSegmentResult : public PlayFabServerGetPlayersInSegmentResult, public BaseModel, public ApiResult
{
    GetPlayersInSegmentResult();
    GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src);
    GetPlayersInSegmentResult(GetPlayersInSegmentResult&& src);
    GetPlayersInSegmentResult(const PlayFabServerGetPlayersInSegmentResult& src);
    GetPlayersInSegmentResult& operator=(const GetPlayersInSegmentResult&) = delete;
    ~GetPlayersInSegmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_continuationToken;
    PointerArrayModel<PlayFabServerPlayerProfile, PlayerProfile> m_playerProfiles;
};

struct GetPlayersSegmentsRequest : public PlayFabServerGetPlayersSegmentsRequest, public BaseModel
{
    GetPlayersSegmentsRequest();
    GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src);
    GetPlayersSegmentsRequest(GetPlayersSegmentsRequest&& src);
    GetPlayersSegmentsRequest(const PlayFabServerGetPlayersSegmentsRequest& src);
    GetPlayersSegmentsRequest& operator=(const GetPlayersSegmentsRequest&) = delete;
    ~GetPlayersSegmentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct StatisticNameVersion : public PlayFabServerStatisticNameVersion, public SerializableModel
{
    StatisticNameVersion();
    StatisticNameVersion(const StatisticNameVersion& src);
    StatisticNameVersion(StatisticNameVersion&& src);
    StatisticNameVersion(const PlayFabServerStatisticNameVersion& src);
    StatisticNameVersion& operator=(const StatisticNameVersion&) = delete;
    ~StatisticNameVersion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct GetPlayerStatisticsRequest : public PlayFabServerGetPlayerStatisticsRequest, public BaseModel
{
    GetPlayerStatisticsRequest();
    GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src);
    GetPlayerStatisticsRequest(GetPlayerStatisticsRequest&& src);
    GetPlayerStatisticsRequest(const PlayFabServerGetPlayerStatisticsRequest& src);
    GetPlayerStatisticsRequest& operator=(const GetPlayerStatisticsRequest&) = delete;
    ~GetPlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    PointerArrayModel<char, String> m_statisticNames;
    PointerArrayModel<PlayFabServerStatisticNameVersion, StatisticNameVersion> m_statisticNameVersions;
};

struct GetPlayerStatisticsResult : public PlayFabServerGetPlayerStatisticsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticsResult();
    GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src);
    GetPlayerStatisticsResult(GetPlayerStatisticsResult&& src);
    GetPlayerStatisticsResult(const PlayFabServerGetPlayerStatisticsResult& src);
    GetPlayerStatisticsResult& operator=(const GetPlayerStatisticsResult&) = delete;
    ~GetPlayerStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_playFabId;
    PointerArrayModel<PlayFabStatisticValue, StatisticValue> m_statistics;
};

struct GetPlayerStatisticVersionsRequest : public PlayFabServerGetPlayerStatisticVersionsRequest, public BaseModel
{
    GetPlayerStatisticVersionsRequest();
    GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src);
    GetPlayerStatisticVersionsRequest(const PlayFabServerGetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest& operator=(const GetPlayerStatisticVersionsRequest&) = delete;
    ~GetPlayerStatisticVersionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
};

struct PlayerStatisticVersion : public PlayFabServerPlayerStatisticVersion, public BaseModel
{
    PlayerStatisticVersion();
    PlayerStatisticVersion(const PlayerStatisticVersion& src);
    PlayerStatisticVersion(PlayerStatisticVersion&& src);
    PlayerStatisticVersion(const PlayFabServerPlayerStatisticVersion& src);
    PlayerStatisticVersion& operator=(const PlayerStatisticVersion&) = delete;
    ~PlayerStatisticVersion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_deactivationTime;
    StdExtra::optional<time_t> m_scheduledActivationTime;
    StdExtra::optional<time_t> m_scheduledDeactivationTime;
    String m_statisticName;
};

struct GetPlayerStatisticVersionsResult : public PlayFabServerGetPlayerStatisticVersionsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticVersionsResult();
    GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src);
    GetPlayerStatisticVersionsResult(const PlayFabServerGetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult& operator=(const GetPlayerStatisticVersionsResult&) = delete;
    ~GetPlayerStatisticVersionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
};

struct GetPlayerTagsRequest : public PlayFabServerGetPlayerTagsRequest, public BaseModel
{
    GetPlayerTagsRequest();
    GetPlayerTagsRequest(const GetPlayerTagsRequest& src);
    GetPlayerTagsRequest(GetPlayerTagsRequest&& src);
    GetPlayerTagsRequest(const PlayFabServerGetPlayerTagsRequest& src);
    GetPlayerTagsRequest& operator=(const GetPlayerTagsRequest&) = delete;
    ~GetPlayerTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playfabNamespace;
    String m_playFabId;
};

struct GetPlayerTagsResult : public PlayFabServerGetPlayerTagsResult, public BaseModel, public ApiResult
{
    GetPlayerTagsResult();
    GetPlayerTagsResult(const GetPlayerTagsResult& src);
    GetPlayerTagsResult(GetPlayerTagsResult&& src);
    GetPlayerTagsResult(const PlayFabServerGetPlayerTagsResult& src);
    GetPlayerTagsResult& operator=(const GetPlayerTagsResult&) = delete;
    ~GetPlayerTagsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_playFabId;
    PointerArrayModel<char, String> m_tags;
};

struct GetPlayFabIDsFromFacebookIDsRequest : public PlayFabServerGetPlayFabIDsFromFacebookIDsRequest, public BaseModel
{
    GetPlayFabIDsFromFacebookIDsRequest();
    GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src);
    GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest&& src);
    GetPlayFabIDsFromFacebookIDsRequest(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& src);
    GetPlayFabIDsFromFacebookIDsRequest& operator=(const GetPlayFabIDsFromFacebookIDsRequest&) = delete;
    ~GetPlayFabIDsFromFacebookIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_facebookIDs;
};

struct GetPlayFabIDsFromFacebookIDsResult : public PlayFabServerGetPlayFabIDsFromFacebookIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromFacebookIDsResult();
    GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src);
    GetPlayFabIDsFromFacebookIDsResult(GetPlayFabIDsFromFacebookIDsResult&& src);
    GetPlayFabIDsFromFacebookIDsResult(const PlayFabServerGetPlayFabIDsFromFacebookIDsResult& src);
    GetPlayFabIDsFromFacebookIDsResult& operator=(const GetPlayFabIDsFromFacebookIDsResult&) = delete;
    ~GetPlayFabIDsFromFacebookIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerFacebookPlayFabIdPair, FacebookPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest, public BaseModel
{
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest();
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest&& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest& operator=(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest&) = delete;
    ~GetPlayFabIDsFromFacebookInstantGamesIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_facebookInstantGamesIds;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromFacebookInstantGamesIdsResult();
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(GetPlayFabIDsFromFacebookInstantGamesIdsResult&& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult& operator=(const GetPlayFabIDsFromFacebookInstantGamesIdsResult&) = delete;
    ~GetPlayFabIDsFromFacebookInstantGamesIdsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerFacebookInstantGamesPlayFabIdPair, FacebookInstantGamesPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGenericIDsRequest : public PlayFabServerGetPlayFabIDsFromGenericIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGenericIDsRequest();
    GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src);
    GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest&& src);
    GetPlayFabIDsFromGenericIDsRequest(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& src);
    GetPlayFabIDsFromGenericIDsRequest& operator=(const GetPlayFabIDsFromGenericIDsRequest&) = delete;
    ~GetPlayFabIDsFromGenericIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGenericServiceId, GenericServiceId> m_genericIDs;
};

struct GetPlayFabIDsFromGenericIDsResult : public PlayFabServerGetPlayFabIDsFromGenericIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGenericIDsResult();
    GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src);
    GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult&& src);
    GetPlayFabIDsFromGenericIDsResult(const PlayFabServerGetPlayFabIDsFromGenericIDsResult& src);
    GetPlayFabIDsFromGenericIDsResult& operator=(const GetPlayFabIDsFromGenericIDsResult&) = delete;
    ~GetPlayFabIDsFromGenericIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGenericPlayFabIdPair, GenericPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, public BaseModel
{
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest();
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& operator=(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&) = delete;
    ~GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_nintendoSwitchDeviceIds;
};

struct NintendoSwitchPlayFabIdPair : public PlayFabServerNintendoSwitchPlayFabIdPair, public SerializableModel
{
    NintendoSwitchPlayFabIdPair();
    NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src);
    NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair&& src);
    NintendoSwitchPlayFabIdPair(const PlayFabServerNintendoSwitchPlayFabIdPair& src);
    NintendoSwitchPlayFabIdPair& operator=(const NintendoSwitchPlayFabIdPair&) = delete;
    ~NintendoSwitchPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchDeviceId;
    String m_playFabId;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult();
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& operator=(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&) = delete;
    ~GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerNintendoSwitchPlayFabIdPair, NintendoSwitchPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest : public PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest, public BaseModel
{
    GetPlayFabIDsFromPSNAccountIDsRequest();
    GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src);
    GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest&& src);
    GetPlayFabIDsFromPSNAccountIDsRequest(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& src);
    GetPlayFabIDsFromPSNAccountIDsRequest& operator=(const GetPlayFabIDsFromPSNAccountIDsRequest&) = delete;
    ~GetPlayFabIDsFromPSNAccountIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_issuerId;
    PointerArrayModel<char, String> m_PSNAccountIDs;
};

struct PSNAccountPlayFabIdPair : public PlayFabServerPSNAccountPlayFabIdPair, public SerializableModel
{
    PSNAccountPlayFabIdPair();
    PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src);
    PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair&& src);
    PSNAccountPlayFabIdPair(const PlayFabServerPSNAccountPlayFabIdPair& src);
    PSNAccountPlayFabIdPair& operator=(const PSNAccountPlayFabIdPair&) = delete;
    ~PSNAccountPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_PSNAccountId;
};

struct GetPlayFabIDsFromPSNAccountIDsResult : public PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromPSNAccountIDsResult();
    GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src);
    GetPlayFabIDsFromPSNAccountIDsResult(GetPlayFabIDsFromPSNAccountIDsResult&& src);
    GetPlayFabIDsFromPSNAccountIDsResult(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult& src);
    GetPlayFabIDsFromPSNAccountIDsResult& operator=(const GetPlayFabIDsFromPSNAccountIDsResult&) = delete;
    ~GetPlayFabIDsFromPSNAccountIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerPSNAccountPlayFabIdPair, PSNAccountPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromSteamIDsRequest : public PlayFabServerGetPlayFabIDsFromSteamIDsRequest, public BaseModel
{
    GetPlayFabIDsFromSteamIDsRequest();
    GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src);
    GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest&& src);
    GetPlayFabIDsFromSteamIDsRequest(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& src);
    GetPlayFabIDsFromSteamIDsRequest& operator=(const GetPlayFabIDsFromSteamIDsRequest&) = delete;
    ~GetPlayFabIDsFromSteamIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_steamStringIDs;
};

struct SteamPlayFabIdPair : public PlayFabServerSteamPlayFabIdPair, public SerializableModel
{
    SteamPlayFabIdPair();
    SteamPlayFabIdPair(const SteamPlayFabIdPair& src);
    SteamPlayFabIdPair(SteamPlayFabIdPair&& src);
    SteamPlayFabIdPair(const PlayFabServerSteamPlayFabIdPair& src);
    SteamPlayFabIdPair& operator=(const SteamPlayFabIdPair&) = delete;
    ~SteamPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_steamStringId;
};

struct GetPlayFabIDsFromSteamIDsResult : public PlayFabServerGetPlayFabIDsFromSteamIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromSteamIDsResult();
    GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src);
    GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult&& src);
    GetPlayFabIDsFromSteamIDsResult(const PlayFabServerGetPlayFabIDsFromSteamIDsResult& src);
    GetPlayFabIDsFromSteamIDsResult& operator=(const GetPlayFabIDsFromSteamIDsResult&) = delete;
    ~GetPlayFabIDsFromSteamIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerSteamPlayFabIdPair, SteamPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromXboxLiveIDsRequest : public PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest, public BaseModel
{
    GetPlayFabIDsFromXboxLiveIDsRequest();
    GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src);
    GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest&& src);
    GetPlayFabIDsFromXboxLiveIDsRequest(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& src);
    GetPlayFabIDsFromXboxLiveIDsRequest& operator=(const GetPlayFabIDsFromXboxLiveIDsRequest&) = delete;
    ~GetPlayFabIDsFromXboxLiveIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_sandbox;
    PointerArrayModel<char, String> m_xboxLiveAccountIDs;
};

struct XboxLiveAccountPlayFabIdPair : public PlayFabServerXboxLiveAccountPlayFabIdPair, public SerializableModel
{
    XboxLiveAccountPlayFabIdPair();
    XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src);
    XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair&& src);
    XboxLiveAccountPlayFabIdPair(const PlayFabServerXboxLiveAccountPlayFabIdPair& src);
    XboxLiveAccountPlayFabIdPair& operator=(const XboxLiveAccountPlayFabIdPair&) = delete;
    ~XboxLiveAccountPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_xboxLiveAccountId;
};

struct GetPlayFabIDsFromXboxLiveIDsResult : public PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromXboxLiveIDsResult();
    GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src);
    GetPlayFabIDsFromXboxLiveIDsResult(GetPlayFabIDsFromXboxLiveIDsResult&& src);
    GetPlayFabIDsFromXboxLiveIDsResult(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult& src);
    GetPlayFabIDsFromXboxLiveIDsResult& operator=(const GetPlayFabIDsFromXboxLiveIDsResult&) = delete;
    ~GetPlayFabIDsFromXboxLiveIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerXboxLiveAccountPlayFabIdPair, XboxLiveAccountPlayFabIdPair> m_data;
};

struct GetPublisherDataRequest : public PlayFabServerGetPublisherDataRequest, public BaseModel
{
    GetPublisherDataRequest();
    GetPublisherDataRequest(const GetPublisherDataRequest& src);
    GetPublisherDataRequest(GetPublisherDataRequest&& src);
    GetPublisherDataRequest(const PlayFabServerGetPublisherDataRequest& src);
    GetPublisherDataRequest& operator=(const GetPublisherDataRequest&) = delete;
    ~GetPublisherDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
};

struct GetPublisherDataResult : public PlayFabServerGetPublisherDataResult, public BaseModel, public ApiResult
{
    GetPublisherDataResult();
    GetPublisherDataResult(const GetPublisherDataResult& src);
    GetPublisherDataResult(GetPublisherDataResult&& src);
    GetPublisherDataResult(const PlayFabServerGetPublisherDataResult& src);
    GetPublisherDataResult& operator=(const GetPublisherDataResult&) = delete;
    ~GetPublisherDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct GetRandomResultTablesRequest : public PlayFabServerGetRandomResultTablesRequest, public BaseModel
{
    GetRandomResultTablesRequest();
    GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src);
    GetRandomResultTablesRequest(const PlayFabServerGetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest& operator=(const GetRandomResultTablesRequest&) = delete;
    ~GetRandomResultTablesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    PointerArrayModel<char, String> m_tableIDs;
};

struct ResultTableNode : public PlayFabServerResultTableNode, public SerializableModel
{
    ResultTableNode();
    ResultTableNode(const ResultTableNode& src);
    ResultTableNode(ResultTableNode&& src);
    ResultTableNode(const PlayFabServerResultTableNode& src);
    ResultTableNode& operator=(const ResultTableNode&) = delete;
    ~ResultTableNode() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_resultItem;
};

struct RandomResultTableListing : public PlayFabServerRandomResultTableListing, public BaseModel
{
    RandomResultTableListing();
    RandomResultTableListing(const RandomResultTableListing& src);
    RandomResultTableListing(RandomResultTableListing&& src);
    RandomResultTableListing(const PlayFabServerRandomResultTableListing& src);
    RandomResultTableListing& operator=(const RandomResultTableListing&) = delete;
    ~RandomResultTableListing() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    PointerArrayModel<PlayFabServerResultTableNode, ResultTableNode> m_nodes;
    String m_tableId;
};

struct GetRandomResultTablesResult : public PlayFabServerGetRandomResultTablesResult, public BaseModel, public ApiResult
{
    GetRandomResultTablesResult();
    GetRandomResultTablesResult(const GetRandomResultTablesResult& src);
    GetRandomResultTablesResult(GetRandomResultTablesResult&& src);
    GetRandomResultTablesResult(const PlayFabServerGetRandomResultTablesResult& src);
    GetRandomResultTablesResult& operator=(const GetRandomResultTablesResult&) = delete;
    ~GetRandomResultTablesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabServerRandomResultTableListingDictionaryEntry, RandomResultTableListing> m_tables;
};

struct GetServerCustomIDsFromPlayFabIDsRequest : public PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest, public BaseModel
{
    GetServerCustomIDsFromPlayFabIDsRequest();
    GetServerCustomIDsFromPlayFabIDsRequest(const GetServerCustomIDsFromPlayFabIDsRequest& src);
    GetServerCustomIDsFromPlayFabIDsRequest(GetServerCustomIDsFromPlayFabIDsRequest&& src);
    GetServerCustomIDsFromPlayFabIDsRequest(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& src);
    GetServerCustomIDsFromPlayFabIDsRequest& operator=(const GetServerCustomIDsFromPlayFabIDsRequest&) = delete;
    ~GetServerCustomIDsFromPlayFabIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIDs;
};

struct ServerCustomIDPlayFabIDPair : public PlayFabServerServerCustomIDPlayFabIDPair, public SerializableModel
{
    ServerCustomIDPlayFabIDPair();
    ServerCustomIDPlayFabIDPair(const ServerCustomIDPlayFabIDPair& src);
    ServerCustomIDPlayFabIDPair(ServerCustomIDPlayFabIDPair&& src);
    ServerCustomIDPlayFabIDPair(const PlayFabServerServerCustomIDPlayFabIDPair& src);
    ServerCustomIDPlayFabIDPair& operator=(const ServerCustomIDPlayFabIDPair&) = delete;
    ~ServerCustomIDPlayFabIDPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_serverCustomId;
};

struct GetServerCustomIDsFromPlayFabIDsResult : public PlayFabServerGetServerCustomIDsFromPlayFabIDsResult, public BaseModel, public ApiResult
{
    GetServerCustomIDsFromPlayFabIDsResult();
    GetServerCustomIDsFromPlayFabIDsResult(const GetServerCustomIDsFromPlayFabIDsResult& src);
    GetServerCustomIDsFromPlayFabIDsResult(GetServerCustomIDsFromPlayFabIDsResult&& src);
    GetServerCustomIDsFromPlayFabIDsResult(const PlayFabServerGetServerCustomIDsFromPlayFabIDsResult& src);
    GetServerCustomIDsFromPlayFabIDsResult& operator=(const GetServerCustomIDsFromPlayFabIDsResult&) = delete;
    ~GetServerCustomIDsFromPlayFabIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerServerCustomIDPlayFabIDPair, ServerCustomIDPlayFabIDPair> m_data;
};

struct GetSharedGroupDataRequest : public PlayFabServerGetSharedGroupDataRequest, public BaseModel
{
    GetSharedGroupDataRequest();
    GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src);
    GetSharedGroupDataRequest(GetSharedGroupDataRequest&& src);
    GetSharedGroupDataRequest(const PlayFabServerGetSharedGroupDataRequest& src);
    GetSharedGroupDataRequest& operator=(const GetSharedGroupDataRequest&) = delete;
    ~GetSharedGroupDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_getMembers;
    PointerArrayModel<char, String> m_keys;
    String m_sharedGroupId;
};

struct SharedGroupDataRecord : public PlayFabServerSharedGroupDataRecord, public BaseModel
{
    SharedGroupDataRecord();
    SharedGroupDataRecord(const SharedGroupDataRecord& src);
    SharedGroupDataRecord(SharedGroupDataRecord&& src);
    SharedGroupDataRecord(const PlayFabServerSharedGroupDataRecord& src);
    SharedGroupDataRecord& operator=(const SharedGroupDataRecord&) = delete;
    ~SharedGroupDataRecord() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_lastUpdatedBy;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_value;
};

struct GetSharedGroupDataResult : public PlayFabServerGetSharedGroupDataResult, public BaseModel, public ApiResult
{
    GetSharedGroupDataResult();
    GetSharedGroupDataResult(const GetSharedGroupDataResult& src);
    GetSharedGroupDataResult(GetSharedGroupDataResult&& src);
    GetSharedGroupDataResult(const PlayFabServerGetSharedGroupDataResult& src);
    GetSharedGroupDataResult& operator=(const GetSharedGroupDataResult&) = delete;
    ~GetSharedGroupDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabServerSharedGroupDataRecordDictionaryEntry, SharedGroupDataRecord> m_data;
    PointerArrayModel<char, String> m_members;
};

struct StoreMarketingModel : public PlayFabServerStoreMarketingModel, public BaseModel
{
    StoreMarketingModel();
    StoreMarketingModel(const StoreMarketingModel& src);
    StoreMarketingModel(StoreMarketingModel&& src);
    StoreMarketingModel(const PlayFabServerStoreMarketingModel& src);
    StoreMarketingModel& operator=(const StoreMarketingModel&) = delete;
    ~StoreMarketingModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_displayName;
    JsonObject m_metadata;
};

struct StoreItem : public PlayFabServerStoreItem, public BaseModel
{
    StoreItem();
    StoreItem(const StoreItem& src);
    StoreItem(StoreItem&& src);
    StoreItem(const PlayFabServerStoreItem& src);
    StoreItem& operator=(const StoreItem&) = delete;
    ~StoreItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_customData;
    StdExtra::optional<uint32_t> m_displayPosition;
    String m_itemId;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct GetStoreItemsResult : public PlayFabServerGetStoreItemsResult, public BaseModel, public ApiResult
{
    GetStoreItemsResult();
    GetStoreItemsResult(const GetStoreItemsResult& src);
    GetStoreItemsResult(GetStoreItemsResult&& src);
    GetStoreItemsResult(const PlayFabServerGetStoreItemsResult& src);
    GetStoreItemsResult& operator=(const GetStoreItemsResult&) = delete;
    ~GetStoreItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    StdExtra::optional<StoreMarketingModel> m_marketingData;
    StdExtra::optional<PlayFabServerSourceType> m_source;
    PointerArrayModel<PlayFabServerStoreItem, StoreItem> m_store;
    String m_storeId;
};

struct GetStoreItemsServerRequest : public PlayFabServerGetStoreItemsServerRequest, public BaseModel
{
    GetStoreItemsServerRequest();
    GetStoreItemsServerRequest(const GetStoreItemsServerRequest& src);
    GetStoreItemsServerRequest(GetStoreItemsServerRequest&& src);
    GetStoreItemsServerRequest(const PlayFabServerGetStoreItemsServerRequest& src);
    GetStoreItemsServerRequest& operator=(const GetStoreItemsServerRequest&) = delete;
    ~GetStoreItemsServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_storeId;
};

struct GetTimeResult : public PlayFabServerGetTimeResult, public SerializableModel, public ApiResult
{
    GetTimeResult();
    GetTimeResult(const GetTimeResult&) = default;
    GetTimeResult(GetTimeResult&&) = default;
    GetTimeResult(const PlayFabServerGetTimeResult& src);
    GetTimeResult& operator=(const GetTimeResult&) = delete;
    ~GetTimeResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetTitleDataRequest : public PlayFabServerGetTitleDataRequest, public BaseModel
{
    GetTitleDataRequest();
    GetTitleDataRequest(const GetTitleDataRequest& src);
    GetTitleDataRequest(GetTitleDataRequest&& src);
    GetTitleDataRequest(const PlayFabServerGetTitleDataRequest& src);
    GetTitleDataRequest& operator=(const GetTitleDataRequest&) = delete;
    ~GetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
    String m_overrideLabel;
};

struct GetTitleDataResult : public PlayFabServerGetTitleDataResult, public BaseModel, public ApiResult
{
    GetTitleDataResult();
    GetTitleDataResult(const GetTitleDataResult& src);
    GetTitleDataResult(GetTitleDataResult&& src);
    GetTitleDataResult(const PlayFabServerGetTitleDataResult& src);
    GetTitleDataResult& operator=(const GetTitleDataResult&) = delete;
    ~GetTitleDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct GetTitleNewsRequest : public PlayFabServerGetTitleNewsRequest, public BaseModel
{
    GetTitleNewsRequest();
    GetTitleNewsRequest(const GetTitleNewsRequest& src);
    GetTitleNewsRequest(GetTitleNewsRequest&& src);
    GetTitleNewsRequest(const PlayFabServerGetTitleNewsRequest& src);
    GetTitleNewsRequest& operator=(const GetTitleNewsRequest&) = delete;
    ~GetTitleNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_count;
};

struct TitleNewsItem : public PlayFabServerTitleNewsItem, public SerializableModel
{
    TitleNewsItem();
    TitleNewsItem(const TitleNewsItem& src);
    TitleNewsItem(TitleNewsItem&& src);
    TitleNewsItem(const PlayFabServerTitleNewsItem& src);
    TitleNewsItem& operator=(const TitleNewsItem&) = delete;
    ~TitleNewsItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_body;
    String m_newsId;
    String m_title;
};

struct GetTitleNewsResult : public PlayFabServerGetTitleNewsResult, public BaseModel, public ApiResult
{
    GetTitleNewsResult();
    GetTitleNewsResult(const GetTitleNewsResult& src);
    GetTitleNewsResult(GetTitleNewsResult&& src);
    GetTitleNewsResult(const PlayFabServerGetTitleNewsResult& src);
    GetTitleNewsResult& operator=(const GetTitleNewsResult&) = delete;
    ~GetTitleNewsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerTitleNewsItem, TitleNewsItem> m_news;
};

struct GetUserAccountInfoRequest : public PlayFabServerGetUserAccountInfoRequest, public SerializableModel
{
    GetUserAccountInfoRequest();
    GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src);
    GetUserAccountInfoRequest(GetUserAccountInfoRequest&& src);
    GetUserAccountInfoRequest(const PlayFabServerGetUserAccountInfoRequest& src);
    GetUserAccountInfoRequest& operator=(const GetUserAccountInfoRequest&) = delete;
    ~GetUserAccountInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetUserAccountInfoResult : public PlayFabServerGetUserAccountInfoResult, public BaseModel, public ApiResult
{
    GetUserAccountInfoResult();
    GetUserAccountInfoResult(const GetUserAccountInfoResult& src);
    GetUserAccountInfoResult(GetUserAccountInfoResult&& src);
    GetUserAccountInfoResult(const PlayFabServerGetUserAccountInfoResult& src);
    GetUserAccountInfoResult& operator=(const GetUserAccountInfoResult&) = delete;
    ~GetUserAccountInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct GetUserBansRequest : public PlayFabServerGetUserBansRequest, public SerializableModel
{
    GetUserBansRequest();
    GetUserBansRequest(const GetUserBansRequest& src);
    GetUserBansRequest(GetUserBansRequest&& src);
    GetUserBansRequest(const PlayFabServerGetUserBansRequest& src);
    GetUserBansRequest& operator=(const GetUserBansRequest&) = delete;
    ~GetUserBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetUserBansResult : public PlayFabServerGetUserBansResult, public BaseModel, public ApiResult
{
    GetUserBansResult();
    GetUserBansResult(const GetUserBansResult& src);
    GetUserBansResult(GetUserBansResult&& src);
    GetUserBansResult(const PlayFabServerGetUserBansResult& src);
    GetUserBansResult& operator=(const GetUserBansResult&) = delete;
    ~GetUserBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerBanInfo, BanInfo> m_banData;
};

struct GetUserDataRequest : public PlayFabServerGetUserDataRequest, public BaseModel
{
    GetUserDataRequest();
    GetUserDataRequest(const GetUserDataRequest& src);
    GetUserDataRequest(GetUserDataRequest&& src);
    GetUserDataRequest(const PlayFabServerGetUserDataRequest& src);
    GetUserDataRequest& operator=(const GetUserDataRequest&) = delete;
    ~GetUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct GetUserDataResult : public PlayFabServerGetUserDataResult, public BaseModel, public ApiResult
{
    GetUserDataResult();
    GetUserDataResult(const GetUserDataResult& src);
    GetUserDataResult(GetUserDataResult&& src);
    GetUserDataResult(const PlayFabServerGetUserDataResult& src);
    GetUserDataResult& operator=(const GetUserDataResult&) = delete;
    ~GetUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_data;
    String m_playFabId;
};

struct GetUserInventoryRequest : public PlayFabServerGetUserInventoryRequest, public BaseModel
{
    GetUserInventoryRequest();
    GetUserInventoryRequest(const GetUserInventoryRequest& src);
    GetUserInventoryRequest(GetUserInventoryRequest&& src);
    GetUserInventoryRequest(const PlayFabServerGetUserInventoryRequest& src);
    GetUserInventoryRequest& operator=(const GetUserInventoryRequest&) = delete;
    ~GetUserInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct GetUserInventoryResult : public PlayFabServerGetUserInventoryResult, public BaseModel, public ApiResult
{
    GetUserInventoryResult();
    GetUserInventoryResult(const GetUserInventoryResult& src);
    GetUserInventoryResult(GetUserInventoryResult&& src);
    GetUserInventoryResult(const PlayFabServerGetUserInventoryResult& src);
    GetUserInventoryResult& operator=(const GetUserInventoryResult&) = delete;
    ~GetUserInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GrantCharacterToUserRequest : public PlayFabServerGrantCharacterToUserRequest, public BaseModel
{
    GrantCharacterToUserRequest();
    GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src);
    GrantCharacterToUserRequest(GrantCharacterToUserRequest&& src);
    GrantCharacterToUserRequest(const PlayFabServerGrantCharacterToUserRequest& src);
    GrantCharacterToUserRequest& operator=(const GrantCharacterToUserRequest&) = delete;
    ~GrantCharacterToUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterName;
    String m_characterType;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct GrantCharacterToUserResult : public PlayFabServerGrantCharacterToUserResult, public SerializableModel, public ApiResult
{
    GrantCharacterToUserResult();
    GrantCharacterToUserResult(const GrantCharacterToUserResult& src);
    GrantCharacterToUserResult(GrantCharacterToUserResult&& src);
    GrantCharacterToUserResult(const PlayFabServerGrantCharacterToUserResult& src);
    GrantCharacterToUserResult& operator=(const GrantCharacterToUserResult&) = delete;
    ~GrantCharacterToUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
};

struct GrantedItemInstance : public PlayFabServerGrantedItemInstance, public BaseModel
{
    GrantedItemInstance();
    GrantedItemInstance(const GrantedItemInstance& src);
    GrantedItemInstance(GrantedItemInstance&& src);
    GrantedItemInstance(const PlayFabServerGrantedItemInstance& src);
    GrantedItemInstance& operator=(const GrantedItemInstance&) = delete;
    ~GrantedItemInstance() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    PointerArrayModel<char, String> m_bundleContents;
    String m_bundleParent;
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customData;
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

struct GrantItemsToCharacterRequest : public PlayFabServerGrantItemsToCharacterRequest, public BaseModel
{
    GrantItemsToCharacterRequest();
    GrantItemsToCharacterRequest(const GrantItemsToCharacterRequest& src);
    GrantItemsToCharacterRequest(GrantItemsToCharacterRequest&& src);
    GrantItemsToCharacterRequest(const PlayFabServerGrantItemsToCharacterRequest& src);
    GrantItemsToCharacterRequest& operator=(const GrantItemsToCharacterRequest&) = delete;
    ~GrantItemsToCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_itemIds;
    String m_playFabId;
};

struct GrantItemsToCharacterResult : public PlayFabServerGrantItemsToCharacterResult, public BaseModel, public ApiResult
{
    GrantItemsToCharacterResult();
    GrantItemsToCharacterResult(const GrantItemsToCharacterResult& src);
    GrantItemsToCharacterResult(GrantItemsToCharacterResult&& src);
    GrantItemsToCharacterResult(const PlayFabServerGrantItemsToCharacterResult& src);
    GrantItemsToCharacterResult& operator=(const GrantItemsToCharacterResult&) = delete;
    ~GrantItemsToCharacterResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct GrantItemsToUserRequest : public PlayFabServerGrantItemsToUserRequest, public BaseModel
{
    GrantItemsToUserRequest();
    GrantItemsToUserRequest(const GrantItemsToUserRequest& src);
    GrantItemsToUserRequest(GrantItemsToUserRequest&& src);
    GrantItemsToUserRequest(const PlayFabServerGrantItemsToUserRequest& src);
    GrantItemsToUserRequest& operator=(const GrantItemsToUserRequest&) = delete;
    ~GrantItemsToUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_itemIds;
    String m_playFabId;
};

struct GrantItemsToUserResult : public PlayFabServerGrantItemsToUserResult, public BaseModel, public ApiResult
{
    GrantItemsToUserResult();
    GrantItemsToUserResult(const GrantItemsToUserResult& src);
    GrantItemsToUserResult(GrantItemsToUserResult&& src);
    GrantItemsToUserResult(const PlayFabServerGrantItemsToUserResult& src);
    GrantItemsToUserResult& operator=(const GrantItemsToUserResult&) = delete;
    ~GrantItemsToUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct ItemGrant : public PlayFabServerItemGrant, public BaseModel
{
    ItemGrant();
    ItemGrant(const ItemGrant& src);
    ItemGrant(ItemGrant&& src);
    ItemGrant(const PlayFabServerItemGrant& src);
    ItemGrant& operator=(const ItemGrant&) = delete;
    ~ItemGrant() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    String m_itemId;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct GrantItemsToUsersRequest : public PlayFabServerGrantItemsToUsersRequest, public BaseModel
{
    GrantItemsToUsersRequest();
    GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src);
    GrantItemsToUsersRequest(GrantItemsToUsersRequest&& src);
    GrantItemsToUsersRequest(const PlayFabServerGrantItemsToUsersRequest& src);
    GrantItemsToUsersRequest& operator=(const GrantItemsToUsersRequest&) = delete;
    ~GrantItemsToUsersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabServerItemGrant, ItemGrant> m_itemGrants;
};

struct GrantItemsToUsersResult : public PlayFabServerGrantItemsToUsersResult, public BaseModel, public ApiResult
{
    GrantItemsToUsersResult();
    GrantItemsToUsersResult(const GrantItemsToUsersResult& src);
    GrantItemsToUsersResult(GrantItemsToUsersResult&& src);
    GrantItemsToUsersResult(const PlayFabServerGrantItemsToUsersResult& src);
    GrantItemsToUsersResult& operator=(const GrantItemsToUsersResult&) = delete;
    ~GrantItemsToUsersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct LinkPSNAccountRequest : public PlayFabServerLinkPSNAccountRequest, public BaseModel
{
    LinkPSNAccountRequest();
    LinkPSNAccountRequest(const LinkPSNAccountRequest& src);
    LinkPSNAccountRequest(LinkPSNAccountRequest&& src);
    LinkPSNAccountRequest(const PlayFabServerLinkPSNAccountRequest& src);
    LinkPSNAccountRequest& operator=(const LinkPSNAccountRequest&) = delete;
    ~LinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    StdExtra::optional<int32_t> m_issuerId;
    String m_playFabId;
    String m_redirectUri;
};

struct LinkServerCustomIdRequest : public PlayFabServerLinkServerCustomIdRequest, public BaseModel
{
    LinkServerCustomIdRequest();
    LinkServerCustomIdRequest(const LinkServerCustomIdRequest& src);
    LinkServerCustomIdRequest(LinkServerCustomIdRequest&& src);
    LinkServerCustomIdRequest(const PlayFabServerLinkServerCustomIdRequest& src);
    LinkServerCustomIdRequest& operator=(const LinkServerCustomIdRequest&) = delete;
    ~LinkServerCustomIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_playFabId;
    String m_serverCustomId;
};

struct LinkXboxAccountRequest : public PlayFabServerLinkXboxAccountRequest, public BaseModel
{
    LinkXboxAccountRequest();
    LinkXboxAccountRequest(const LinkXboxAccountRequest& src);
    LinkXboxAccountRequest(LinkXboxAccountRequest&& src);
    LinkXboxAccountRequest(const PlayFabServerLinkXboxAccountRequest& src);
    LinkXboxAccountRequest& operator=(const LinkXboxAccountRequest&) = delete;
    ~LinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_playFabId;
    String m_xboxToken;
};

struct ListUsersCharactersRequest : public PlayFabServerListUsersCharactersRequest, public SerializableModel
{
    ListUsersCharactersRequest();
    ListUsersCharactersRequest(const ListUsersCharactersRequest& src);
    ListUsersCharactersRequest(ListUsersCharactersRequest&& src);
    ListUsersCharactersRequest(const PlayFabServerListUsersCharactersRequest& src);
    ListUsersCharactersRequest& operator=(const ListUsersCharactersRequest&) = delete;
    ~ListUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct ListUsersCharactersResult : public PlayFabServerListUsersCharactersResult, public BaseModel, public ApiResult
{
    ListUsersCharactersResult();
    ListUsersCharactersResult(const ListUsersCharactersResult& src);
    ListUsersCharactersResult(ListUsersCharactersResult&& src);
    ListUsersCharactersResult(const PlayFabServerListUsersCharactersResult& src);
    ListUsersCharactersResult& operator=(const ListUsersCharactersResult&) = delete;
    ~ListUsersCharactersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabCharacterResult, CharacterResult> m_characters;
};

struct LocalizedPushNotificationProperties : public PlayFabServerLocalizedPushNotificationProperties, public SerializableModel
{
    LocalizedPushNotificationProperties();
    LocalizedPushNotificationProperties(const LocalizedPushNotificationProperties& src);
    LocalizedPushNotificationProperties(LocalizedPushNotificationProperties&& src);
    LocalizedPushNotificationProperties(const PlayFabServerLocalizedPushNotificationProperties& src);
    LocalizedPushNotificationProperties& operator=(const LocalizedPushNotificationProperties&) = delete;
    ~LocalizedPushNotificationProperties() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_message;
    String m_subject;
};

struct LoginWithServerCustomIdRequest : public PlayFabServerLoginWithServerCustomIdRequest, public BaseModel
{
    LoginWithServerCustomIdRequest();
    LoginWithServerCustomIdRequest(const LoginWithServerCustomIdRequest& src);
    LoginWithServerCustomIdRequest(LoginWithServerCustomIdRequest&& src);
    LoginWithServerCustomIdRequest(const PlayFabServerLoginWithServerCustomIdRequest& src);
    LoginWithServerCustomIdRequest& operator=(const LoginWithServerCustomIdRequest&) = delete;
    ~LoginWithServerCustomIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_serverCustomId;
};

struct LoginWithSteamIdRequest : public PlayFabServerLoginWithSteamIdRequest, public BaseModel
{
    LoginWithSteamIdRequest();
    LoginWithSteamIdRequest(const LoginWithSteamIdRequest& src);
    LoginWithSteamIdRequest(LoginWithSteamIdRequest&& src);
    LoginWithSteamIdRequest(const PlayFabServerLoginWithSteamIdRequest& src);
    LoginWithSteamIdRequest& operator=(const LoginWithSteamIdRequest&) = delete;
    ~LoginWithSteamIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_steamId;
};

struct LoginWithXboxIdRequest : public PlayFabServerLoginWithXboxIdRequest, public BaseModel
{
    LoginWithXboxIdRequest();
    LoginWithXboxIdRequest(const LoginWithXboxIdRequest& src);
    LoginWithXboxIdRequest(LoginWithXboxIdRequest&& src);
    LoginWithXboxIdRequest(const PlayFabServerLoginWithXboxIdRequest& src);
    LoginWithXboxIdRequest& operator=(const LoginWithXboxIdRequest&) = delete;
    ~LoginWithXboxIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_sandbox;
    String m_xboxId;
};

struct LoginWithXboxRequest : public PlayFabServerLoginWithXboxRequest, public BaseModel
{
    LoginWithXboxRequest();
    LoginWithXboxRequest(const LoginWithXboxRequest& src);
    LoginWithXboxRequest(LoginWithXboxRequest&& src);
    LoginWithXboxRequest(const PlayFabServerLoginWithXboxRequest& src);
    LoginWithXboxRequest& operator=(const LoginWithXboxRequest&) = delete;
    ~LoginWithXboxRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_xboxToken;
};

struct ModifyCharacterVirtualCurrencyResult : public PlayFabServerModifyCharacterVirtualCurrencyResult, public SerializableModel, public ApiResult
{
    ModifyCharacterVirtualCurrencyResult();
    ModifyCharacterVirtualCurrencyResult(const ModifyCharacterVirtualCurrencyResult& src);
    ModifyCharacterVirtualCurrencyResult(ModifyCharacterVirtualCurrencyResult&& src);
    ModifyCharacterVirtualCurrencyResult(const PlayFabServerModifyCharacterVirtualCurrencyResult& src);
    ModifyCharacterVirtualCurrencyResult& operator=(const ModifyCharacterVirtualCurrencyResult&) = delete;
    ~ModifyCharacterVirtualCurrencyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_virtualCurrency;
};

struct ModifyItemUsesRequest : public PlayFabServerModifyItemUsesRequest, public BaseModel
{
    ModifyItemUsesRequest();
    ModifyItemUsesRequest(const ModifyItemUsesRequest& src);
    ModifyItemUsesRequest(ModifyItemUsesRequest&& src);
    ModifyItemUsesRequest(const PlayFabServerModifyItemUsesRequest& src);
    ModifyItemUsesRequest& operator=(const ModifyItemUsesRequest&) = delete;
    ~ModifyItemUsesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_itemInstanceId;
    String m_playFabId;
};

struct ModifyItemUsesResult : public PlayFabServerModifyItemUsesResult, public SerializableModel, public ApiResult
{
    ModifyItemUsesResult();
    ModifyItemUsesResult(const ModifyItemUsesResult& src);
    ModifyItemUsesResult(ModifyItemUsesResult&& src);
    ModifyItemUsesResult(const PlayFabServerModifyItemUsesResult& src);
    ModifyItemUsesResult& operator=(const ModifyItemUsesResult&) = delete;
    ~ModifyItemUsesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_itemInstanceId;
};

struct ModifyUserVirtualCurrencyResult : public PlayFabServerModifyUserVirtualCurrencyResult, public SerializableModel, public ApiResult
{
    ModifyUserVirtualCurrencyResult();
    ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src);
    ModifyUserVirtualCurrencyResult(const PlayFabServerModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult& operator=(const ModifyUserVirtualCurrencyResult&) = delete;
    ~ModifyUserVirtualCurrencyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_virtualCurrency;
};

struct MoveItemToCharacterFromCharacterRequest : public PlayFabServerMoveItemToCharacterFromCharacterRequest, public SerializableModel
{
    MoveItemToCharacterFromCharacterRequest();
    MoveItemToCharacterFromCharacterRequest(const MoveItemToCharacterFromCharacterRequest& src);
    MoveItemToCharacterFromCharacterRequest(MoveItemToCharacterFromCharacterRequest&& src);
    MoveItemToCharacterFromCharacterRequest(const PlayFabServerMoveItemToCharacterFromCharacterRequest& src);
    MoveItemToCharacterFromCharacterRequest& operator=(const MoveItemToCharacterFromCharacterRequest&) = delete;
    ~MoveItemToCharacterFromCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_givingCharacterId;
    String m_itemInstanceId;
    String m_playFabId;
    String m_receivingCharacterId;
};

struct MoveItemToCharacterFromUserRequest : public PlayFabServerMoveItemToCharacterFromUserRequest, public SerializableModel
{
    MoveItemToCharacterFromUserRequest();
    MoveItemToCharacterFromUserRequest(const MoveItemToCharacterFromUserRequest& src);
    MoveItemToCharacterFromUserRequest(MoveItemToCharacterFromUserRequest&& src);
    MoveItemToCharacterFromUserRequest(const PlayFabServerMoveItemToCharacterFromUserRequest& src);
    MoveItemToCharacterFromUserRequest& operator=(const MoveItemToCharacterFromUserRequest&) = delete;
    ~MoveItemToCharacterFromUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct MoveItemToUserFromCharacterRequest : public PlayFabServerMoveItemToUserFromCharacterRequest, public SerializableModel
{
    MoveItemToUserFromCharacterRequest();
    MoveItemToUserFromCharacterRequest(const MoveItemToUserFromCharacterRequest& src);
    MoveItemToUserFromCharacterRequest(MoveItemToUserFromCharacterRequest&& src);
    MoveItemToUserFromCharacterRequest(const PlayFabServerMoveItemToUserFromCharacterRequest& src);
    MoveItemToUserFromCharacterRequest& operator=(const MoveItemToUserFromCharacterRequest&) = delete;
    ~MoveItemToUserFromCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct NotifyMatchmakerPlayerLeftRequest : public PlayFabServerNotifyMatchmakerPlayerLeftRequest, public BaseModel
{
    NotifyMatchmakerPlayerLeftRequest();
    NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src);
    NotifyMatchmakerPlayerLeftRequest(NotifyMatchmakerPlayerLeftRequest&& src);
    NotifyMatchmakerPlayerLeftRequest(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& src);
    NotifyMatchmakerPlayerLeftRequest& operator=(const NotifyMatchmakerPlayerLeftRequest&) = delete;
    ~NotifyMatchmakerPlayerLeftRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_playFabId;
};

struct NotifyMatchmakerPlayerLeftResult : public PlayFabServerNotifyMatchmakerPlayerLeftResult, public BaseModel, public ApiResult
{
    NotifyMatchmakerPlayerLeftResult();
    NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src);
    NotifyMatchmakerPlayerLeftResult(NotifyMatchmakerPlayerLeftResult&& src);
    NotifyMatchmakerPlayerLeftResult(const PlayFabServerNotifyMatchmakerPlayerLeftResult& src);
    NotifyMatchmakerPlayerLeftResult& operator=(const NotifyMatchmakerPlayerLeftResult&) = delete;
    ~NotifyMatchmakerPlayerLeftResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabServerPlayerConnectionState> m_playerState;
};

struct PushNotificationPackage : public PlayFabServerPushNotificationPackage, public SerializableModel
{
    PushNotificationPackage();
    PushNotificationPackage(const PushNotificationPackage& src);
    PushNotificationPackage(PushNotificationPackage&& src);
    PushNotificationPackage(const PlayFabServerPushNotificationPackage& src);
    PushNotificationPackage& operator=(const PushNotificationPackage&) = delete;
    ~PushNotificationPackage() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_customData;
    String m_icon;
    String m_message;
    String m_sound;
    String m_title;
};

struct RedeemCouponRequest : public PlayFabServerRedeemCouponRequest, public BaseModel
{
    RedeemCouponRequest();
    RedeemCouponRequest(const RedeemCouponRequest& src);
    RedeemCouponRequest(RedeemCouponRequest&& src);
    RedeemCouponRequest(const PlayFabServerRedeemCouponRequest& src);
    RedeemCouponRequest& operator=(const RedeemCouponRequest&) = delete;
    ~RedeemCouponRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_couponCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct RedeemCouponResult : public PlayFabServerRedeemCouponResult, public BaseModel, public ApiResult
{
    RedeemCouponResult();
    RedeemCouponResult(const RedeemCouponResult& src);
    RedeemCouponResult(RedeemCouponResult&& src);
    RedeemCouponResult(const PlayFabServerRedeemCouponResult& src);
    RedeemCouponResult& operator=(const RedeemCouponResult&) = delete;
    ~RedeemCouponResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_grantedItems;
};

struct RedeemMatchmakerTicketRequest : public PlayFabServerRedeemMatchmakerTicketRequest, public BaseModel
{
    RedeemMatchmakerTicketRequest();
    RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src);
    RedeemMatchmakerTicketRequest(RedeemMatchmakerTicketRequest&& src);
    RedeemMatchmakerTicketRequest(const PlayFabServerRedeemMatchmakerTicketRequest& src);
    RedeemMatchmakerTicketRequest& operator=(const RedeemMatchmakerTicketRequest&) = delete;
    ~RedeemMatchmakerTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_ticket;
};

struct RedeemMatchmakerTicketResult : public PlayFabServerRedeemMatchmakerTicketResult, public BaseModel, public ApiResult
{
    RedeemMatchmakerTicketResult();
    RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src);
    RedeemMatchmakerTicketResult(RedeemMatchmakerTicketResult&& src);
    RedeemMatchmakerTicketResult(const PlayFabServerRedeemMatchmakerTicketResult& src);
    RedeemMatchmakerTicketResult& operator=(const RedeemMatchmakerTicketResult&) = delete;
    ~RedeemMatchmakerTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_error;
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct RefreshGameServerInstanceHeartbeatRequest : public PlayFabServerRefreshGameServerInstanceHeartbeatRequest, public SerializableModel
{
    RefreshGameServerInstanceHeartbeatRequest();
    RefreshGameServerInstanceHeartbeatRequest(const RefreshGameServerInstanceHeartbeatRequest& src);
    RefreshGameServerInstanceHeartbeatRequest(RefreshGameServerInstanceHeartbeatRequest&& src);
    RefreshGameServerInstanceHeartbeatRequest(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& src);
    RefreshGameServerInstanceHeartbeatRequest& operator=(const RefreshGameServerInstanceHeartbeatRequest&) = delete;
    ~RefreshGameServerInstanceHeartbeatRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct RegisterGameRequest : public PlayFabServerRegisterGameRequest, public BaseModel
{
    RegisterGameRequest();
    RegisterGameRequest(const RegisterGameRequest& src);
    RegisterGameRequest(RegisterGameRequest&& src);
    RegisterGameRequest(const PlayFabServerRegisterGameRequest& src);
    RegisterGameRequest& operator=(const RegisterGameRequest&) = delete;
    ~RegisterGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_build;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_gameMode;
    String m_lobbyId;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    String m_serverPort;
    String m_serverPublicDNSName;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_tags;
};

struct RegisterGameResponse : public PlayFabServerRegisterGameResponse, public SerializableModel, public ApiResult
{
    RegisterGameResponse();
    RegisterGameResponse(const RegisterGameResponse& src);
    RegisterGameResponse(RegisterGameResponse&& src);
    RegisterGameResponse(const PlayFabServerRegisterGameResponse& src);
    RegisterGameResponse& operator=(const RegisterGameResponse&) = delete;
    ~RegisterGameResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct RemoveFriendRequest : public PlayFabServerRemoveFriendRequest, public SerializableModel
{
    RemoveFriendRequest();
    RemoveFriendRequest(const RemoveFriendRequest& src);
    RemoveFriendRequest(RemoveFriendRequest&& src);
    RemoveFriendRequest(const PlayFabServerRemoveFriendRequest& src);
    RemoveFriendRequest& operator=(const RemoveFriendRequest&) = delete;
    ~RemoveFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendPlayFabId;
    String m_playFabId;
};

struct RemoveGenericIDRequest : public PlayFabServerRemoveGenericIDRequest, public BaseModel
{
    RemoveGenericIDRequest();
    RemoveGenericIDRequest(const RemoveGenericIDRequest& src);
    RemoveGenericIDRequest(RemoveGenericIDRequest&& src);
    RemoveGenericIDRequest(const PlayFabServerRemoveGenericIDRequest& src);
    RemoveGenericIDRequest& operator=(const RemoveGenericIDRequest&) = delete;
    ~RemoveGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
    String m_playFabId;
};

struct RemovePlayerTagRequest : public PlayFabServerRemovePlayerTagRequest, public BaseModel
{
    RemovePlayerTagRequest();
    RemovePlayerTagRequest(const RemovePlayerTagRequest& src);
    RemovePlayerTagRequest(RemovePlayerTagRequest&& src);
    RemovePlayerTagRequest(const PlayFabServerRemovePlayerTagRequest& src);
    RemovePlayerTagRequest& operator=(const RemovePlayerTagRequest&) = delete;
    ~RemovePlayerTagRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_tagName;
};

struct RemoveSharedGroupMembersRequest : public PlayFabServerRemoveSharedGroupMembersRequest, public BaseModel
{
    RemoveSharedGroupMembersRequest();
    RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src);
    RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest&& src);
    RemoveSharedGroupMembersRequest(const PlayFabServerRemoveSharedGroupMembersRequest& src);
    RemoveSharedGroupMembersRequest& operator=(const RemoveSharedGroupMembersRequest&) = delete;
    ~RemoveSharedGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIds;
    String m_sharedGroupId;
};

struct ReportPlayerServerRequest : public PlayFabServerReportPlayerServerRequest, public BaseModel
{
    ReportPlayerServerRequest();
    ReportPlayerServerRequest(const ReportPlayerServerRequest& src);
    ReportPlayerServerRequest(ReportPlayerServerRequest&& src);
    ReportPlayerServerRequest(const PlayFabServerReportPlayerServerRequest& src);
    ReportPlayerServerRequest& operator=(const ReportPlayerServerRequest&) = delete;
    ~ReportPlayerServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_comment;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_reporteeId;
    String m_reporterId;
};

struct ReportPlayerServerResult : public PlayFabServerReportPlayerServerResult, public SerializableModel, public ApiResult
{
    ReportPlayerServerResult();
    ReportPlayerServerResult(const ReportPlayerServerResult&) = default;
    ReportPlayerServerResult(ReportPlayerServerResult&&) = default;
    ReportPlayerServerResult(const PlayFabServerReportPlayerServerResult& src);
    ReportPlayerServerResult& operator=(const ReportPlayerServerResult&) = delete;
    ~ReportPlayerServerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct RevokeAllBansForUserRequest : public PlayFabServerRevokeAllBansForUserRequest, public SerializableModel
{
    RevokeAllBansForUserRequest();
    RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src);
    RevokeAllBansForUserRequest(RevokeAllBansForUserRequest&& src);
    RevokeAllBansForUserRequest(const PlayFabServerRevokeAllBansForUserRequest& src);
    RevokeAllBansForUserRequest& operator=(const RevokeAllBansForUserRequest&) = delete;
    ~RevokeAllBansForUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct RevokeAllBansForUserResult : public PlayFabServerRevokeAllBansForUserResult, public BaseModel, public ApiResult
{
    RevokeAllBansForUserResult();
    RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src);
    RevokeAllBansForUserResult(RevokeAllBansForUserResult&& src);
    RevokeAllBansForUserResult(const PlayFabServerRevokeAllBansForUserResult& src);
    RevokeAllBansForUserResult& operator=(const RevokeAllBansForUserResult&) = delete;
    ~RevokeAllBansForUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerBanInfo, BanInfo> m_banData;
};

struct RevokeBansRequest : public PlayFabServerRevokeBansRequest, public BaseModel
{
    RevokeBansRequest();
    RevokeBansRequest(const RevokeBansRequest& src);
    RevokeBansRequest(RevokeBansRequest&& src);
    RevokeBansRequest(const PlayFabServerRevokeBansRequest& src);
    RevokeBansRequest& operator=(const RevokeBansRequest&) = delete;
    ~RevokeBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_banIds;
};

struct RevokeBansResult : public PlayFabServerRevokeBansResult, public BaseModel, public ApiResult
{
    RevokeBansResult();
    RevokeBansResult(const RevokeBansResult& src);
    RevokeBansResult(RevokeBansResult&& src);
    RevokeBansResult(const PlayFabServerRevokeBansResult& src);
    RevokeBansResult& operator=(const RevokeBansResult&) = delete;
    ~RevokeBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerBanInfo, BanInfo> m_banData;
};

struct RevokeInventoryItem : public PlayFabServerRevokeInventoryItem, public SerializableModel
{
    RevokeInventoryItem();
    RevokeInventoryItem(const RevokeInventoryItem& src);
    RevokeInventoryItem(RevokeInventoryItem&& src);
    RevokeInventoryItem(const PlayFabServerRevokeInventoryItem& src);
    RevokeInventoryItem& operator=(const RevokeInventoryItem&) = delete;
    ~RevokeInventoryItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct RevokeInventoryItemRequest : public PlayFabServerRevokeInventoryItemRequest, public SerializableModel
{
    RevokeInventoryItemRequest();
    RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src);
    RevokeInventoryItemRequest(RevokeInventoryItemRequest&& src);
    RevokeInventoryItemRequest(const PlayFabServerRevokeInventoryItemRequest& src);
    RevokeInventoryItemRequest& operator=(const RevokeInventoryItemRequest&) = delete;
    ~RevokeInventoryItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct RevokeInventoryItemsRequest : public PlayFabServerRevokeInventoryItemsRequest, public BaseModel
{
    RevokeInventoryItemsRequest();
    RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src);
    RevokeInventoryItemsRequest(RevokeInventoryItemsRequest&& src);
    RevokeInventoryItemsRequest(const PlayFabServerRevokeInventoryItemsRequest& src);
    RevokeInventoryItemsRequest& operator=(const RevokeInventoryItemsRequest&) = delete;
    ~RevokeInventoryItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerRevokeInventoryItem, RevokeInventoryItem> m_items;
};

struct RevokeItemError : public PlayFabServerRevokeItemError, public BaseModel
{
    RevokeItemError();
    RevokeItemError(const RevokeItemError& src);
    RevokeItemError(RevokeItemError&& src);
    RevokeItemError(const PlayFabServerRevokeItemError& src);
    RevokeItemError& operator=(const RevokeItemError&) = delete;
    ~RevokeItemError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabServerGenericErrorCodes> m_error;
    StdExtra::optional<RevokeInventoryItem> m_item;
};

struct RevokeInventoryItemsResult : public PlayFabServerRevokeInventoryItemsResult, public BaseModel, public ApiResult
{
    RevokeInventoryItemsResult();
    RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src);
    RevokeInventoryItemsResult(RevokeInventoryItemsResult&& src);
    RevokeInventoryItemsResult(const PlayFabServerRevokeInventoryItemsResult& src);
    RevokeInventoryItemsResult& operator=(const RevokeInventoryItemsResult&) = delete;
    ~RevokeInventoryItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerRevokeItemError, RevokeItemError> m_errors;
};

struct SavePushNotificationTemplateRequest : public PlayFabServerSavePushNotificationTemplateRequest, public BaseModel
{
    SavePushNotificationTemplateRequest();
    SavePushNotificationTemplateRequest(const SavePushNotificationTemplateRequest& src);
    SavePushNotificationTemplateRequest(SavePushNotificationTemplateRequest&& src);
    SavePushNotificationTemplateRequest(const PlayFabServerSavePushNotificationTemplateRequest& src);
    SavePushNotificationTemplateRequest& operator=(const SavePushNotificationTemplateRequest&) = delete;
    ~SavePushNotificationTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidPayload;
    String m_id;
    String m_iOSPayload;
    AssociativeArrayModel<PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry, LocalizedPushNotificationProperties> m_localizedPushNotificationTemplates;
    String m_name;
};

struct SavePushNotificationTemplateResult : public PlayFabServerSavePushNotificationTemplateResult, public SerializableModel, public ApiResult
{
    SavePushNotificationTemplateResult();
    SavePushNotificationTemplateResult(const SavePushNotificationTemplateResult& src);
    SavePushNotificationTemplateResult(SavePushNotificationTemplateResult&& src);
    SavePushNotificationTemplateResult(const PlayFabServerSavePushNotificationTemplateResult& src);
    SavePushNotificationTemplateResult& operator=(const SavePushNotificationTemplateResult&) = delete;
    ~SavePushNotificationTemplateResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_pushNotificationTemplateId;
};

struct SendCustomAccountRecoveryEmailRequest : public PlayFabServerSendCustomAccountRecoveryEmailRequest, public BaseModel
{
    SendCustomAccountRecoveryEmailRequest();
    SendCustomAccountRecoveryEmailRequest(const SendCustomAccountRecoveryEmailRequest& src);
    SendCustomAccountRecoveryEmailRequest(SendCustomAccountRecoveryEmailRequest&& src);
    SendCustomAccountRecoveryEmailRequest(const PlayFabServerSendCustomAccountRecoveryEmailRequest& src);
    SendCustomAccountRecoveryEmailRequest& operator=(const SendCustomAccountRecoveryEmailRequest&) = delete;
    ~SendCustomAccountRecoveryEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_emailTemplateId;
    String m_username;
};

struct SendEmailFromTemplateRequest : public PlayFabServerSendEmailFromTemplateRequest, public BaseModel
{
    SendEmailFromTemplateRequest();
    SendEmailFromTemplateRequest(const SendEmailFromTemplateRequest& src);
    SendEmailFromTemplateRequest(SendEmailFromTemplateRequest&& src);
    SendEmailFromTemplateRequest(const PlayFabServerSendEmailFromTemplateRequest& src);
    SendEmailFromTemplateRequest& operator=(const SendEmailFromTemplateRequest&) = delete;
    ~SendEmailFromTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_emailTemplateId;
    String m_playFabId;
};

struct SendPushNotificationFromTemplateRequest : public PlayFabServerSendPushNotificationFromTemplateRequest, public BaseModel
{
    SendPushNotificationFromTemplateRequest();
    SendPushNotificationFromTemplateRequest(const SendPushNotificationFromTemplateRequest& src);
    SendPushNotificationFromTemplateRequest(SendPushNotificationFromTemplateRequest&& src);
    SendPushNotificationFromTemplateRequest(const PlayFabServerSendPushNotificationFromTemplateRequest& src);
    SendPushNotificationFromTemplateRequest& operator=(const SendPushNotificationFromTemplateRequest&) = delete;
    ~SendPushNotificationFromTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_pushNotificationTemplateId;
    String m_recipient;
};

struct SendPushNotificationRequest : public PlayFabServerSendPushNotificationRequest, public BaseModel
{
    SendPushNotificationRequest();
    SendPushNotificationRequest(const SendPushNotificationRequest& src);
    SendPushNotificationRequest(SendPushNotificationRequest&& src);
    SendPushNotificationRequest(const PlayFabServerSendPushNotificationRequest& src);
    SendPushNotificationRequest& operator=(const SendPushNotificationRequest&) = delete;
    ~SendPushNotificationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerAdvancedPushPlatformMsg, AdvancedPushPlatformMsg> m_advancedPlatformDelivery;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_message;
    StdExtra::optional<PushNotificationPackage> m_package;
    String m_recipient;
    String m_subject;
    Vector<PlayFabPushNotificationPlatform> m_targetPlatforms;
};

struct SetFriendTagsRequest : public PlayFabServerSetFriendTagsRequest, public BaseModel
{
    SetFriendTagsRequest();
    SetFriendTagsRequest(const SetFriendTagsRequest& src);
    SetFriendTagsRequest(SetFriendTagsRequest&& src);
    SetFriendTagsRequest(const PlayFabServerSetFriendTagsRequest& src);
    SetFriendTagsRequest& operator=(const SetFriendTagsRequest&) = delete;
    ~SetFriendTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_friendPlayFabId;
    String m_playFabId;
    PointerArrayModel<char, String> m_tags;
};

struct SetGameServerInstanceDataRequest : public PlayFabServerSetGameServerInstanceDataRequest, public SerializableModel
{
    SetGameServerInstanceDataRequest();
    SetGameServerInstanceDataRequest(const SetGameServerInstanceDataRequest& src);
    SetGameServerInstanceDataRequest(SetGameServerInstanceDataRequest&& src);
    SetGameServerInstanceDataRequest(const PlayFabServerSetGameServerInstanceDataRequest& src);
    SetGameServerInstanceDataRequest& operator=(const SetGameServerInstanceDataRequest&) = delete;
    ~SetGameServerInstanceDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameServerData;
    String m_lobbyId;
};

struct SetGameServerInstanceStateRequest : public PlayFabServerSetGameServerInstanceStateRequest, public SerializableModel
{
    SetGameServerInstanceStateRequest();
    SetGameServerInstanceStateRequest(const SetGameServerInstanceStateRequest& src);
    SetGameServerInstanceStateRequest(SetGameServerInstanceStateRequest&& src);
    SetGameServerInstanceStateRequest(const PlayFabServerSetGameServerInstanceStateRequest& src);
    SetGameServerInstanceStateRequest& operator=(const SetGameServerInstanceStateRequest&) = delete;
    ~SetGameServerInstanceStateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct SetGameServerInstanceTagsRequest : public PlayFabServerSetGameServerInstanceTagsRequest, public BaseModel
{
    SetGameServerInstanceTagsRequest();
    SetGameServerInstanceTagsRequest(const SetGameServerInstanceTagsRequest& src);
    SetGameServerInstanceTagsRequest(SetGameServerInstanceTagsRequest&& src);
    SetGameServerInstanceTagsRequest(const PlayFabServerSetGameServerInstanceTagsRequest& src);
    SetGameServerInstanceTagsRequest& operator=(const SetGameServerInstanceTagsRequest&) = delete;
    ~SetGameServerInstanceTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_lobbyId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_tags;
};

struct SetPlayerSecretRequest : public PlayFabServerSetPlayerSecretRequest, public SerializableModel
{
    SetPlayerSecretRequest();
    SetPlayerSecretRequest(const SetPlayerSecretRequest& src);
    SetPlayerSecretRequest(SetPlayerSecretRequest&& src);
    SetPlayerSecretRequest(const PlayFabServerSetPlayerSecretRequest& src);
    SetPlayerSecretRequest& operator=(const SetPlayerSecretRequest&) = delete;
    ~SetPlayerSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playerSecret;
    String m_playFabId;
};

struct SetPublisherDataRequest : public PlayFabServerSetPublisherDataRequest, public SerializableModel
{
    SetPublisherDataRequest();
    SetPublisherDataRequest(const SetPublisherDataRequest& src);
    SetPublisherDataRequest(SetPublisherDataRequest&& src);
    SetPublisherDataRequest(const PlayFabServerSetPublisherDataRequest& src);
    SetPublisherDataRequest& operator=(const SetPublisherDataRequest&) = delete;
    ~SetPublisherDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct SetTitleDataRequest : public PlayFabServerSetTitleDataRequest, public SerializableModel
{
    SetTitleDataRequest();
    SetTitleDataRequest(const SetTitleDataRequest& src);
    SetTitleDataRequest(SetTitleDataRequest&& src);
    SetTitleDataRequest(const PlayFabServerSetTitleDataRequest& src);
    SetTitleDataRequest& operator=(const SetTitleDataRequest&) = delete;
    ~SetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct StatisticUpdate : public PlayFabServerStatisticUpdate, public BaseModel
{
    StatisticUpdate();
    StatisticUpdate(const StatisticUpdate& src);
    StatisticUpdate(StatisticUpdate&& src);
    StatisticUpdate(const PlayFabServerStatisticUpdate& src);
    StatisticUpdate& operator=(const StatisticUpdate&) = delete;
    ~StatisticUpdate() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_statisticName;
    StdExtra::optional<uint32_t> m_version;
};

struct SubtractCharacterVirtualCurrencyRequest : public PlayFabServerSubtractCharacterVirtualCurrencyRequest, public BaseModel
{
    SubtractCharacterVirtualCurrencyRequest();
    SubtractCharacterVirtualCurrencyRequest(const SubtractCharacterVirtualCurrencyRequest& src);
    SubtractCharacterVirtualCurrencyRequest(SubtractCharacterVirtualCurrencyRequest&& src);
    SubtractCharacterVirtualCurrencyRequest(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& src);
    SubtractCharacterVirtualCurrencyRequest& operator=(const SubtractCharacterVirtualCurrencyRequest&) = delete;
    ~SubtractCharacterVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct SubtractUserVirtualCurrencyRequest : public PlayFabServerSubtractUserVirtualCurrencyRequest, public BaseModel
{
    SubtractUserVirtualCurrencyRequest();
    SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src);
    SubtractUserVirtualCurrencyRequest(SubtractUserVirtualCurrencyRequest&& src);
    SubtractUserVirtualCurrencyRequest(const PlayFabServerSubtractUserVirtualCurrencyRequest& src);
    SubtractUserVirtualCurrencyRequest& operator=(const SubtractUserVirtualCurrencyRequest&) = delete;
    ~SubtractUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct UnlinkPSNAccountRequest : public PlayFabServerUnlinkPSNAccountRequest, public BaseModel
{
    UnlinkPSNAccountRequest();
    UnlinkPSNAccountRequest(const UnlinkPSNAccountRequest& src);
    UnlinkPSNAccountRequest(UnlinkPSNAccountRequest&& src);
    UnlinkPSNAccountRequest(const PlayFabServerUnlinkPSNAccountRequest& src);
    UnlinkPSNAccountRequest& operator=(const UnlinkPSNAccountRequest&) = delete;
    ~UnlinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UnlinkServerCustomIdRequest : public PlayFabServerUnlinkServerCustomIdRequest, public BaseModel
{
    UnlinkServerCustomIdRequest();
    UnlinkServerCustomIdRequest(const UnlinkServerCustomIdRequest& src);
    UnlinkServerCustomIdRequest(UnlinkServerCustomIdRequest&& src);
    UnlinkServerCustomIdRequest(const PlayFabServerUnlinkServerCustomIdRequest& src);
    UnlinkServerCustomIdRequest& operator=(const UnlinkServerCustomIdRequest&) = delete;
    ~UnlinkServerCustomIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_serverCustomId;
};

struct UnlinkXboxAccountRequest : public PlayFabServerUnlinkXboxAccountRequest, public BaseModel
{
    UnlinkXboxAccountRequest();
    UnlinkXboxAccountRequest(const UnlinkXboxAccountRequest& src);
    UnlinkXboxAccountRequest(UnlinkXboxAccountRequest&& src);
    UnlinkXboxAccountRequest(const PlayFabServerUnlinkXboxAccountRequest& src);
    UnlinkXboxAccountRequest& operator=(const UnlinkXboxAccountRequest&) = delete;
    ~UnlinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UnlockContainerInstanceRequest : public PlayFabServerUnlockContainerInstanceRequest, public BaseModel
{
    UnlockContainerInstanceRequest();
    UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src);
    UnlockContainerInstanceRequest(UnlockContainerInstanceRequest&& src);
    UnlockContainerInstanceRequest(const PlayFabServerUnlockContainerInstanceRequest& src);
    UnlockContainerInstanceRequest& operator=(const UnlockContainerInstanceRequest&) = delete;
    ~UnlockContainerInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemInstanceId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_keyItemInstanceId;
    String m_playFabId;
};

struct UnlockContainerItemRequest : public PlayFabServerUnlockContainerItemRequest, public BaseModel
{
    UnlockContainerItemRequest();
    UnlockContainerItemRequest(const UnlockContainerItemRequest& src);
    UnlockContainerItemRequest(UnlockContainerItemRequest&& src);
    UnlockContainerItemRequest(const PlayFabServerUnlockContainerItemRequest& src);
    UnlockContainerItemRequest& operator=(const UnlockContainerItemRequest&) = delete;
    ~UnlockContainerItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UnlockContainerItemResult : public PlayFabServerUnlockContainerItemResult, public BaseModel, public ApiResult
{
    UnlockContainerItemResult();
    UnlockContainerItemResult(const UnlockContainerItemResult& src);
    UnlockContainerItemResult(UnlockContainerItemResult&& src);
    UnlockContainerItemResult(const PlayFabServerUnlockContainerItemResult& src);
    UnlockContainerItemResult& operator=(const UnlockContainerItemResult&) = delete;
    ~UnlockContainerItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_grantedItems;
    String m_unlockedItemInstanceId;
    String m_unlockedWithItemInstanceId;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrency;
};

struct UpdateAvatarUrlRequest : public PlayFabServerUpdateAvatarUrlRequest, public SerializableModel
{
    UpdateAvatarUrlRequest();
    UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src);
    UpdateAvatarUrlRequest(UpdateAvatarUrlRequest&& src);
    UpdateAvatarUrlRequest(const PlayFabServerUpdateAvatarUrlRequest& src);
    UpdateAvatarUrlRequest& operator=(const UpdateAvatarUrlRequest&) = delete;
    ~UpdateAvatarUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_imageUrl;
    String m_playFabId;
};

struct UpdateBanRequest : public PlayFabServerUpdateBanRequest, public BaseModel
{
    UpdateBanRequest();
    UpdateBanRequest(const UpdateBanRequest& src);
    UpdateBanRequest(UpdateBanRequest&& src);
    UpdateBanRequest(const PlayFabServerUpdateBanRequest& src);
    UpdateBanRequest& operator=(const UpdateBanRequest&) = delete;
    ~UpdateBanRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_active;
    String m_banId;
    StdExtra::optional<time_t> m_expires;
    String m_IPAddress;
    String m_MACAddress;
    StdExtra::optional<bool> m_permanent;
    String m_reason;
};

struct UpdateBansRequest : public PlayFabServerUpdateBansRequest, public BaseModel
{
    UpdateBansRequest();
    UpdateBansRequest(const UpdateBansRequest& src);
    UpdateBansRequest(UpdateBansRequest&& src);
    UpdateBansRequest(const PlayFabServerUpdateBansRequest& src);
    UpdateBansRequest& operator=(const UpdateBansRequest&) = delete;
    ~UpdateBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerUpdateBanRequest, UpdateBanRequest> m_bans;
};

struct UpdateBansResult : public PlayFabServerUpdateBansResult, public BaseModel, public ApiResult
{
    UpdateBansResult();
    UpdateBansResult(const UpdateBansResult& src);
    UpdateBansResult(UpdateBansResult&& src);
    UpdateBansResult(const PlayFabServerUpdateBansResult& src);
    UpdateBansResult& operator=(const UpdateBansResult&) = delete;
    ~UpdateBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabServerBanInfo, BanInfo> m_banData;
};

struct UpdateCharacterDataRequest : public PlayFabServerUpdateCharacterDataRequest, public BaseModel
{
    UpdateCharacterDataRequest();
    UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src);
    UpdateCharacterDataRequest(UpdateCharacterDataRequest&& src);
    UpdateCharacterDataRequest(const PlayFabServerUpdateCharacterDataRequest& src);
    UpdateCharacterDataRequest& operator=(const UpdateCharacterDataRequest&) = delete;
    ~UpdateCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_playFabId;
};

struct UpdateCharacterDataResult : public PlayFabServerUpdateCharacterDataResult, public SerializableModel, public ApiResult
{
    UpdateCharacterDataResult();
    UpdateCharacterDataResult(const UpdateCharacterDataResult&) = default;
    UpdateCharacterDataResult(UpdateCharacterDataResult&&) = default;
    UpdateCharacterDataResult(const PlayFabServerUpdateCharacterDataResult& src);
    UpdateCharacterDataResult& operator=(const UpdateCharacterDataResult&) = delete;
    ~UpdateCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateCharacterStatisticsRequest : public PlayFabServerUpdateCharacterStatisticsRequest, public BaseModel
{
    UpdateCharacterStatisticsRequest();
    UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src);
    UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest&& src);
    UpdateCharacterStatisticsRequest(const PlayFabServerUpdateCharacterStatisticsRequest& src);
    UpdateCharacterStatisticsRequest& operator=(const UpdateCharacterStatisticsRequest&) = delete;
    ~UpdateCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UpdatePlayerStatisticsRequest : public PlayFabServerUpdatePlayerStatisticsRequest, public BaseModel
{
    UpdatePlayerStatisticsRequest();
    UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src);
    UpdatePlayerStatisticsRequest(UpdatePlayerStatisticsRequest&& src);
    UpdatePlayerStatisticsRequest(const PlayFabServerUpdatePlayerStatisticsRequest& src);
    UpdatePlayerStatisticsRequest& operator=(const UpdatePlayerStatisticsRequest&) = delete;
    ~UpdatePlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceUpdate;
    String m_playFabId;
    PointerArrayModel<PlayFabServerStatisticUpdate, StatisticUpdate> m_statistics;
};

struct UpdateSharedGroupDataRequest : public PlayFabServerUpdateSharedGroupDataRequest, public BaseModel
{
    UpdateSharedGroupDataRequest();
    UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src);
    UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest&& src);
    UpdateSharedGroupDataRequest(const PlayFabServerUpdateSharedGroupDataRequest& src);
    UpdateSharedGroupDataRequest& operator=(const UpdateSharedGroupDataRequest&) = delete;
    ~UpdateSharedGroupDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_sharedGroupId;
};

struct UpdateUserDataRequest : public PlayFabServerUpdateUserDataRequest, public BaseModel
{
    UpdateUserDataRequest();
    UpdateUserDataRequest(const UpdateUserDataRequest& src);
    UpdateUserDataRequest(UpdateUserDataRequest&& src);
    UpdateUserDataRequest(const PlayFabServerUpdateUserDataRequest& src);
    UpdateUserDataRequest& operator=(const UpdateUserDataRequest&) = delete;
    ~UpdateUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_playFabId;
};

struct UpdateUserDataResult : public PlayFabServerUpdateUserDataResult, public SerializableModel, public ApiResult
{
    UpdateUserDataResult();
    UpdateUserDataResult(const UpdateUserDataResult&) = default;
    UpdateUserDataResult(UpdateUserDataResult&&) = default;
    UpdateUserDataResult(const PlayFabServerUpdateUserDataResult& src);
    UpdateUserDataResult& operator=(const UpdateUserDataResult&) = delete;
    ~UpdateUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateUserInternalDataRequest : public PlayFabServerUpdateUserInternalDataRequest, public BaseModel
{
    UpdateUserInternalDataRequest();
    UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src);
    UpdateUserInternalDataRequest(UpdateUserInternalDataRequest&& src);
    UpdateUserInternalDataRequest(const PlayFabServerUpdateUserInternalDataRequest& src);
    UpdateUserInternalDataRequest& operator=(const UpdateUserInternalDataRequest&) = delete;
    ~UpdateUserInternalDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct UpdateUserInventoryItemDataRequest : public PlayFabServerUpdateUserInventoryItemDataRequest, public BaseModel
{
    UpdateUserInventoryItemDataRequest();
    UpdateUserInventoryItemDataRequest(const UpdateUserInventoryItemDataRequest& src);
    UpdateUserInventoryItemDataRequest(UpdateUserInventoryItemDataRequest&& src);
    UpdateUserInventoryItemDataRequest(const PlayFabServerUpdateUserInventoryItemDataRequest& src);
    UpdateUserInventoryItemDataRequest& operator=(const UpdateUserInventoryItemDataRequest&) = delete;
    ~UpdateUserInventoryItemDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    String m_itemInstanceId;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct WriteEventResponse : public PlayFabServerWriteEventResponse, public SerializableModel, public ApiResult
{
    WriteEventResponse();
    WriteEventResponse(const WriteEventResponse& src);
    WriteEventResponse(WriteEventResponse&& src);
    WriteEventResponse(const PlayFabServerWriteEventResponse& src);
    WriteEventResponse& operator=(const WriteEventResponse&) = delete;
    ~WriteEventResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_eventId;
};

struct WriteServerCharacterEventRequest : public PlayFabServerWriteServerCharacterEventRequest, public BaseModel
{
    WriteServerCharacterEventRequest();
    WriteServerCharacterEventRequest(const WriteServerCharacterEventRequest& src);
    WriteServerCharacterEventRequest(WriteServerCharacterEventRequest&& src);
    WriteServerCharacterEventRequest(const PlayFabServerWriteServerCharacterEventRequest& src);
    WriteServerCharacterEventRequest& operator=(const WriteServerCharacterEventRequest&) = delete;
    ~WriteServerCharacterEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    String m_playFabId;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteServerPlayerEventRequest : public PlayFabServerWriteServerPlayerEventRequest, public BaseModel
{
    WriteServerPlayerEventRequest();
    WriteServerPlayerEventRequest(const WriteServerPlayerEventRequest& src);
    WriteServerPlayerEventRequest(WriteServerPlayerEventRequest&& src);
    WriteServerPlayerEventRequest(const PlayFabServerWriteServerPlayerEventRequest& src);
    WriteServerPlayerEventRequest& operator=(const WriteServerPlayerEventRequest&) = delete;
    ~WriteServerPlayerEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    String m_playFabId;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteTitleEventRequest : public PlayFabServerWriteTitleEventRequest, public BaseModel
{
    WriteTitleEventRequest();
    WriteTitleEventRequest(const WriteTitleEventRequest& src);
    WriteTitleEventRequest(WriteTitleEventRequest&& src);
    WriteTitleEventRequest(const PlayFabServerWriteTitleEventRequest& src);
    WriteTitleEventRequest& operator=(const WriteTitleEventRequest&) = delete;
    ~WriteTitleEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

} // namespace ServerModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabServerAdCampaignAttribution& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAddCharacterVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAddFriendRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGenericServiceId& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAddGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAddPlayerTagRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAddSharedGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAddUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAdvancedPushPlatformMsg& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAuthenticateSessionTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAuthenticateSessionTicketResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementItem& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerBanInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabServerBanRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerBanUsersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerBanUsersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCatalogItemBundleInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCatalogItemConsumableInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCatalogItemContainerInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCatalogItem& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCharacterLeaderboardEntry& input);
template<> inline JsonValue ToJson<>(const PlayFabServerConsumeItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerConsumeItemResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerContactEmailInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCreateSharedGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerCreateSharedGroupResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerDeleteCharacterFromUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerDeletePlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerDeletePushNotificationTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerDeleteSharedGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerDeregisterGameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerEvaluateRandomResultTableRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerEvaluateRandomResultTableResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerScriptExecutionError& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLogStatement& input);
template<> inline JsonValue ToJson<>(const PlayFabServerExecuteCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerExecuteCloudScriptServerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerFacebookInstantGamesPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerFacebookPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerFriendInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGenericPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetSegmentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetAllSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCatalogItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCatalogItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterInventoryResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterLeaderboardResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetCharacterStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetContentDownloadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetContentDownloadUrlResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerProfileViewConstraints& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetFriendLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetFriendsListRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetFriendsListResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundCharacterResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerLeaderboardEntry& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundUserResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardForUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardForUsersCharactersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoRequestParams& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerProfileRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerProfileResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayersInSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerLinkedAccount& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerLocation& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerStatistic& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPushNotificationRegistration& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerProfile& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayersInSegmentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayersSegmentsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerStatisticNameVersion& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticVersionsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPlayerStatisticVersion& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticVersionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayerTagsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromGenericIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerNintendoSwitchPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPSNAccountPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSteamPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromSteamIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerXboxLiveAccountPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetPublisherDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetRandomResultTablesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerResultTableNode& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRandomResultTableListing& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetRandomResultTablesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerServerCustomIDPlayFabIDPair& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetServerCustomIDsFromPlayFabIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetSharedGroupDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSharedGroupDataRecord& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetSharedGroupDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerStoreMarketingModel& input);
template<> inline JsonValue ToJson<>(const PlayFabServerStoreItem& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetStoreItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetStoreItemsServerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetTimeResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetTitleDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetTitleNewsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerTitleNewsItem& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetTitleNewsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserAccountInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserAccountInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserBansRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserBansResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGetUserInventoryResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantCharacterToUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantCharacterToUserResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantedItemInstance& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantItemsToCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantItemsToCharacterResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUserResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerItemGrant& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUsersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUsersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLinkServerCustomIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerListUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerListUsersCharactersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLocalizedPushNotificationProperties& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLoginWithServerCustomIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLoginWithSteamIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLoginWithXboxIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerLoginWithXboxRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerModifyCharacterVirtualCurrencyResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerModifyItemUsesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerModifyItemUsesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerModifyUserVirtualCurrencyResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerMoveItemToCharacterFromCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerMoveItemToCharacterFromUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerMoveItemToUserFromCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerNotifyMatchmakerPlayerLeftResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerPushNotificationPackage& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRedeemCouponRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRedeemCouponResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRedeemMatchmakerTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRedeemMatchmakerTicketResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRegisterGameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRegisterGameResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRemoveFriendRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRemoveGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRemovePlayerTagRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRemoveSharedGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerReportPlayerServerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerReportPlayerServerResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeAllBansForUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeAllBansForUserResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeBansRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeBansResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItem& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeItemError& input);
template<> inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSavePushNotificationTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSavePushNotificationTemplateResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSendCustomAccountRecoveryEmailRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSendEmailFromTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSendPushNotificationFromTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSendPushNotificationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetFriendTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceStateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetPlayerSecretRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerStatisticUpdate& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerSubtractUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUnlinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUnlinkServerCustomIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUnlinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUnlockContainerInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUnlockContainerItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUnlockContainerItemResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateAvatarUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateBanRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateBansRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateBansResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdatePlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateSharedGroupDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateUserDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateUserInternalDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerUpdateUserInventoryItemDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerWriteEventResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabServerWriteServerCharacterEventRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerWriteServerPlayerEventRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabServerWriteTitleEventRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabServerCloudScriptRevisionOption>
{
    static constexpr PlayFabServerCloudScriptRevisionOption maxValue = PlayFabServerCloudScriptRevisionOption::Specific;
};

template<> struct EnumRange<PlayFabServerGameInstanceState>
{
    static constexpr PlayFabServerGameInstanceState maxValue = PlayFabServerGameInstanceState::Closed;
};

template<> struct EnumRange<PlayFabServerGenericErrorCodes>
{
    static constexpr PlayFabServerGenericErrorCodes maxValue = PlayFabServerGenericErrorCodes::InventoryApiNotImplemented;
};

template<> struct EnumRange<PlayFabServerPlayerConnectionState>
{
    static constexpr PlayFabServerPlayerConnectionState maxValue = PlayFabServerPlayerConnectionState::Participated;
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

} // namespace PlayFab
