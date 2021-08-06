#include "stdafx.h"
#include <playfab/PFExperimentation.h>
#include "Experimentation.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::ExperimentationModels;

HRESULT PFExperimentationCreateExclusionGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationCreateExclusionGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::CreateExclusionGroup, &contextHandle->entity->experimentationAPI, CreateExclusionGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationCreateExclusionGroupGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFExperimentationCreateExclusionGroupGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFExperimentationCreateExclusionGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFExperimentationCreateExclusionGroupResult*>(buffer);

    return S_OK;
}

HRESULT PFExperimentationCreateExperimentAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationCreateExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::CreateExperiment, &contextHandle->entity->experimentationAPI, CreateExperimentRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationCreateExperimentGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFExperimentationCreateExperimentGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFExperimentationCreateExperimentResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFExperimentationCreateExperimentResult*>(buffer);

    return S_OK;
}

HRESULT PFExperimentationDeleteExclusionGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationDeleteExclusionGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::DeleteExclusionGroup, &contextHandle->entity->experimentationAPI, DeleteExclusionGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationDeleteExperimentAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationDeleteExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::DeleteExperiment, &contextHandle->entity->experimentationAPI, DeleteExperimentRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationGetExclusionGroupsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationGetExclusionGroupsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::GetExclusionGroups, &contextHandle->entity->experimentationAPI, GetExclusionGroupsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationGetExclusionGroupsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExperimentationGetExclusionGroupsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExperimentationGetExclusionGroupsResult*)(std::dynamic_pointer_cast<GetExclusionGroupsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFExperimentationGetExclusionGroupTrafficAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationGetExclusionGroupTrafficRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::GetExclusionGroupTraffic, &contextHandle->entity->experimentationAPI, GetExclusionGroupTrafficRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationGetExclusionGroupTrafficGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExperimentationGetExclusionGroupTrafficResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExperimentationGetExclusionGroupTrafficResult*)(std::dynamic_pointer_cast<GetExclusionGroupTrafficResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFExperimentationGetExperimentsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationGetExperimentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::GetExperiments, &contextHandle->entity->experimentationAPI, GetExperimentsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationGetExperimentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExperimentationGetExperimentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExperimentationGetExperimentsResult*)(std::dynamic_pointer_cast<GetExperimentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFExperimentationGetLatestScorecardAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationGetLatestScorecardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::GetLatestScorecard, &contextHandle->entity->experimentationAPI, GetLatestScorecardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationGetLatestScorecardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExperimentationGetLatestScorecardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExperimentationGetLatestScorecardResult*)(std::dynamic_pointer_cast<GetLatestScorecardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFExperimentationGetTreatmentAssignmentAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationGetTreatmentAssignmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::GetTreatmentAssignment, &contextHandle->entity->experimentationAPI, GetTreatmentAssignmentRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationGetTreatmentAssignmentGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExperimentationGetTreatmentAssignmentResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFExperimentationGetTreatmentAssignmentResult*)(std::dynamic_pointer_cast<GetTreatmentAssignmentResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFExperimentationStartExperimentAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationStartExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::StartExperiment, &contextHandle->entity->experimentationAPI, StartExperimentRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationStopExperimentAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationStopExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::StopExperiment, &contextHandle->entity->experimentationAPI, StopExperimentRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationUpdateExclusionGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationUpdateExclusionGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::UpdateExclusionGroup, &contextHandle->entity->experimentationAPI, UpdateExclusionGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFExperimentationUpdateExperimentAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFExperimentationUpdateExperimentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ExperimentationAPI::UpdateExperiment, &contextHandle->entity->experimentationAPI, UpdateExperimentRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

