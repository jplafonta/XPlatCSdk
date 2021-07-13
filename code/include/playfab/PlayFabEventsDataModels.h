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
/// PlayFabEventsEventContents data model.
/// </summary>
typedef struct PlayFabEventsEventContents
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the event (e.g. build number, external trace
    /// identifiers, etc.). Before an event is written, this collection and the base request custom tags
    /// will be merged, but not overriden. This enables the caller to specify static tags and per event
    /// tags.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Entity associated with the event. If null, the event will apply to the calling entity.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The namespace in which the event is defined. Allowed namespaces can vary by API.
    /// </summary>
    const char* eventNamespace;

    /// <summary>
    /// The name of this event.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) The original unique identifier associated with this event before it was posted to
    /// PlayFab. The value might differ from the EventId value, which is assigned when the event is received
    /// by the server.
    /// </summary>
    const char* originalId;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event when it occurred. If specified, this
    /// value is stored in the OriginalTimestamp property of the PlayStream event.
    /// </summary>
    time_t const* originalTimestamp;

    /// <summary>
    /// (Optional) Arbitrary data associated with the event. Only one of Payload or PayloadJSON is allowed.
    /// </summary>
    PlayFabJsonObject payload;

    /// <summary>
    /// (Optional) Arbitrary data associated with the event, represented as a JSON serialized string.
    /// Only one of Payload or PayloadJSON is allowed.
    /// </summary>
    const char* payloadJSON;

} PlayFabEventsEventContents;

/// <summary>
/// PlayFabEventsWriteEventsRequest data model. Request object for PlayFabEventsWriteEventsAsync and
/// PlayFabEventsWriteTelemetryEventsAsync.
/// </summary>
typedef struct PlayFabEventsWriteEventsRequest
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
    /// Collection of events to write to PlayStream.
    /// </summary>
    PlayFabEventsEventContents const* const* events;

    /// <summary>
    /// Count of events
    /// </summary>
    uint32_t eventsCount;

} PlayFabEventsWriteEventsRequest;

/// <summary>
/// PlayFabEventsWriteEventsResponse data model. Result payload for PlayFabEventsWriteEventsAsync and
/// PlayFabEventsWriteTelemetryEventsAsync.
/// </summary>
typedef struct PlayFabEventsWriteEventsResponse
{
    /// <summary>
    /// (Optional) The unique identifiers assigned by the server to the events, in the same order as
    /// the events in the request. Only returned if FlushToPlayStream option is true.
    /// </summary>
    const char* const* assignedEventIds;

    /// <summary>
    /// Count of assignedEventIds
    /// </summary>
    uint32_t assignedEventIdsCount;

} PlayFabEventsWriteEventsResponse;

#pragma pop_macro("IN")

}
