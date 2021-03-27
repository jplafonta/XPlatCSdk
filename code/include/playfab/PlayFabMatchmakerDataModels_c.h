#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Matchmaker enums
enum class PlayFabMatchmakerRegion : uint32_t
{
    USCentral,
    USEast,
    EUWest,
    Singapore,
    Japan,
    Brazil,
    Australia
};


// Matchmaker structs
typedef struct PlayFabMatchmakerAuthUserRequest
{
    const char* authorizationTicket;

} PlayFabMatchmakerAuthUserRequest;

typedef struct PlayFabMatchmakerAuthUserResponse
{
    bool authorized;
    const char* playFabId;

} PlayFabMatchmakerAuthUserResponse;

typedef struct PlayFabMatchmakerItemInstance
{
    const char* annotation;
    PF_ARRAY const char** bundleContents;
    PF_COLLECTION_COUNT uint32_t bundleContentsCount;
    const char* bundleParent;
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customData;
    PF_COLLECTION_COUNT uint32_t customDataCount;
    const char* displayName;
    PF_OPTIONAL time_t* expiration;
    const char* itemClass;
    const char* itemId;
    const char* itemInstanceId;
    PF_OPTIONAL time_t* purchaseDate;
    PF_OPTIONAL int32_t* remainingUses;
    const char* unitCurrency;
    uint32_t unitPrice;
    PF_OPTIONAL int32_t* usesIncrementedBy;

} PlayFabMatchmakerItemInstance;

typedef struct PlayFabMatchmakerPlayerJoinedRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* lobbyId;
    const char* playFabId;

} PlayFabMatchmakerPlayerJoinedRequest;

typedef struct PlayFabMatchmakerPlayerJoinedResponse
{

} PlayFabMatchmakerPlayerJoinedResponse;

typedef struct PlayFabMatchmakerPlayerLeftRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* lobbyId;
    const char* playFabId;

} PlayFabMatchmakerPlayerLeftRequest;

typedef struct PlayFabMatchmakerPlayerLeftResponse
{

} PlayFabMatchmakerPlayerLeftResponse;

typedef struct PlayFabMatchmakerStartGameRequest
{
    const char* build;
    const char* customCommandLineData;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* externalMatchmakerEventEndpoint;
    const char* gameMode;
    PlayFabMatchmakerRegion region;

} PlayFabMatchmakerStartGameRequest;

typedef struct PlayFabMatchmakerStartGameResponse
{
    const char* gameID;
    const char* serverIPV4Address;
    const char* serverIPV6Address;
    uint32_t serverPort;
    const char* serverPublicDNSName;

} PlayFabMatchmakerStartGameResponse;

typedef struct PlayFabMatchmakerUserInfoRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t minCatalogVersion;
    const char* playFabId;

} PlayFabMatchmakerUserInfoRequest;

typedef struct PlayFabMatchmakerVirtualCurrencyRechargeTime
{
    int32_t rechargeMax;
    time_t rechargeTime;
    int32_t secondsToRecharge;

} PlayFabMatchmakerVirtualCurrencyRechargeTime;

typedef struct PlayFabMatchmakerUserInfoResponse
{
    PF_ARRAY PlayFabMatchmakerItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
    bool isDeveloper;
    const char* playFabId;
    const char* steamId;
    const char* titleDisplayName;
    const char* username;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
    PF_MAP struct PlayFabMatchmakerVirtualCurrencyRechargeTimeDictionaryEntry* virtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyRechargeTimesCount;

} PlayFabMatchmakerUserInfoResponse;


// Matchmaker dictionary entry structs
typedef struct PlayFabMatchmakerVirtualCurrencyRechargeTimeDictionaryEntry
{
    const char* key;
    PlayFabMatchmakerVirtualCurrencyRechargeTime* value;
} PlayFabMatchmakerVirtualCurrencyRechargeTimeDictionaryEntry;


#pragma pop_macro("IN")
