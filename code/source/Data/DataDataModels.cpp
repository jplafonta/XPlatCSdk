#include "stdafx.h"
#include "DataDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace DataModels
{

AbortFileUploadsRequest::AbortFileUploadsRequest() :
    PlayFabDataAbortFileUploadsRequest{}
{
}

AbortFileUploadsRequest::AbortFileUploadsRequest(const AbortFileUploadsRequest& src) :
    PlayFabDataAbortFileUploadsRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_fileNames{ src.m_fileNames },
    m_profileVersion{ src.m_profileVersion }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
    profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
}

AbortFileUploadsRequest::AbortFileUploadsRequest(AbortFileUploadsRequest&& src) :
    PlayFabDataAbortFileUploadsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_fileNames{ std::move(src.m_fileNames) },
    m_profileVersion{ std::move(src.m_profileVersion) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
    profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
}

AbortFileUploadsRequest::AbortFileUploadsRequest(const PlayFabDataAbortFileUploadsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AbortFileUploadsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", m_profileVersion, profileVersion);
}

JsonValue AbortFileUploadsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataAbortFileUploadsRequest>(*this);
}

AbortFileUploadsResponse::AbortFileUploadsResponse() :
    PlayFabDataAbortFileUploadsResponse{}
{
}

AbortFileUploadsResponse::AbortFileUploadsResponse(const AbortFileUploadsResponse& src) :
    PlayFabDataAbortFileUploadsResponse{ src },
    m_entity{ src.m_entity }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
}

AbortFileUploadsResponse::AbortFileUploadsResponse(AbortFileUploadsResponse&& src) :
    PlayFabDataAbortFileUploadsResponse{ src },
    m_entity{ std::move(src.m_entity) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
}

AbortFileUploadsResponse::AbortFileUploadsResponse(const PlayFabDataAbortFileUploadsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AbortFileUploadsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
}

JsonValue AbortFileUploadsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataAbortFileUploadsResponse>(*this);
}

DeleteFilesRequest::DeleteFilesRequest() :
    PlayFabDataDeleteFilesRequest{}
{
}

DeleteFilesRequest::DeleteFilesRequest(const DeleteFilesRequest& src) :
    PlayFabDataDeleteFilesRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_fileNames{ src.m_fileNames },
    m_profileVersion{ src.m_profileVersion }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
    profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
}

DeleteFilesRequest::DeleteFilesRequest(DeleteFilesRequest&& src) :
    PlayFabDataDeleteFilesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_fileNames{ std::move(src.m_fileNames) },
    m_profileVersion{ std::move(src.m_profileVersion) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
    profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
}

DeleteFilesRequest::DeleteFilesRequest(const PlayFabDataDeleteFilesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteFilesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", m_profileVersion, profileVersion);
}

JsonValue DeleteFilesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataDeleteFilesRequest>(*this);
}

DeleteFilesResponse::DeleteFilesResponse() :
    PlayFabDataDeleteFilesResponse{}
{
}

DeleteFilesResponse::DeleteFilesResponse(const DeleteFilesResponse& src) :
    PlayFabDataDeleteFilesResponse{ src },
    m_entity{ src.m_entity }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
}

DeleteFilesResponse::DeleteFilesResponse(DeleteFilesResponse&& src) :
    PlayFabDataDeleteFilesResponse{ src },
    m_entity{ std::move(src.m_entity) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
}

DeleteFilesResponse::DeleteFilesResponse(const PlayFabDataDeleteFilesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteFilesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
}

JsonValue DeleteFilesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataDeleteFilesResponse>(*this);
}

FinalizeFileUploadsRequest::FinalizeFileUploadsRequest() :
    PlayFabDataFinalizeFileUploadsRequest{}
{
}

FinalizeFileUploadsRequest::FinalizeFileUploadsRequest(const FinalizeFileUploadsRequest& src) :
    PlayFabDataFinalizeFileUploadsRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_fileNames{ src.m_fileNames }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
}

FinalizeFileUploadsRequest::FinalizeFileUploadsRequest(FinalizeFileUploadsRequest&& src) :
    PlayFabDataFinalizeFileUploadsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_fileNames{ std::move(src.m_fileNames) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
}

FinalizeFileUploadsRequest::FinalizeFileUploadsRequest(const PlayFabDataFinalizeFileUploadsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FinalizeFileUploadsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
}

JsonValue FinalizeFileUploadsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataFinalizeFileUploadsRequest>(*this);
}

GetFileMetadata::GetFileMetadata() :
    PlayFabDataGetFileMetadata{}
{
}

GetFileMetadata::GetFileMetadata(const GetFileMetadata& src) :
    PlayFabDataGetFileMetadata{ src },
    m_checksum{ src.m_checksum },
    m_downloadUrl{ src.m_downloadUrl },
    m_fileName{ src.m_fileName }
{
    checksum = m_checksum.empty() ? nullptr : m_checksum.data();
    downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetFileMetadata::GetFileMetadata(GetFileMetadata&& src) :
    PlayFabDataGetFileMetadata{ src },
    m_checksum{ std::move(src.m_checksum) },
    m_downloadUrl{ std::move(src.m_downloadUrl) },
    m_fileName{ std::move(src.m_fileName) }
{
    checksum = m_checksum.empty() ? nullptr : m_checksum.data();
    downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetFileMetadata::GetFileMetadata(const PlayFabDataGetFileMetadata& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFileMetadata::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Checksum", m_checksum, checksum);
    JsonUtils::ObjectGetMember(input, "DownloadUrl", m_downloadUrl, downloadUrl);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
    JsonUtils::ObjectGetMember(input, "LastModified", lastModified, true);
    JsonUtils::ObjectGetMember(input, "Size", size);
}

JsonValue GetFileMetadata::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataGetFileMetadata>(*this);
}

size_t GetFileMetadata::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabDataGetFileMetadata) };
    serializedSize += (m_checksum.size() + 1);
    serializedSize += (m_downloadUrl.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void GetFileMetadata::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabDataGetFileMetadata{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabDataGetFileMetadata);
    memcpy(stringBuffer, m_checksum.data(), m_checksum.size() + 1);
    serializedStruct->checksum = stringBuffer;
    stringBuffer += m_checksum.size() + 1;
    memcpy(stringBuffer, m_downloadUrl.data(), m_downloadUrl.size() + 1);
    serializedStruct->downloadUrl = stringBuffer;
    stringBuffer += m_downloadUrl.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

FinalizeFileUploadsResponse::FinalizeFileUploadsResponse() :
    PlayFabDataFinalizeFileUploadsResponse{}
{
}

FinalizeFileUploadsResponse::FinalizeFileUploadsResponse(const FinalizeFileUploadsResponse& src) :
    PlayFabDataFinalizeFileUploadsResponse{ src },
    m_entity{ src.m_entity },
    m_metadata{ src.m_metadata }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

FinalizeFileUploadsResponse::FinalizeFileUploadsResponse(FinalizeFileUploadsResponse&& src) :
    PlayFabDataFinalizeFileUploadsResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_metadata{ std::move(src.m_metadata) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

FinalizeFileUploadsResponse::FinalizeFileUploadsResponse(const PlayFabDataFinalizeFileUploadsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FinalizeFileUploadsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
}

JsonValue FinalizeFileUploadsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataFinalizeFileUploadsResponse>(*this);
}

GetFilesRequest::GetFilesRequest() :
    PlayFabDataGetFilesRequest{}
{
}

GetFilesRequest::GetFilesRequest(const GetFilesRequest& src) :
    PlayFabDataGetFilesRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
}

GetFilesRequest::GetFilesRequest(GetFilesRequest&& src) :
    PlayFabDataGetFilesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
}

GetFilesRequest::GetFilesRequest(const PlayFabDataGetFilesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFilesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue GetFilesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataGetFilesRequest>(*this);
}

GetFilesResponse::GetFilesResponse() :
    PlayFabDataGetFilesResponse{}
{
}

GetFilesResponse::GetFilesResponse(const GetFilesResponse& src) :
    PlayFabDataGetFilesResponse{ src },
    m_entity{ src.m_entity },
    m_metadata{ src.m_metadata }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

GetFilesResponse::GetFilesResponse(GetFilesResponse&& src) :
    PlayFabDataGetFilesResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_metadata{ std::move(src.m_metadata) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

GetFilesResponse::GetFilesResponse(const PlayFabDataGetFilesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFilesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
}

JsonValue GetFilesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataGetFilesResponse>(*this);
}

GetObjectsRequest::GetObjectsRequest() :
    PlayFabDataGetObjectsRequest{}
{
}

GetObjectsRequest::GetObjectsRequest(const GetObjectsRequest& src) :
    PlayFabDataGetObjectsRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_escapeObject{ src.m_escapeObject }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    escapeObject = m_escapeObject ? m_escapeObject.operator->() : nullptr;
}

GetObjectsRequest::GetObjectsRequest(GetObjectsRequest&& src) :
    PlayFabDataGetObjectsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_escapeObject{ std::move(src.m_escapeObject) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    escapeObject = m_escapeObject ? m_escapeObject.operator->() : nullptr;
}

GetObjectsRequest::GetObjectsRequest(const PlayFabDataGetObjectsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetObjectsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "EscapeObject", m_escapeObject, escapeObject);
}

JsonValue GetObjectsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataGetObjectsRequest>(*this);
}

ObjectResult::ObjectResult() :
    PlayFabDataObjectResult{}
{
}

ObjectResult::ObjectResult(const ObjectResult& src) :
    PlayFabDataObjectResult{ src },
    m_dataObject{ src.m_dataObject },
    m_escapedDataObject{ src.m_escapedDataObject },
    m_objectName{ src.m_objectName }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

ObjectResult::ObjectResult(ObjectResult&& src) :
    PlayFabDataObjectResult{ src },
    m_dataObject{ std::move(src.m_dataObject) },
    m_escapedDataObject{ std::move(src.m_escapedDataObject) },
    m_objectName{ std::move(src.m_objectName) }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

ObjectResult::ObjectResult(const PlayFabDataObjectResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ObjectResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
    JsonUtils::ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
    JsonUtils::ObjectGetMember(input, "ObjectName", m_objectName, objectName);
}

JsonValue ObjectResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataObjectResult>(*this);
}

GetObjectsResponse::GetObjectsResponse() :
    PlayFabDataGetObjectsResponse{}
{
}

GetObjectsResponse::GetObjectsResponse(const GetObjectsResponse& src) :
    PlayFabDataGetObjectsResponse{ src },
    m_entity{ src.m_entity },
    m_objects{ src.m_objects }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    objects = m_objects.Empty() ? nullptr : m_objects.Data();
}

GetObjectsResponse::GetObjectsResponse(GetObjectsResponse&& src) :
    PlayFabDataGetObjectsResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_objects{ std::move(src.m_objects) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    objects = m_objects.Empty() ? nullptr : m_objects.Data();
}

GetObjectsResponse::GetObjectsResponse(const PlayFabDataGetObjectsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetObjectsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Objects", m_objects, objects, objectsCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
}

JsonValue GetObjectsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataGetObjectsResponse>(*this);
}

InitiateFileUploadMetadata::InitiateFileUploadMetadata() :
    PlayFabDataInitiateFileUploadMetadata{}
{
}

InitiateFileUploadMetadata::InitiateFileUploadMetadata(const InitiateFileUploadMetadata& src) :
    PlayFabDataInitiateFileUploadMetadata{ src },
    m_fileName{ src.m_fileName },
    m_uploadUrl{ src.m_uploadUrl }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    uploadUrl = m_uploadUrl.empty() ? nullptr : m_uploadUrl.data();
}

InitiateFileUploadMetadata::InitiateFileUploadMetadata(InitiateFileUploadMetadata&& src) :
    PlayFabDataInitiateFileUploadMetadata{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_uploadUrl{ std::move(src.m_uploadUrl) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    uploadUrl = m_uploadUrl.empty() ? nullptr : m_uploadUrl.data();
}

InitiateFileUploadMetadata::InitiateFileUploadMetadata(const PlayFabDataInitiateFileUploadMetadata& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InitiateFileUploadMetadata::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
    JsonUtils::ObjectGetMember(input, "UploadUrl", m_uploadUrl, uploadUrl);
}

JsonValue InitiateFileUploadMetadata::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataInitiateFileUploadMetadata>(*this);
}

size_t InitiateFileUploadMetadata::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabDataInitiateFileUploadMetadata) };
    serializedSize += (m_fileName.size() + 1);
    serializedSize += (m_uploadUrl.size() + 1);
    return serializedSize;
}

void InitiateFileUploadMetadata::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabDataInitiateFileUploadMetadata{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabDataInitiateFileUploadMetadata);
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    memcpy(stringBuffer, m_uploadUrl.data(), m_uploadUrl.size() + 1);
    serializedStruct->uploadUrl = stringBuffer;
    stringBuffer += m_uploadUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

InitiateFileUploadsRequest::InitiateFileUploadsRequest() :
    PlayFabDataInitiateFileUploadsRequest{}
{
}

InitiateFileUploadsRequest::InitiateFileUploadsRequest(const InitiateFileUploadsRequest& src) :
    PlayFabDataInitiateFileUploadsRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_fileNames{ src.m_fileNames },
    m_profileVersion{ src.m_profileVersion }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
    profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
}

InitiateFileUploadsRequest::InitiateFileUploadsRequest(InitiateFileUploadsRequest&& src) :
    PlayFabDataInitiateFileUploadsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_fileNames{ std::move(src.m_fileNames) },
    m_profileVersion{ std::move(src.m_profileVersion) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
    profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
}

InitiateFileUploadsRequest::InitiateFileUploadsRequest(const PlayFabDataInitiateFileUploadsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InitiateFileUploadsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", m_profileVersion, profileVersion);
}

JsonValue InitiateFileUploadsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataInitiateFileUploadsRequest>(*this);
}

InitiateFileUploadsResponse::InitiateFileUploadsResponse() :
    PlayFabDataInitiateFileUploadsResponse{}
{
}

InitiateFileUploadsResponse::InitiateFileUploadsResponse(const InitiateFileUploadsResponse& src) :
    PlayFabDataInitiateFileUploadsResponse{ src },
    m_entity{ src.m_entity },
    m_uploadDetails{ src.m_uploadDetails }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    uploadDetails = m_uploadDetails.Empty() ? nullptr : m_uploadDetails.Data();
}

InitiateFileUploadsResponse::InitiateFileUploadsResponse(InitiateFileUploadsResponse&& src) :
    PlayFabDataInitiateFileUploadsResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_uploadDetails{ std::move(src.m_uploadDetails) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    uploadDetails = m_uploadDetails.Empty() ? nullptr : m_uploadDetails.Data();
}

InitiateFileUploadsResponse::InitiateFileUploadsResponse(const PlayFabDataInitiateFileUploadsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InitiateFileUploadsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "UploadDetails", m_uploadDetails, uploadDetails, uploadDetailsCount);
}

JsonValue InitiateFileUploadsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataInitiateFileUploadsResponse>(*this);
}

SetObject::SetObject() :
    PlayFabDataSetObject{}
{
}

SetObject::SetObject(const SetObject& src) :
    PlayFabDataSetObject{ src },
    m_dataObject{ src.m_dataObject },
    m_deleteObject{ src.m_deleteObject },
    m_escapedDataObject{ src.m_escapedDataObject },
    m_objectName{ src.m_objectName }
{
    dataObject.stringValue = m_dataObject.StringValue();
    deleteObject = m_deleteObject ? m_deleteObject.operator->() : nullptr;
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

SetObject::SetObject(SetObject&& src) :
    PlayFabDataSetObject{ src },
    m_dataObject{ std::move(src.m_dataObject) },
    m_deleteObject{ std::move(src.m_deleteObject) },
    m_escapedDataObject{ std::move(src.m_escapedDataObject) },
    m_objectName{ std::move(src.m_objectName) }
{
    dataObject.stringValue = m_dataObject.StringValue();
    deleteObject = m_deleteObject ? m_deleteObject.operator->() : nullptr;
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

SetObject::SetObject(const PlayFabDataSetObject& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetObject::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
    JsonUtils::ObjectGetMember(input, "DeleteObject", m_deleteObject, deleteObject);
    JsonUtils::ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
    JsonUtils::ObjectGetMember(input, "ObjectName", m_objectName, objectName);
}

JsonValue SetObject::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataSetObject>(*this);
}

SetObjectInfo::SetObjectInfo() :
    PlayFabDataSetObjectInfo{}
{
}

SetObjectInfo::SetObjectInfo(const SetObjectInfo& src) :
    PlayFabDataSetObjectInfo{ src },
    m_objectName{ src.m_objectName },
    m_operationReason{ src.m_operationReason },
    m_setResult{ src.m_setResult }
{
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

SetObjectInfo::SetObjectInfo(SetObjectInfo&& src) :
    PlayFabDataSetObjectInfo{ src },
    m_objectName{ std::move(src.m_objectName) },
    m_operationReason{ std::move(src.m_operationReason) },
    m_setResult{ std::move(src.m_setResult) }
{
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

SetObjectInfo::SetObjectInfo(const PlayFabDataSetObjectInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetObjectInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ObjectName", m_objectName, objectName);
    JsonUtils::ObjectGetMember(input, "OperationReason", m_operationReason, operationReason);
    JsonUtils::ObjectGetMember(input, "SetResult", m_setResult, setResult);
}

JsonValue SetObjectInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataSetObjectInfo>(*this);
}

SetObjectsRequest::SetObjectsRequest() :
    PlayFabDataSetObjectsRequest{}
{
}

SetObjectsRequest::SetObjectsRequest(const SetObjectsRequest& src) :
    PlayFabDataSetObjectsRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_expectedProfileVersion{ src.m_expectedProfileVersion },
    m_objects{ src.m_objects }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    objects = m_objects.Empty() ? nullptr : m_objects.Data();
}

SetObjectsRequest::SetObjectsRequest(SetObjectsRequest&& src) :
    PlayFabDataSetObjectsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_expectedProfileVersion{ std::move(src.m_expectedProfileVersion) },
    m_objects{ std::move(src.m_objects) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    objects = m_objects.Empty() ? nullptr : m_objects.Data();
}

SetObjectsRequest::SetObjectsRequest(const PlayFabDataSetObjectsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetObjectsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "ExpectedProfileVersion", m_expectedProfileVersion, expectedProfileVersion);
    JsonUtils::ObjectGetMember(input, "Objects", m_objects, objects, objectsCount);
}

JsonValue SetObjectsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataSetObjectsRequest>(*this);
}

SetObjectsResponse::SetObjectsResponse() :
    PlayFabDataSetObjectsResponse{}
{
}

SetObjectsResponse::SetObjectsResponse(const SetObjectsResponse& src) :
    PlayFabDataSetObjectsResponse{ src },
    m_setResults{ src.m_setResults }
{
    setResults = m_setResults.Empty() ? nullptr : m_setResults.Data();
}

SetObjectsResponse::SetObjectsResponse(SetObjectsResponse&& src) :
    PlayFabDataSetObjectsResponse{ src },
    m_setResults{ std::move(src.m_setResults) }
{
    setResults = m_setResults.Empty() ? nullptr : m_setResults.Data();
}

SetObjectsResponse::SetObjectsResponse(const PlayFabDataSetObjectsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetObjectsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "SetResults", m_setResults, setResults, setResultsCount);
}

JsonValue SetObjectsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabDataSetObjectsResponse>(*this);
}

} // namespace DataModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabDataAbortFileUploadsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FileNames", input.fileNames, input.fileNamesCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataAbortFileUploadsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataDeleteFilesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FileNames", input.fileNames, input.fileNamesCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataDeleteFilesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataFinalizeFileUploadsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FileNames", input.fileNames, input.fileNamesCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataGetFileMetadata& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Checksum", input.checksum);
    JsonUtils::ObjectAddMember(output, "DownloadUrl", input.downloadUrl);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
    JsonUtils::ObjectAddMember(output, "Size", input.size);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataFinalizeFileUploadsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataGetFilesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataGetFilesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataGetObjectsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataObjectResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
    JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
    JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataGetObjectsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Objects", input.objects, input.objectsCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadMetadata& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "UploadUrl", input.uploadUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FileNames", input.fileNames, input.fileNamesCount);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "UploadDetails", input.uploadDetails, input.uploadDetailsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataSetObject& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
    JsonUtils::ObjectAddMember(output, "DeleteObject", input.deleteObject);
    JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
    JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataSetObjectInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
    JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
    JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataSetObjectsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ExpectedProfileVersion", input.expectedProfileVersion);
    JsonUtils::ObjectAddMember(output, "Objects", input.objects, input.objectsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabDataSetObjectsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "SetResults", input.setResults, input.setResultsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
