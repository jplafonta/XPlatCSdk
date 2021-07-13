#include "stdafx.h"
#include "ExperimentationApi.h"

namespace PlayFab
{

using namespace ExperimentationModels;

ExperimentationAPI::ExperimentationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<ExperimentationModels::CreateExclusionGroupResult> ExperimentationAPI::CreateExclusionGroup(
    const PlayFabExperimentationCreateExclusionGroupRequest& request,
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
        "/Experimentation/CreateExclusionGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateExclusionGroupResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateExclusionGroupResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateExclusionGroupResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ExperimentationModels::CreateExperimentResult> ExperimentationAPI::CreateExperiment(
    const PlayFabExperimentationCreateExperimentRequest& request,
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
        "/Experimentation/CreateExperiment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateExperimentResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateExperimentResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateExperimentResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ExperimentationAPI::DeleteExclusionGroup(
    const PlayFabExperimentationDeleteExclusionGroupRequest& request,
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
        "/Experimentation/DeleteExclusionGroup",
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

AsyncOp<void> ExperimentationAPI::DeleteExperiment(
    const PlayFabExperimentationDeleteExperimentRequest& request,
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
        "/Experimentation/DeleteExperiment",
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

AsyncOp<ExperimentationModels::GetExclusionGroupsResult> ExperimentationAPI::GetExclusionGroups(
    const PlayFabExperimentationGetExclusionGroupsRequest& request,
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
        "/Experimentation/GetExclusionGroups",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetExclusionGroupsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetExclusionGroupsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetExclusionGroupsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ExperimentationModels::GetExclusionGroupTrafficResult> ExperimentationAPI::GetExclusionGroupTraffic(
    const PlayFabExperimentationGetExclusionGroupTrafficRequest& request,
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
        "/Experimentation/GetExclusionGroupTraffic",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetExclusionGroupTrafficResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetExclusionGroupTrafficResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetExclusionGroupTrafficResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ExperimentationModels::GetExperimentsResult> ExperimentationAPI::GetExperiments(
    const PlayFabExperimentationGetExperimentsRequest& request,
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
        "/Experimentation/GetExperiments",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetExperimentsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetExperimentsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetExperimentsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ExperimentationModels::GetLatestScorecardResult> ExperimentationAPI::GetLatestScorecard(
    const PlayFabExperimentationGetLatestScorecardRequest& request,
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
        "/Experimentation/GetLatestScorecard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLatestScorecardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLatestScorecardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLatestScorecardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ExperimentationModels::GetTreatmentAssignmentResult> ExperimentationAPI::GetTreatmentAssignment(
    const PlayFabExperimentationGetTreatmentAssignmentRequest& request,
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
        "/Experimentation/GetTreatmentAssignment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTreatmentAssignmentResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTreatmentAssignmentResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTreatmentAssignmentResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ExperimentationAPI::StartExperiment(
    const PlayFabExperimentationStartExperimentRequest& request,
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
        "/Experimentation/StartExperiment",
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

AsyncOp<void> ExperimentationAPI::StopExperiment(
    const PlayFabExperimentationStopExperimentRequest& request,
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
        "/Experimentation/StopExperiment",
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

AsyncOp<void> ExperimentationAPI::UpdateExclusionGroup(
    const PlayFabExperimentationUpdateExclusionGroupRequest& request,
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
        "/Experimentation/UpdateExclusionGroup",
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

AsyncOp<void> ExperimentationAPI::UpdateExperiment(
    const PlayFabExperimentationUpdateExperimentRequest& request,
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
        "/Experimentation/UpdateExperiment",
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

}
