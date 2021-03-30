#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabLocalizationDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabLocalizationGetLanguageListRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabLocalizationGetLanguageListResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LanguageList", input.languageList, input.languageListCount);
            return output;
        }

    }

    namespace LocalizationModels
    {
        // Localization Classes
        struct GetLanguageListRequest : public PlayFabLocalizationGetLanguageListRequest, public BaseRequest
        {
            GetLanguageListRequest() : PlayFabLocalizationGetLanguageListRequest{}
            {
            }

            GetLanguageListRequest(const GetLanguageListRequest& src) :
                PlayFabLocalizationGetLanguageListRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetLanguageListRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabLocalizationGetLanguageListRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetLanguageListResponse : public PlayFabLocalizationGetLanguageListResponse, public BaseResult
        {
            GetLanguageListResponse() : PlayFabLocalizationGetLanguageListResponse{}
            {
            }

            GetLanguageListResponse(const GetLanguageListResponse& src) :
                PlayFabLocalizationGetLanguageListResponse{ src },
                m_languageList{ src.m_languageList }
            {

                languageList = m_languageList.Empty() ? nullptr : m_languageList.Data();
            }

            ~GetLanguageListResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "LanguageList", m_languageList, languageList, languageListCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabLocalizationGetLanguageListResponse>(*this);
            }

        private:
            PointerArray<const char, String> m_languageList;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
}

#endif
