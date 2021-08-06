#pragma once

#include "DataDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class DataAPI
{
public:
    DataAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    DataAPI(const DataAPI& source) = delete;
    DataAPI& operator=(const DataAPI& source) = delete;
    ~DataAPI() = default;

    // ------------ Generated API calls
    AsyncOp<DataModels::AbortFileUploadsResponse> AbortFileUploads(const PFDataAbortFileUploadsRequest& request, const TaskQueue& queue) const;
    AsyncOp<DataModels::DeleteFilesResponse> DeleteFiles(const PFDataDeleteFilesRequest& request, const TaskQueue& queue) const;
    AsyncOp<DataModels::FinalizeFileUploadsResponse> FinalizeFileUploads(const PFDataFinalizeFileUploadsRequest& request, const TaskQueue& queue) const;
    AsyncOp<DataModels::GetFilesResponse> GetFiles(const PFDataGetFilesRequest& request, const TaskQueue& queue) const;
    AsyncOp<DataModels::GetObjectsResponse> GetObjects(const PFDataGetObjectsRequest& request, const TaskQueue& queue) const;
    AsyncOp<DataModels::InitiateFileUploadsResponse> InitiateFileUploads(const PFDataInitiateFileUploadsRequest& request, const TaskQueue& queue) const;
    AsyncOp<DataModels::SetObjectsResponse> SetObjects(const PFDataSetObjectsRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
