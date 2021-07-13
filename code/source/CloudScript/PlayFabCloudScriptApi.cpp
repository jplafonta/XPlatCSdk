#include "stdafx.h"
#include <playfab/PlayFabCloudScriptApi.h>
#include "CloudScriptApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::CloudScriptModels;

HRESULT PlayFabCloudScriptExecuteEntityCloudScriptAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptExecuteEntityCloudScriptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ExecuteEntityCloudScript, &contextHandle->entity->cloudScriptAPI, ExecuteEntityCloudScriptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptExecuteEntityCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptExecuteCloudScriptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabCloudScriptExecuteCloudScriptResult*)(std::dynamic_pointer_cast<ExecuteCloudScriptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabCloudScriptExecuteFunctionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptExecuteFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ExecuteFunction, &contextHandle->entity->cloudScriptAPI, ExecuteFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptExecuteFunctionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptExecuteFunctionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabCloudScriptExecuteFunctionResult*)(std::dynamic_pointer_cast<ExecuteFunctionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabCloudScriptListFunctionsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptListFunctionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ListFunctions, &contextHandle->entity->cloudScriptAPI, ListFunctionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptListFunctionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptListFunctionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabCloudScriptListFunctionsResult*)(std::dynamic_pointer_cast<ListFunctionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabCloudScriptListHttpFunctionsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptListFunctionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ListHttpFunctions, &contextHandle->entity->cloudScriptAPI, ListFunctionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptListHttpFunctionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptListHttpFunctionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabCloudScriptListHttpFunctionsResult*)(std::dynamic_pointer_cast<ListHttpFunctionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabCloudScriptListQueuedFunctionsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptListFunctionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ListQueuedFunctions, &contextHandle->entity->cloudScriptAPI, ListFunctionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptListQueuedFunctionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptListQueuedFunctionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabCloudScriptListQueuedFunctionsResult*)(std::dynamic_pointer_cast<ListQueuedFunctionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForEntityTriggeredAction, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForEntityTriggeredActionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptPostFunctionResultForFunctionExecutionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForFunctionExecution, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForFunctionExecutionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForPlayerTriggeredAction, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForPlayerTriggeredActionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptPostFunctionResultForScheduledTaskAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForScheduledTask, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForScheduledTaskRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptRegisterHttpFunctionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptRegisterHttpFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::RegisterHttpFunction, &contextHandle->entity->cloudScriptAPI, RegisterHttpFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptRegisterQueuedFunctionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptRegisterQueuedFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::RegisterQueuedFunction, &contextHandle->entity->cloudScriptAPI, RegisterQueuedFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabCloudScriptUnregisterFunctionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabCloudScriptUnregisterFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::UnregisterFunction, &contextHandle->entity->cloudScriptAPI, UnregisterFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

