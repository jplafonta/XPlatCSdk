#pragma once

#include <playfab/PFAnalyticsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AnalyticsModels
{

// Analytics Classes
struct DeviceInfoRequest : public PFAnalyticsDeviceInfoRequest, public BaseModel
{
    DeviceInfoRequest();
    DeviceInfoRequest(const DeviceInfoRequest& src);
    DeviceInfoRequest(DeviceInfoRequest&& src);
    DeviceInfoRequest(const PFAnalyticsDeviceInfoRequest& src);
    DeviceInfoRequest& operator=(const DeviceInfoRequest&) = delete;
    ~DeviceInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_info;
};

struct WriteClientCharacterEventRequest : public PFAnalyticsWriteClientCharacterEventRequest, public BaseModel
{
    WriteClientCharacterEventRequest();
    WriteClientCharacterEventRequest(const WriteClientCharacterEventRequest& src);
    WriteClientCharacterEventRequest(WriteClientCharacterEventRequest&& src);
    WriteClientCharacterEventRequest(const PFAnalyticsWriteClientCharacterEventRequest& src);
    WriteClientCharacterEventRequest& operator=(const WriteClientCharacterEventRequest&) = delete;
    ~WriteClientCharacterEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteEventResponse : public PFAnalyticsWriteEventResponse, public SerializableModel, public ApiResult
{
    WriteEventResponse();
    WriteEventResponse(const WriteEventResponse& src);
    WriteEventResponse(WriteEventResponse&& src);
    WriteEventResponse(const PFAnalyticsWriteEventResponse& src);
    WriteEventResponse& operator=(const WriteEventResponse&) = delete;
    ~WriteEventResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_eventId;
};

struct WriteClientPlayerEventRequest : public PFAnalyticsWriteClientPlayerEventRequest, public BaseModel
{
    WriteClientPlayerEventRequest();
    WriteClientPlayerEventRequest(const WriteClientPlayerEventRequest& src);
    WriteClientPlayerEventRequest(WriteClientPlayerEventRequest&& src);
    WriteClientPlayerEventRequest(const PFAnalyticsWriteClientPlayerEventRequest& src);
    WriteClientPlayerEventRequest& operator=(const WriteClientPlayerEventRequest&) = delete;
    ~WriteClientPlayerEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteTitleEventRequest : public PFAnalyticsWriteTitleEventRequest, public BaseModel
{
    WriteTitleEventRequest();
    WriteTitleEventRequest(const WriteTitleEventRequest& src);
    WriteTitleEventRequest(WriteTitleEventRequest&& src);
    WriteTitleEventRequest(const PFAnalyticsWriteTitleEventRequest& src);
    WriteTitleEventRequest& operator=(const WriteTitleEventRequest&) = delete;
    ~WriteTitleEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteServerCharacterEventRequest : public PFAnalyticsWriteServerCharacterEventRequest, public BaseModel
{
    WriteServerCharacterEventRequest();
    WriteServerCharacterEventRequest(const WriteServerCharacterEventRequest& src);
    WriteServerCharacterEventRequest(WriteServerCharacterEventRequest&& src);
    WriteServerCharacterEventRequest(const PFAnalyticsWriteServerCharacterEventRequest& src);
    WriteServerCharacterEventRequest& operator=(const WriteServerCharacterEventRequest&) = delete;
    ~WriteServerCharacterEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    String m_playFabId;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteServerPlayerEventRequest : public PFAnalyticsWriteServerPlayerEventRequest, public BaseModel
{
    WriteServerPlayerEventRequest();
    WriteServerPlayerEventRequest(const WriteServerPlayerEventRequest& src);
    WriteServerPlayerEventRequest(WriteServerPlayerEventRequest&& src);
    WriteServerPlayerEventRequest(const PFAnalyticsWriteServerPlayerEventRequest& src);
    WriteServerPlayerEventRequest& operator=(const WriteServerPlayerEventRequest&) = delete;
    ~WriteServerPlayerEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    String m_playFabId;
    StdExtra::optional<time_t> m_timestamp;
};

struct InsightsEmptyRequest : public PFAnalyticsInsightsEmptyRequest, public BaseModel
{
    InsightsEmptyRequest();
    InsightsEmptyRequest(const InsightsEmptyRequest& src);
    InsightsEmptyRequest(InsightsEmptyRequest&& src);
    InsightsEmptyRequest(const PFAnalyticsInsightsEmptyRequest& src);
    InsightsEmptyRequest& operator=(const InsightsEmptyRequest&) = delete;
    ~InsightsEmptyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct InsightsPerformanceLevel : public PFAnalyticsInsightsPerformanceLevel, public SerializableModel
{
    InsightsPerformanceLevel();
    InsightsPerformanceLevel(const InsightsPerformanceLevel&) = default;
    InsightsPerformanceLevel(InsightsPerformanceLevel&&) = default;
    InsightsPerformanceLevel(const PFAnalyticsInsightsPerformanceLevel& src);
    InsightsPerformanceLevel& operator=(const InsightsPerformanceLevel&) = delete;
    ~InsightsPerformanceLevel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct InsightsGetLimitsResponse : public PFAnalyticsInsightsGetLimitsResponse, public BaseModel, public ApiResult
{
    InsightsGetLimitsResponse();
    InsightsGetLimitsResponse(const InsightsGetLimitsResponse& src);
    InsightsGetLimitsResponse(InsightsGetLimitsResponse&& src);
    InsightsGetLimitsResponse(const PFAnalyticsInsightsGetLimitsResponse& src);
    InsightsGetLimitsResponse& operator=(const InsightsGetLimitsResponse&) = delete;
    ~InsightsGetLimitsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAnalyticsInsightsPerformanceLevel, InsightsPerformanceLevel> m_subMeters;
};

struct InsightsGetOperationStatusResponse : public PFAnalyticsInsightsGetOperationStatusResponse, public SerializableModel, public ApiResult
{
    InsightsGetOperationStatusResponse();
    InsightsGetOperationStatusResponse(const InsightsGetOperationStatusResponse& src);
    InsightsGetOperationStatusResponse(InsightsGetOperationStatusResponse&& src);
    InsightsGetOperationStatusResponse(const PFAnalyticsInsightsGetOperationStatusResponse& src);
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

struct InsightsGetDetailsResponse : public PFAnalyticsInsightsGetDetailsResponse, public BaseModel, public ApiResult
{
    InsightsGetDetailsResponse();
    InsightsGetDetailsResponse(const InsightsGetDetailsResponse& src);
    InsightsGetDetailsResponse(InsightsGetDetailsResponse&& src);
    InsightsGetDetailsResponse(const PFAnalyticsInsightsGetDetailsResponse& src);
    InsightsGetDetailsResponse& operator=(const InsightsGetDetailsResponse&) = delete;
    ~InsightsGetDetailsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_errorMessage;
    StdExtra::optional<InsightsGetLimitsResponse> m_limits;
    PointerArrayModel<PFAnalyticsInsightsGetOperationStatusResponse, InsightsGetOperationStatusResponse> m_pendingOperations;
};

struct InsightsGetOperationStatusRequest : public PFAnalyticsInsightsGetOperationStatusRequest, public BaseModel
{
    InsightsGetOperationStatusRequest();
    InsightsGetOperationStatusRequest(const InsightsGetOperationStatusRequest& src);
    InsightsGetOperationStatusRequest(InsightsGetOperationStatusRequest&& src);
    InsightsGetOperationStatusRequest(const PFAnalyticsInsightsGetOperationStatusRequest& src);
    InsightsGetOperationStatusRequest& operator=(const InsightsGetOperationStatusRequest&) = delete;
    ~InsightsGetOperationStatusRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_operationId;
};

struct InsightsGetPendingOperationsRequest : public PFAnalyticsInsightsGetPendingOperationsRequest, public BaseModel
{
    InsightsGetPendingOperationsRequest();
    InsightsGetPendingOperationsRequest(const InsightsGetPendingOperationsRequest& src);
    InsightsGetPendingOperationsRequest(InsightsGetPendingOperationsRequest&& src);
    InsightsGetPendingOperationsRequest(const PFAnalyticsInsightsGetPendingOperationsRequest& src);
    InsightsGetPendingOperationsRequest& operator=(const InsightsGetPendingOperationsRequest&) = delete;
    ~InsightsGetPendingOperationsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_operationType;
};

struct InsightsGetPendingOperationsResponse : public PFAnalyticsInsightsGetPendingOperationsResponse, public BaseModel, public ApiResult
{
    InsightsGetPendingOperationsResponse();
    InsightsGetPendingOperationsResponse(const InsightsGetPendingOperationsResponse& src);
    InsightsGetPendingOperationsResponse(InsightsGetPendingOperationsResponse&& src);
    InsightsGetPendingOperationsResponse(const PFAnalyticsInsightsGetPendingOperationsResponse& src);
    InsightsGetPendingOperationsResponse& operator=(const InsightsGetPendingOperationsResponse&) = delete;
    ~InsightsGetPendingOperationsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAnalyticsInsightsGetOperationStatusResponse, InsightsGetOperationStatusResponse> m_pendingOperations;
};

struct InsightsSetPerformanceRequest : public PFAnalyticsInsightsSetPerformanceRequest, public BaseModel
{
    InsightsSetPerformanceRequest();
    InsightsSetPerformanceRequest(const InsightsSetPerformanceRequest& src);
    InsightsSetPerformanceRequest(InsightsSetPerformanceRequest&& src);
    InsightsSetPerformanceRequest(const PFAnalyticsInsightsSetPerformanceRequest& src);
    InsightsSetPerformanceRequest& operator=(const InsightsSetPerformanceRequest&) = delete;
    ~InsightsSetPerformanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct InsightsOperationResponse : public PFAnalyticsInsightsOperationResponse, public SerializableModel, public ApiResult
{
    InsightsOperationResponse();
    InsightsOperationResponse(const InsightsOperationResponse& src);
    InsightsOperationResponse(InsightsOperationResponse&& src);
    InsightsOperationResponse(const PFAnalyticsInsightsOperationResponse& src);
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

struct InsightsSetStorageRetentionRequest : public PFAnalyticsInsightsSetStorageRetentionRequest, public BaseModel
{
    InsightsSetStorageRetentionRequest();
    InsightsSetStorageRetentionRequest(const InsightsSetStorageRetentionRequest& src);
    InsightsSetStorageRetentionRequest(InsightsSetStorageRetentionRequest&& src);
    InsightsSetStorageRetentionRequest(const PFAnalyticsInsightsSetStorageRetentionRequest& src);
    InsightsSetStorageRetentionRequest& operator=(const InsightsSetStorageRetentionRequest&) = delete;
    ~InsightsSetStorageRetentionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

} // namespace AnalyticsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFAnalyticsDeviceInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsWriteClientCharacterEventRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsWriteEventResponse& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsWriteClientPlayerEventRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsWriteTitleEventRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsWriteServerCharacterEventRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsWriteServerPlayerEventRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsEmptyRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsPerformanceLevel& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsGetLimitsResponse& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsGetOperationStatusResponse& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsGetDetailsResponse& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsGetOperationStatusRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsGetPendingOperationsRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsGetPendingOperationsResponse& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsSetPerformanceRequest& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsOperationResponse& input);
template<> inline JsonValue ToJson<>(const PFAnalyticsInsightsSetStorageRetentionRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
