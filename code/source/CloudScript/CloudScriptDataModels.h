#pragma once

#include <playfab/PlayFabCloudScriptDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace CloudScriptModels
{

// CloudScript Classes
struct ScriptExecutionError : public PlayFabCloudScriptScriptExecutionError, public SerializableModel
{
    ScriptExecutionError();
    ScriptExecutionError(const ScriptExecutionError& src);
    ScriptExecutionError(ScriptExecutionError&& src);
    ScriptExecutionError(const PlayFabCloudScriptScriptExecutionError& src);
    ScriptExecutionError& operator=(const ScriptExecutionError&) = delete;
    ~ScriptExecutionError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_error;
    String m_message;
    String m_stackTrace;
};

struct LogStatement : public PlayFabCloudScriptLogStatement, public BaseModel
{
    LogStatement();
    LogStatement(const LogStatement& src);
    LogStatement(LogStatement&& src);
    LogStatement(const PlayFabCloudScriptLogStatement& src);
    LogStatement& operator=(const LogStatement&) = delete;
    ~LogStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_data;
    String m_level;
    String m_message;
};

struct ExecuteCloudScriptResult : public PlayFabCloudScriptExecuteCloudScriptResult, public BaseModel, public ApiResult
{
    ExecuteCloudScriptResult();
    ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src);
    ExecuteCloudScriptResult(const PlayFabCloudScriptExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult& operator=(const ExecuteCloudScriptResult&) = delete;
    ~ExecuteCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ScriptExecutionError> m_error;
    String m_functionName;
    JsonObject m_functionResult;
    StdExtra::optional<bool> m_functionResultTooLarge;
    PointerArrayModel<PlayFabCloudScriptLogStatement, LogStatement> m_logs;
    StdExtra::optional<bool> m_logsTooLarge;
};

struct ExecuteEntityCloudScriptRequest : public PlayFabCloudScriptExecuteEntityCloudScriptRequest, public BaseModel
{
    ExecuteEntityCloudScriptRequest();
    ExecuteEntityCloudScriptRequest(const ExecuteEntityCloudScriptRequest& src);
    ExecuteEntityCloudScriptRequest(ExecuteEntityCloudScriptRequest&& src);
    ExecuteEntityCloudScriptRequest(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& src);
    ExecuteEntityCloudScriptRequest& operator=(const ExecuteEntityCloudScriptRequest&) = delete;
    ~ExecuteEntityCloudScriptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
    StdExtra::optional<PlayFabCloudScriptCloudScriptRevisionOption> m_revisionSelection;
    StdExtra::optional<int32_t> m_specificRevision;
};

struct ExecuteFunctionRequest : public PlayFabCloudScriptExecuteFunctionRequest, public BaseModel
{
    ExecuteFunctionRequest();
    ExecuteFunctionRequest(const ExecuteFunctionRequest& src);
    ExecuteFunctionRequest(ExecuteFunctionRequest&& src);
    ExecuteFunctionRequest(const PlayFabCloudScriptExecuteFunctionRequest& src);
    ExecuteFunctionRequest& operator=(const ExecuteFunctionRequest&) = delete;
    ~ExecuteFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
};

struct FunctionExecutionError : public PlayFabCloudScriptFunctionExecutionError, public SerializableModel
{
    FunctionExecutionError();
    FunctionExecutionError(const FunctionExecutionError& src);
    FunctionExecutionError(FunctionExecutionError&& src);
    FunctionExecutionError(const PlayFabCloudScriptFunctionExecutionError& src);
    FunctionExecutionError& operator=(const FunctionExecutionError&) = delete;
    ~FunctionExecutionError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_error;
    String m_message;
    String m_stackTrace;
};

struct ExecuteFunctionResult : public PlayFabCloudScriptExecuteFunctionResult, public BaseModel, public ApiResult
{
    ExecuteFunctionResult();
    ExecuteFunctionResult(const ExecuteFunctionResult& src);
    ExecuteFunctionResult(ExecuteFunctionResult&& src);
    ExecuteFunctionResult(const PlayFabCloudScriptExecuteFunctionResult& src);
    ExecuteFunctionResult& operator=(const ExecuteFunctionResult&) = delete;
    ~ExecuteFunctionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<FunctionExecutionError> m_error;
    String m_functionName;
    JsonObject m_functionResult;
    StdExtra::optional<bool> m_functionResultTooLarge;
};

struct FunctionModel : public PlayFabCloudScriptFunctionModel, public SerializableModel
{
    FunctionModel();
    FunctionModel(const FunctionModel& src);
    FunctionModel(FunctionModel&& src);
    FunctionModel(const PlayFabCloudScriptFunctionModel& src);
    FunctionModel& operator=(const FunctionModel&) = delete;
    ~FunctionModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_functionAddress;
    String m_functionName;
    String m_triggerType;
};

struct HttpFunctionModel : public PlayFabCloudScriptHttpFunctionModel, public SerializableModel
{
    HttpFunctionModel();
    HttpFunctionModel(const HttpFunctionModel& src);
    HttpFunctionModel(HttpFunctionModel&& src);
    HttpFunctionModel(const PlayFabCloudScriptHttpFunctionModel& src);
    HttpFunctionModel& operator=(const HttpFunctionModel&) = delete;
    ~HttpFunctionModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_functionName;
    String m_functionUrl;
};

struct ListFunctionsRequest : public PlayFabCloudScriptListFunctionsRequest, public BaseModel
{
    ListFunctionsRequest();
    ListFunctionsRequest(const ListFunctionsRequest& src);
    ListFunctionsRequest(ListFunctionsRequest&& src);
    ListFunctionsRequest(const PlayFabCloudScriptListFunctionsRequest& src);
    ListFunctionsRequest& operator=(const ListFunctionsRequest&) = delete;
    ~ListFunctionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct ListFunctionsResult : public PlayFabCloudScriptListFunctionsResult, public BaseModel, public ApiResult
{
    ListFunctionsResult();
    ListFunctionsResult(const ListFunctionsResult& src);
    ListFunctionsResult(ListFunctionsResult&& src);
    ListFunctionsResult(const PlayFabCloudScriptListFunctionsResult& src);
    ListFunctionsResult& operator=(const ListFunctionsResult&) = delete;
    ~ListFunctionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabCloudScriptFunctionModel, FunctionModel> m_functions;
};

struct ListHttpFunctionsResult : public PlayFabCloudScriptListHttpFunctionsResult, public BaseModel, public ApiResult
{
    ListHttpFunctionsResult();
    ListHttpFunctionsResult(const ListHttpFunctionsResult& src);
    ListHttpFunctionsResult(ListHttpFunctionsResult&& src);
    ListHttpFunctionsResult(const PlayFabCloudScriptListHttpFunctionsResult& src);
    ListHttpFunctionsResult& operator=(const ListHttpFunctionsResult&) = delete;
    ~ListHttpFunctionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabCloudScriptHttpFunctionModel, HttpFunctionModel> m_functions;
};

struct QueuedFunctionModel : public PlayFabCloudScriptQueuedFunctionModel, public SerializableModel
{
    QueuedFunctionModel();
    QueuedFunctionModel(const QueuedFunctionModel& src);
    QueuedFunctionModel(QueuedFunctionModel&& src);
    QueuedFunctionModel(const PlayFabCloudScriptQueuedFunctionModel& src);
    QueuedFunctionModel& operator=(const QueuedFunctionModel&) = delete;
    ~QueuedFunctionModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_connectionString;
    String m_functionName;
    String m_queueName;
};

struct ListQueuedFunctionsResult : public PlayFabCloudScriptListQueuedFunctionsResult, public BaseModel, public ApiResult
{
    ListQueuedFunctionsResult();
    ListQueuedFunctionsResult(const ListQueuedFunctionsResult& src);
    ListQueuedFunctionsResult(ListQueuedFunctionsResult&& src);
    ListQueuedFunctionsResult(const PlayFabCloudScriptListQueuedFunctionsResult& src);
    ListQueuedFunctionsResult& operator=(const ListQueuedFunctionsResult&) = delete;
    ~ListQueuedFunctionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabCloudScriptQueuedFunctionModel, QueuedFunctionModel> m_functions;
};

struct NameIdentifier : public PlayFabCloudScriptNameIdentifier, public SerializableModel
{
    NameIdentifier();
    NameIdentifier(const NameIdentifier& src);
    NameIdentifier(NameIdentifier&& src);
    NameIdentifier(const PlayFabCloudScriptNameIdentifier& src);
    NameIdentifier& operator=(const NameIdentifier&) = delete;
    ~NameIdentifier() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct PlayStreamEventEnvelopeModel : public PlayFabCloudScriptPlayStreamEventEnvelopeModel, public SerializableModel
{
    PlayStreamEventEnvelopeModel();
    PlayStreamEventEnvelopeModel(const PlayStreamEventEnvelopeModel& src);
    PlayStreamEventEnvelopeModel(PlayStreamEventEnvelopeModel&& src);
    PlayStreamEventEnvelopeModel(const PlayFabCloudScriptPlayStreamEventEnvelopeModel& src);
    PlayStreamEventEnvelopeModel& operator=(const PlayStreamEventEnvelopeModel&) = delete;
    ~PlayStreamEventEnvelopeModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_entityId;
    String m_entityType;
    String m_eventData;
    String m_eventName;
    String m_eventNamespace;
    String m_eventSettings;
};

struct PostFunctionResultForEntityTriggeredActionRequest : public PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest, public BaseModel
{
    PostFunctionResultForEntityTriggeredActionRequest();
    PostFunctionResultForEntityTriggeredActionRequest(const PostFunctionResultForEntityTriggeredActionRequest& src);
    PostFunctionResultForEntityTriggeredActionRequest(PostFunctionResultForEntityTriggeredActionRequest&& src);
    PostFunctionResultForEntityTriggeredActionRequest(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& src);
    PostFunctionResultForEntityTriggeredActionRequest& operator=(const PostFunctionResultForEntityTriggeredActionRequest&) = delete;
    ~PostFunctionResultForEntityTriggeredActionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    ExecuteFunctionResult m_functionResult;
};

struct PostFunctionResultForFunctionExecutionRequest : public PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest, public BaseModel
{
    PostFunctionResultForFunctionExecutionRequest();
    PostFunctionResultForFunctionExecutionRequest(const PostFunctionResultForFunctionExecutionRequest& src);
    PostFunctionResultForFunctionExecutionRequest(PostFunctionResultForFunctionExecutionRequest&& src);
    PostFunctionResultForFunctionExecutionRequest(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& src);
    PostFunctionResultForFunctionExecutionRequest& operator=(const PostFunctionResultForFunctionExecutionRequest&) = delete;
    ~PostFunctionResultForFunctionExecutionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    ExecuteFunctionResult m_functionResult;
};

struct PostFunctionResultForPlayerTriggeredActionRequest : public PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, public BaseModel
{
    PostFunctionResultForPlayerTriggeredActionRequest();
    PostFunctionResultForPlayerTriggeredActionRequest(const PostFunctionResultForPlayerTriggeredActionRequest& src);
    PostFunctionResultForPlayerTriggeredActionRequest(PostFunctionResultForPlayerTriggeredActionRequest&& src);
    PostFunctionResultForPlayerTriggeredActionRequest(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& src);
    PostFunctionResultForPlayerTriggeredActionRequest& operator=(const PostFunctionResultForPlayerTriggeredActionRequest&) = delete;
    ~PostFunctionResultForPlayerTriggeredActionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    ExecuteFunctionResult m_functionResult;
    PlayerProfileModel m_playerProfile;
    StdExtra::optional<PlayStreamEventEnvelopeModel> m_playStreamEventEnvelope;
};

struct PostFunctionResultForScheduledTaskRequest : public PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest, public BaseModel
{
    PostFunctionResultForScheduledTaskRequest();
    PostFunctionResultForScheduledTaskRequest(const PostFunctionResultForScheduledTaskRequest& src);
    PostFunctionResultForScheduledTaskRequest(PostFunctionResultForScheduledTaskRequest&& src);
    PostFunctionResultForScheduledTaskRequest(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& src);
    PostFunctionResultForScheduledTaskRequest& operator=(const PostFunctionResultForScheduledTaskRequest&) = delete;
    ~PostFunctionResultForScheduledTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    ExecuteFunctionResult m_functionResult;
    NameIdentifier m_scheduledTaskId;
};

struct RegisterHttpFunctionRequest : public PlayFabCloudScriptRegisterHttpFunctionRequest, public BaseModel
{
    RegisterHttpFunctionRequest();
    RegisterHttpFunctionRequest(const RegisterHttpFunctionRequest& src);
    RegisterHttpFunctionRequest(RegisterHttpFunctionRequest&& src);
    RegisterHttpFunctionRequest(const PlayFabCloudScriptRegisterHttpFunctionRequest& src);
    RegisterHttpFunctionRequest& operator=(const RegisterHttpFunctionRequest&) = delete;
    ~RegisterHttpFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    String m_functionUrl;
};

struct RegisterQueuedFunctionRequest : public PlayFabCloudScriptRegisterQueuedFunctionRequest, public BaseModel
{
    RegisterQueuedFunctionRequest();
    RegisterQueuedFunctionRequest(const RegisterQueuedFunctionRequest& src);
    RegisterQueuedFunctionRequest(RegisterQueuedFunctionRequest&& src);
    RegisterQueuedFunctionRequest(const PlayFabCloudScriptRegisterQueuedFunctionRequest& src);
    RegisterQueuedFunctionRequest& operator=(const RegisterQueuedFunctionRequest&) = delete;
    ~RegisterQueuedFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionString;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    String m_queueName;
};

struct UnregisterFunctionRequest : public PlayFabCloudScriptUnregisterFunctionRequest, public BaseModel
{
    UnregisterFunctionRequest();
    UnregisterFunctionRequest(const UnregisterFunctionRequest& src);
    UnregisterFunctionRequest(UnregisterFunctionRequest&& src);
    UnregisterFunctionRequest(const PlayFabCloudScriptUnregisterFunctionRequest& src);
    UnregisterFunctionRequest& operator=(const UnregisterFunctionRequest&) = delete;
    ~UnregisterFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_functionName;
};

} // namespace CloudScriptModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabCloudScriptScriptExecutionError& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptLogStatement& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteFunctionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptFunctionExecutionError& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteFunctionResult& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptFunctionModel& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptHttpFunctionModel& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptListFunctionsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptListFunctionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptListHttpFunctionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptQueuedFunctionModel& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptListQueuedFunctionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptNameIdentifier& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptPlayStreamEventEnvelopeModel& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptRegisterHttpFunctionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptRegisterQueuedFunctionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabCloudScriptUnregisterFunctionRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabCloudScriptCloudScriptRevisionOption>
{
    static constexpr PlayFabCloudScriptCloudScriptRevisionOption maxValue = PlayFabCloudScriptCloudScriptRevisionOption::Specific;
};

template<> struct EnumRange<PlayFabCloudScriptTriggerType>
{
    static constexpr PlayFabCloudScriptTriggerType maxValue = PlayFabCloudScriptTriggerType::Queue;
};

} // namespace PlayFab
