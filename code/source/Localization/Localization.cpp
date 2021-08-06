#include "stdafx.h"
#include "Localization.h"

namespace PlayFab
{

using namespace LocalizationModels;

LocalizationAPI::LocalizationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<GetLanguageListResponse> LocalizationAPI::GetLanguageList(
    const PFLocalizationGetLanguageListRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Locale/GetLanguageList" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetLanguageListResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLanguageListResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLanguageListResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}
