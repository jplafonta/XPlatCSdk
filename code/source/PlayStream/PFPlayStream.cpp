#include "stdafx.h"
#include <playfab/PFPlayStream.h>
#include "PlayStream.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::PlayStreamModels;

HRESULT PFPlayStreamAdminAddPlayerTagAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamAddPlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::AdminAddPlayerTag, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamAdminGetAllSegmentsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::AdminGetAllSegments, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamAdminGetAllSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetAllSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetAllSegmentsResult*)(std::dynamic_pointer_cast<GetAllSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamAdminGetPlayerSegmentsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamGetPlayersSegmentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::AdminGetPlayerSegments, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamAdminGetPlayerSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayerSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayerSegmentsResult*)(std::dynamic_pointer_cast<GetPlayerSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamAdminGetPlayersInSegmentAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamGetPlayersInSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::AdminGetPlayersInSegment, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamAdminGetPlayersInSegmentGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayersInSegmentResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayersInSegmentResult*)(std::dynamic_pointer_cast<GetPlayersInSegmentResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamAdminGetPlayerTagsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamGetPlayerTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::AdminGetPlayerTags, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamAdminGetPlayerTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayerTagsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayerTagsResult*)(std::dynamic_pointer_cast<GetPlayerTagsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamAdminRemovePlayerTagAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamRemovePlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::AdminRemovePlayerTag, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamClientGetPlayerSegmentsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayStreamAPI::ClientGetPlayerSegments, &contextHandle->entity->playStreamAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamClientGetPlayerSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayerSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayerSegmentsResult*)(std::dynamic_pointer_cast<GetPlayerSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamClientGetPlayerTagsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayStreamGetPlayerTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayStreamAPI::ClientGetPlayerTags, &contextHandle->entity->playStreamAPI, GetPlayerTagsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamClientGetPlayerTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayerTagsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayerTagsResult*)(std::dynamic_pointer_cast<GetPlayerTagsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamServerAddPlayerTagAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamAddPlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::ServerAddPlayerTag, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamServerGetAllSegmentsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::ServerGetAllSegments, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamServerGetAllSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetAllSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetAllSegmentsResult*)(std::dynamic_pointer_cast<GetAllSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamServerGetPlayerSegmentsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamGetPlayersSegmentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::ServerGetPlayerSegments, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamServerGetPlayerSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayerSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayerSegmentsResult*)(std::dynamic_pointer_cast<GetPlayerSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamServerGetPlayersInSegmentAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamGetPlayersInSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::ServerGetPlayersInSegment, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamServerGetPlayersInSegmentGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayersInSegmentResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayersInSegmentResult*)(std::dynamic_pointer_cast<GetPlayersInSegmentResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamServerGetPlayerTagsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamGetPlayerTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::ServerGetPlayerTags, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamServerGetPlayerTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamGetPlayerTagsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamGetPlayerTagsResult*)(std::dynamic_pointer_cast<GetPlayerTagsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamServerRemovePlayerTagAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayStreamRemovePlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayStreamAPI::ServerRemovePlayerTag, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamWriteEventsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayStreamWriteEventsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayStreamAPI::WriteEvents, &contextHandle->entity->playStreamAPI, WriteEventsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamWriteEventsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamWriteEventsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamWriteEventsResponse*)(std::dynamic_pointer_cast<WriteEventsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayStreamWriteTelemetryEventsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayStreamWriteEventsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayStreamAPI::WriteTelemetryEvents, &contextHandle->entity->playStreamAPI, WriteEventsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayStreamWriteTelemetryEventsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayStreamWriteEventsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayStreamWriteEventsResponse*)(std::dynamic_pointer_cast<WriteEventsResponse>((*resultHandle)->result).get());

    return S_OK;
}

