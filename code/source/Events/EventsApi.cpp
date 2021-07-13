#include "stdafx.h"
#include "EventsApi.h"

namespace PlayFab
{

using namespace EventsModels;

EventsAPI::EventsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<EventsModels::WriteEventsResponse> EventsAPI::WriteEvents(
    const PlayFabEventsWriteEventsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Event/WriteEvents",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<EventsModels::WriteEventsResponse> EventsAPI::WriteTelemetryEvents(
    const PlayFabEventsWriteEventsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Event/WriteTelemetryEvents",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
