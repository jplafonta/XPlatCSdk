#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Localization enums

// Localization structs
typedef struct PlayFabLocalizationGetLanguageListRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;

} PlayFabLocalizationGetLanguageListRequest;

typedef struct PlayFabLocalizationGetLanguageListResponse
{
    PF_ARRAY const char** languageList;
    PF_COLLECTION_COUNT uint32_t languageListCount;

} PlayFabLocalizationGetLanguageListResponse;


// Localization dictionary entry structs

#pragma pop_macro("IN")
