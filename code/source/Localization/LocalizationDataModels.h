#pragma once

#include <playfab/PFLocalizationDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace LocalizationModels
{

// Localization Classes
struct GetLanguageListRequest : public PFLocalizationGetLanguageListRequest, public BaseModel
{
    GetLanguageListRequest();
    GetLanguageListRequest(const GetLanguageListRequest& src);
    GetLanguageListRequest(GetLanguageListRequest&& src);
    GetLanguageListRequest(const PFLocalizationGetLanguageListRequest& src);
    GetLanguageListRequest& operator=(const GetLanguageListRequest&) = delete;
    ~GetLanguageListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct GetLanguageListResponse : public PFLocalizationGetLanguageListResponse, public BaseModel, public ApiResult
{
    GetLanguageListResponse();
    GetLanguageListResponse(const GetLanguageListResponse& src);
    GetLanguageListResponse(GetLanguageListResponse&& src);
    GetLanguageListResponse(const PFLocalizationGetLanguageListResponse& src);
    GetLanguageListResponse& operator=(const GetLanguageListResponse&) = delete;
    ~GetLanguageListResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_languageList;
};

} // namespace LocalizationModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFLocalizationGetLanguageListRequest& input);
template<> inline JsonValue ToJson<>(const PFLocalizationGetLanguageListResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
