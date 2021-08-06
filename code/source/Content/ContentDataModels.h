#pragma once

#include <playfab/PFContentDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ContentModels
{

// Content Classes
struct DeleteContentRequest : public PFContentDeleteContentRequest, public SerializableModel
{
    DeleteContentRequest();
    DeleteContentRequest(const DeleteContentRequest& src);
    DeleteContentRequest(DeleteContentRequest&& src);
    DeleteContentRequest(const PFContentDeleteContentRequest& src);
    DeleteContentRequest& operator=(const DeleteContentRequest&) = delete;
    ~DeleteContentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
};

struct GetContentListRequest : public PFContentGetContentListRequest, public SerializableModel
{
    GetContentListRequest();
    GetContentListRequest(const GetContentListRequest& src);
    GetContentListRequest(GetContentListRequest&& src);
    GetContentListRequest(const PFContentGetContentListRequest& src);
    GetContentListRequest& operator=(const GetContentListRequest&) = delete;
    ~GetContentListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_prefix;
};

struct ContentInfo : public PFContentContentInfo, public SerializableModel
{
    ContentInfo();
    ContentInfo(const ContentInfo& src);
    ContentInfo(ContentInfo&& src);
    ContentInfo(const PFContentContentInfo& src);
    ContentInfo& operator=(const ContentInfo&) = delete;
    ~ContentInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
};

struct GetContentListResult : public PFContentGetContentListResult, public BaseModel, public ApiResult
{
    GetContentListResult();
    GetContentListResult(const GetContentListResult& src);
    GetContentListResult(GetContentListResult&& src);
    GetContentListResult(const PFContentGetContentListResult& src);
    GetContentListResult& operator=(const GetContentListResult&) = delete;
    ~GetContentListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFContentContentInfo, ContentInfo> m_contents;
};

struct GetContentUploadUrlRequest : public PFContentGetContentUploadUrlRequest, public SerializableModel
{
    GetContentUploadUrlRequest();
    GetContentUploadUrlRequest(const GetContentUploadUrlRequest& src);
    GetContentUploadUrlRequest(GetContentUploadUrlRequest&& src);
    GetContentUploadUrlRequest(const PFContentGetContentUploadUrlRequest& src);
    GetContentUploadUrlRequest& operator=(const GetContentUploadUrlRequest&) = delete;
    ~GetContentUploadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_contentType;
    String m_key;
};

struct GetContentUploadUrlResult : public PFContentGetContentUploadUrlResult, public SerializableModel, public ApiResult
{
    GetContentUploadUrlResult();
    GetContentUploadUrlResult(const GetContentUploadUrlResult& src);
    GetContentUploadUrlResult(GetContentUploadUrlResult&& src);
    GetContentUploadUrlResult(const PFContentGetContentUploadUrlResult& src);
    GetContentUploadUrlResult& operator=(const GetContentUploadUrlResult&) = delete;
    ~GetContentUploadUrlResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

struct GetContentDownloadUrlRequest : public PFContentGetContentDownloadUrlRequest, public BaseModel
{
    GetContentDownloadUrlRequest();
    GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src);
    GetContentDownloadUrlRequest(GetContentDownloadUrlRequest&& src);
    GetContentDownloadUrlRequest(const PFContentGetContentDownloadUrlRequest& src);
    GetContentDownloadUrlRequest& operator=(const GetContentDownloadUrlRequest&) = delete;
    ~GetContentDownloadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_httpMethod;
    String m_key;
    StdExtra::optional<bool> m_thruCDN;
};

struct GetContentDownloadUrlResult : public PFContentGetContentDownloadUrlResult, public SerializableModel, public ApiResult
{
    GetContentDownloadUrlResult();
    GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src);
    GetContentDownloadUrlResult(GetContentDownloadUrlResult&& src);
    GetContentDownloadUrlResult(const PFContentGetContentDownloadUrlResult& src);
    GetContentDownloadUrlResult& operator=(const GetContentDownloadUrlResult&) = delete;
    ~GetContentDownloadUrlResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

} // namespace ContentModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFContentDeleteContentRequest& input);
template<> inline JsonValue ToJson<>(const PFContentGetContentListRequest& input);
template<> inline JsonValue ToJson<>(const PFContentContentInfo& input);
template<> inline JsonValue ToJson<>(const PFContentGetContentListResult& input);
template<> inline JsonValue ToJson<>(const PFContentGetContentUploadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PFContentGetContentUploadUrlResult& input);
template<> inline JsonValue ToJson<>(const PFContentGetContentDownloadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PFContentGetContentDownloadUrlResult& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
