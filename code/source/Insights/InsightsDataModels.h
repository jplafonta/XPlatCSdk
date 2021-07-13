#pragma once

#include <playfab/PlayFabInsightsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace InsightsModels
{

// Insights Classes
struct InsightsEmptyRequest : public PlayFabInsightsInsightsEmptyRequest, public BaseModel
{
    InsightsEmptyRequest();
    InsightsEmptyRequest(const InsightsEmptyRequest& src);
    InsightsEmptyRequest(InsightsEmptyRequest&& src);
    InsightsEmptyRequest(const PlayFabInsightsInsightsEmptyRequest& src);
    InsightsEmptyRequest& operator=(const InsightsEmptyRequest&) = delete;
    ~InsightsEmptyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct InsightsPerformanceLevel : public PlayFabInsightsInsightsPerformanceLevel, public SerializableModel
{
    InsightsPerformanceLevel();
    InsightsPerformanceLevel(const InsightsPerformanceLevel&) = default;
    InsightsPerformanceLevel(InsightsPerformanceLevel&&) = default;
    InsightsPerformanceLevel(const PlayFabInsightsInsightsPerformanceLevel& src);
    InsightsPerformanceLevel& operator=(const InsightsPerformanceLevel&) = delete;
    ~InsightsPerformanceLevel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct InsightsGetLimitsResponse : public PlayFabInsightsInsightsGetLimitsResponse, public BaseModel, public ApiResult
{
    InsightsGetLimitsResponse();
    InsightsGetLimitsResponse(const InsightsGetLimitsResponse& src);
    InsightsGetLimitsResponse(InsightsGetLimitsResponse&& src);
    InsightsGetLimitsResponse(const PlayFabInsightsInsightsGetLimitsResponse& src);
    InsightsGetLimitsResponse& operator=(const InsightsGetLimitsResponse&) = delete;
    ~InsightsGetLimitsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabInsightsInsightsPerformanceLevel, InsightsPerformanceLevel> m_subMeters;
};

struct InsightsGetOperationStatusResponse : public PlayFabInsightsInsightsGetOperationStatusResponse, public SerializableModel, public ApiResult
{
    InsightsGetOperationStatusResponse();
    InsightsGetOperationStatusResponse(const InsightsGetOperationStatusResponse& src);
    InsightsGetOperationStatusResponse(InsightsGetOperationStatusResponse&& src);
    InsightsGetOperationStatusResponse(const PlayFabInsightsInsightsGetOperationStatusResponse& src);
    InsightsGetOperationStatusResponse& operator=(const InsightsGetOperationStatusResponse&) = delete;
    ~InsightsGetOperationStatusResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_message;
    String m_operationId;
    String m_operationType;
    String m_status;
};

struct InsightsGetDetailsResponse : public PlayFabInsightsInsightsGetDetailsResponse, public BaseModel, public ApiResult
{
    InsightsGetDetailsResponse();
    InsightsGetDetailsResponse(const InsightsGetDetailsResponse& src);
    InsightsGetDetailsResponse(InsightsGetDetailsResponse&& src);
    InsightsGetDetailsResponse(const PlayFabInsightsInsightsGetDetailsResponse& src);
    InsightsGetDetailsResponse& operator=(const InsightsGetDetailsResponse&) = delete;
    ~InsightsGetDetailsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_errorMessage;
    StdExtra::optional<InsightsGetLimitsResponse> m_limits;
    PointerArrayModel<PlayFabInsightsInsightsGetOperationStatusResponse, InsightsGetOperationStatusResponse> m_pendingOperations;
};

struct InsightsGetOperationStatusRequest : public PlayFabInsightsInsightsGetOperationStatusRequest, public BaseModel
{
    InsightsGetOperationStatusRequest();
    InsightsGetOperationStatusRequest(const InsightsGetOperationStatusRequest& src);
    InsightsGetOperationStatusRequest(InsightsGetOperationStatusRequest&& src);
    InsightsGetOperationStatusRequest(const PlayFabInsightsInsightsGetOperationStatusRequest& src);
    InsightsGetOperationStatusRequest& operator=(const InsightsGetOperationStatusRequest&) = delete;
    ~InsightsGetOperationStatusRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_operationId;
};

struct InsightsGetPendingOperationsRequest : public PlayFabInsightsInsightsGetPendingOperationsRequest, public BaseModel
{
    InsightsGetPendingOperationsRequest();
    InsightsGetPendingOperationsRequest(const InsightsGetPendingOperationsRequest& src);
    InsightsGetPendingOperationsRequest(InsightsGetPendingOperationsRequest&& src);
    InsightsGetPendingOperationsRequest(const PlayFabInsightsInsightsGetPendingOperationsRequest& src);
    InsightsGetPendingOperationsRequest& operator=(const InsightsGetPendingOperationsRequest&) = delete;
    ~InsightsGetPendingOperationsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_operationType;
};

struct InsightsGetPendingOperationsResponse : public PlayFabInsightsInsightsGetPendingOperationsResponse, public BaseModel, public ApiResult
{
    InsightsGetPendingOperationsResponse();
    InsightsGetPendingOperationsResponse(const InsightsGetPendingOperationsResponse& src);
    InsightsGetPendingOperationsResponse(InsightsGetPendingOperationsResponse&& src);
    InsightsGetPendingOperationsResponse(const PlayFabInsightsInsightsGetPendingOperationsResponse& src);
    InsightsGetPendingOperationsResponse& operator=(const InsightsGetPendingOperationsResponse&) = delete;
    ~InsightsGetPendingOperationsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabInsightsInsightsGetOperationStatusResponse, InsightsGetOperationStatusResponse> m_pendingOperations;
};

struct InsightsOperationResponse : public PlayFabInsightsInsightsOperationResponse, public SerializableModel, public ApiResult
{
    InsightsOperationResponse();
    InsightsOperationResponse(const InsightsOperationResponse& src);
    InsightsOperationResponse(InsightsOperationResponse&& src);
    InsightsOperationResponse(const PlayFabInsightsInsightsOperationResponse& src);
    InsightsOperationResponse& operator=(const InsightsOperationResponse&) = delete;
    ~InsightsOperationResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_message;
    String m_operationId;
    String m_operationType;
};

struct InsightsSetPerformanceRequest : public PlayFabInsightsInsightsSetPerformanceRequest, public BaseModel
{
    InsightsSetPerformanceRequest();
    InsightsSetPerformanceRequest(const InsightsSetPerformanceRequest& src);
    InsightsSetPerformanceRequest(InsightsSetPerformanceRequest&& src);
    InsightsSetPerformanceRequest(const PlayFabInsightsInsightsSetPerformanceRequest& src);
    InsightsSetPerformanceRequest& operator=(const InsightsSetPerformanceRequest&) = delete;
    ~InsightsSetPerformanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct InsightsSetStorageRetentionRequest : public PlayFabInsightsInsightsSetStorageRetentionRequest, public BaseModel
{
    InsightsSetStorageRetentionRequest();
    InsightsSetStorageRetentionRequest(const InsightsSetStorageRetentionRequest& src);
    InsightsSetStorageRetentionRequest(InsightsSetStorageRetentionRequest&& src);
    InsightsSetStorageRetentionRequest(const PlayFabInsightsInsightsSetStorageRetentionRequest& src);
    InsightsSetStorageRetentionRequest& operator=(const InsightsSetStorageRetentionRequest&) = delete;
    ~InsightsSetStorageRetentionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

} // namespace InsightsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsEmptyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsPerformanceLevel& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetLimitsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetOperationStatusResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetDetailsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetOperationStatusRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetPendingOperationsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetPendingOperationsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsOperationResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsSetPerformanceRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabInsightsInsightsSetStorageRetentionRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
