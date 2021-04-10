#include "stdafx.h"
#include <playfab/PlayFabDataApi.h>
#include "DataApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::DataModels;

HRESULT PlayFabDataAbortFileUploadsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataAbortFileUploadsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::AbortFileUploads, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataAbortFileUploadsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataAbortFileUploadsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataAbortFileUploadsResponse*)(std::dynamic_pointer_cast<AbortFileUploadsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabDataDeleteFilesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataDeleteFilesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::DeleteFiles, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataDeleteFilesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataDeleteFilesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataDeleteFilesResponse*)(std::dynamic_pointer_cast<DeleteFilesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabDataFinalizeFileUploadsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataFinalizeFileUploadsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::FinalizeFileUploads, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataFinalizeFileUploadsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataFinalizeFileUploadsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataFinalizeFileUploadsResponse*)(std::dynamic_pointer_cast<FinalizeFileUploadsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabDataGetFilesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataGetFilesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::GetFiles, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataGetFilesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataGetFilesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataGetFilesResponse*)(std::dynamic_pointer_cast<GetFilesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabDataGetObjectsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataGetObjectsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::GetObjects, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataGetObjectsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataGetObjectsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataGetObjectsResponse*)(std::dynamic_pointer_cast<GetObjectsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabDataInitiateFileUploadsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataInitiateFileUploadsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::InitiateFileUploads, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataInitiateFileUploadsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataInitiateFileUploadsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataInitiateFileUploadsResponse*)(std::dynamic_pointer_cast<InitiateFileUploadsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabDataSetObjectsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabDataSetObjectsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&DataAPI::SetObjects, &contextHandle->entity->dataAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabDataSetObjectsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataSetObjectsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabDataSetObjectsResponse*)(std::dynamic_pointer_cast<SetObjectsResponse>((*resultHandle)->model).get());

    return S_OK;
}

