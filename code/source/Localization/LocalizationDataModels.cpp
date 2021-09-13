#include "stdafx.h"
#include "LocalizationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace Localization
{

JsonValue GetLanguageListRequest::ToJson() const
{
    return GetLanguageListRequest::ToJson(this->Model());
}

JsonValue GetLanguageListRequest::ToJson(const PFLocalizationGetLanguageListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

void GetLanguageListResponse::FromJson(const JsonValue& input)
{
    CStringVector languageList{};
    JsonUtils::ObjectGetMember(input, "LanguageList", languageList);
    this->SetLanguageList(std::move(languageList));
}

size_t GetLanguageListResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFLocalizationGetLanguageListResponse const*> GetLanguageListResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetLanguageListResponse>(&this->Model());
}

size_t GetLanguageListResponse::RequiredBufferSize(const PFLocalizationGetLanguageListResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(char*) + sizeof(char*) * model.languageListCount);
    for (size_t i = 0; i < model.languageListCount; ++i)
    {
        requiredSize += (std::strlen(model.languageList[i]) + 1);
    }
    return requiredSize;
}

HRESULT GetLanguageListResponse::Copy(const PFLocalizationGetLanguageListResponse& input, PFLocalizationGetLanguageListResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.languageList = buffer.CopyToArray(input.languageList, input.languageListCount);
    return S_OK;
}

} // namespace Localization
} // namespace PlayFab
