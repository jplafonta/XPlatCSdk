#include "stdafx.h"
#include <playfab/PFData.h>
#include "Data.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::DataModels;

HRESULT PFDataAbortFileUploadsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataAbortFileUploadsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::AbortFileUploads, &contextHandle->entity->dataAPI, AbortFileUploadsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataAbortFileUploadsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataAbortFileUploadsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataAbortFileUploadsResponse*)(std::dynamic_pointer_cast<AbortFileUploadsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFDataDeleteFilesAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataDeleteFilesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::DeleteFiles, &contextHandle->entity->dataAPI, DeleteFilesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataDeleteFilesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataDeleteFilesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataDeleteFilesResponse*)(std::dynamic_pointer_cast<DeleteFilesResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFDataFinalizeFileUploadsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataFinalizeFileUploadsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::FinalizeFileUploads, &contextHandle->entity->dataAPI, FinalizeFileUploadsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataFinalizeFileUploadsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataFinalizeFileUploadsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataFinalizeFileUploadsResponse*)(std::dynamic_pointer_cast<FinalizeFileUploadsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFDataGetFilesAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataGetFilesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::GetFiles, &contextHandle->entity->dataAPI, GetFilesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataGetFilesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataGetFilesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataGetFilesResponse*)(std::dynamic_pointer_cast<GetFilesResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFDataGetObjectsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataGetObjectsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::GetObjects, &contextHandle->entity->dataAPI, GetObjectsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataGetObjectsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataGetObjectsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataGetObjectsResponse*)(std::dynamic_pointer_cast<GetObjectsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFDataInitiateFileUploadsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataInitiateFileUploadsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::InitiateFileUploads, &contextHandle->entity->dataAPI, InitiateFileUploadsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataInitiateFileUploadsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataInitiateFileUploadsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataInitiateFileUploadsResponse*)(std::dynamic_pointer_cast<InitiateFileUploadsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFDataSetObjectsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFDataSetObjectsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&DataAPI::SetObjects, &contextHandle->entity->dataAPI, SetObjectsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFDataSetObjectsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataSetObjectsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFDataSetObjectsResponse*)(std::dynamic_pointer_cast<SetObjectsResponse>((*resultHandle)->result).get());

    return S_OK;
}

