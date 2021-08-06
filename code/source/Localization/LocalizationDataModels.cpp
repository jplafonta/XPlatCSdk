#include "stdafx.h"
#include "LocalizationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace LocalizationModels
{

GetLanguageListRequest::GetLanguageListRequest() :
    PFLocalizationGetLanguageListRequest{}
{
}

GetLanguageListRequest::GetLanguageListRequest(const GetLanguageListRequest& src) :
    PFLocalizationGetLanguageListRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetLanguageListRequest::GetLanguageListRequest(GetLanguageListRequest&& src) :
    PFLocalizationGetLanguageListRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetLanguageListRequest::GetLanguageListRequest(const PFLocalizationGetLanguageListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLanguageListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetLanguageListRequest::ToJson() const
{
    return JsonUtils::ToJson<PFLocalizationGetLanguageListRequest>(*this);
}

GetLanguageListResponse::GetLanguageListResponse() :
    PFLocalizationGetLanguageListResponse{}
{
}

GetLanguageListResponse::GetLanguageListResponse(const GetLanguageListResponse& src) :
    PFLocalizationGetLanguageListResponse{ src },
    m_languageList{ src.m_languageList }
{
    languageList = m_languageList.Empty() ? nullptr : m_languageList.Data();
}

GetLanguageListResponse::GetLanguageListResponse(GetLanguageListResponse&& src) :
    PFLocalizationGetLanguageListResponse{ src },
    m_languageList{ std::move(src.m_languageList) }
{
    languageList = m_languageList.Empty() ? nullptr : m_languageList.Data();
}

GetLanguageListResponse::GetLanguageListResponse(const PFLocalizationGetLanguageListResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLanguageListResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LanguageList", m_languageList, languageList, languageListCount);
}

JsonValue GetLanguageListResponse::ToJson() const
{
    return JsonUtils::ToJson<PFLocalizationGetLanguageListResponse>(*this);
}

} // namespace LocalizationModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFLocalizationGetLanguageListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFLocalizationGetLanguageListResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LanguageList", input.languageList, input.languageListCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
