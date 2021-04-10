// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabBaseModel.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

// Profiles enums
enum class PlayFabProfilesEffectType : uint32_t
{
    Allow,
    Deny
};

enum class PlayFabProfilesOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};


// Profiles structs
typedef struct PlayFabProfilesEntityDataObject
{
    PlayFabJsonObject dataObject;
    const char* escapedDataObject;
    const char* objectName;
} PlayFabProfilesEntityDataObject;

typedef struct PlayFabProfilesEntityKey
{
    const char* id;
    const char* type;
} PlayFabProfilesEntityKey;

typedef struct PlayFabProfilesEntityLineage
{
    const char* characterId;
    const char* groupId;
    const char* masterPlayerAccountId;
    const char* namespaceId;
    const char* titleId;
    const char* titlePlayerAccountId;
} PlayFabProfilesEntityLineage;

typedef struct PlayFabProfilesEntityPermissionStatement
{
    const char* action;
    const char* comment;
    PlayFabJsonObject condition;
    PlayFabProfilesEffectType effect;
    PlayFabJsonObject principal;
    const char* resource;
} PlayFabProfilesEntityPermissionStatement;

typedef struct PlayFabProfilesEntityProfileFileMetadata
{
    const char* checksum;
    const char* fileName;
    time_t lastModified;
    int32_t size;
} PlayFabProfilesEntityProfileFileMetadata;

typedef struct PlayFabProfilesEntityStatisticChildValue
{
    const char* childName;
    const char* metadata;
    int32_t value;
} PlayFabProfilesEntityStatisticChildValue;

typedef struct PlayFabProfilesEntityStatisticValue
{
    PF_MAP struct PlayFabProfilesEntityStatisticChildValueDictionaryEntry* childStatistics;
    PF_COLLECTION_COUNT uint32_t childStatisticsCount;
    const char* metadata;
    const char* name;
    PF_OPTIONAL int32_t* value;
    int32_t version;
} PlayFabProfilesEntityStatisticValue;

typedef struct PlayFabProfilesEntityProfileBody
{
    const char* avatarUrl;
    time_t created;
    const char* displayName;
    PF_OPTIONAL PlayFabProfilesEntityKey* entity;
    const char* entityChain;
    PF_ARRAY const char** experimentVariants;
    PF_COLLECTION_COUNT uint32_t experimentVariantsCount;
    PF_MAP struct PlayFabProfilesEntityProfileFileMetadataDictionaryEntry* files;
    PF_COLLECTION_COUNT uint32_t filesCount;
    const char* language;
    const char* leaderboardMetadata;
    PF_OPTIONAL PlayFabProfilesEntityLineage* lineage;
    PF_MAP struct PlayFabProfilesEntityDataObjectDictionaryEntry* objects;
    PF_COLLECTION_COUNT uint32_t objectsCount;
    PF_ARRAY PlayFabProfilesEntityPermissionStatement** permissions;
    PF_COLLECTION_COUNT uint32_t permissionsCount;
    PF_MAP struct PlayFabProfilesEntityStatisticValueDictionaryEntry* statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
    int32_t versionNumber;
} PlayFabProfilesEntityProfileBody;

typedef struct PlayFabProfilesGetEntityProfileRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* dataAsObject;
    PF_OPTIONAL PlayFabProfilesEntityKey* entity;
} PlayFabProfilesGetEntityProfileRequest;

typedef struct PlayFabProfilesGetEntityProfileResponse
{
    PF_OPTIONAL PlayFabProfilesEntityProfileBody* profile;
} PlayFabProfilesGetEntityProfileResponse;

typedef struct PlayFabProfilesGetEntityProfilesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* dataAsObject;
    PF_ARRAY PlayFabProfilesEntityKey** entities;
    PF_COLLECTION_COUNT uint32_t entitiesCount;
} PlayFabProfilesGetEntityProfilesRequest;

typedef struct PlayFabProfilesGetEntityProfilesResponse
{
    PF_ARRAY PlayFabProfilesEntityProfileBody** profiles;
    PF_COLLECTION_COUNT uint32_t profilesCount;
} PlayFabProfilesGetEntityProfilesResponse;

typedef struct PlayFabProfilesGetGlobalPolicyRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabProfilesGetGlobalPolicyRequest;

typedef struct PlayFabProfilesGetGlobalPolicyResponse
{
    PF_ARRAY PlayFabProfilesEntityPermissionStatement** permissions;
    PF_COLLECTION_COUNT uint32_t permissionsCount;
} PlayFabProfilesGetGlobalPolicyResponse;

typedef struct PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY const char** masterPlayerAccountIds;
    PF_COLLECTION_COUNT uint32_t masterPlayerAccountIdsCount;
    const char* titleId;
} PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;

typedef struct PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
{
    const char* titleId;
    PF_MAP struct PlayFabProfilesEntityKeyDictionaryEntry* titlePlayerAccounts;
    PF_COLLECTION_COUNT uint32_t titlePlayerAccountsCount;
} PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;

typedef struct PlayFabProfilesSetEntityProfilePolicyRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabProfilesEntityKey* entity;
    PF_ARRAY PlayFabProfilesEntityPermissionStatement** statements;
    PF_COLLECTION_COUNT uint32_t statementsCount;
} PlayFabProfilesSetEntityProfilePolicyRequest;

typedef struct PlayFabProfilesSetEntityProfilePolicyResponse
{
    PF_ARRAY PlayFabProfilesEntityPermissionStatement** permissions;
    PF_COLLECTION_COUNT uint32_t permissionsCount;
} PlayFabProfilesSetEntityProfilePolicyResponse;

typedef struct PlayFabProfilesSetGlobalPolicyRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabProfilesEntityPermissionStatement** permissions;
    PF_COLLECTION_COUNT uint32_t permissionsCount;
} PlayFabProfilesSetGlobalPolicyRequest;

typedef struct PlayFabProfilesSetProfileLanguageRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabProfilesEntityKey* entity;
    PF_OPTIONAL int32_t* expectedVersion;
    const char* language;
} PlayFabProfilesSetProfileLanguageRequest;

typedef struct PlayFabProfilesSetProfileLanguageResponse
{
    PF_OPTIONAL PlayFabProfilesOperationTypes* operationResult;
    PF_OPTIONAL int32_t* versionNumber;
} PlayFabProfilesSetProfileLanguageResponse;


// Profiles dictionary entry structs
typedef struct PlayFabProfilesEntityProfileFileMetadataDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityProfileFileMetadata* value;
} PlayFabProfilesEntityProfileFileMetadataDictionaryEntry;

typedef struct PlayFabProfilesEntityDataObjectDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityDataObject* value;
} PlayFabProfilesEntityDataObjectDictionaryEntry;

typedef struct PlayFabProfilesEntityStatisticValueDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityStatisticValue* value;
} PlayFabProfilesEntityStatisticValueDictionaryEntry;

typedef struct PlayFabProfilesEntityStatisticChildValueDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityStatisticChildValue* value;
} PlayFabProfilesEntityStatisticChildValueDictionaryEntry;

typedef struct PlayFabProfilesEntityKeyDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityKey* value;
} PlayFabProfilesEntityKeyDictionaryEntry;


#pragma pop_macro("IN")

}
