#include "stdafx.h"
#include "LocalizationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace LocalizationModels
{

GetLanguageListRequest::GetLanguageListRequest() :
    PlayFabLocalizationGetLanguageListRequest{}
{
}

GetLanguageListRequest::GetLanguageListRequest(const GetLanguageListRequest& src) :
    PlayFabLocalizationGetLanguageListRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetLanguageListRequest::GetLanguageListRequest(GetLanguageListRequest&& src) :
    PlayFabLocalizationGetLanguageListRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetLanguageListRequest::GetLanguageListRequest(const PlayFabLocalizationGetLanguageListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLanguageListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetLanguageListRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabLocalizationGetLanguageListRequest>(*this);
}

GetLanguageListResponse::GetLanguageListResponse() :
    PlayFabLocalizationGetLanguageListResponse{}
{
}

GetLanguageListResponse::GetLanguageListResponse(const GetLanguageListResponse& src) :
    PlayFabLocalizationGetLanguageListResponse{ src },
    m_languageList{ src.m_languageList }
{
    languageList = m_languageList.Empty() ? nullptr : m_languageList.Data();
}

GetLanguageListResponse::GetLanguageListResponse(GetLanguageListResponse&& src) :
    PlayFabLocalizationGetLanguageListResponse{ src },
    m_languageList{ std::move(src.m_languageList) }
{
    languageList = m_languageList.Empty() ? nullptr : m_languageList.Data();
}

GetLanguageListResponse::GetLanguageListResponse(const PlayFabLocalizationGetLanguageListResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLanguageListResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LanguageList", m_languageList, languageList, languageListCount);
}

JsonValue GetLanguageListResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabLocalizationGetLanguageListResponse>(*this);
}

} // namespace LocalizationModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabLocalizationGetLanguageListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabLocalizationGetLanguageListResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LanguageList", input.languageList, input.languageListCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
