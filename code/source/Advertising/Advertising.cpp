#include "stdafx.h"
#include "Advertising.h"

namespace PlayFab
{

using namespace AdvertisingModels;

AdvertisingAPI::AdvertisingAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<void> AdvertisingAPI::ClientAttributeInstall(
    const PFAdvertisingAttributeInstallRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/AttributeInstall" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<GetAdPlacementsResult> AdvertisingAPI::ClientGetAdPlacements(
    const PFAdvertisingGetAdPlacementsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetAdPlacements" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetAdPlacementsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAdPlacementsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAdPlacementsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdvertisingAPI::ClientReportAdActivity(
    const PFAdvertisingReportAdActivityRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/ReportAdActivity" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<RewardAdActivityResult> AdvertisingAPI::ClientRewardAdActivity(
    const PFAdvertisingRewardAdActivityRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/RewardAdActivity" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RewardAdActivityResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RewardAdActivityResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RewardAdActivityResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}
