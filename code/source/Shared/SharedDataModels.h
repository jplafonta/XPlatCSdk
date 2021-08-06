#pragma once

#include <playfab/PFSharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{

// Shared Classes
struct ItemInstance : public PFItemInstance, public BaseModel
{
    ItemInstance();
    ItemInstance(const ItemInstance& src);
    ItemInstance(ItemInstance&& src);
    ItemInstance(const PFItemInstance& src);
    ItemInstance& operator=(const ItemInstance&) = delete;
    ~ItemInstance() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    PointerArrayModel<char, String> m_bundleContents;
    String m_bundleParent;
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customData;
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

struct ScriptExecutionError : public PFScriptExecutionError, public SerializableModel
{
    ScriptExecutionError();
    ScriptExecutionError(const ScriptExecutionError& src);
    ScriptExecutionError(ScriptExecutionError&& src);
    ScriptExecutionError(const PFScriptExecutionError& src);
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

struct LogStatement : public PFLogStatement, public BaseModel
{
    LogStatement();
    LogStatement(const LogStatement& src);
    LogStatement(LogStatement&& src);
    LogStatement(const PFLogStatement& src);
    LogStatement& operator=(const LogStatement&) = delete;
    ~LogStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_data;
    String m_level;
    String m_message;
};

struct ExecuteCloudScriptResult : public PFExecuteCloudScriptResult, public BaseModel, public ApiResult
{
    ExecuteCloudScriptResult();
    ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src);
    ExecuteCloudScriptResult(const PFExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult& operator=(const ExecuteCloudScriptResult&) = delete;
    ~ExecuteCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ScriptExecutionError> m_error;
    String m_functionName;
    JsonObject m_functionResult;
    StdExtra::optional<bool> m_functionResultTooLarge;
    PointerArrayModel<PFLogStatement, LogStatement> m_logs;
    StdExtra::optional<bool> m_logsTooLarge;
};

struct NameIdentifier : public PFNameIdentifier, public SerializableModel
{
    NameIdentifier();
    NameIdentifier(const NameIdentifier& src);
    NameIdentifier(NameIdentifier&& src);
    NameIdentifier(const PFNameIdentifier& src);
    NameIdentifier& operator=(const NameIdentifier&) = delete;
    ~NameIdentifier() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct UserDataRecord : public PFUserDataRecord, public BaseModel
{
    UserDataRecord();
    UserDataRecord(const UserDataRecord& src);
    UserDataRecord(UserDataRecord&& src);
    UserDataRecord(const PFUserDataRecord& src);
    UserDataRecord& operator=(const UserDataRecord&) = delete;
    ~UserDataRecord() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFUserDataPermission> m_permission;
    String m_value;
};

struct PlayerProfileViewConstraints : public PFPlayerProfileViewConstraints, public SerializableModel
{
    PlayerProfileViewConstraints();
    PlayerProfileViewConstraints(const PlayerProfileViewConstraints&) = default;
    PlayerProfileViewConstraints(PlayerProfileViewConstraints&&) = default;
    PlayerProfileViewConstraints(const PFPlayerProfileViewConstraints& src);
    PlayerProfileViewConstraints& operator=(const PlayerProfileViewConstraints&) = delete;
    ~PlayerProfileViewConstraints() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct AdCampaignAttributionModel : public PFAdCampaignAttributionModel, public SerializableModel
{
    AdCampaignAttributionModel();
    AdCampaignAttributionModel(const AdCampaignAttributionModel& src);
    AdCampaignAttributionModel(AdCampaignAttributionModel&& src);
    AdCampaignAttributionModel(const PFAdCampaignAttributionModel& src);
    AdCampaignAttributionModel& operator=(const AdCampaignAttributionModel&) = delete;
    ~AdCampaignAttributionModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_campaignId;
    String m_platform;
};

struct ContactEmailInfoModel : public PFContactEmailInfoModel, public BaseModel
{
    ContactEmailInfoModel();
    ContactEmailInfoModel(const ContactEmailInfoModel& src);
    ContactEmailInfoModel(ContactEmailInfoModel&& src);
    ContactEmailInfoModel(const PFContactEmailInfoModel& src);
    ContactEmailInfoModel& operator=(const ContactEmailInfoModel&) = delete;
    ~ContactEmailInfoModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_emailAddress;
    String m_name;
    StdExtra::optional<PFEmailVerificationStatus> m_verificationStatus;
};

struct LinkedPlatformAccountModel : public PFLinkedPlatformAccountModel, public BaseModel
{
    LinkedPlatformAccountModel();
    LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src);
    LinkedPlatformAccountModel(LinkedPlatformAccountModel&& src);
    LinkedPlatformAccountModel(const PFLinkedPlatformAccountModel& src);
    LinkedPlatformAccountModel& operator=(const LinkedPlatformAccountModel&) = delete;
    ~LinkedPlatformAccountModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_email;
    StdExtra::optional<PFLoginIdentityProvider> m_platform;
    String m_platformUserId;
    String m_username;
};

struct LocationModel : public PFLocationModel, public BaseModel
{
    LocationModel();
    LocationModel(const LocationModel& src);
    LocationModel(LocationModel&& src);
    LocationModel(const PFLocationModel& src);
    LocationModel& operator=(const LocationModel&) = delete;
    ~LocationModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_city;
    StdExtra::optional<PFContinentCode> m_continentCode;
    StdExtra::optional<PFCountryCode> m_countryCode;
    StdExtra::optional<double> m_latitude;
    StdExtra::optional<double> m_longitude;
};

struct SubscriptionModel : public PFSubscriptionModel, public BaseModel
{
    SubscriptionModel();
    SubscriptionModel(const SubscriptionModel& src);
    SubscriptionModel(SubscriptionModel&& src);
    SubscriptionModel(const PFSubscriptionModel& src);
    SubscriptionModel& operator=(const SubscriptionModel&) = delete;
    ~SubscriptionModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSubscriptionProviderStatus> m_status;
    String m_subscriptionId;
    String m_subscriptionItemId;
    String m_subscriptionProvider;
};

struct MembershipModel : public PFMembershipModel, public BaseModel
{
    MembershipModel();
    MembershipModel(const MembershipModel& src);
    MembershipModel(MembershipModel&& src);
    MembershipModel(const PFMembershipModel& src);
    MembershipModel& operator=(const MembershipModel&) = delete;
    ~MembershipModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_membershipId;
    StdExtra::optional<time_t> m_overrideExpiration;
    PointerArrayModel<PFSubscriptionModel, SubscriptionModel> m_subscriptions;
};

struct PushNotificationRegistrationModel : public PFPushNotificationRegistrationModel, public BaseModel
{
    PushNotificationRegistrationModel();
    PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src);
    PushNotificationRegistrationModel(PushNotificationRegistrationModel&& src);
    PushNotificationRegistrationModel(const PFPushNotificationRegistrationModel& src);
    PushNotificationRegistrationModel& operator=(const PushNotificationRegistrationModel&) = delete;
    ~PushNotificationRegistrationModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_notificationEndpointARN;
    StdExtra::optional<PFPushNotificationPlatform> m_platform;
};

struct StatisticModel : public PFStatisticModel, public SerializableModel
{
    StatisticModel();
    StatisticModel(const StatisticModel& src);
    StatisticModel(StatisticModel&& src);
    StatisticModel(const PFStatisticModel& src);
    StatisticModel& operator=(const StatisticModel&) = delete;
    ~StatisticModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_name;
};

struct TagModel : public PFTagModel, public SerializableModel
{
    TagModel();
    TagModel(const TagModel& src);
    TagModel(TagModel&& src);
    TagModel(const PFTagModel& src);
    TagModel& operator=(const TagModel&) = delete;
    ~TagModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_tagValue;
};

struct ValueToDateModel : public PFValueToDateModel, public SerializableModel
{
    ValueToDateModel();
    ValueToDateModel(const ValueToDateModel& src);
    ValueToDateModel(ValueToDateModel&& src);
    ValueToDateModel(const PFValueToDateModel& src);
    ValueToDateModel& operator=(const ValueToDateModel&) = delete;
    ~ValueToDateModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_currency;
    String m_totalValueAsDecimal;
};

struct PlayerProfileModel : public PFPlayerProfileModel, public BaseModel
{
    PlayerProfileModel();
    PlayerProfileModel(const PlayerProfileModel& src);
    PlayerProfileModel(PlayerProfileModel&& src);
    PlayerProfileModel(const PFPlayerProfileModel& src);
    PlayerProfileModel& operator=(const PlayerProfileModel&) = delete;
    ~PlayerProfileModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAdCampaignAttributionModel, AdCampaignAttributionModel> m_adCampaignAttributions;
    String m_avatarUrl;
    StdExtra::optional<time_t> m_bannedUntil;
    PointerArrayModel<PFContactEmailInfoModel, ContactEmailInfoModel> m_contactEmailAddresses;
    StdExtra::optional<time_t> m_created;
    String m_displayName;
    PointerArrayModel<char, String> m_experimentVariants;
    StdExtra::optional<time_t> m_lastLogin;
    PointerArrayModel<PFLinkedPlatformAccountModel, LinkedPlatformAccountModel> m_linkedAccounts;
    PointerArrayModel<PFLocationModel, LocationModel> m_locations;
    PointerArrayModel<PFMembershipModel, MembershipModel> m_memberships;
    StdExtra::optional<PFLoginIdentityProvider> m_origination;
    String m_playerId;
    String m_publisherId;
    PointerArrayModel<PFPushNotificationRegistrationModel, PushNotificationRegistrationModel> m_pushNotificationRegistrations;
    PointerArrayModel<PFStatisticModel, StatisticModel> m_statistics;
    PointerArrayModel<PFTagModel, TagModel> m_tags;
    String m_titleId;
    StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
    PointerArrayModel<PFValueToDateModel, ValueToDateModel> m_valuesToDate;
};

struct UserFacebookInfo : public PFUserFacebookInfo, public SerializableModel
{
    UserFacebookInfo();
    UserFacebookInfo(const UserFacebookInfo& src);
    UserFacebookInfo(UserFacebookInfo&& src);
    UserFacebookInfo(const PFUserFacebookInfo& src);
    UserFacebookInfo& operator=(const UserFacebookInfo&) = delete;
    ~UserFacebookInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookId;
    String m_fullName;
};

struct UserGameCenterInfo : public PFUserGameCenterInfo, public SerializableModel
{
    UserGameCenterInfo();
    UserGameCenterInfo(const UserGameCenterInfo& src);
    UserGameCenterInfo(UserGameCenterInfo&& src);
    UserGameCenterInfo(const PFUserGameCenterInfo& src);
    UserGameCenterInfo& operator=(const UserGameCenterInfo&) = delete;
    ~UserGameCenterInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameCenterId;
};

struct UserPsnInfo : public PFUserPsnInfo, public SerializableModel
{
    UserPsnInfo();
    UserPsnInfo(const UserPsnInfo& src);
    UserPsnInfo(UserPsnInfo&& src);
    UserPsnInfo(const PFUserPsnInfo& src);
    UserPsnInfo& operator=(const UserPsnInfo&) = delete;
    ~UserPsnInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_psnAccountId;
    String m_psnOnlineId;
};

struct UserSteamInfo : public PFUserSteamInfo, public BaseModel
{
    UserSteamInfo();
    UserSteamInfo(const UserSteamInfo& src);
    UserSteamInfo(UserSteamInfo&& src);
    UserSteamInfo(const PFUserSteamInfo& src);
    UserSteamInfo& operator=(const UserSteamInfo&) = delete;
    ~UserSteamInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFTitleActivationStatus> m_steamActivationStatus;
    String m_steamCountry;
    StdExtra::optional<PFCurrency> m_steamCurrency;
    String m_steamId;
    String m_steamName;
};

struct UserXboxInfo : public PFUserXboxInfo, public SerializableModel
{
    UserXboxInfo();
    UserXboxInfo(const UserXboxInfo& src);
    UserXboxInfo(UserXboxInfo&& src);
    UserXboxInfo(const PFUserXboxInfo& src);
    UserXboxInfo& operator=(const UserXboxInfo&) = delete;
    ~UserXboxInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_xboxUserId;
};

struct CharacterResult : public PFCharacterResult, public SerializableModel, public ApiResult
{
    CharacterResult();
    CharacterResult(const CharacterResult& src);
    CharacterResult(CharacterResult&& src);
    CharacterResult(const PFCharacterResult& src);
    CharacterResult& operator=(const CharacterResult&) = delete;
    ~CharacterResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterName;
    String m_characterType;
};

struct VirtualCurrencyRechargeTime : public PFVirtualCurrencyRechargeTime, public SerializableModel
{
    VirtualCurrencyRechargeTime();
    VirtualCurrencyRechargeTime(const VirtualCurrencyRechargeTime&) = default;
    VirtualCurrencyRechargeTime(VirtualCurrencyRechargeTime&&) = default;
    VirtualCurrencyRechargeTime(const PFVirtualCurrencyRechargeTime& src);
    VirtualCurrencyRechargeTime& operator=(const VirtualCurrencyRechargeTime&) = delete;
    ~VirtualCurrencyRechargeTime() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct StatisticValue : public PFStatisticValue, public SerializableModel
{
    StatisticValue();
    StatisticValue(const StatisticValue& src);
    StatisticValue(StatisticValue&& src);
    StatisticValue(const PFStatisticValue& src);
    StatisticValue& operator=(const StatisticValue&) = delete;
    ~StatisticValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct GetPlayerCombinedInfoRequestParams : public PFGetPlayerCombinedInfoRequestParams, public BaseModel
{
    GetPlayerCombinedInfoRequestParams();
    GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src);
    GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams&& src);
    GetPlayerCombinedInfoRequestParams(const PFGetPlayerCombinedInfoRequestParams& src);
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

struct EntityKey : public PFEntityKey, public SerializableModel
{
    EntityKey();
    EntityKey(const EntityKey& src);
    EntityKey(EntityKey&& src);
    EntityKey(const PFEntityKey& src);
    EntityKey& operator=(const EntityKey&) = delete;
    ~EntityKey() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_type;
};

struct UserAndroidDeviceInfo : public PFUserAndroidDeviceInfo, public SerializableModel
{
    UserAndroidDeviceInfo();
    UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src);
    UserAndroidDeviceInfo(UserAndroidDeviceInfo&& src);
    UserAndroidDeviceInfo(const PFUserAndroidDeviceInfo& src);
    UserAndroidDeviceInfo& operator=(const UserAndroidDeviceInfo&) = delete;
    ~UserAndroidDeviceInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_androidDeviceId;
};

struct UserAppleIdInfo : public PFUserAppleIdInfo, public SerializableModel
{
    UserAppleIdInfo();
    UserAppleIdInfo(const UserAppleIdInfo& src);
    UserAppleIdInfo(UserAppleIdInfo&& src);
    UserAppleIdInfo(const PFUserAppleIdInfo& src);
    UserAppleIdInfo& operator=(const UserAppleIdInfo&) = delete;
    ~UserAppleIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_appleSubjectId;
};

struct UserCustomIdInfo : public PFUserCustomIdInfo, public SerializableModel
{
    UserCustomIdInfo();
    UserCustomIdInfo(const UserCustomIdInfo& src);
    UserCustomIdInfo(UserCustomIdInfo&& src);
    UserCustomIdInfo(const PFUserCustomIdInfo& src);
    UserCustomIdInfo& operator=(const UserCustomIdInfo&) = delete;
    ~UserCustomIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_customId;
};

struct UserFacebookInstantGamesIdInfo : public PFUserFacebookInstantGamesIdInfo, public SerializableModel
{
    UserFacebookInstantGamesIdInfo();
    UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src);
    UserFacebookInstantGamesIdInfo(UserFacebookInstantGamesIdInfo&& src);
    UserFacebookInstantGamesIdInfo(const PFUserFacebookInstantGamesIdInfo& src);
    UserFacebookInstantGamesIdInfo& operator=(const UserFacebookInstantGamesIdInfo&) = delete;
    ~UserFacebookInstantGamesIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookInstantGamesId;
};

struct UserGoogleInfo : public PFUserGoogleInfo, public SerializableModel
{
    UserGoogleInfo();
    UserGoogleInfo(const UserGoogleInfo& src);
    UserGoogleInfo(UserGoogleInfo&& src);
    UserGoogleInfo(const PFUserGoogleInfo& src);
    UserGoogleInfo& operator=(const UserGoogleInfo&) = delete;
    ~UserGoogleInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_googleEmail;
    String m_googleGender;
    String m_googleId;
    String m_googleLocale;
    String m_googleName;
};

struct UserIosDeviceInfo : public PFUserIosDeviceInfo, public SerializableModel
{
    UserIosDeviceInfo();
    UserIosDeviceInfo(const UserIosDeviceInfo& src);
    UserIosDeviceInfo(UserIosDeviceInfo&& src);
    UserIosDeviceInfo(const PFUserIosDeviceInfo& src);
    UserIosDeviceInfo& operator=(const UserIosDeviceInfo&) = delete;
    ~UserIosDeviceInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_iosDeviceId;
};

struct UserKongregateInfo : public PFUserKongregateInfo, public SerializableModel
{
    UserKongregateInfo();
    UserKongregateInfo(const UserKongregateInfo& src);
    UserKongregateInfo(UserKongregateInfo&& src);
    UserKongregateInfo(const PFUserKongregateInfo& src);
    UserKongregateInfo& operator=(const UserKongregateInfo&) = delete;
    ~UserKongregateInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_kongregateId;
    String m_kongregateName;
};

struct UserNintendoSwitchAccountIdInfo : public PFUserNintendoSwitchAccountIdInfo, public SerializableModel
{
    UserNintendoSwitchAccountIdInfo();
    UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src);
    UserNintendoSwitchAccountIdInfo(UserNintendoSwitchAccountIdInfo&& src);
    UserNintendoSwitchAccountIdInfo(const PFUserNintendoSwitchAccountIdInfo& src);
    UserNintendoSwitchAccountIdInfo& operator=(const UserNintendoSwitchAccountIdInfo&) = delete;
    ~UserNintendoSwitchAccountIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchAccountSubjectId;
};

struct UserNintendoSwitchDeviceIdInfo : public PFUserNintendoSwitchDeviceIdInfo, public SerializableModel
{
    UserNintendoSwitchDeviceIdInfo();
    UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src);
    UserNintendoSwitchDeviceIdInfo(UserNintendoSwitchDeviceIdInfo&& src);
    UserNintendoSwitchDeviceIdInfo(const PFUserNintendoSwitchDeviceIdInfo& src);
    UserNintendoSwitchDeviceIdInfo& operator=(const UserNintendoSwitchDeviceIdInfo&) = delete;
    ~UserNintendoSwitchDeviceIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchDeviceId;
};

struct UserOpenIdInfo : public PFUserOpenIdInfo, public SerializableModel
{
    UserOpenIdInfo();
    UserOpenIdInfo(const UserOpenIdInfo& src);
    UserOpenIdInfo(UserOpenIdInfo&& src);
    UserOpenIdInfo(const PFUserOpenIdInfo& src);
    UserOpenIdInfo& operator=(const UserOpenIdInfo&) = delete;
    ~UserOpenIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_connectionId;
    String m_issuer;
    String m_subject;
};

struct UserPrivateAccountInfo : public PFUserPrivateAccountInfo, public SerializableModel
{
    UserPrivateAccountInfo();
    UserPrivateAccountInfo(const UserPrivateAccountInfo& src);
    UserPrivateAccountInfo(UserPrivateAccountInfo&& src);
    UserPrivateAccountInfo(const PFUserPrivateAccountInfo& src);
    UserPrivateAccountInfo& operator=(const UserPrivateAccountInfo&) = delete;
    ~UserPrivateAccountInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_email;
};

struct UserTitleInfo : public PFUserTitleInfo, public BaseModel
{
    UserTitleInfo();
    UserTitleInfo(const UserTitleInfo& src);
    UserTitleInfo(UserTitleInfo&& src);
    UserTitleInfo(const PFUserTitleInfo& src);
    UserTitleInfo& operator=(const UserTitleInfo&) = delete;
    ~UserTitleInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_avatarUrl;
    String m_displayName;
    StdExtra::optional<time_t> m_firstLogin;
    StdExtra::optional<bool> m_isBanned;
    StdExtra::optional<time_t> m_lastLogin;
    StdExtra::optional<PFUserOrigination> m_origination;
    StdExtra::optional<EntityKey> m_titlePlayerAccount;
};

struct UserTwitchInfo : public PFUserTwitchInfo, public SerializableModel
{
    UserTwitchInfo();
    UserTwitchInfo(const UserTwitchInfo& src);
    UserTwitchInfo(UserTwitchInfo&& src);
    UserTwitchInfo(const PFUserTwitchInfo& src);
    UserTwitchInfo& operator=(const UserTwitchInfo&) = delete;
    ~UserTwitchInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_twitchId;
    String m_twitchUserName;
};

struct UserAccountInfo : public PFUserAccountInfo, public BaseModel
{
    UserAccountInfo();
    UserAccountInfo(const UserAccountInfo& src);
    UserAccountInfo(UserAccountInfo&& src);
    UserAccountInfo(const PFUserAccountInfo& src);
    UserAccountInfo& operator=(const UserAccountInfo&) = delete;
    ~UserAccountInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

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
    PointerArrayModel<PFUserOpenIdInfo, UserOpenIdInfo> m_openIdInfo;
    String m_playFabId;
    StdExtra::optional<UserPrivateAccountInfo> m_privateInfo;
    StdExtra::optional<UserPsnInfo> m_psnInfo;
    StdExtra::optional<UserSteamInfo> m_steamInfo;
    StdExtra::optional<UserTitleInfo> m_titleInfo;
    StdExtra::optional<UserTwitchInfo> m_twitchInfo;
    String m_username;
    StdExtra::optional<UserXboxInfo> m_xboxInfo;
};

struct CharacterInventory : public PFCharacterInventory, public BaseModel
{
    CharacterInventory();
    CharacterInventory(const CharacterInventory& src);
    CharacterInventory(CharacterInventory&& src);
    CharacterInventory(const PFCharacterInventory& src);
    CharacterInventory& operator=(const CharacterInventory&) = delete;
    ~CharacterInventory() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
};

struct GetPlayerCombinedInfoResultPayload : public PFGetPlayerCombinedInfoResultPayload, public BaseModel
{
    GetPlayerCombinedInfoResultPayload();
    GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src);
    GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload&& src);
    GetPlayerCombinedInfoResultPayload(const PFGetPlayerCombinedInfoResultPayload& src);
    GetPlayerCombinedInfoResultPayload& operator=(const GetPlayerCombinedInfoResultPayload&) = delete;
    ~GetPlayerCombinedInfoResultPayload() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_accountInfo;
    PointerArrayModel<PFCharacterInventory, CharacterInventory> m_characterInventories;
    PointerArrayModel<PFCharacterResult, CharacterResult> m_characterList;
    StdExtra::optional<PlayerProfileModel> m_playerProfile;
    PointerArrayModel<PFStatisticValue, StatisticValue> m_playerStatistics;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_titleData;
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_userData;
    PointerArrayModel<PFItemInstance, ItemInstance> m_userInventory;
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_userReadOnlyData;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_userVirtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_userVirtualCurrencyRechargeTimes;
};

struct GetPlayerCombinedInfoRequest : public PFGetPlayerCombinedInfoRequest, public BaseModel
{
    GetPlayerCombinedInfoRequest();
    GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src);
    GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest&& src);
    GetPlayerCombinedInfoRequest(const PFGetPlayerCombinedInfoRequest& src);
    GetPlayerCombinedInfoRequest& operator=(const GetPlayerCombinedInfoRequest&) = delete;
    ~GetPlayerCombinedInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    GetPlayerCombinedInfoRequestParams m_infoRequestParameters;
    String m_playFabId;
};

struct GetPlayerCombinedInfoResult : public PFGetPlayerCombinedInfoResult, public BaseModel, public ApiResult
{
    GetPlayerCombinedInfoResult();
    GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src);
    GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult&& src);
    GetPlayerCombinedInfoResult(const PFGetPlayerCombinedInfoResult& src);
    GetPlayerCombinedInfoResult& operator=(const GetPlayerCombinedInfoResult&) = delete;
    ~GetPlayerCombinedInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> m_infoResultPayload;
    String m_playFabId;
};

struct ResultTableNode : public PFResultTableNode, public SerializableModel
{
    ResultTableNode();
    ResultTableNode(const ResultTableNode& src);
    ResultTableNode(ResultTableNode&& src);
    ResultTableNode(const PFResultTableNode& src);
    ResultTableNode& operator=(const ResultTableNode&) = delete;
    ~ResultTableNode() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_resultItem;
};

struct RandomResultTableListing : public PFRandomResultTableListing, public BaseModel
{
    RandomResultTableListing();
    RandomResultTableListing(const RandomResultTableListing& src);
    RandomResultTableListing(RandomResultTableListing&& src);
    RandomResultTableListing(const PFRandomResultTableListing& src);
    RandomResultTableListing& operator=(const RandomResultTableListing&) = delete;
    ~RandomResultTableListing() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    PointerArrayModel<PFResultTableNode, ResultTableNode> m_nodes;
    String m_tableId;
};

struct GetRandomResultTablesResult : public PFGetRandomResultTablesResult, public BaseModel, public ApiResult
{
    GetRandomResultTablesResult();
    GetRandomResultTablesResult(const GetRandomResultTablesResult& src);
    GetRandomResultTablesResult(GetRandomResultTablesResult&& src);
    GetRandomResultTablesResult(const PFGetRandomResultTablesResult& src);
    GetRandomResultTablesResult& operator=(const GetRandomResultTablesResult&) = delete;
    ~GetRandomResultTablesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFRandomResultTableListingDictionaryEntry, RandomResultTableListing> m_tables;
};

struct SetPublisherDataRequest : public PFSetPublisherDataRequest, public SerializableModel
{
    SetPublisherDataRequest();
    SetPublisherDataRequest(const SetPublisherDataRequest& src);
    SetPublisherDataRequest(SetPublisherDataRequest&& src);
    SetPublisherDataRequest(const PFSetPublisherDataRequest& src);
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

struct Variable : public PFVariable, public SerializableModel
{
    Variable();
    Variable(const Variable& src);
    Variable(Variable&& src);
    Variable(const PFVariable& src);
    Variable& operator=(const Variable&) = delete;
    ~Variable() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_name;
    String m_value;
};

struct TreatmentAssignment : public PFTreatmentAssignment, public BaseModel
{
    TreatmentAssignment();
    TreatmentAssignment(const TreatmentAssignment& src);
    TreatmentAssignment(TreatmentAssignment&& src);
    TreatmentAssignment(const PFTreatmentAssignment& src);
    TreatmentAssignment& operator=(const TreatmentAssignment&) = delete;
    ~TreatmentAssignment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFVariable, Variable> m_variables;
    PointerArrayModel<char, String> m_variants;
};

struct Port : public PFPort, public SerializableModel
{
    Port();
    Port(const Port& src);
    Port(Port&& src);
    Port(const PFPort& src);
    Port& operator=(const Port&) = delete;
    ~Port() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_name;
};

struct EntityLineage : public PFEntityLineage, public SerializableModel
{
    EntityLineage();
    EntityLineage(const EntityLineage& src);
    EntityLineage(EntityLineage&& src);
    EntityLineage(const PFEntityLineage& src);
    EntityLineage& operator=(const EntityLineage&) = delete;
    ~EntityLineage() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_groupId;
    String m_masterPlayerAccountId;
    String m_namespaceId;
    String m_titleId;
    String m_titlePlayerAccountId;
};


namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFItemInstance& input);
template<> inline JsonValue ToJson<>(const PFScriptExecutionError& input);
template<> inline JsonValue ToJson<>(const PFLogStatement& input);
template<> inline JsonValue ToJson<>(const PFExecuteCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PFNameIdentifier& input);
template<> inline JsonValue ToJson<>(const PFUserDataRecord& input);
template<> inline JsonValue ToJson<>(const PFPlayerProfileViewConstraints& input);
template<> inline JsonValue ToJson<>(const PFAdCampaignAttributionModel& input);
template<> inline JsonValue ToJson<>(const PFContactEmailInfoModel& input);
template<> inline JsonValue ToJson<>(const PFLinkedPlatformAccountModel& input);
template<> inline JsonValue ToJson<>(const PFLocationModel& input);
template<> inline JsonValue ToJson<>(const PFSubscriptionModel& input);
template<> inline JsonValue ToJson<>(const PFMembershipModel& input);
template<> inline JsonValue ToJson<>(const PFPushNotificationRegistrationModel& input);
template<> inline JsonValue ToJson<>(const PFStatisticModel& input);
template<> inline JsonValue ToJson<>(const PFTagModel& input);
template<> inline JsonValue ToJson<>(const PFValueToDateModel& input);
template<> inline JsonValue ToJson<>(const PFPlayerProfileModel& input);
template<> inline JsonValue ToJson<>(const PFUserFacebookInfo& input);
template<> inline JsonValue ToJson<>(const PFUserGameCenterInfo& input);
template<> inline JsonValue ToJson<>(const PFUserPsnInfo& input);
template<> inline JsonValue ToJson<>(const PFUserSteamInfo& input);
template<> inline JsonValue ToJson<>(const PFUserXboxInfo& input);
template<> inline JsonValue ToJson<>(const PFCharacterResult& input);
template<> inline JsonValue ToJson<>(const PFVirtualCurrencyRechargeTime& input);
template<> inline JsonValue ToJson<>(const PFStatisticValue& input);
template<> inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoRequestParams& input);
template<> inline JsonValue ToJson<>(const PFEntityKey& input);
template<> inline JsonValue ToJson<>(const PFUserAndroidDeviceInfo& input);
template<> inline JsonValue ToJson<>(const PFUserAppleIdInfo& input);
template<> inline JsonValue ToJson<>(const PFUserCustomIdInfo& input);
template<> inline JsonValue ToJson<>(const PFUserFacebookInstantGamesIdInfo& input);
template<> inline JsonValue ToJson<>(const PFUserGoogleInfo& input);
template<> inline JsonValue ToJson<>(const PFUserIosDeviceInfo& input);
template<> inline JsonValue ToJson<>(const PFUserKongregateInfo& input);
template<> inline JsonValue ToJson<>(const PFUserNintendoSwitchAccountIdInfo& input);
template<> inline JsonValue ToJson<>(const PFUserNintendoSwitchDeviceIdInfo& input);
template<> inline JsonValue ToJson<>(const PFUserOpenIdInfo& input);
template<> inline JsonValue ToJson<>(const PFUserPrivateAccountInfo& input);
template<> inline JsonValue ToJson<>(const PFUserTitleInfo& input);
template<> inline JsonValue ToJson<>(const PFUserTwitchInfo& input);
template<> inline JsonValue ToJson<>(const PFUserAccountInfo& input);
template<> inline JsonValue ToJson<>(const PFCharacterInventory& input);
template<> inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoResultPayload& input);
template<> inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoResult& input);
template<> inline JsonValue ToJson<>(const PFResultTableNode& input);
template<> inline JsonValue ToJson<>(const PFRandomResultTableListing& input);
template<> inline JsonValue ToJson<>(const PFGetRandomResultTablesResult& input);
template<> inline JsonValue ToJson<>(const PFSetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PFVariable& input);
template<> inline JsonValue ToJson<>(const PFTreatmentAssignment& input);
template<> inline JsonValue ToJson<>(const PFPort& input);
template<> inline JsonValue ToJson<>(const PFEntityLineage& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
