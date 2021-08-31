#include "stdafx.h"
#include "Segments.h"
#include "GlobalState.h"
#include "TitlePlayer.h"

namespace PlayFab
{

using namespace SegmentsModels;


AsyncOp<CreateSegmentResponse> SegmentsAPI::AdminCreateSegment(
    SharedPtr<GlobalState const> state,
    const PFSegmentsCreateSegmentRequest& request,
    const TaskQueue& queue
)
{
    auto secretKey{ state->SecretKey() };
    if (!secretKey || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }

    const char* path{ "/Admin/CreateSegment" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers{{ kSecretKeyHeaderName, *secretKey }};

    auto requestOp = state->HttpClient()->MakePostRequest(
        path,
        std::move(headers),
        std::move(requestBody),
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateSegmentResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateSegmentResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateSegmentResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DeleteSegmentsResponse> SegmentsAPI::AdminDeleteSegment(
    SharedPtr<GlobalState const> state,
    const PFSegmentsDeleteSegmentRequest& request,
    const TaskQueue& queue
)
{
    auto secretKey{ state->SecretKey() };
    if (!secretKey || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }

    const char* path{ "/Admin/DeleteSegment" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers{{ kSecretKeyHeaderName, *secretKey }};

    auto requestOp = state->HttpClient()->MakePostRequest(
        path,
        std::move(headers),
        std::move(requestBody),
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<DeleteSegmentsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            DeleteSegmentsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<DeleteSegmentsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetSegmentsResponse> SegmentsAPI::AdminGetSegments(
    SharedPtr<GlobalState const> state,
    const PFSegmentsGetSegmentsRequest& request,
    const TaskQueue& queue
)
{
    auto secretKey{ state->SecretKey() };
    if (!secretKey || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }

    const char* path{ "/Admin/GetSegments" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers{{ kSecretKeyHeaderName, *secretKey }};

    auto requestOp = state->HttpClient()->MakePostRequest(
        path,
        std::move(headers),
        std::move(requestBody),
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetSegmentsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetSegmentsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetSegmentsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<UpdateSegmentResponse> SegmentsAPI::AdminUpdateSegment(
    SharedPtr<GlobalState const> state,
    const PFSegmentsUpdateSegmentRequest& request,
    const TaskQueue& queue
)
{
    auto secretKey{ state->SecretKey() };
    if (!secretKey || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }

    const char* path{ "/Admin/UpdateSegment" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers{{ kSecretKeyHeaderName, *secretKey }};

    auto requestOp = state->HttpClient()->MakePostRequest(
        path,
        std::move(headers),
        std::move(requestBody),
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UpdateSegmentResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateSegmentResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateSegmentResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}
