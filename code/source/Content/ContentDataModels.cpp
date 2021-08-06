#include "stdafx.h"
#include "ContentDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ContentModels
{

DeleteContentRequest::DeleteContentRequest() :
    PFContentDeleteContentRequest{}
{
}

DeleteContentRequest::DeleteContentRequest(const DeleteContentRequest& src) :
    PFContentDeleteContentRequest{ src },
    m_key{ src.m_key }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

DeleteContentRequest::DeleteContentRequest(DeleteContentRequest&& src) :
    PFContentDeleteContentRequest{ src },
    m_key{ std::move(src.m_key) }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

DeleteContentRequest::DeleteContentRequest(const PFContentDeleteContentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteContentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
}

JsonValue DeleteContentRequest::ToJson() const
{
    return JsonUtils::ToJson<PFContentDeleteContentRequest>(*this);
}

size_t DeleteContentRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFContentDeleteContentRequest) };
    serializedSize += (m_key.size() + 1);
    return serializedSize;
}

void DeleteContentRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFContentDeleteContentRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFContentDeleteContentRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetContentListRequest::GetContentListRequest() :
    PFContentGetContentListRequest{}
{
}

GetContentListRequest::GetContentListRequest(const GetContentListRequest& src) :
    PFContentGetContentListRequest{ src },
    m_prefix{ src.m_prefix }
{
    prefix = m_prefix.empty() ? nullptr : m_prefix.data();
}

GetContentListRequest::GetContentListRequest(GetContentListRequest&& src) :
    PFContentGetContentListRequest{ src },
    m_prefix{ std::move(src.m_prefix) }
{
    prefix = m_prefix.empty() ? nullptr : m_prefix.data();
}

GetContentListRequest::GetContentListRequest(const PFContentGetContentListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Prefix", m_prefix, prefix);
}

JsonValue GetContentListRequest::ToJson() const
{
    return JsonUtils::ToJson<PFContentGetContentListRequest>(*this);
}

size_t GetContentListRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFContentGetContentListRequest) };
    serializedSize += (m_prefix.size() + 1);
    return serializedSize;
}

void GetContentListRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFContentGetContentListRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFContentGetContentListRequest);
    memcpy(stringBuffer, m_prefix.data(), m_prefix.size() + 1);
    serializedStruct->prefix = stringBuffer;
    stringBuffer += m_prefix.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ContentInfo::ContentInfo() :
    PFContentContentInfo{}
{
}

ContentInfo::ContentInfo(const ContentInfo& src) :
    PFContentContentInfo{ src },
    m_key{ src.m_key }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

ContentInfo::ContentInfo(ContentInfo&& src) :
    PFContentContentInfo{ src },
    m_key{ std::move(src.m_key) }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

ContentInfo::ContentInfo(const PFContentContentInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContentInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "LastModified", lastModified, true);
    JsonUtils::ObjectGetMember(input, "Size", size);
}

JsonValue ContentInfo::ToJson() const
{
    return JsonUtils::ToJson<PFContentContentInfo>(*this);
}

size_t ContentInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFContentContentInfo) };
    serializedSize += (m_key.size() + 1);
    return serializedSize;
}

void ContentInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFContentContentInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFContentContentInfo);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetContentListResult::GetContentListResult() :
    PFContentGetContentListResult{}
{
}

GetContentListResult::GetContentListResult(const GetContentListResult& src) :
    PFContentGetContentListResult{ src },
    m_contents{ src.m_contents }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
}

GetContentListResult::GetContentListResult(GetContentListResult&& src) :
    PFContentGetContentListResult{ src },
    m_contents{ std::move(src.m_contents) }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
}

GetContentListResult::GetContentListResult(const PFContentGetContentListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Contents", m_contents, contents, contentsCount);
    JsonUtils::ObjectGetMember(input, "ItemCount", itemCount);
    JsonUtils::ObjectGetMember(input, "TotalSize", totalSize);
}

JsonValue GetContentListResult::ToJson() const
{
    return JsonUtils::ToJson<PFContentGetContentListResult>(*this);
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest() :
    PFContentGetContentUploadUrlRequest{}
{
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest(const GetContentUploadUrlRequest& src) :
    PFContentGetContentUploadUrlRequest{ src },
    m_contentType{ src.m_contentType },
    m_key{ src.m_key }
{
    contentType = m_contentType.empty() ? nullptr : m_contentType.data();
    key = m_key.empty() ? nullptr : m_key.data();
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest(GetContentUploadUrlRequest&& src) :
    PFContentGetContentUploadUrlRequest{ src },
    m_contentType{ std::move(src.m_contentType) },
    m_key{ std::move(src.m_key) }
{
    contentType = m_contentType.empty() ? nullptr : m_contentType.data();
    key = m_key.empty() ? nullptr : m_key.data();
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest(const PFContentGetContentUploadUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentUploadUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContentType", m_contentType, contentType);
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
}

JsonValue GetContentUploadUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PFContentGetContentUploadUrlRequest>(*this);
}

size_t GetContentUploadUrlRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFContentGetContentUploadUrlRequest) };
    serializedSize += (m_contentType.size() + 1);
    serializedSize += (m_key.size() + 1);
    return serializedSize;
}

void GetContentUploadUrlRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFContentGetContentUploadUrlRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFContentGetContentUploadUrlRequest);
    memcpy(stringBuffer, m_contentType.data(), m_contentType.size() + 1);
    serializedStruct->contentType = stringBuffer;
    stringBuffer += m_contentType.size() + 1;
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetContentUploadUrlResult::GetContentUploadUrlResult() :
    PFContentGetContentUploadUrlResult{}
{
}

GetContentUploadUrlResult::GetContentUploadUrlResult(const GetContentUploadUrlResult& src) :
    PFContentGetContentUploadUrlResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentUploadUrlResult::GetContentUploadUrlResult(GetContentUploadUrlResult&& src) :
    PFContentGetContentUploadUrlResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentUploadUrlResult::GetContentUploadUrlResult(const PFContentGetContentUploadUrlResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentUploadUrlResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetContentUploadUrlResult::ToJson() const
{
    return JsonUtils::ToJson<PFContentGetContentUploadUrlResult>(*this);
}

size_t GetContentUploadUrlResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFContentGetContentUploadUrlResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetContentUploadUrlResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFContentGetContentUploadUrlResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFContentGetContentUploadUrlResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest() :
    PFContentGetContentDownloadUrlRequest{}
{
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
    PFContentGetContentDownloadUrlRequest{ src },
    m_httpMethod{ src.m_httpMethod },
    m_key{ src.m_key },
    m_thruCDN{ src.m_thruCDN }
{
    httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
    key = m_key.empty() ? nullptr : m_key.data();
    thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(GetContentDownloadUrlRequest&& src) :
    PFContentGetContentDownloadUrlRequest{ src },
    m_httpMethod{ std::move(src.m_httpMethod) },
    m_key{ std::move(src.m_key) },
    m_thruCDN{ std::move(src.m_thruCDN) }
{
    httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
    key = m_key.empty() ? nullptr : m_key.data();
    thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(const PFContentGetContentDownloadUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentDownloadUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "HttpMethod", m_httpMethod, httpMethod);
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "ThruCDN", m_thruCDN, thruCDN);
}

JsonValue GetContentDownloadUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PFContentGetContentDownloadUrlRequest>(*this);
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult() :
    PFContentGetContentDownloadUrlResult{}
{
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
    PFContentGetContentDownloadUrlResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(GetContentDownloadUrlResult&& src) :
    PFContentGetContentDownloadUrlResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(const PFContentGetContentDownloadUrlResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentDownloadUrlResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetContentDownloadUrlResult::ToJson() const
{
    return JsonUtils::ToJson<PFContentGetContentDownloadUrlResult>(*this);
}

size_t GetContentDownloadUrlResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFContentGetContentDownloadUrlResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetContentDownloadUrlResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFContentGetContentDownloadUrlResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFContentGetContentDownloadUrlResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

} // namespace ContentModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFContentDeleteContentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentGetContentListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Prefix", input.prefix);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentContentInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
    JsonUtils::ObjectAddMember(output, "Size", input.size);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentGetContentListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Contents", input.contents, input.contentsCount);
    JsonUtils::ObjectAddMember(output, "ItemCount", input.itemCount);
    JsonUtils::ObjectAddMember(output, "TotalSize", input.totalSize);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentGetContentUploadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContentType", input.contentType);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentGetContentUploadUrlResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentGetContentDownloadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "HttpMethod", input.httpMethod);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "ThruCDN", input.thruCDN);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContentGetContentDownloadUrlResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
