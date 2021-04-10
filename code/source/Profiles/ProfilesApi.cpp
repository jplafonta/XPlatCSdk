#include "stdafx.h"
#include "ProfilesApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace ProfilesModels;

ProfilesAPI::ProfilesAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<ProfilesModels::GetGlobalPolicyResponse> ProfilesAPI::GetGlobalPolicy(
    const PlayFabProfilesGetGlobalPolicyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/GetGlobalPolicy",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetGlobalPolicyResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetGlobalPolicyResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetGlobalPolicyResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ProfilesModels::GetEntityProfileResponse> ProfilesAPI::GetProfile(
    const PlayFabProfilesGetEntityProfileRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/GetProfile",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetEntityProfileResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetEntityProfileResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetEntityProfileResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ProfilesModels::GetEntityProfilesResponse> ProfilesAPI::GetProfiles(
    const PlayFabProfilesGetEntityProfilesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/GetProfiles",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetEntityProfilesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetEntityProfilesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetEntityProfilesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse> ProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds(
    const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/GetTitlePlayersFromMasterPlayerAccountIds",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitlePlayersFromMasterPlayerAccountIdsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitlePlayersFromMasterPlayerAccountIdsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitlePlayersFromMasterPlayerAccountIdsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ProfilesAPI::SetGlobalPolicy(
    const PlayFabProfilesSetGlobalPolicyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/SetGlobalPolicy",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ProfilesModels::SetProfileLanguageResponse> ProfilesAPI::SetProfileLanguage(
    const PlayFabProfilesSetProfileLanguageRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/SetProfileLanguage",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SetProfileLanguageResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            SetProfileLanguageResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<SetProfileLanguageResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ProfilesModels::SetEntityProfilePolicyResponse> ProfilesAPI::SetProfilePolicy(
    const PlayFabProfilesSetEntityProfilePolicyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Profile/SetProfilePolicy",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SetEntityProfilePolicyResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            SetEntityProfilePolicyResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<SetEntityProfilePolicyResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
