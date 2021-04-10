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

}
