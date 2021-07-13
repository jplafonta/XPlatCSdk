// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// EffectType enum.
/// </summary>
enum class PlayFabProfilesEffectType : uint32_t
{
    Allow,
    Deny
};

/// <summary>
/// OperationTypes enum.
/// </summary>
enum class PlayFabProfilesOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};

/// <summary>
/// PlayFabProfilesEntityDataObject data model. An entity object and its associated meta data.
/// </summary>
typedef struct PlayFabProfilesEntityDataObject
{
    /// <summary>
    /// (Optional) Un-escaped JSON object, if DataAsObject is true.
    /// </summary>
    PlayFabJsonObject dataObject;

    /// <summary>
    /// (Optional) Escaped string JSON body of the object, if DataAsObject is default or false.
    /// </summary>
    const char* escapedDataObject;

    /// <summary>
    /// (Optional) Name of this object.
    /// </summary>
    const char* objectName;

} PlayFabProfilesEntityDataObject;

/// <summary>
/// PlayFabProfilesEntityLineage data model.
/// </summary>
typedef struct PlayFabProfilesEntityLineage
{
    /// <summary>
    /// (Optional) The Character Id of the associated entity.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The Group Id of the associated entity.
    /// </summary>
    const char* groupId;

    /// <summary>
    /// (Optional) The Master Player Account Id of the associated entity.
    /// </summary>
    const char* masterPlayerAccountId;

    /// <summary>
    /// (Optional) The Namespace Id of the associated entity.
    /// </summary>
    const char* namespaceId;

    /// <summary>
    /// (Optional) The Title Id of the associated entity.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) The Title Player Account Id of the associated entity.
    /// </summary>
    const char* titlePlayerAccountId;

} PlayFabProfilesEntityLineage;

/// <summary>
/// PlayFabProfilesEntityPermissionStatement data model.
/// </summary>
typedef struct PlayFabProfilesEntityPermissionStatement
{
    /// <summary>
    /// The action this statement effects. May be 'Read', 'Write' or '*' for both read and write.
    /// </summary>
    const char* action;

    /// <summary>
    /// (Optional) A comment about the statement. Intended solely for bookkeeping and debugging.
    /// </summary>
    const char* comment;

    /// <summary>
    /// (Optional) Additional conditions to be applied for entity resources.
    /// </summary>
    PlayFabJsonObject condition;

    /// <summary>
    /// The effect this statement will have. It may be either Allow or Deny.
    /// </summary>
    PlayFabProfilesEffectType effect;

    /// <summary>
    /// The principal this statement will effect.
    /// </summary>
    PlayFabJsonObject principal;

    /// <summary>
    /// The resource this statements effects. Similar to 'pfrn:data--title![Title ID]/Profile/*'.
    /// </summary>
    const char* resource;

} PlayFabProfilesEntityPermissionStatement;

/// <summary>
/// PlayFabProfilesEntityProfileFileMetadata data model. An entity file's meta data. To get a download
/// URL call File/GetFiles API.
/// </summary>
typedef struct PlayFabProfilesEntityProfileFileMetadata
{
    /// <summary>
    /// (Optional) Checksum value for the file, can be used to check if the file on the server has changed.
    /// </summary>
    const char* checksum;

    /// <summary>
    /// (Optional) Name of the file.
    /// </summary>
    const char* fileName;

    /// <summary>
    /// Last UTC time the file was modified.
    /// </summary>
    time_t lastModified;

    /// <summary>
    /// Storage service's reported byte count.
    /// </summary>
    int32_t size;

} PlayFabProfilesEntityProfileFileMetadata;

/// <summary>
/// PlayFabProfilesEntityStatisticChildValue data model.
/// </summary>
typedef struct PlayFabProfilesEntityStatisticChildValue
{
    /// <summary>
    /// (Optional) Child name value, if child statistic.
    /// </summary>
    const char* childName;

    /// <summary>
    /// (Optional) Child statistic metadata.
    /// </summary>
    const char* metadata;

    /// <summary>
    /// Child statistic value.
    /// </summary>
    int32_t value;

} PlayFabProfilesEntityStatisticChildValue;

/// <summary>
/// PlayFabProfilesEntityStatisticValue data model.
/// </summary>
typedef struct PlayFabProfilesEntityStatisticValue
{
    /// <summary>
    /// (Optional) Child statistic values.
    /// </summary>
    struct PlayFabProfilesEntityStatisticChildValueDictionaryEntry const* childStatistics;

    /// <summary>
    /// Count of childStatistics
    /// </summary>
    uint32_t childStatisticsCount;

    /// <summary>
    /// (Optional) Statistic metadata.
    /// </summary>
    const char* metadata;

    /// <summary>
    /// (Optional) Statistic name.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Statistic value.
    /// </summary>
    int32_t const* value;

    /// <summary>
    /// Statistic version.
    /// </summary>
    int32_t version;

} PlayFabProfilesEntityStatisticValue;

/// <summary>
/// PlayFabProfilesEntityProfileBody data model.
/// </summary>
typedef struct PlayFabProfilesEntityProfileBody
{
    /// <summary>
    /// (Optional) Avatar URL for the entity.
    /// </summary>
    const char* avatarUrl;

    /// <summary>
    /// The creation time of this profile in UTC.
    /// </summary>
    time_t created;

    /// <summary>
    /// (Optional) The display name of the entity. This field may serve different purposes for different
    /// entity types. i.e.: for a title player account it could represent the display name of the player,
    /// whereas on a character it could be character's name.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) The chain of responsibility for this entity. Use Lineage.
    /// </summary>
    const char* entityChain;

    /// <summary>
    /// (Optional) The experiment variants of this profile.
    /// </summary>
    const char* const* experimentVariants;

    /// <summary>
    /// Count of experimentVariants
    /// </summary>
    uint32_t experimentVariantsCount;

    /// <summary>
    /// (Optional) The files on this profile.
    /// </summary>
    struct PlayFabProfilesEntityProfileFileMetadataDictionaryEntry const* files;

    /// <summary>
    /// Count of files
    /// </summary>
    uint32_t filesCount;

    /// <summary>
    /// (Optional) The language on this profile.
    /// </summary>
    const char* language;

    /// <summary>
    /// (Optional) Leaderboard metadata for the entity.
    /// </summary>
    const char* leaderboardMetadata;

    /// <summary>
    /// (Optional) The lineage of this profile.
    /// </summary>
    PlayFabProfilesEntityLineage const* lineage;

    /// <summary>
    /// (Optional) The objects on this profile.
    /// </summary>
    struct PlayFabProfilesEntityDataObjectDictionaryEntry const* objects;

    /// <summary>
    /// Count of objects
    /// </summary>
    uint32_t objectsCount;

    /// <summary>
    /// (Optional) The permissions that govern access to this entity profile and its properties. Only
    /// includes permissions set on this profile, not global statements from titles and namespaces.
    /// </summary>
    PlayFabProfilesEntityPermissionStatement const* const* permissions;

    /// <summary>
    /// Count of permissions
    /// </summary>
    uint32_t permissionsCount;

    /// <summary>
    /// (Optional) The statistics on this profile.
    /// </summary>
    struct PlayFabProfilesEntityStatisticValueDictionaryEntry const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

    /// <summary>
    /// The version number of the profile in persistent storage at the time of the read. Used for optional
    /// optimistic concurrency during update.
    /// </summary>
    int32_t versionNumber;

} PlayFabProfilesEntityProfileBody;

/// <summary>
/// PlayFabProfilesGetEntityProfileRequest data model. Given an entity type and entity identifier will
/// retrieve the profile from the entity store. If the profile being retrieved is the caller's, then the
/// read operation is consistent, if not it is an inconsistent read. An inconsistent read means that we
/// do not guarantee all committed writes have occurred before reading the profile, allowing for a stale
/// read. If consistency is important the Version Number on the result can be used to compare which version
/// of the profile any reader has. Request object for PlayFabProfilesGetProfileAsync.
/// </summary>
typedef struct PlayFabProfilesGetEntityProfileRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Determines whether the objects will be returned as an escaped JSON string or as a
    /// un-escaped JSON object. Default is JSON string.
    /// </summary>
    bool const* dataAsObject;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

} PlayFabProfilesGetEntityProfileRequest;

/// <summary>
/// PlayFabProfilesGetEntityProfileResponse data model. Result payload for PlayFabProfilesGetProfileAsync.
/// </summary>
typedef struct PlayFabProfilesGetEntityProfileResponse
{
    /// <summary>
    /// (Optional) Entity profile.
    /// </summary>
    PlayFabProfilesEntityProfileBody const* profile;

} PlayFabProfilesGetEntityProfileResponse;

/// <summary>
/// PlayFabProfilesGetEntityProfilesRequest data model. Given a set of entity types and entity identifiers
/// will retrieve all readable profiles properties for the caller. Profiles that the caller is not allowed
/// to read will silently not be included in the results. Request object for PlayFabProfilesGetProfilesAsync.
/// </summary>
typedef struct PlayFabProfilesGetEntityProfilesRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Determines whether the objects will be returned as an escaped JSON string or as a
    /// un-escaped JSON object. Default is JSON string.
    /// </summary>
    bool const* dataAsObject;

    /// <summary>
    /// Entity keys of the profiles to load. Must be between 1 and 25.
    /// </summary>
    PlayFabEntityKey const* const* entities;

    /// <summary>
    /// Count of entities
    /// </summary>
    uint32_t entitiesCount;

} PlayFabProfilesGetEntityProfilesRequest;

/// <summary>
/// PlayFabProfilesGetEntityProfilesResponse data model. Result payload for PlayFabProfilesGetProfilesAsync.
/// </summary>
typedef struct PlayFabProfilesGetEntityProfilesResponse
{
    /// <summary>
    /// (Optional) Entity profiles.
    /// </summary>
    PlayFabProfilesEntityProfileBody const* const* profiles;

    /// <summary>
    /// Count of profiles
    /// </summary>
    uint32_t profilesCount;

} PlayFabProfilesGetEntityProfilesResponse;

/// <summary>
/// PlayFabProfilesGetGlobalPolicyRequest data model. Retrieves the title access policy that is used
/// before the profile's policy is inspected during a request. If never customized this will return the
/// default starter policy built by PlayFab. Request object for PlayFabProfilesGetGlobalPolicyAsync.
/// </summary>
typedef struct PlayFabProfilesGetGlobalPolicyRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabProfilesGetGlobalPolicyRequest;

/// <summary>
/// PlayFabProfilesGetGlobalPolicyResponse data model. Result payload for PlayFabProfilesGetGlobalPolicyAsync.
/// </summary>
typedef struct PlayFabProfilesGetGlobalPolicyResponse
{
    /// <summary>
    /// (Optional) The permissions that govern access to all entities under this title or namespace.
    /// </summary>
    PlayFabProfilesEntityPermissionStatement const* const* permissions;

    /// <summary>
    /// Count of permissions
    /// </summary>
    uint32_t permissionsCount;

} PlayFabProfilesGetGlobalPolicyResponse;

/// <summary>
/// PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest data model. Given a master player
/// account id (PlayFab ID), returns all title player accounts associated with it. Request object for
/// PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsAsync.
/// </summary>
typedef struct PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Master player account ids.
    /// </summary>
    const char* const* masterPlayerAccountIds;

    /// <summary>
    /// Count of masterPlayerAccountIds
    /// </summary>
    uint32_t masterPlayerAccountIdsCount;

    /// <summary>
    /// (Optional) Id of title to get players from.
    /// </summary>
    const char* titleId;

} PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;

/// <summary>
/// PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse data model. Result payload for PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsAsync.
/// </summary>
typedef struct PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
{
    /// <summary>
    /// (Optional) Optional id of title to get players from, required if calling using a master_player_account.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) Dictionary of master player ids mapped to title player entity keys and id pairs.
    /// </summary>
    struct PlayFabEntityKeyDictionaryEntry const* titlePlayerAccounts;

    /// <summary>
    /// Count of titlePlayerAccounts
    /// </summary>
    uint32_t titlePlayerAccountsCount;

} PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;

/// <summary>
/// PlayFabProfilesSetEntityProfilePolicyRequest data model. This will set the access policy statements
/// on the given entity profile. This is not additive, any existing statements will be replaced with the
/// statements in this request. Request object for PlayFabProfilesSetProfilePolicyAsync.
/// </summary>
typedef struct PlayFabProfilesSetEntityProfilePolicyRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) The statements to include in the access policy.
    /// </summary>
    PlayFabProfilesEntityPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PlayFabProfilesSetEntityProfilePolicyRequest;

/// <summary>
/// PlayFabProfilesSetEntityProfilePolicyResponse data model. Result payload for PlayFabProfilesSetProfilePolicyAsync.
/// </summary>
typedef struct PlayFabProfilesSetEntityProfilePolicyResponse
{
    /// <summary>
    /// (Optional) The permissions that govern access to this entity profile and its properties. Only
    /// includes permissions set on this profile, not global statements from titles and namespaces.
    /// </summary>
    PlayFabProfilesEntityPermissionStatement const* const* permissions;

    /// <summary>
    /// Count of permissions
    /// </summary>
    uint32_t permissionsCount;

} PlayFabProfilesSetEntityProfilePolicyResponse;

/// <summary>
/// PlayFabProfilesSetGlobalPolicyRequest data model. Updates the title access policy that is used before
/// the profile's policy is inspected during a request. Policies are compiled and cached for several minutes
/// so an update here may not be reflected in behavior for a short time. Request object for PlayFabProfilesSetGlobalPolicyAsync.
/// </summary>
typedef struct PlayFabProfilesSetGlobalPolicyRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The permissions that govern access to all entities under this title or namespace.
    /// </summary>
    PlayFabProfilesEntityPermissionStatement const* const* permissions;

    /// <summary>
    /// Count of permissions
    /// </summary>
    uint32_t permissionsCount;

} PlayFabProfilesSetGlobalPolicyRequest;

/// <summary>
/// PlayFabProfilesSetProfileLanguageRequest data model. Given an entity profile, will update its language
/// to the one passed in if the profile's version is equal to the one passed in. Request object for PlayFabProfilesSetProfileLanguageAsync.
/// </summary>
typedef struct PlayFabProfilesSetProfileLanguageRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) The expected version of a profile to perform this update on.
    /// </summary>
    int32_t const* expectedVersion;

    /// <summary>
    /// (Optional) The language to set on the given entity. Deletes the profile's language if passed
    /// in a null string.
    /// </summary>
    const char* language;

} PlayFabProfilesSetProfileLanguageRequest;

/// <summary>
/// PlayFabProfilesSetProfileLanguageResponse data model. Result payload for PlayFabProfilesSetProfileLanguageAsync.
/// </summary>
typedef struct PlayFabProfilesSetProfileLanguageResponse
{
    /// <summary>
    /// (Optional) The type of operation that occured on the profile's language.
    /// </summary>
    PlayFabProfilesOperationTypes const* operationResult;

    /// <summary>
    /// (Optional) The updated version of the profile after the language update.
    /// </summary>
    int32_t const* versionNumber;

} PlayFabProfilesSetProfileLanguageResponse;

/// <summary>
/// Dictionary entry for an associative array with PlayFabProfilesEntityProfileFileMetadata values.
/// </summary>
typedef struct PlayFabProfilesEntityProfileFileMetadataDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityProfileFileMetadata* value;
} PlayFabProfilesEntityProfileFileMetadataDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabProfilesEntityDataObject values.
/// </summary>
typedef struct PlayFabProfilesEntityDataObjectDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityDataObject* value;
} PlayFabProfilesEntityDataObjectDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabProfilesEntityStatisticValue values.
/// </summary>
typedef struct PlayFabProfilesEntityStatisticValueDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityStatisticValue* value;
} PlayFabProfilesEntityStatisticValueDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabProfilesEntityStatisticChildValue values.
/// </summary>
typedef struct PlayFabProfilesEntityStatisticChildValueDictionaryEntry
{
    const char* key;
    PlayFabProfilesEntityStatisticChildValue* value;
} PlayFabProfilesEntityStatisticChildValueDictionaryEntry;

#pragma pop_macro("IN")

}
