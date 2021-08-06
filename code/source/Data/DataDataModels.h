#pragma once

#include <playfab/PFDataDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace DataModels
{

// Data Classes
struct AbortFileUploadsRequest : public PFDataAbortFileUploadsRequest, public BaseModel
{
    AbortFileUploadsRequest();
    AbortFileUploadsRequest(const AbortFileUploadsRequest& src);
    AbortFileUploadsRequest(AbortFileUploadsRequest&& src);
    AbortFileUploadsRequest(const PFDataAbortFileUploadsRequest& src);
    AbortFileUploadsRequest& operator=(const AbortFileUploadsRequest&) = delete;
    ~AbortFileUploadsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
    StdExtra::optional<int32_t> m_profileVersion;
};

struct AbortFileUploadsResponse : public PFDataAbortFileUploadsResponse, public BaseModel, public ApiResult
{
    AbortFileUploadsResponse();
    AbortFileUploadsResponse(const AbortFileUploadsResponse& src);
    AbortFileUploadsResponse(AbortFileUploadsResponse&& src);
    AbortFileUploadsResponse(const PFDataAbortFileUploadsResponse& src);
    AbortFileUploadsResponse& operator=(const AbortFileUploadsResponse&) = delete;
    ~AbortFileUploadsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
};

struct DeleteFilesRequest : public PFDataDeleteFilesRequest, public BaseModel
{
    DeleteFilesRequest();
    DeleteFilesRequest(const DeleteFilesRequest& src);
    DeleteFilesRequest(DeleteFilesRequest&& src);
    DeleteFilesRequest(const PFDataDeleteFilesRequest& src);
    DeleteFilesRequest& operator=(const DeleteFilesRequest&) = delete;
    ~DeleteFilesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
    StdExtra::optional<int32_t> m_profileVersion;
};

struct DeleteFilesResponse : public PFDataDeleteFilesResponse, public BaseModel, public ApiResult
{
    DeleteFilesResponse();
    DeleteFilesResponse(const DeleteFilesResponse& src);
    DeleteFilesResponse(DeleteFilesResponse&& src);
    DeleteFilesResponse(const PFDataDeleteFilesResponse& src);
    DeleteFilesResponse& operator=(const DeleteFilesResponse&) = delete;
    ~DeleteFilesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
};

struct FinalizeFileUploadsRequest : public PFDataFinalizeFileUploadsRequest, public BaseModel
{
    FinalizeFileUploadsRequest();
    FinalizeFileUploadsRequest(const FinalizeFileUploadsRequest& src);
    FinalizeFileUploadsRequest(FinalizeFileUploadsRequest&& src);
    FinalizeFileUploadsRequest(const PFDataFinalizeFileUploadsRequest& src);
    FinalizeFileUploadsRequest& operator=(const FinalizeFileUploadsRequest&) = delete;
    ~FinalizeFileUploadsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
};

struct GetFileMetadata : public PFDataGetFileMetadata, public SerializableModel
{
    GetFileMetadata();
    GetFileMetadata(const GetFileMetadata& src);
    GetFileMetadata(GetFileMetadata&& src);
    GetFileMetadata(const PFDataGetFileMetadata& src);
    GetFileMetadata& operator=(const GetFileMetadata&) = delete;
    ~GetFileMetadata() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_checksum;
    String m_downloadUrl;
    String m_fileName;
};

struct FinalizeFileUploadsResponse : public PFDataFinalizeFileUploadsResponse, public BaseModel, public ApiResult
{
    FinalizeFileUploadsResponse();
    FinalizeFileUploadsResponse(const FinalizeFileUploadsResponse& src);
    FinalizeFileUploadsResponse(FinalizeFileUploadsResponse&& src);
    FinalizeFileUploadsResponse(const PFDataFinalizeFileUploadsResponse& src);
    FinalizeFileUploadsResponse& operator=(const FinalizeFileUploadsResponse&) = delete;
    ~FinalizeFileUploadsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    AssociativeArrayModel<PFDataGetFileMetadataDictionaryEntry, GetFileMetadata> m_metadata;
};

struct GetFilesRequest : public PFDataGetFilesRequest, public BaseModel
{
    GetFilesRequest();
    GetFilesRequest(const GetFilesRequest& src);
    GetFilesRequest(GetFilesRequest&& src);
    GetFilesRequest(const PFDataGetFilesRequest& src);
    GetFilesRequest& operator=(const GetFilesRequest&) = delete;
    ~GetFilesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
};

struct GetFilesResponse : public PFDataGetFilesResponse, public BaseModel, public ApiResult
{
    GetFilesResponse();
    GetFilesResponse(const GetFilesResponse& src);
    GetFilesResponse(GetFilesResponse&& src);
    GetFilesResponse(const PFDataGetFilesResponse& src);
    GetFilesResponse& operator=(const GetFilesResponse&) = delete;
    ~GetFilesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    AssociativeArrayModel<PFDataGetFileMetadataDictionaryEntry, GetFileMetadata> m_metadata;
};

struct GetObjectsRequest : public PFDataGetObjectsRequest, public BaseModel
{
    GetObjectsRequest();
    GetObjectsRequest(const GetObjectsRequest& src);
    GetObjectsRequest(GetObjectsRequest&& src);
    GetObjectsRequest(const PFDataGetObjectsRequest& src);
    GetObjectsRequest& operator=(const GetObjectsRequest&) = delete;
    ~GetObjectsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    StdExtra::optional<bool> m_escapeObject;
};

struct ObjectResult : public PFDataObjectResult, public BaseModel, public ApiResult
{
    ObjectResult();
    ObjectResult(const ObjectResult& src);
    ObjectResult(ObjectResult&& src);
    ObjectResult(const PFDataObjectResult& src);
    ObjectResult& operator=(const ObjectResult&) = delete;
    ~ObjectResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    String m_escapedDataObject;
    String m_objectName;
};

struct GetObjectsResponse : public PFDataGetObjectsResponse, public BaseModel, public ApiResult
{
    GetObjectsResponse();
    GetObjectsResponse(const GetObjectsResponse& src);
    GetObjectsResponse(GetObjectsResponse&& src);
    GetObjectsResponse(const PFDataGetObjectsResponse& src);
    GetObjectsResponse& operator=(const GetObjectsResponse&) = delete;
    ~GetObjectsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    AssociativeArrayModel<PFDataObjectResultDictionaryEntry, ObjectResult> m_objects;
};

struct InitiateFileUploadsRequest : public PFDataInitiateFileUploadsRequest, public BaseModel
{
    InitiateFileUploadsRequest();
    InitiateFileUploadsRequest(const InitiateFileUploadsRequest& src);
    InitiateFileUploadsRequest(InitiateFileUploadsRequest&& src);
    InitiateFileUploadsRequest(const PFDataInitiateFileUploadsRequest& src);
    InitiateFileUploadsRequest& operator=(const InitiateFileUploadsRequest&) = delete;
    ~InitiateFileUploadsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
    StdExtra::optional<int32_t> m_profileVersion;
};

struct InitiateFileUploadMetadata : public PFDataInitiateFileUploadMetadata, public SerializableModel
{
    InitiateFileUploadMetadata();
    InitiateFileUploadMetadata(const InitiateFileUploadMetadata& src);
    InitiateFileUploadMetadata(InitiateFileUploadMetadata&& src);
    InitiateFileUploadMetadata(const PFDataInitiateFileUploadMetadata& src);
    InitiateFileUploadMetadata& operator=(const InitiateFileUploadMetadata&) = delete;
    ~InitiateFileUploadMetadata() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_fileName;
    String m_uploadUrl;
};

struct InitiateFileUploadsResponse : public PFDataInitiateFileUploadsResponse, public BaseModel, public ApiResult
{
    InitiateFileUploadsResponse();
    InitiateFileUploadsResponse(const InitiateFileUploadsResponse& src);
    InitiateFileUploadsResponse(InitiateFileUploadsResponse&& src);
    InitiateFileUploadsResponse(const PFDataInitiateFileUploadsResponse& src);
    InitiateFileUploadsResponse& operator=(const InitiateFileUploadsResponse&) = delete;
    ~InitiateFileUploadsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    PointerArrayModel<PFDataInitiateFileUploadMetadata, InitiateFileUploadMetadata> m_uploadDetails;
};

struct SetObject : public PFDataSetObject, public BaseModel
{
    SetObject();
    SetObject(const SetObject& src);
    SetObject(SetObject&& src);
    SetObject(const PFDataSetObject& src);
    SetObject& operator=(const SetObject&) = delete;
    ~SetObject() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    StdExtra::optional<bool> m_deleteObject;
    String m_escapedDataObject;
    String m_objectName;
};

struct SetObjectsRequest : public PFDataSetObjectsRequest, public BaseModel
{
    SetObjectsRequest();
    SetObjectsRequest(const SetObjectsRequest& src);
    SetObjectsRequest(SetObjectsRequest&& src);
    SetObjectsRequest(const PFDataSetObjectsRequest& src);
    SetObjectsRequest& operator=(const SetObjectsRequest&) = delete;
    ~SetObjectsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    StdExtra::optional<int32_t> m_expectedProfileVersion;
    PointerArrayModel<PFDataSetObject, SetObject> m_objects;
};

struct SetObjectInfo : public PFDataSetObjectInfo, public BaseModel
{
    SetObjectInfo();
    SetObjectInfo(const SetObjectInfo& src);
    SetObjectInfo(SetObjectInfo&& src);
    SetObjectInfo(const PFDataSetObjectInfo& src);
    SetObjectInfo& operator=(const SetObjectInfo&) = delete;
    ~SetObjectInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_objectName;
    String m_operationReason;
    StdExtra::optional<PFOperationTypes> m_setResult;
};

struct SetObjectsResponse : public PFDataSetObjectsResponse, public BaseModel, public ApiResult
{
    SetObjectsResponse();
    SetObjectsResponse(const SetObjectsResponse& src);
    SetObjectsResponse(SetObjectsResponse&& src);
    SetObjectsResponse(const PFDataSetObjectsResponse& src);
    SetObjectsResponse& operator=(const SetObjectsResponse&) = delete;
    ~SetObjectsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFDataSetObjectInfo, SetObjectInfo> m_setResults;
};

} // namespace DataModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFDataAbortFileUploadsRequest& input);
template<> inline JsonValue ToJson<>(const PFDataAbortFileUploadsResponse& input);
template<> inline JsonValue ToJson<>(const PFDataDeleteFilesRequest& input);
template<> inline JsonValue ToJson<>(const PFDataDeleteFilesResponse& input);
template<> inline JsonValue ToJson<>(const PFDataFinalizeFileUploadsRequest& input);
template<> inline JsonValue ToJson<>(const PFDataGetFileMetadata& input);
template<> inline JsonValue ToJson<>(const PFDataFinalizeFileUploadsResponse& input);
template<> inline JsonValue ToJson<>(const PFDataGetFilesRequest& input);
template<> inline JsonValue ToJson<>(const PFDataGetFilesResponse& input);
template<> inline JsonValue ToJson<>(const PFDataGetObjectsRequest& input);
template<> inline JsonValue ToJson<>(const PFDataObjectResult& input);
template<> inline JsonValue ToJson<>(const PFDataGetObjectsResponse& input);
template<> inline JsonValue ToJson<>(const PFDataInitiateFileUploadsRequest& input);
template<> inline JsonValue ToJson<>(const PFDataInitiateFileUploadMetadata& input);
template<> inline JsonValue ToJson<>(const PFDataInitiateFileUploadsResponse& input);
template<> inline JsonValue ToJson<>(const PFDataSetObject& input);
template<> inline JsonValue ToJson<>(const PFDataSetObjectsRequest& input);
template<> inline JsonValue ToJson<>(const PFDataSetObjectInfo& input);
template<> inline JsonValue ToJson<>(const PFDataSetObjectsResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
