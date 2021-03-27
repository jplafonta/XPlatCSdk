#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Authentication enums
enum class PlayFabAuthenticationIdentifiedDeviceType : uint32_t
{
    Unknown,
    XboxOne,
    Scarlett
};

enum class PlayFabAuthenticationLoginIdentityProvider : uint32_t
{
    Unknown,
    PlayFab,
    Custom,
    GameCenter,
    GooglePlay,
    Steam,
    XBoxLive,
    PSN,
    Kongregate,
    Facebook,
    IOSDevice,
    AndroidDevice,
    Twitch,
    WindowsHello,
    GameServer,
    CustomServer,
    NintendoSwitch,
    FacebookInstantGames,
    OpenIdConnect,
    Apple,
    NintendoSwitchAccount
};


// Authentication structs
typedef struct PlayFabAuthenticationEntityKey
{
    const char* id;
    const char* type;

} PlayFabAuthenticationEntityKey;

typedef struct PlayFabAuthenticationEntityLineage
{
    const char* characterId;
    const char* groupId;
    const char* masterPlayerAccountId;
    const char* namespaceId;
    const char* titleId;
    const char* titlePlayerAccountId;

} PlayFabAuthenticationEntityLineage;

typedef struct PlayFabAuthenticationGetEntityTokenRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabAuthenticationEntityKey* entity;

} PlayFabAuthenticationGetEntityTokenRequest;

typedef struct PlayFabAuthenticationGetEntityTokenResponse
{
    PF_OPTIONAL PlayFabAuthenticationEntityKey* entity;
    const char* entityToken;
    PF_OPTIONAL time_t* tokenExpiration;

} PlayFabAuthenticationGetEntityTokenResponse;

typedef struct PlayFabAuthenticationValidateEntityTokenRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* entityToken;

} PlayFabAuthenticationValidateEntityTokenRequest;

typedef struct PlayFabAuthenticationValidateEntityTokenResponse
{
    PF_OPTIONAL PlayFabAuthenticationEntityKey* entity;
    PF_OPTIONAL PlayFabAuthenticationIdentifiedDeviceType* identifiedDeviceType;
    PF_OPTIONAL PlayFabAuthenticationLoginIdentityProvider* identityProvider;
    PF_OPTIONAL PlayFabAuthenticationEntityLineage* lineage;

} PlayFabAuthenticationValidateEntityTokenResponse;


// Authentication dictionary entry structs

#pragma pop_macro("IN")
