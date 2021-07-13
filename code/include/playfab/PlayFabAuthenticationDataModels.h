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
/// IdentifiedDeviceType enum.
/// </summary>
enum class PlayFabAuthenticationIdentifiedDeviceType : uint32_t
{
    Unknown,
    XboxOne,
    Scarlett
};

/// <summary>
/// PlayFabAuthenticationEntityLineage data model.
/// </summary>
typedef struct PlayFabAuthenticationEntityLineage
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

} PlayFabAuthenticationEntityLineage;

/// <summary>
/// PlayFabAuthenticationGetEntityTokenRequest data model. This API must be called with X-SecretKey,
/// X-Authentication or X-EntityToken headers. An optional EntityKey may be included to attempt to set
/// the resulting EntityToken to a specific entity, however the entity must be a relation of the caller,
/// such as the master_player_account of a character. If sending X-EntityToken the account will be marked
/// as freshly logged in and will issue a new token. If using X-Authentication or X-EntityToken the header
/// must still be valid and cannot be expired or revoked. Request object for PlayFabAuthenticationGetEntityTokenAsync.
/// </summary>
typedef struct PlayFabAuthenticationGetEntityTokenRequest
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

} PlayFabAuthenticationGetEntityTokenRequest;

/// <summary>
/// PlayFabAuthenticationValidateEntityTokenRequest data model. Given an entity token, validates that
/// it hasn't expired or been revoked and will return details of the owner. Request object for PlayFabAuthenticationValidateEntityTokenAsync.
/// </summary>
typedef struct PlayFabAuthenticationValidateEntityTokenRequest
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
    /// Client EntityToken.
    /// </summary>
    const char* entityToken;

} PlayFabAuthenticationValidateEntityTokenRequest;

/// <summary>
/// PlayFabAuthenticationValidateEntityTokenResponse data model. Result payload for PlayFabAuthenticationValidateEntityTokenAsync.
/// </summary>
typedef struct PlayFabAuthenticationValidateEntityTokenResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) The authenticated device for this entity, for the given login.
    /// </summary>
    PlayFabAuthenticationIdentifiedDeviceType const* identifiedDeviceType;

    /// <summary>
    /// (Optional) The identity provider for this entity, for the given login.
    /// </summary>
    PlayFabLoginIdentityProvider const* identityProvider;

    /// <summary>
    /// (Optional) The lineage of this profile.
    /// </summary>
    PlayFabAuthenticationEntityLineage const* lineage;

} PlayFabAuthenticationValidateEntityTokenResponse;

#pragma pop_macro("IN")

}
