#include "stdafx.h"
#include <playfab/PFCloudScript.h>
#include "CloudScript.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::CloudScriptModels;

HRESULT PFCloudScriptAdminGetCloudScriptRevisionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCloudScriptGetCloudScriptRevisionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CloudScriptAPI::AdminGetCloudScriptRevision, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptAdminGetCloudScriptRevisionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptGetCloudScriptRevisionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCloudScriptGetCloudScriptRevisionResult*)(std::dynamic_pointer_cast<GetCloudScriptRevisionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptAdminGetCloudScriptVersionsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CloudScriptAPI::AdminGetCloudScriptVersions, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptAdminGetCloudScriptVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptGetCloudScriptVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCloudScriptGetCloudScriptVersionsResult*)(std::dynamic_pointer_cast<GetCloudScriptVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptAdminSetPublishedRevisionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCloudScriptSetPublishedRevisionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CloudScriptAPI::AdminSetPublishedRevision, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptAdminUpdateCloudScriptAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCloudScriptUpdateCloudScriptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CloudScriptAPI::AdminUpdateCloudScript, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptAdminUpdateCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFCloudScriptUpdateCloudScriptResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFCloudScriptUpdateCloudScriptResult), result, nullptr);
}

HRESULT PFCloudScriptClientExecuteCloudScriptAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptExecuteCloudScriptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ClientExecuteCloudScript, &contextHandle->entity->cloudScriptAPI, ExecuteCloudScriptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptClientExecuteCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExecuteCloudScriptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExecuteCloudScriptResult*)(std::dynamic_pointer_cast<ExecuteCloudScriptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptServerExecuteCloudScriptAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCloudScriptExecuteCloudScriptServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CloudScriptAPI::ServerExecuteCloudScript, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptServerExecuteCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExecuteCloudScriptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExecuteCloudScriptResult*)(std::dynamic_pointer_cast<ExecuteCloudScriptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptExecuteEntityCloudScriptAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptExecuteEntityCloudScriptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ExecuteEntityCloudScript, &contextHandle->entity->cloudScriptAPI, ExecuteEntityCloudScriptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptExecuteEntityCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExecuteCloudScriptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExecuteCloudScriptResult*)(std::dynamic_pointer_cast<ExecuteCloudScriptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptExecuteFunctionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptExecuteFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ExecuteFunction, &contextHandle->entity->cloudScriptAPI, ExecuteFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptExecuteFunctionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptExecuteFunctionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCloudScriptExecuteFunctionResult*)(std::dynamic_pointer_cast<ExecuteFunctionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptListFunctionsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptListFunctionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ListFunctions, &contextHandle->entity->cloudScriptAPI, ListFunctionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptListFunctionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptListFunctionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCloudScriptListFunctionsResult*)(std::dynamic_pointer_cast<ListFunctionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptListHttpFunctionsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptListFunctionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ListHttpFunctions, &contextHandle->entity->cloudScriptAPI, ListFunctionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptListHttpFunctionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptListHttpFunctionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCloudScriptListHttpFunctionsResult*)(std::dynamic_pointer_cast<ListHttpFunctionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptListQueuedFunctionsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptListFunctionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::ListQueuedFunctions, &contextHandle->entity->cloudScriptAPI, ListFunctionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptListQueuedFunctionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptListQueuedFunctionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCloudScriptListQueuedFunctionsResult*)(std::dynamic_pointer_cast<ListQueuedFunctionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForEntityTriggeredAction, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForEntityTriggeredActionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptPostFunctionResultForFunctionExecutionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptPostFunctionResultForFunctionExecutionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForFunctionExecution, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForFunctionExecutionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForPlayerTriggeredAction, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForPlayerTriggeredActionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptPostFunctionResultForScheduledTaskAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptPostFunctionResultForScheduledTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::PostFunctionResultForScheduledTask, &contextHandle->entity->cloudScriptAPI, PostFunctionResultForScheduledTaskRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptRegisterHttpFunctionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptRegisterHttpFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::RegisterHttpFunction, &contextHandle->entity->cloudScriptAPI, RegisterHttpFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptRegisterQueuedFunctionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptRegisterQueuedFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::RegisterQueuedFunction, &contextHandle->entity->cloudScriptAPI, RegisterQueuedFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCloudScriptUnregisterFunctionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCloudScriptUnregisterFunctionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CloudScriptAPI::UnregisterFunction, &contextHandle->entity->cloudScriptAPI, UnregisterFunctionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

