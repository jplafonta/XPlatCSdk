#pragma once

#include <playfab/PlayFabSharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{

// Shared Classes
struct EntityKey : public PlayFabEntityKey, public SerializableModel
{
    EntityKey();
    EntityKey(const EntityKey& src);
    EntityKey(EntityKey&& src);
    EntityKey(const PlayFabEntityKey& src);
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

struct EntityTokenResponse : public PlayFabEntityTokenResponse, public BaseModel, public ApiResult
{
    EntityTokenResponse();
    EntityTokenResponse(const EntityTokenResponse& src);
    EntityTokenResponse(EntityTokenResponse&& src);
    EntityTokenResponse(const PlayFabEntityTokenResponse& src);
    EntityTokenResponse& operator=(const EntityTokenResponse&) = delete;
    ~EntityTokenResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    String m_entityToken;
    StdExtra::optional<time_t> m_tokenExpiration;
};

struct UserAndroidDeviceInfo : public PlayFabUserAndroidDeviceInfo, public SerializableModel
{
    UserAndroidDeviceInfo();
    UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src);
    UserAndroidDeviceInfo(UserAndroidDeviceInfo&& src);
    UserAndroidDeviceInfo(const PlayFabUserAndroidDeviceInfo& src);
    UserAndroidDeviceInfo& operator=(const UserAndroidDeviceInfo&) = delete;
    ~UserAndroidDeviceInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_androidDeviceId;
};

struct UserAppleIdInfo : public PlayFabUserAppleIdInfo, public SerializableModel
{
    UserAppleIdInfo();
    UserAppleIdInfo(const UserAppleIdInfo& src);
    UserAppleIdInfo(UserAppleIdInfo&& src);
    UserAppleIdInfo(const PlayFabUserAppleIdInfo& src);
    UserAppleIdInfo& operator=(const UserAppleIdInfo&) = delete;
    ~UserAppleIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_appleSubjectId;
};

struct UserCustomIdInfo : public PlayFabUserCustomIdInfo, public SerializableModel
{
    UserCustomIdInfo();
    UserCustomIdInfo(const UserCustomIdInfo& src);
    UserCustomIdInfo(UserCustomIdInfo&& src);
    UserCustomIdInfo(const PlayFabUserCustomIdInfo& src);
    UserCustomIdInfo& operator=(const UserCustomIdInfo&) = delete;
    ~UserCustomIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_customId;
};

struct UserFacebookInfo : public PlayFabUserFacebookInfo, public SerializableModel
{
    UserFacebookInfo();
    UserFacebookInfo(const UserFacebookInfo& src);
    UserFacebookInfo(UserFacebookInfo&& src);
    UserFacebookInfo(const PlayFabUserFacebookInfo& src);
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

struct UserFacebookInstantGamesIdInfo : public PlayFabUserFacebookInstantGamesIdInfo, public SerializableModel
{
    UserFacebookInstantGamesIdInfo();
    UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src);
    UserFacebookInstantGamesIdInfo(UserFacebookInstantGamesIdInfo&& src);
    UserFacebookInstantGamesIdInfo(const PlayFabUserFacebookInstantGamesIdInfo& src);
    UserFacebookInstantGamesIdInfo& operator=(const UserFacebookInstantGamesIdInfo&) = delete;
    ~UserFacebookInstantGamesIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookInstantGamesId;
};

struct UserGameCenterInfo : public PlayFabUserGameCenterInfo, public SerializableModel
{
    UserGameCenterInfo();
    UserGameCenterInfo(const UserGameCenterInfo& src);
    UserGameCenterInfo(UserGameCenterInfo&& src);
    UserGameCenterInfo(const PlayFabUserGameCenterInfo& src);
    UserGameCenterInfo& operator=(const UserGameCenterInfo&) = delete;
    ~UserGameCenterInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameCenterId;
};

struct UserGoogleInfo : public PlayFabUserGoogleInfo, public SerializableModel
{
    UserGoogleInfo();
    UserGoogleInfo(const UserGoogleInfo& src);
    UserGoogleInfo(UserGoogleInfo&& src);
    UserGoogleInfo(const PlayFabUserGoogleInfo& src);
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

struct UserIosDeviceInfo : public PlayFabUserIosDeviceInfo, public SerializableModel
{
    UserIosDeviceInfo();
    UserIosDeviceInfo(const UserIosDeviceInfo& src);
    UserIosDeviceInfo(UserIosDeviceInfo&& src);
    UserIosDeviceInfo(const PlayFabUserIosDeviceInfo& src);
    UserIosDeviceInfo& operator=(const UserIosDeviceInfo&) = delete;
    ~UserIosDeviceInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_iosDeviceId;
};

struct UserKongregateInfo : public PlayFabUserKongregateInfo, public SerializableModel
{
    UserKongregateInfo();
    UserKongregateInfo(const UserKongregateInfo& src);
    UserKongregateInfo(UserKongregateInfo&& src);
    UserKongregateInfo(const PlayFabUserKongregateInfo& src);
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

struct UserNintendoSwitchAccountIdInfo : public PlayFabUserNintendoSwitchAccountIdInfo, public SerializableModel
{
    UserNintendoSwitchAccountIdInfo();
    UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src);
    UserNintendoSwitchAccountIdInfo(UserNintendoSwitchAccountIdInfo&& src);
    UserNintendoSwitchAccountIdInfo(const PlayFabUserNintendoSwitchAccountIdInfo& src);
    UserNintendoSwitchAccountIdInfo& operator=(const UserNintendoSwitchAccountIdInfo&) = delete;
    ~UserNintendoSwitchAccountIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchAccountSubjectId;
};

struct UserNintendoSwitchDeviceIdInfo : public PlayFabUserNintendoSwitchDeviceIdInfo, public SerializableModel
{
    UserNintendoSwitchDeviceIdInfo();
    UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src);
    UserNintendoSwitchDeviceIdInfo(UserNintendoSwitchDeviceIdInfo&& src);
    UserNintendoSwitchDeviceIdInfo(const PlayFabUserNintendoSwitchDeviceIdInfo& src);
    UserNintendoSwitchDeviceIdInfo& operator=(const UserNintendoSwitchDeviceIdInfo&) = delete;
    ~UserNintendoSwitchDeviceIdInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchDeviceId;
};

struct UserOpenIdInfo : public PlayFabUserOpenIdInfo, public SerializableModel
{
    UserOpenIdInfo();
    UserOpenIdInfo(const UserOpenIdInfo& src);
    UserOpenIdInfo(UserOpenIdInfo&& src);
    UserOpenIdInfo(const PlayFabUserOpenIdInfo& src);
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

struct UserPrivateAccountInfo : public PlayFabUserPrivateAccountInfo, public SerializableModel
{
    UserPrivateAccountInfo();
    UserPrivateAccountInfo(const UserPrivateAccountInfo& src);
    UserPrivateAccountInfo(UserPrivateAccountInfo&& src);
    UserPrivateAccountInfo(const PlayFabUserPrivateAccountInfo& src);
    UserPrivateAccountInfo& operator=(const UserPrivateAccountInfo&) = delete;
    ~UserPrivateAccountInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_email;
};

struct UserPsnInfo : public PlayFabUserPsnInfo, public SerializableModel
{
    UserPsnInfo();
    UserPsnInfo(const UserPsnInfo& src);
    UserPsnInfo(UserPsnInfo&& src);
    UserPsnInfo(const PlayFabUserPsnInfo& src);
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

struct UserSteamInfo : public PlayFabUserSteamInfo, public BaseModel
{
    UserSteamInfo();
    UserSteamInfo(const UserSteamInfo& src);
    UserSteamInfo(UserSteamInfo&& src);
    UserSteamInfo(const PlayFabUserSteamInfo& src);
    UserSteamInfo& operator=(const UserSteamInfo&) = delete;
    ~UserSteamInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabTitleActivationStatus> m_steamActivationStatus;
    String m_steamCountry;
    StdExtra::optional<PlayFabCurrency> m_steamCurrency;
    String m_steamId;
    String m_steamName;
};

struct UserTitleInfo : public PlayFabUserTitleInfo, public BaseModel
{
    UserTitleInfo();
    UserTitleInfo(const UserTitleInfo& src);
    UserTitleInfo(UserTitleInfo&& src);
    UserTitleInfo(const PlayFabUserTitleInfo& src);
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
    StdExtra::optional<PlayFabUserOrigination> m_origination;
    StdExtra::optional<EntityKey> m_titlePlayerAccount;
};

struct UserTwitchInfo : public PlayFabUserTwitchInfo, public SerializableModel
{
    UserTwitchInfo();
    UserTwitchInfo(const UserTwitchInfo& src);
    UserTwitchInfo(UserTwitchInfo&& src);
    UserTwitchInfo(const PlayFabUserTwitchInfo& src);
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

struct UserWindowsHelloInfo : public PlayFabUserWindowsHelloInfo, public SerializableModel
{
    UserWindowsHelloInfo();
    UserWindowsHelloInfo(const UserWindowsHelloInfo& src);
    UserWindowsHelloInfo(UserWindowsHelloInfo&& src);
    UserWindowsHelloInfo(const PlayFabUserWindowsHelloInfo& src);
    UserWindowsHelloInfo& operator=(const UserWindowsHelloInfo&) = delete;
    ~UserWindowsHelloInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_windowsHelloDeviceName;
    String m_windowsHelloPublicKeyHash;
};

struct UserXboxInfo : public PlayFabUserXboxInfo, public SerializableModel
{
    UserXboxInfo();
    UserXboxInfo(const UserXboxInfo& src);
    UserXboxInfo(UserXboxInfo&& src);
    UserXboxInfo(const PlayFabUserXboxInfo& src);
    UserXboxInfo& operator=(const UserXboxInfo&) = delete;
    ~UserXboxInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_xboxUserId;
};

struct UserAccountInfo : public PlayFabUserAccountInfo, public BaseModel
{
    UserAccountInfo();
    UserAccountInfo(const UserAccountInfo& src);
    UserAccountInfo(UserAccountInfo&& src);
    UserAccountInfo(const PlayFabUserAccountInfo& src);
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
    PointerArrayModel<PlayFabUserOpenIdInfo, UserOpenIdInfo> m_openIdInfo;
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

struct ItemInstance : public PlayFabItemInstance, public BaseModel
{
    ItemInstance();
    ItemInstance(const ItemInstance& src);
    ItemInstance(ItemInstance&& src);
    ItemInstance(const PlayFabItemInstance& src);
    ItemInstance& operator=(const ItemInstance&) = delete;
    ~ItemInstance() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    PointerArrayModel<char, String> m_bundleContents;
    String m_bundleParent;
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customData;
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

struct CharacterInventory : public PlayFabCharacterInventory, public BaseModel
{
    CharacterInventory();
    CharacterInventory(const CharacterInventory& src);
    CharacterInventory(CharacterInventory&& src);
    CharacterInventory(const PlayFabCharacterInventory& src);
    CharacterInventory& operator=(const CharacterInventory&) = delete;
    ~CharacterInventory() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
};

struct CharacterResult : public PlayFabCharacterResult, public SerializableModel, public ApiResult
{
    CharacterResult();
    CharacterResult(const CharacterResult& src);
    CharacterResult(CharacterResult&& src);
    CharacterResult(const PlayFabCharacterResult& src);
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

struct AdCampaignAttributionModel : public PlayFabAdCampaignAttributionModel, public SerializableModel
{
    AdCampaignAttributionModel();
    AdCampaignAttributionModel(const AdCampaignAttributionModel& src);
    AdCampaignAttributionModel(AdCampaignAttributionModel&& src);
    AdCampaignAttributionModel(const PlayFabAdCampaignAttributionModel& src);
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

struct ContactEmailInfoModel : public PlayFabContactEmailInfoModel, public BaseModel
{
    ContactEmailInfoModel();
    ContactEmailInfoModel(const ContactEmailInfoModel& src);
    ContactEmailInfoModel(ContactEmailInfoModel&& src);
    ContactEmailInfoModel(const PlayFabContactEmailInfoModel& src);
    ContactEmailInfoModel& operator=(const ContactEmailInfoModel&) = delete;
    ~ContactEmailInfoModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_emailAddress;
    String m_name;
    StdExtra::optional<PlayFabEmailVerificationStatus> m_verificationStatus;
};

struct LinkedPlatformAccountModel : public PlayFabLinkedPlatformAccountModel, public BaseModel
{
    LinkedPlatformAccountModel();
    LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src);
    LinkedPlatformAccountModel(LinkedPlatformAccountModel&& src);
    LinkedPlatformAccountModel(const PlayFabLinkedPlatformAccountModel& src);
    LinkedPlatformAccountModel& operator=(const LinkedPlatformAccountModel&) = delete;
    ~LinkedPlatformAccountModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_email;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_platform;
    String m_platformUserId;
    String m_username;
};

struct LocationModel : public PlayFabLocationModel, public BaseModel
{
    LocationModel();
    LocationModel(const LocationModel& src);
    LocationModel(LocationModel&& src);
    LocationModel(const PlayFabLocationModel& src);
    LocationModel& operator=(const LocationModel&) = delete;
    ~LocationModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_city;
    StdExtra::optional<PlayFabContinentCode> m_continentCode;
    StdExtra::optional<PlayFabCountryCode> m_countryCode;
    StdExtra::optional<double> m_latitude;
    StdExtra::optional<double> m_longitude;
};

struct SubscriptionModel : public PlayFabSubscriptionModel, public BaseModel
{
    SubscriptionModel();
    SubscriptionModel(const SubscriptionModel& src);
    SubscriptionModel(SubscriptionModel&& src);
    SubscriptionModel(const PlayFabSubscriptionModel& src);
    SubscriptionModel& operator=(const SubscriptionModel&) = delete;
    ~SubscriptionModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabSubscriptionProviderStatus> m_status;
    String m_subscriptionId;
    String m_subscriptionItemId;
    String m_subscriptionProvider;
};

struct MembershipModel : public PlayFabMembershipModel, public BaseModel
{
    MembershipModel();
    MembershipModel(const MembershipModel& src);
    MembershipModel(MembershipModel&& src);
    MembershipModel(const PlayFabMembershipModel& src);
    MembershipModel& operator=(const MembershipModel&) = delete;
    ~MembershipModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_membershipId;
    StdExtra::optional<time_t> m_overrideExpiration;
    PointerArrayModel<PlayFabSubscriptionModel, SubscriptionModel> m_subscriptions;
};

struct PushNotificationRegistrationModel : public PlayFabPushNotificationRegistrationModel, public BaseModel
{
    PushNotificationRegistrationModel();
    PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src);
    PushNotificationRegistrationModel(PushNotificationRegistrationModel&& src);
    PushNotificationRegistrationModel(const PlayFabPushNotificationRegistrationModel& src);
    PushNotificationRegistrationModel& operator=(const PushNotificationRegistrationModel&) = delete;
    ~PushNotificationRegistrationModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_notificationEndpointARN;
    StdExtra::optional<PlayFabPushNotificationPlatform> m_platform;
};

struct StatisticModel : public PlayFabStatisticModel, public SerializableModel
{
    StatisticModel();
    StatisticModel(const StatisticModel& src);
    StatisticModel(StatisticModel&& src);
    StatisticModel(const PlayFabStatisticModel& src);
    StatisticModel& operator=(const StatisticModel&) = delete;
    ~StatisticModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_name;
};

struct TagModel : public PlayFabTagModel, public SerializableModel
{
    TagModel();
    TagModel(const TagModel& src);
    TagModel(TagModel&& src);
    TagModel(const PlayFabTagModel& src);
    TagModel& operator=(const TagModel&) = delete;
    ~TagModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_tagValue;
};

struct ValueToDateModel : public PlayFabValueToDateModel, public SerializableModel
{
    ValueToDateModel();
    ValueToDateModel(const ValueToDateModel& src);
    ValueToDateModel(ValueToDateModel&& src);
    ValueToDateModel(const PlayFabValueToDateModel& src);
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

struct PlayerProfileModel : public PlayFabPlayerProfileModel, public BaseModel
{
    PlayerProfileModel();
    PlayerProfileModel(const PlayerProfileModel& src);
    PlayerProfileModel(PlayerProfileModel&& src);
    PlayerProfileModel(const PlayFabPlayerProfileModel& src);
    PlayerProfileModel& operator=(const PlayerProfileModel&) = delete;
    ~PlayerProfileModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdCampaignAttributionModel, AdCampaignAttributionModel> m_adCampaignAttributions;
    String m_avatarUrl;
    StdExtra::optional<time_t> m_bannedUntil;
    PointerArrayModel<PlayFabContactEmailInfoModel, ContactEmailInfoModel> m_contactEmailAddresses;
    StdExtra::optional<time_t> m_created;
    String m_displayName;
    PointerArrayModel<char, String> m_experimentVariants;
    StdExtra::optional<time_t> m_lastLogin;
    PointerArrayModel<PlayFabLinkedPlatformAccountModel, LinkedPlatformAccountModel> m_linkedAccounts;
    PointerArrayModel<PlayFabLocationModel, LocationModel> m_locations;
    PointerArrayModel<PlayFabMembershipModel, MembershipModel> m_memberships;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_origination;
    String m_playerId;
    String m_publisherId;
    PointerArrayModel<PlayFabPushNotificationRegistrationModel, PushNotificationRegistrationModel> m_pushNotificationRegistrations;
    PointerArrayModel<PlayFabStatisticModel, StatisticModel> m_statistics;
    PointerArrayModel<PlayFabTagModel, TagModel> m_tags;
    String m_titleId;
    StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
    PointerArrayModel<PlayFabValueToDateModel, ValueToDateModel> m_valuesToDate;
};

struct StatisticValue : public PlayFabStatisticValue, public SerializableModel
{
    StatisticValue();
    StatisticValue(const StatisticValue& src);
    StatisticValue(StatisticValue&& src);
    StatisticValue(const PlayFabStatisticValue& src);
    StatisticValue& operator=(const StatisticValue&) = delete;
    ~StatisticValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct UserDataRecord : public PlayFabUserDataRecord, public BaseModel
{
    UserDataRecord();
    UserDataRecord(const UserDataRecord& src);
    UserDataRecord(UserDataRecord&& src);
    UserDataRecord(const PlayFabUserDataRecord& src);
    UserDataRecord& operator=(const UserDataRecord&) = delete;
    ~UserDataRecord() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_value;
};

struct VirtualCurrencyRechargeTime : public PlayFabVirtualCurrencyRechargeTime, public SerializableModel
{
    VirtualCurrencyRechargeTime();
    VirtualCurrencyRechargeTime(const VirtualCurrencyRechargeTime&) = default;
    VirtualCurrencyRechargeTime(VirtualCurrencyRechargeTime&&) = default;
    VirtualCurrencyRechargeTime(const PlayFabVirtualCurrencyRechargeTime& src);
    VirtualCurrencyRechargeTime& operator=(const VirtualCurrencyRechargeTime&) = delete;
    ~VirtualCurrencyRechargeTime() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetPlayerCombinedInfoResultPayload : public PlayFabGetPlayerCombinedInfoResultPayload, public BaseModel
{
    GetPlayerCombinedInfoResultPayload();
    GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src);
    GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload&& src);
    GetPlayerCombinedInfoResultPayload(const PlayFabGetPlayerCombinedInfoResultPayload& src);
    GetPlayerCombinedInfoResultPayload& operator=(const GetPlayerCombinedInfoResultPayload&) = delete;
    ~GetPlayerCombinedInfoResultPayload() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_accountInfo;
    PointerArrayModel<PlayFabCharacterInventory, CharacterInventory> m_characterInventories;
    PointerArrayModel<PlayFabCharacterResult, CharacterResult> m_characterList;
    StdExtra::optional<PlayerProfileModel> m_playerProfile;
    PointerArrayModel<PlayFabStatisticValue, StatisticValue> m_playerStatistics;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_titleData;
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_userData;
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_userInventory;
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_userReadOnlyData;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_userVirtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_userVirtualCurrencyRechargeTimes;
};

struct UserSettings : public PlayFabUserSettings, public SerializableModel
{
    UserSettings();
    UserSettings(const UserSettings&) = default;
    UserSettings(UserSettings&&) = default;
    UserSettings(const PlayFabUserSettings& src);
    UserSettings& operator=(const UserSettings&) = delete;
    ~UserSettings() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct Variable : public PlayFabVariable, public SerializableModel
{
    Variable();
    Variable(const Variable& src);
    Variable(Variable&& src);
    Variable(const PlayFabVariable& src);
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

struct TreatmentAssignment : public PlayFabTreatmentAssignment, public BaseModel
{
    TreatmentAssignment();
    TreatmentAssignment(const TreatmentAssignment& src);
    TreatmentAssignment(TreatmentAssignment&& src);
    TreatmentAssignment(const PlayFabTreatmentAssignment& src);
    TreatmentAssignment& operator=(const TreatmentAssignment&) = delete;
    ~TreatmentAssignment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabVariable, Variable> m_variables;
    PointerArrayModel<char, String> m_variants;
};

struct LoginResult : public BaseModel, public ApiResult
{
    LoginResult();
    LoginResult(const LoginResult& src);
    LoginResult(LoginResult&& src);
    LoginResult& operator=(const LoginResult&) = delete;
    ~LoginResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityTokenResponse> entityToken;
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> infoResultPayload;
    StdExtra::optional<time_t> lastLoginTime;
    bool newlyCreated;
    String playFabId;
    String sessionTicket;
    StdExtra::optional<UserSettings> settingsForUser;
    StdExtra::optional<TreatmentAssignment> treatmentAssignment;
};


namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabEntityKey& input);
template<> inline JsonValue ToJson<>(const PlayFabEntityTokenResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabUserAndroidDeviceInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserAppleIdInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserCustomIdInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserFacebookInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserFacebookInstantGamesIdInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserGameCenterInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserGoogleInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserIosDeviceInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserKongregateInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserNintendoSwitchAccountIdInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserNintendoSwitchDeviceIdInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserOpenIdInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserPrivateAccountInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserPsnInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserSteamInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserTitleInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserTwitchInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserWindowsHelloInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserXboxInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabUserAccountInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabItemInstance& input);
template<> inline JsonValue ToJson<>(const PlayFabCharacterInventory& input);
template<> inline JsonValue ToJson<>(const PlayFabCharacterResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdCampaignAttributionModel& input);
template<> inline JsonValue ToJson<>(const PlayFabContactEmailInfoModel& input);
template<> inline JsonValue ToJson<>(const PlayFabLinkedPlatformAccountModel& input);
template<> inline JsonValue ToJson<>(const PlayFabLocationModel& input);
template<> inline JsonValue ToJson<>(const PlayFabSubscriptionModel& input);
template<> inline JsonValue ToJson<>(const PlayFabMembershipModel& input);
template<> inline JsonValue ToJson<>(const PlayFabPushNotificationRegistrationModel& input);
template<> inline JsonValue ToJson<>(const PlayFabStatisticModel& input);
template<> inline JsonValue ToJson<>(const PlayFabTagModel& input);
template<> inline JsonValue ToJson<>(const PlayFabValueToDateModel& input);
template<> inline JsonValue ToJson<>(const PlayFabPlayerProfileModel& input);
template<> inline JsonValue ToJson<>(const PlayFabStatisticValue& input);
template<> inline JsonValue ToJson<>(const PlayFabUserDataRecord& input);
template<> inline JsonValue ToJson<>(const PlayFabVirtualCurrencyRechargeTime& input);
template<> inline JsonValue ToJson<>(const PlayFabGetPlayerCombinedInfoResultPayload& input);
template<> inline JsonValue ToJson<>(const PlayFabUserSettings& input);
template<> inline JsonValue ToJson<>(const PlayFabVariable& input);
template<> inline JsonValue ToJson<>(const PlayFabTreatmentAssignment& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabTitleActivationStatus>
{
    static constexpr PlayFabTitleActivationStatus maxValue = PlayFabTitleActivationStatus::RevokedSteam;
};

template<> struct EnumRange<PlayFabCurrency>
{
    static constexpr PlayFabCurrency maxValue = PlayFabCurrency::ZWD;
};

template<> struct EnumRange<PlayFabUserOrigination>
{
    static constexpr PlayFabUserOrigination maxValue = PlayFabUserOrigination::NintendoSwitchAccount;
};

template<> struct EnumRange<PlayFabEmailVerificationStatus>
{
    static constexpr PlayFabEmailVerificationStatus maxValue = PlayFabEmailVerificationStatus::Confirmed;
};

template<> struct EnumRange<PlayFabLoginIdentityProvider>
{
    static constexpr PlayFabLoginIdentityProvider maxValue = PlayFabLoginIdentityProvider::NintendoSwitchAccount;
};

template<> struct EnumRange<PlayFabContinentCode>
{
    static constexpr PlayFabContinentCode maxValue = PlayFabContinentCode::SA;
};

template<> struct EnumRange<PlayFabCountryCode>
{
    static constexpr PlayFabCountryCode maxValue = PlayFabCountryCode::ZW;
};

template<> struct EnumRange<PlayFabSubscriptionProviderStatus>
{
    static constexpr PlayFabSubscriptionProviderStatus maxValue = PlayFabSubscriptionProviderStatus::PaymentPending;
};

template<> struct EnumRange<PlayFabPushNotificationPlatform>
{
    static constexpr PlayFabPushNotificationPlatform maxValue = PlayFabPushNotificationPlatform::GoogleCloudMessaging;
};

template<> struct EnumRange<PlayFabUserDataPermission>
{
    static constexpr PlayFabUserDataPermission maxValue = PlayFabUserDataPermission::Public;
};

} // namespace PlayFab
