#pragma once

#include <playfab/PFGameServerDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace GameServerModels
{

// GameServer Classes
struct AddServerBuildRequest : public PFGameServerAddServerBuildRequest, public BaseModel
{
    AddServerBuildRequest();
    AddServerBuildRequest(const AddServerBuildRequest& src);
    AddServerBuildRequest(AddServerBuildRequest&& src);
    AddServerBuildRequest(const PFGameServerAddServerBuildRequest& src);
    AddServerBuildRequest& operator=(const AddServerBuildRequest&) = delete;
    ~AddServerBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PFRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_executablePath;
};

struct AddServerBuildResult : public PFGameServerAddServerBuildResult, public BaseModel, public ApiResult
{
    AddServerBuildResult();
    AddServerBuildResult(const AddServerBuildResult& src);
    AddServerBuildResult(AddServerBuildResult&& src);
    AddServerBuildResult(const PFGameServerAddServerBuildResult& src);
    AddServerBuildResult& operator=(const AddServerBuildResult&) = delete;
    ~AddServerBuildResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PFRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    String m_executablePath;
    StdExtra::optional<PFGameServerGameBuildStatus> m_status;
    String m_titleId;
};

struct GetServerBuildInfoRequest : public PFGameServerGetServerBuildInfoRequest, public SerializableModel
{
    GetServerBuildInfoRequest();
    GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src);
    GetServerBuildInfoRequest(GetServerBuildInfoRequest&& src);
    GetServerBuildInfoRequest(const PFGameServerGetServerBuildInfoRequest& src);
    GetServerBuildInfoRequest& operator=(const GetServerBuildInfoRequest&) = delete;
    ~GetServerBuildInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildId;
};

struct GetServerBuildInfoResult : public PFGameServerGetServerBuildInfoResult, public BaseModel, public ApiResult
{
    GetServerBuildInfoResult();
    GetServerBuildInfoResult(const GetServerBuildInfoResult& src);
    GetServerBuildInfoResult(GetServerBuildInfoResult&& src);
    GetServerBuildInfoResult(const PFGameServerGetServerBuildInfoResult& src);
    GetServerBuildInfoResult& operator=(const GetServerBuildInfoResult&) = delete;
    ~GetServerBuildInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PFRegion> m_activeRegions;
    String m_buildId;
    String m_comment;
    String m_errorMessage;
    StdExtra::optional<PFGameServerGameBuildStatus> m_status;
    String m_titleId;
};

struct GetServerBuildUploadURLRequest : public PFGameServerGetServerBuildUploadURLRequest, public SerializableModel
{
    GetServerBuildUploadURLRequest();
    GetServerBuildUploadURLRequest(const GetServerBuildUploadURLRequest& src);
    GetServerBuildUploadURLRequest(GetServerBuildUploadURLRequest&& src);
    GetServerBuildUploadURLRequest(const PFGameServerGetServerBuildUploadURLRequest& src);
    GetServerBuildUploadURLRequest& operator=(const GetServerBuildUploadURLRequest&) = delete;
    ~GetServerBuildUploadURLRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildId;
};

struct GetServerBuildUploadURLResult : public PFGameServerGetServerBuildUploadURLResult, public SerializableModel, public ApiResult
{
    GetServerBuildUploadURLResult();
    GetServerBuildUploadURLResult(const GetServerBuildUploadURLResult& src);
    GetServerBuildUploadURLResult(GetServerBuildUploadURLResult&& src);
    GetServerBuildUploadURLResult(const PFGameServerGetServerBuildUploadURLResult& src);
    GetServerBuildUploadURLResult& operator=(const GetServerBuildUploadURLResult&) = delete;
    ~GetServerBuildUploadURLResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

struct ListBuildsResult : public PFGameServerListBuildsResult, public BaseModel, public ApiResult
{
    ListBuildsResult();
    ListBuildsResult(const ListBuildsResult& src);
    ListBuildsResult(ListBuildsResult&& src);
    ListBuildsResult(const PFGameServerListBuildsResult& src);
    ListBuildsResult& operator=(const ListBuildsResult&) = delete;
    ~ListBuildsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGameServerGetServerBuildInfoResult, GetServerBuildInfoResult> m_builds;
};

struct ModifyServerBuildRequest : public PFGameServerModifyServerBuildRequest, public BaseModel
{
    ModifyServerBuildRequest();
    ModifyServerBuildRequest(const ModifyServerBuildRequest& src);
    ModifyServerBuildRequest(ModifyServerBuildRequest&& src);
    ModifyServerBuildRequest(const PFGameServerModifyServerBuildRequest& src);
    ModifyServerBuildRequest& operator=(const ModifyServerBuildRequest&) = delete;
    ~ModifyServerBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PFRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_executablePath;
    StdExtra::optional<time_t> m_timestamp;
};

struct ModifyServerBuildResult : public PFGameServerModifyServerBuildResult, public BaseModel, public ApiResult
{
    ModifyServerBuildResult();
    ModifyServerBuildResult(const ModifyServerBuildResult& src);
    ModifyServerBuildResult(ModifyServerBuildResult&& src);
    ModifyServerBuildResult(const PFGameServerModifyServerBuildResult& src);
    ModifyServerBuildResult& operator=(const ModifyServerBuildResult&) = delete;
    ~ModifyServerBuildResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PFRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    String m_executablePath;
    StdExtra::optional<PFGameServerGameBuildStatus> m_status;
    String m_titleId;
};

struct RemoveServerBuildRequest : public PFGameServerRemoveServerBuildRequest, public SerializableModel
{
    RemoveServerBuildRequest();
    RemoveServerBuildRequest(const RemoveServerBuildRequest& src);
    RemoveServerBuildRequest(RemoveServerBuildRequest&& src);
    RemoveServerBuildRequest(const PFGameServerRemoveServerBuildRequest& src);
    RemoveServerBuildRequest& operator=(const RemoveServerBuildRequest&) = delete;
    ~RemoveServerBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildId;
};

} // namespace GameServerModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFGameServerAddServerBuildRequest& input);
template<> inline JsonValue ToJson<>(const PFGameServerAddServerBuildResult& input);
template<> inline JsonValue ToJson<>(const PFGameServerGetServerBuildInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFGameServerGetServerBuildInfoResult& input);
template<> inline JsonValue ToJson<>(const PFGameServerGetServerBuildUploadURLRequest& input);
template<> inline JsonValue ToJson<>(const PFGameServerGetServerBuildUploadURLResult& input);
template<> inline JsonValue ToJson<>(const PFGameServerListBuildsResult& input);
template<> inline JsonValue ToJson<>(const PFGameServerModifyServerBuildRequest& input);
template<> inline JsonValue ToJson<>(const PFGameServerModifyServerBuildResult& input);
template<> inline JsonValue ToJson<>(const PFGameServerRemoveServerBuildRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
