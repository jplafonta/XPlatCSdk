#include "stdafx.h"
#include "LocalizationApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace LocalizationModels;

LocalizationAPI::LocalizationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<LocalizationModels::GetLanguageListResponse> LocalizationAPI::GetLanguageList(
    const PlayFabLocalizationGetLanguageListRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Locale/GetLanguageList",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLanguageListResponse>
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
