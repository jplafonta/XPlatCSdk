// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// PFFriendsClientAddFriendRequest data model.
/// </summary>
typedef struct PFFriendsClientAddFriendRequest
{
    /// <summary>
    /// (Optional) Email address of the user to attempt to add to the local user's friend list.
    /// </summary>
    const char* friendEmail;

    /// <summary>
    /// (Optional) PlayFab identifier of the user to attempt to add to the local user's friend list.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// (Optional) Title-specific display name of the user to attempt to add to the local user's friend
    /// list.
    /// </summary>
    const char* friendTitleDisplayName;

    /// <summary>
    /// (Optional) PlayFab username of the user to attempt to add to the local user's friend list.
    /// </summary>
    const char* friendUsername;

} PFFriendsClientAddFriendRequest;

/// <summary>
/// PFFriendsAddFriendResult data model.
/// </summary>
typedef struct PFFriendsAddFriendResult
{
    /// <summary>
    /// True if the friend request was processed successfully.
    /// </summary>
    bool created;

} PFFriendsAddFriendResult;

/// <summary>
/// PFFriendsClientGetFriendsListRequest data model.
/// </summary>
typedef struct PFFriendsClientGetFriendsListRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Indicates whether Facebook friends should be included in the response. Default is
    /// true.
    /// </summary>
    bool const* includeFacebookFriends;

    /// <summary>
    /// (Optional) Indicates whether Steam service friends should be included in the response. Default
    /// is true.
    /// </summary>
    bool const* includeSteamFriends;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PFPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// (Optional) Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
    /// </summary>
    const char* xboxToken;

} PFFriendsClientGetFriendsListRequest;

/// <summary>
/// PFFriendsFriendInfo data model.
/// </summary>
typedef struct PFFriendsFriendInfo
{
    /// <summary>
    /// (Optional) Available Facebook information (if the user and PlayFab friend are also connected
    /// in Facebook).
    /// </summary>
    PFUserFacebookInfo const* facebookInfo;

    /// <summary>
    /// (Optional) PlayFab unique identifier for this friend.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// (Optional) Available Game Center information (if the user and PlayFab friend are also connected
    /// in Game Center).
    /// </summary>
    PFUserGameCenterInfo const* gameCenterInfo;

    /// <summary>
    /// (Optional) The profile of the user, if requested.
    /// </summary>
    PFPlayerProfileModel const* profile;

    /// <summary>
    /// (Optional) Available PSN information, if the user and PlayFab friend are both connected to PSN.
    /// </summary>
    PFUserPsnInfo const* PSNInfo;

    /// <summary>
    /// (Optional) Available Steam information (if the user and PlayFab friend are also connected in
    /// Steam).
    /// </summary>
    PFUserSteamInfo const* steamInfo;

    /// <summary>
    /// (Optional) Tags which have been associated with this friend.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

    /// <summary>
    /// (Optional) Title-specific display name for this friend.
    /// </summary>
    const char* titleDisplayName;

    /// <summary>
    /// (Optional) PlayFab unique username for this friend.
    /// </summary>
    const char* username;

    /// <summary>
    /// (Optional) Available Xbox information, if the user and PlayFab friend are both connected to Xbox
    /// Live.
    /// </summary>
    PFUserXboxInfo const* xboxInfo;

} PFFriendsFriendInfo;

/// <summary>
/// PFFriendsGetFriendsListResult data model. If any additional services are queried for the user's friends,
/// those friends who also have a PlayFab account registered for the title will be returned in the results.
/// For Facebook, user has to have logged into the title's Facebook app recently, and only friends who
/// also plays this game will be included. For Xbox Live, user has to have logged into the Xbox Live recently,
/// and only friends who also play this game will be included.
/// </summary>
typedef struct PFFriendsGetFriendsListResult
{
    /// <summary>
    /// (Optional) Array of friends found.
    /// </summary>
    PFFriendsFriendInfo const* const* friends;

    /// <summary>
    /// Count of friends
    /// </summary>
    uint32_t friendsCount;

} PFFriendsGetFriendsListResult;

/// <summary>
/// PFFriendsClientRemoveFriendRequest data model.
/// </summary>
typedef struct PFFriendsClientRemoveFriendRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account which is to be removed.
    /// </summary>
    const char* friendPlayFabId;

} PFFriendsClientRemoveFriendRequest;

/// <summary>
/// PFFriendsClientSetFriendTagsRequest data model. This operation is not additive. It will completely
/// replace the tag list for the specified user. Please note that only users in the PlayFab friends list
/// can be assigned tags. Attempting to set a tag on a friend only included in the friends list from a
/// social site integration (such as Facebook or Steam) will return the AccountNotFound error.
/// </summary>
typedef struct PFFriendsClientSetFriendTagsRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account to which the tag(s) should be applied.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// Array of tags to set on the friend account.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PFFriendsClientSetFriendTagsRequest;

/// <summary>
/// PFFriendsServerAddFriendRequest data model.
/// </summary>
typedef struct PFFriendsServerAddFriendRequest
{
    /// <summary>
    /// (Optional) Email address of the user being added.
    /// </summary>
    const char* friendEmail;

    /// <summary>
    /// (Optional) The PlayFab identifier of the user being added.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// (Optional) Title-specific display name of the user to being added.
    /// </summary>
    const char* friendTitleDisplayName;

    /// <summary>
    /// (Optional) The PlayFab username of the user being added.
    /// </summary>
    const char* friendUsername;

    /// <summary>
    /// PlayFab identifier of the player to add a new friend.
    /// </summary>
    const char* playFabId;

} PFFriendsServerAddFriendRequest;

/// <summary>
/// PFFriendsServerGetFriendsListRequest data model.
/// </summary>
typedef struct PFFriendsServerGetFriendsListRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Indicates whether Facebook friends should be included in the response. Default is
    /// true.
    /// </summary>
    bool const* includeFacebookFriends;

    /// <summary>
    /// (Optional) Indicates whether Steam service friends should be included in the response. Default
    /// is true.
    /// </summary>
    bool const* includeSteamFriends;

    /// <summary>
    /// PlayFab identifier of the player whose friend list to get.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PFPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// (Optional) Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
    /// </summary>
    const char* xboxToken;

} PFFriendsServerGetFriendsListRequest;

/// <summary>
/// PFFriendsServerRemoveFriendRequest data model.
/// </summary>
typedef struct PFFriendsServerRemoveFriendRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account which is to be removed.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PFFriendsServerRemoveFriendRequest;

/// <summary>
/// PFFriendsServerSetFriendTagsRequest data model. This operation is not additive. It will completely
/// replace the tag list for the specified user. Please note that only users in the PlayFab friends list
/// can be assigned tags. Attempting to set a tag on a friend only included in the friends list from a
/// social site integration (such as Facebook or Steam) will return the AccountNotFound error.
/// </summary>
typedef struct PFFriendsServerSetFriendTagsRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account to which the tag(s) should be applied.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// PlayFab identifier of the player whose friend is to be updated.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Array of tags to set on the friend account.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PFFriendsServerSetFriendTagsRequest;

#pragma pop_macro("IN")

}
