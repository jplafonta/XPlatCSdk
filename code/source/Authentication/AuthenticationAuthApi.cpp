#include "stdafx.h"
#include "AuthenticationAuthApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace AuthenticationModels;

AuthenticationAuthAPI::AuthenticationAuthAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey) :
    m_httpClient{ std::move(httpClient) },
    m_secretKey{ std::move(secretKey) }
{
}

AsyncOp<SharedPtr<Entity>> AuthenticationAuthAPI::GetEntityToken(
    const PlayFabAuthenticationGetEntityTokenRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Authentication/GetEntityToken",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetEntityTokenResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}