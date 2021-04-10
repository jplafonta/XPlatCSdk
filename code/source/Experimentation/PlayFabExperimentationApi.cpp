#include "stdafx.h"
#include <playfab/PlayFabExperimentationApi.h>
#include "ExperimentationApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::ExperimentationModels;

HRESULT PlayFabExperimentationCreateExclusionGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationCreateExclusionGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::CreateExclusionGroup, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationCreateExclusionGroupGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabExperimentationCreateExclusionGroupGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabExperimentationCreateExclusionGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabExperimentationCreateExclusionGroupResult*>(buffer);

    return S_OK;
}
HRESULT PlayFabExperimentationCreateExperimentAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationCreateExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::CreateExperiment, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationCreateExperimentGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabExperimentationCreateExperimentGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabExperimentationCreateExperimentResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabExperimentationCreateExperimentResult*>(buffer);

    return S_OK;
}
HRESULT PlayFabExperimentationDeleteExclusionGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationDeleteExclusionGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::DeleteExclusionGroup, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationDeleteExperimentAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationDeleteExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::DeleteExperiment, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationGetExclusionGroupsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationGetExclusionGroupsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::GetExclusionGroups, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationGetExclusionGroupsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetExclusionGroupsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabExperimentationGetExclusionGroupsResult*)(std::dynamic_pointer_cast<GetExclusionGroupsResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabExperimentationGetExclusionGroupTrafficAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationGetExclusionGroupTrafficRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::GetExclusionGroupTraffic, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationGetExclusionGroupTrafficGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetExclusionGroupTrafficResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabExperimentationGetExclusionGroupTrafficResult*)(std::dynamic_pointer_cast<GetExclusionGroupTrafficResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabExperimentationGetExperimentsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationGetExperimentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::GetExperiments, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationGetExperimentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetExperimentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabExperimentationGetExperimentsResult*)(std::dynamic_pointer_cast<GetExperimentsResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabExperimentationGetLatestScorecardAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationGetLatestScorecardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::GetLatestScorecard, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationGetLatestScorecardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetLatestScorecardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabExperimentationGetLatestScorecardResult*)(std::dynamic_pointer_cast<GetLatestScorecardResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabExperimentationGetTreatmentAssignmentAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationGetTreatmentAssignmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::GetTreatmentAssignment, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationGetTreatmentAssignmentGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetTreatmentAssignmentResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabExperimentationGetTreatmentAssignmentResult*)(std::dynamic_pointer_cast<GetTreatmentAssignmentResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabExperimentationStartExperimentAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationStartExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::StartExperiment, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationStopExperimentAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationStopExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::StopExperiment, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationUpdateExclusionGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationUpdateExclusionGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::UpdateExclusionGroup, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabExperimentationUpdateExperimentAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabExperimentationUpdateExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ExperimentationAPI::UpdateExperiment, &contextHandle->entity->experimentationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

