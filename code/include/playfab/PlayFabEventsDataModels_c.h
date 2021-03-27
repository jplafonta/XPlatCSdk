#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Events enums

// Events structs
typedef struct PlayFabEventsEntityKey
{
    const char* id;
    const char* type;

} PlayFabEventsEntityKey;

typedef struct PlayFabEventsEventContents
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabEventsEntityKey* entity;
    const char* eventNamespace;
    const char* name;
    const char* originalId;
    PF_OPTIONAL time_t* originalTimestamp;
    PlayFabJsonObject payload;
    const char* payloadJSON;

} PlayFabEventsEventContents;

typedef struct PlayFabEventsWriteEventsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabEventsEventContents** events;
    PF_COLLECTION_COUNT uint32_t eventsCount;

} PlayFabEventsWriteEventsRequest;

typedef struct PlayFabEventsWriteEventsResponse
{
    PF_ARRAY const char** assignedEventIds;
    PF_COLLECTION_COUNT uint32_t assignedEventIdsCount;

} PlayFabEventsWriteEventsResponse;


// Events dictionary entry structs

#pragma pop_macro("IN")