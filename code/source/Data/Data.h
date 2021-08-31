#pragma once

#include "DataDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class DataAPI
{
public:
    DataAPI() = delete;
    DataAPI(const DataAPI& source) = delete;
    DataAPI& operator=(const DataAPI& source) = delete;
    ~DataAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<DataModels::AbortFileUploadsResponse> AbortFileUploads(SharedPtr<Entity> entity, const PFDataAbortFileUploadsRequest& request, const TaskQueue& queue);
    static AsyncOp<DataModels::DeleteFilesResponse> DeleteFiles(SharedPtr<Entity> entity, const PFDataDeleteFilesRequest& request, const TaskQueue& queue);
    static AsyncOp<DataModels::FinalizeFileUploadsResponse> FinalizeFileUploads(SharedPtr<Entity> entity, const PFDataFinalizeFileUploadsRequest& request, const TaskQueue& queue);
    static AsyncOp<DataModels::GetFilesResponse> GetFiles(SharedPtr<Entity> entity, const PFDataGetFilesRequest& request, const TaskQueue& queue);
    static AsyncOp<DataModels::GetObjectsResponse> GetObjects(SharedPtr<Entity> entity, const PFDataGetObjectsRequest& request, const TaskQueue& queue);
    static AsyncOp<DataModels::InitiateFileUploadsResponse> InitiateFileUploads(SharedPtr<Entity> entity, const PFDataInitiateFileUploadsRequest& request, const TaskQueue& queue);
    static AsyncOp<DataModels::SetObjectsResponse> SetObjects(SharedPtr<Entity> entity, const PFDataSetObjectsRequest& request, const TaskQueue& queue);
};

}
