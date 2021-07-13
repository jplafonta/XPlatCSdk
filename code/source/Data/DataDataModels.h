#pragma once

#include <playfab/PlayFabDataDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace DataModels
{

// Data Classes
struct AbortFileUploadsRequest : public PlayFabDataAbortFileUploadsRequest, public BaseModel
{
    AbortFileUploadsRequest();
    AbortFileUploadsRequest(const AbortFileUploadsRequest& src);
    AbortFileUploadsRequest(AbortFileUploadsRequest&& src);
    AbortFileUploadsRequest(const PlayFabDataAbortFileUploadsRequest& src);
    AbortFileUploadsRequest& operator=(const AbortFileUploadsRequest&) = delete;
    ~AbortFileUploadsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
    StdExtra::optional<int32_t> m_profileVersion;
};

struct AbortFileUploadsResponse : public PlayFabDataAbortFileUploadsResponse, public BaseModel, public ApiResult
{
    AbortFileUploadsResponse();
    AbortFileUploadsResponse(const AbortFileUploadsResponse& src);
    AbortFileUploadsResponse(AbortFileUploadsResponse&& src);
    AbortFileUploadsResponse(const PlayFabDataAbortFileUploadsResponse& src);
    AbortFileUploadsResponse& operator=(const AbortFileUploadsResponse&) = delete;
    ~AbortFileUploadsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
};

struct DeleteFilesRequest : public PlayFabDataDeleteFilesRequest, public BaseModel
{
    DeleteFilesRequest();
    DeleteFilesRequest(const DeleteFilesRequest& src);
    DeleteFilesRequest(DeleteFilesRequest&& src);
    DeleteFilesRequest(const PlayFabDataDeleteFilesRequest& src);
    DeleteFilesRequest& operator=(const DeleteFilesRequest&) = delete;
    ~DeleteFilesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
    StdExtra::optional<int32_t> m_profileVersion;
};

struct DeleteFilesResponse : public PlayFabDataDeleteFilesResponse, public BaseModel, public ApiResult
{
    DeleteFilesResponse();
    DeleteFilesResponse(const DeleteFilesResponse& src);
    DeleteFilesResponse(DeleteFilesResponse&& src);
    DeleteFilesResponse(const PlayFabDataDeleteFilesResponse& src);
    DeleteFilesResponse& operator=(const DeleteFilesResponse&) = delete;
    ~DeleteFilesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
};

struct FinalizeFileUploadsRequest : public PlayFabDataFinalizeFileUploadsRequest, public BaseModel
{
    FinalizeFileUploadsRequest();
    FinalizeFileUploadsRequest(const FinalizeFileUploadsRequest& src);
    FinalizeFileUploadsRequest(FinalizeFileUploadsRequest&& src);
    FinalizeFileUploadsRequest(const PlayFabDataFinalizeFileUploadsRequest& src);
    FinalizeFileUploadsRequest& operator=(const FinalizeFileUploadsRequest&) = delete;
    ~FinalizeFileUploadsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
};

struct GetFileMetadata : public PlayFabDataGetFileMetadata, public SerializableModel
{
    GetFileMetadata();
    GetFileMetadata(const GetFileMetadata& src);
    GetFileMetadata(GetFileMetadata&& src);
    GetFileMetadata(const PlayFabDataGetFileMetadata& src);
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

struct FinalizeFileUploadsResponse : public PlayFabDataFinalizeFileUploadsResponse, public BaseModel, public ApiResult
{
    FinalizeFileUploadsResponse();
    FinalizeFileUploadsResponse(const FinalizeFileUploadsResponse& src);
    FinalizeFileUploadsResponse(FinalizeFileUploadsResponse&& src);
    FinalizeFileUploadsResponse(const PlayFabDataFinalizeFileUploadsResponse& src);
    FinalizeFileUploadsResponse& operator=(const FinalizeFileUploadsResponse&) = delete;
    ~FinalizeFileUploadsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    AssociativeArrayModel<PlayFabDataGetFileMetadataDictionaryEntry, GetFileMetadata> m_metadata;
};

struct GetFilesRequest : public PlayFabDataGetFilesRequest, public BaseModel
{
    GetFilesRequest();
    GetFilesRequest(const GetFilesRequest& src);
    GetFilesRequest(GetFilesRequest&& src);
    GetFilesRequest(const PlayFabDataGetFilesRequest& src);
    GetFilesRequest& operator=(const GetFilesRequest&) = delete;
    ~GetFilesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
};

struct GetFilesResponse : public PlayFabDataGetFilesResponse, public BaseModel, public ApiResult
{
    GetFilesResponse();
    GetFilesResponse(const GetFilesResponse& src);
    GetFilesResponse(GetFilesResponse&& src);
    GetFilesResponse(const PlayFabDataGetFilesResponse& src);
    GetFilesResponse& operator=(const GetFilesResponse&) = delete;
    ~GetFilesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    AssociativeArrayModel<PlayFabDataGetFileMetadataDictionaryEntry, GetFileMetadata> m_metadata;
};

struct GetObjectsRequest : public PlayFabDataGetObjectsRequest, public BaseModel
{
    GetObjectsRequest();
    GetObjectsRequest(const GetObjectsRequest& src);
    GetObjectsRequest(GetObjectsRequest&& src);
    GetObjectsRequest(const PlayFabDataGetObjectsRequest& src);
    GetObjectsRequest& operator=(const GetObjectsRequest&) = delete;
    ~GetObjectsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    StdExtra::optional<bool> m_escapeObject;
};

struct ObjectResult : public PlayFabDataObjectResult, public BaseModel, public ApiResult
{
    ObjectResult();
    ObjectResult(const ObjectResult& src);
    ObjectResult(ObjectResult&& src);
    ObjectResult(const PlayFabDataObjectResult& src);
    ObjectResult& operator=(const ObjectResult&) = delete;
    ~ObjectResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    String m_escapedDataObject;
    String m_objectName;
};

struct GetObjectsResponse : public PlayFabDataGetObjectsResponse, public BaseModel, public ApiResult
{
    GetObjectsResponse();
    GetObjectsResponse(const GetObjectsResponse& src);
    GetObjectsResponse(GetObjectsResponse&& src);
    GetObjectsResponse(const PlayFabDataGetObjectsResponse& src);
    GetObjectsResponse& operator=(const GetObjectsResponse&) = delete;
    ~GetObjectsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    AssociativeArrayModel<PlayFabDataObjectResultDictionaryEntry, ObjectResult> m_objects;
};

struct InitiateFileUploadMetadata : public PlayFabDataInitiateFileUploadMetadata, public SerializableModel
{
    InitiateFileUploadMetadata();
    InitiateFileUploadMetadata(const InitiateFileUploadMetadata& src);
    InitiateFileUploadMetadata(InitiateFileUploadMetadata&& src);
    InitiateFileUploadMetadata(const PlayFabDataInitiateFileUploadMetadata& src);
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

struct InitiateFileUploadsRequest : public PlayFabDataInitiateFileUploadsRequest, public BaseModel
{
    InitiateFileUploadsRequest();
    InitiateFileUploadsRequest(const InitiateFileUploadsRequest& src);
    InitiateFileUploadsRequest(InitiateFileUploadsRequest&& src);
    InitiateFileUploadsRequest(const PlayFabDataInitiateFileUploadsRequest& src);
    InitiateFileUploadsRequest& operator=(const InitiateFileUploadsRequest&) = delete;
    ~InitiateFileUploadsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<char, String> m_fileNames;
    StdExtra::optional<int32_t> m_profileVersion;
};

struct InitiateFileUploadsResponse : public PlayFabDataInitiateFileUploadsResponse, public BaseModel, public ApiResult
{
    InitiateFileUploadsResponse();
    InitiateFileUploadsResponse(const InitiateFileUploadsResponse& src);
    InitiateFileUploadsResponse(InitiateFileUploadsResponse&& src);
    InitiateFileUploadsResponse(const PlayFabDataInitiateFileUploadsResponse& src);
    InitiateFileUploadsResponse& operator=(const InitiateFileUploadsResponse&) = delete;
    ~InitiateFileUploadsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    PointerArrayModel<PlayFabDataInitiateFileUploadMetadata, InitiateFileUploadMetadata> m_uploadDetails;
};

struct SetObject : public PlayFabDataSetObject, public BaseModel
{
    SetObject();
    SetObject(const SetObject& src);
    SetObject(SetObject&& src);
    SetObject(const PlayFabDataSetObject& src);
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

struct SetObjectInfo : public PlayFabDataSetObjectInfo, public BaseModel
{
    SetObjectInfo();
    SetObjectInfo(const SetObjectInfo& src);
    SetObjectInfo(SetObjectInfo&& src);
    SetObjectInfo(const PlayFabDataSetObjectInfo& src);
    SetObjectInfo& operator=(const SetObjectInfo&) = delete;
    ~SetObjectInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_objectName;
    String m_operationReason;
    StdExtra::optional<PlayFabDataOperationTypes> m_setResult;
};

struct SetObjectsRequest : public PlayFabDataSetObjectsRequest, public BaseModel
{
    SetObjectsRequest();
    SetObjectsRequest(const SetObjectsRequest& src);
    SetObjectsRequest(SetObjectsRequest&& src);
    SetObjectsRequest(const PlayFabDataSetObjectsRequest& src);
    SetObjectsRequest& operator=(const SetObjectsRequest&) = delete;
    ~SetObjectsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    StdExtra::optional<int32_t> m_expectedProfileVersion;
    PointerArrayModel<PlayFabDataSetObject, SetObject> m_objects;
};

struct SetObjectsResponse : public PlayFabDataSetObjectsResponse, public BaseModel, public ApiResult
{
    SetObjectsResponse();
    SetObjectsResponse(const SetObjectsResponse& src);
    SetObjectsResponse(SetObjectsResponse&& src);
    SetObjectsResponse(const PlayFabDataSetObjectsResponse& src);
    SetObjectsResponse& operator=(const SetObjectsResponse&) = delete;
    ~SetObjectsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabDataSetObjectInfo, SetObjectInfo> m_setResults;
};

} // namespace DataModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabDataAbortFileUploadsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataAbortFileUploadsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabDataDeleteFilesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataDeleteFilesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabDataFinalizeFileUploadsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataGetFileMetadata& input);
template<> inline JsonValue ToJson<>(const PlayFabDataFinalizeFileUploadsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabDataGetFilesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataGetFilesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabDataGetObjectsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataObjectResult& input);
template<> inline JsonValue ToJson<>(const PlayFabDataGetObjectsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadMetadata& input);
template<> inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabDataSetObject& input);
template<> inline JsonValue ToJson<>(const PlayFabDataSetObjectInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabDataSetObjectsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabDataSetObjectsResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabDataOperationTypes>
{
    static constexpr PlayFabDataOperationTypes maxValue = PlayFabDataOperationTypes::None;
};

} // namespace PlayFab
