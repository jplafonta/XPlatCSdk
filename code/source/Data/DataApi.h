#pragma once

#include "DataDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class DataAPI
{
public:
    DataAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    DataAPI(const DataAPI& source) = delete;
    DataAPI& operator=(const DataAPI& source) = delete;
    ~DataAPI() = default;

    // ------------ Generated API calls
    AsyncOp<DataModels::AbortFileUploadsResponse> AbortFileUploads(const PlayFabDataAbortFileUploadsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<DataModels::DeleteFilesResponse> DeleteFiles(const PlayFabDataDeleteFilesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<DataModels::FinalizeFileUploadsResponse> FinalizeFileUploads(const PlayFabDataFinalizeFileUploadsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<DataModels::GetFilesResponse> GetFiles(const PlayFabDataGetFilesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<DataModels::GetObjectsResponse> GetObjects(const PlayFabDataGetObjectsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<DataModels::InitiateFileUploadsResponse> InitiateFileUploads(const PlayFabDataInitiateFileUploadsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<DataModels::SetObjectsResponse> SetObjects(const PlayFabDataSetObjectsRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
