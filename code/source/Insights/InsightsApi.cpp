#include "stdafx.h"
#include "InsightsApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace InsightsModels;

InsightsAPI::InsightsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<InsightsModels::InsightsGetDetailsResponse> InsightsAPI::GetDetails(
    const PlayFabInsightsInsightsEmptyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Insights/GetDetails",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InsightsGetDetailsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InsightsGetDetailsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InsightsGetDetailsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<InsightsModels::InsightsGetLimitsResponse> InsightsAPI::GetLimits(
    const PlayFabInsightsInsightsEmptyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Insights/GetLimits",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InsightsGetLimitsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InsightsGetLimitsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InsightsGetLimitsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<InsightsModels::InsightsGetOperationStatusResponse> InsightsAPI::GetOperationStatus(
    const PlayFabInsightsInsightsGetOperationStatusRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Insights/GetOperationStatus",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InsightsGetOperationStatusResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InsightsGetOperationStatusResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InsightsGetOperationStatusResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<InsightsModels::InsightsGetPendingOperationsResponse> InsightsAPI::GetPendingOperations(
    const PlayFabInsightsInsightsGetPendingOperationsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Insights/GetPendingOperations",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InsightsGetPendingOperationsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InsightsGetPendingOperationsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InsightsGetPendingOperationsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<InsightsModels::InsightsOperationResponse> InsightsAPI::SetPerformance(
    const PlayFabInsightsInsightsSetPerformanceRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Insights/SetPerformance",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InsightsOperationResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InsightsOperationResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InsightsOperationResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<InsightsModels::InsightsOperationResponse> InsightsAPI::SetStorageRetention(
    const PlayFabInsightsInsightsSetStorageRetentionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Insights/SetStorageRetention",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InsightsOperationResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InsightsOperationResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InsightsOperationResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
