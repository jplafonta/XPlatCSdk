#include "stdafx.h"
#include "AuthenticationApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace AuthenticationModels;

AuthenticationAPI::AuthenticationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<AuthenticationModels::ValidateEntityTokenResponse> AuthenticationAPI::ValidateEntityToken(
    const PlayFabAuthenticationValidateEntityTokenRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Authentication/ValidateEntityToken",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ValidateEntityTokenResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ValidateEntityTokenResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ValidateEntityTokenResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
