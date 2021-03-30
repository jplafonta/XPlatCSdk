#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabDataDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabDataEntityKey& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataAbortFileUploadsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataDeleteFilesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataFinalizeFileUploadsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataGetFilesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataGetFilesResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataGetObjectsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataObjectResult& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
            JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
            JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataGetObjectsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Objects", input.objects, input.objectsCount);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadMetadata& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            JsonUtils::ObjectAddMember(output, "UploadUrl", input.uploadUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataInitiateFileUploadsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "UploadDetails", input.uploadDetails, input.uploadDetailsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataSetObject& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
            JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
            JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabDataSetObjectsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "SetResults", input.setResults, input.setResultsCount);
            return output;
        }

    }

    namespace DataModels
    {
        // Data Classes
        struct EntityKey : public PlayFabDataEntityKey, public BaseModel
        {
            EntityKey() : PlayFabDataEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabDataEntityKey{ src },
                m_id{ src.m_id },
                m_type{ src.m_type }
            {

                id = m_id.empty() ? nullptr : m_id.data();
                type = m_type.empty() ? nullptr : m_type.data();
            }

            ~EntityKey() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct AbortFileUploadsRequest : public PlayFabDataAbortFileUploadsRequest, public BaseRequest
        {
            AbortFileUploadsRequest() : PlayFabDataAbortFileUploadsRequest{}
            {
            }

            AbortFileUploadsRequest(const AbortFileUploadsRequest& src) :
                PlayFabDataAbortFileUploadsRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_fileNames{ src.m_fileNames },
                m_profileVersion{ src.m_profileVersion }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
                fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
                profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
            }

            ~AbortFileUploadsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", m_profileVersion, profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataAbortFileUploadsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            PointerArray<const char, String> m_fileNames;
            StdExtra::optional<int32_t> m_profileVersion;
        };

        struct AbortFileUploadsResponse : public PlayFabDataAbortFileUploadsResponse, public BaseResult
        {
            AbortFileUploadsResponse() : PlayFabDataAbortFileUploadsResponse{}
            {
            }

            AbortFileUploadsResponse(const AbortFileUploadsResponse& src) :
                PlayFabDataAbortFileUploadsResponse{ src },
                m_entity{ src.m_entity }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~AbortFileUploadsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataAbortFileUploadsResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;

        };

        struct DeleteFilesRequest : public PlayFabDataDeleteFilesRequest, public BaseRequest
        {
            DeleteFilesRequest() : PlayFabDataDeleteFilesRequest{}
            {
            }

            DeleteFilesRequest(const DeleteFilesRequest& src) :
                PlayFabDataDeleteFilesRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_fileNames{ src.m_fileNames },
                m_profileVersion{ src.m_profileVersion }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
                fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
                profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
            }

            ~DeleteFilesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", m_profileVersion, profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataDeleteFilesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            PointerArray<const char, String> m_fileNames;
            StdExtra::optional<int32_t> m_profileVersion;
        };

        struct DeleteFilesResponse : public PlayFabDataDeleteFilesResponse, public BaseResult
        {
            DeleteFilesResponse() : PlayFabDataDeleteFilesResponse{}
            {
            }

            DeleteFilesResponse(const DeleteFilesResponse& src) :
                PlayFabDataDeleteFilesResponse{ src },
                m_entity{ src.m_entity }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~DeleteFilesResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataDeleteFilesResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;

        };

        struct FinalizeFileUploadsRequest : public PlayFabDataFinalizeFileUploadsRequest, public BaseRequest
        {
            FinalizeFileUploadsRequest() : PlayFabDataFinalizeFileUploadsRequest{}
            {
            }

            FinalizeFileUploadsRequest(const FinalizeFileUploadsRequest& src) :
                PlayFabDataFinalizeFileUploadsRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_fileNames{ src.m_fileNames }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
                fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
            }

            ~FinalizeFileUploadsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataFinalizeFileUploadsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            PointerArray<const char, String> m_fileNames;

        };

        struct GetFileMetadata : public PlayFabDataGetFileMetadata, public BaseModel
        {
            GetFileMetadata() : PlayFabDataGetFileMetadata{}
            {
            }

            GetFileMetadata(const GetFileMetadata& src) :
                PlayFabDataGetFileMetadata{ src },
                m_checksum{ src.m_checksum },
                m_downloadUrl{ src.m_downloadUrl },
                m_fileName{ src.m_fileName }
            {

                checksum = m_checksum.empty() ? nullptr : m_checksum.data();
                downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
            }

            ~GetFileMetadata() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Checksum", m_checksum, checksum);
                JsonUtils:: ObjectGetMember(input, "DownloadUrl", m_downloadUrl, downloadUrl);
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
                JsonUtils:: ObjectGetMember(input, "LastModified", lastModified, true);
                JsonUtils:: ObjectGetMember(input, "Size", size);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataGetFileMetadata>(*this);
            }

        private:
            String m_checksum;
            String m_downloadUrl;
            String m_fileName;


        };

        struct FinalizeFileUploadsResponse : public PlayFabDataFinalizeFileUploadsResponse, public BaseResult
        {
            FinalizeFileUploadsResponse() : PlayFabDataFinalizeFileUploadsResponse{}
            {
            }

            FinalizeFileUploadsResponse(const FinalizeFileUploadsResponse& src) :
                PlayFabDataFinalizeFileUploadsResponse{ src },
                m_entity{ src.m_entity },
                m_metadata{ src.m_metadata }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
            }

            ~FinalizeFileUploadsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataFinalizeFileUploadsResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            AssociativeArray<PlayFabDataGetFileMetadataDictionaryEntry, GetFileMetadata> m_metadata;

        };

        struct GetFilesRequest : public PlayFabDataGetFilesRequest, public BaseRequest
        {
            GetFilesRequest() : PlayFabDataGetFilesRequest{}
            {
            }

            GetFilesRequest(const GetFilesRequest& src) :
                PlayFabDataGetFilesRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
            }

            ~GetFilesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataGetFilesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
        };

        struct GetFilesResponse : public PlayFabDataGetFilesResponse, public BaseResult
        {
            GetFilesResponse() : PlayFabDataGetFilesResponse{}
            {
            }

            GetFilesResponse(const GetFilesResponse& src) :
                PlayFabDataGetFilesResponse{ src },
                m_entity{ src.m_entity },
                m_metadata{ src.m_metadata }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
            }

            ~GetFilesResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataGetFilesResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            AssociativeArray<PlayFabDataGetFileMetadataDictionaryEntry, GetFileMetadata> m_metadata;

        };

        struct GetObjectsRequest : public PlayFabDataGetObjectsRequest, public BaseRequest
        {
            GetObjectsRequest() : PlayFabDataGetObjectsRequest{}
            {
            }

            GetObjectsRequest(const GetObjectsRequest& src) :
                PlayFabDataGetObjectsRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_escapeObject{ src.m_escapeObject }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
                escapeObject = m_escapeObject ? m_escapeObject.operator->() : nullptr;
            }

            ~GetObjectsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "EscapeObject", m_escapeObject, escapeObject);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataGetObjectsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            StdExtra::optional<bool> m_escapeObject;
        };

        struct ObjectResult : public PlayFabDataObjectResult, public BaseResult
        {
            ObjectResult() : PlayFabDataObjectResult{}
            {
            }

            ObjectResult(const ObjectResult& src) :
                PlayFabDataObjectResult{ src },
                m_dataObject{ src.m_dataObject },
                m_escapedDataObject{ src.m_escapedDataObject },
                m_objectName{ src.m_objectName }
            {

                dataObject.stringValue = m_dataObject.StringValue();
                escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
                objectName = m_objectName.empty() ? nullptr : m_objectName.data();
            }

            ~ObjectResult() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
                JsonUtils:: ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
                JsonUtils:: ObjectGetMember(input, "ObjectName", m_objectName, objectName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataObjectResult>(*this);
            }

        private:
            JsonObject m_dataObject;
            String m_escapedDataObject;
            String m_objectName;
        };

        struct GetObjectsResponse : public PlayFabDataGetObjectsResponse, public BaseResult
        {
            GetObjectsResponse() : PlayFabDataGetObjectsResponse{}
            {
            }

            GetObjectsResponse(const GetObjectsResponse& src) :
                PlayFabDataGetObjectsResponse{ src },
                m_entity{ src.m_entity },
                m_objects{ src.m_objects }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                objects = m_objects.Empty() ? nullptr : m_objects.Data();
            }

            ~GetObjectsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Objects", m_objects, objects, objectsCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataGetObjectsResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            AssociativeArray<PlayFabDataObjectResultDictionaryEntry, ObjectResult> m_objects;

        };

        struct InitiateFileUploadMetadata : public PlayFabDataInitiateFileUploadMetadata, public BaseModel
        {
            InitiateFileUploadMetadata() : PlayFabDataInitiateFileUploadMetadata{}
            {
            }

            InitiateFileUploadMetadata(const InitiateFileUploadMetadata& src) :
                PlayFabDataInitiateFileUploadMetadata{ src },
                m_fileName{ src.m_fileName },
                m_uploadUrl{ src.m_uploadUrl }
            {

                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
                uploadUrl = m_uploadUrl.empty() ? nullptr : m_uploadUrl.data();
            }

            ~InitiateFileUploadMetadata() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
                JsonUtils:: ObjectGetMember(input, "UploadUrl", m_uploadUrl, uploadUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataInitiateFileUploadMetadata>(*this);
            }

        private:
            String m_fileName;
            String m_uploadUrl;
        };

        struct InitiateFileUploadsRequest : public PlayFabDataInitiateFileUploadsRequest, public BaseRequest
        {
            InitiateFileUploadsRequest() : PlayFabDataInitiateFileUploadsRequest{}
            {
            }

            InitiateFileUploadsRequest(const InitiateFileUploadsRequest& src) :
                PlayFabDataInitiateFileUploadsRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_fileNames{ src.m_fileNames },
                m_profileVersion{ src.m_profileVersion }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
                fileNames = m_fileNames.Empty() ? nullptr : m_fileNames.Data();
                profileVersion = m_profileVersion ? m_profileVersion.operator->() : nullptr;
            }

            ~InitiateFileUploadsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FileNames", m_fileNames, fileNames, fileNamesCount);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", m_profileVersion, profileVersion);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataInitiateFileUploadsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            PointerArray<const char, String> m_fileNames;
            StdExtra::optional<int32_t> m_profileVersion;
        };

        struct InitiateFileUploadsResponse : public PlayFabDataInitiateFileUploadsResponse, public BaseResult
        {
            InitiateFileUploadsResponse() : PlayFabDataInitiateFileUploadsResponse{}
            {
            }

            InitiateFileUploadsResponse(const InitiateFileUploadsResponse& src) :
                PlayFabDataInitiateFileUploadsResponse{ src },
                m_entity{ src.m_entity },
                m_uploadDetails{ src.m_uploadDetails }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                uploadDetails = m_uploadDetails.Empty() ? nullptr : m_uploadDetails.Data();
            }

            ~InitiateFileUploadsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "UploadDetails", m_uploadDetails, uploadDetails, uploadDetailsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataInitiateFileUploadsResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;

            PointerArray<PlayFabDataInitiateFileUploadMetadata, InitiateFileUploadMetadata> m_uploadDetails;
        };

        struct SetObject : public PlayFabDataSetObject, public BaseModel
        {
            SetObject() : PlayFabDataSetObject{}
            {
            }

            SetObject(const SetObject& src) :
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

            ~SetObject() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
                JsonUtils:: ObjectGetMember(input, "DeleteObject", m_deleteObject, deleteObject);
                JsonUtils:: ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
                JsonUtils:: ObjectGetMember(input, "ObjectName", m_objectName, objectName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataSetObject>(*this);
            }

        private:
            JsonObject m_dataObject;
            StdExtra::optional<bool> m_deleteObject;
            String m_escapedDataObject;
            String m_objectName;
        };

        struct SetObjectInfo : public PlayFabDataSetObjectInfo, public BaseModel
        {
            SetObjectInfo() : PlayFabDataSetObjectInfo{}
            {
            }

            SetObjectInfo(const SetObjectInfo& src) :
                PlayFabDataSetObjectInfo{ src },
                m_objectName{ src.m_objectName },
                m_operationReason{ src.m_operationReason },
                m_setResult{ src.m_setResult }
            {

                objectName = m_objectName.empty() ? nullptr : m_objectName.data();
                operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
                setResult = m_setResult ? m_setResult.operator->() : nullptr;
            }

            ~SetObjectInfo() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ObjectName", m_objectName, objectName);
                JsonUtils:: ObjectGetMember(input, "OperationReason", m_operationReason, operationReason);
                JsonUtils:: ObjectGetMember(input, "SetResult", m_setResult, setResult);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataSetObjectInfo>(*this);
            }

        private:
            String m_objectName;
            String m_operationReason;
            StdExtra::optional<PlayFabDataOperationTypes> m_setResult;
        };

        struct SetObjectsRequest : public PlayFabDataSetObjectsRequest, public BaseRequest
        {
            SetObjectsRequest() : PlayFabDataSetObjectsRequest{}
            {
            }

            SetObjectsRequest(const SetObjectsRequest& src) :
                PlayFabDataSetObjectsRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_expectedProfileVersion{ src.m_expectedProfileVersion },
                m_objects{ src.m_objects }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabDataEntityKey*)&m_entity;
                expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
                objects = m_objects.Empty() ? nullptr : m_objects.Data();
            }

            ~SetObjectsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "ExpectedProfileVersion", m_expectedProfileVersion, expectedProfileVersion);
                JsonUtils:: ObjectGetMember(input, "Objects", m_objects, objects, objectsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataSetObjectsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            StdExtra::optional<int32_t> m_expectedProfileVersion;
            PointerArray<PlayFabDataSetObject, SetObject> m_objects;
        };

        struct SetObjectsResponse : public PlayFabDataSetObjectsResponse, public BaseResult
        {
            SetObjectsResponse() : PlayFabDataSetObjectsResponse{}
            {
            }

            SetObjectsResponse(const SetObjectsResponse& src) :
                PlayFabDataSetObjectsResponse{ src },
                m_setResults{ src.m_setResults }
            {

                setResults = m_setResults.Empty() ? nullptr : m_setResults.Data();
            }

            ~SetObjectsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "SetResults", m_setResults, setResults, setResultsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabDataSetObjectsResponse>(*this);
            }

        private:

            PointerArray<PlayFabDataSetObjectInfo, SetObjectInfo> m_setResults;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabDataOperationTypes>
    {
        static constexpr PlayFabDataOperationTypes maxValue = PlayFabDataOperationTypes::None;
    };

}

#endif
