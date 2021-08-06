#pragma once

#include <playfab/PFCloudScriptDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace CloudScriptModels
{

// CloudScript Classes
struct GetCloudScriptRevisionRequest : public PFCloudScriptGetCloudScriptRevisionRequest, public BaseModel
{
    GetCloudScriptRevisionRequest();
    GetCloudScriptRevisionRequest(const GetCloudScriptRevisionRequest& src);
    GetCloudScriptRevisionRequest(GetCloudScriptRevisionRequest&& src);
    GetCloudScriptRevisionRequest(const PFCloudScriptGetCloudScriptRevisionRequest& src);
    GetCloudScriptRevisionRequest& operator=(const GetCloudScriptRevisionRequest&) = delete;
    ~GetCloudScriptRevisionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_revision;
    StdExtra::optional<int32_t> m_version;
};

struct CloudScriptFile : public PFCloudScriptCloudScriptFile, public SerializableModel
{
    CloudScriptFile();
    CloudScriptFile(const CloudScriptFile& src);
    CloudScriptFile(CloudScriptFile&& src);
    CloudScriptFile(const PFCloudScriptCloudScriptFile& src);
    CloudScriptFile& operator=(const CloudScriptFile&) = delete;
    ~CloudScriptFile() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_fileContents;
    String m_filename;
};

struct GetCloudScriptRevisionResult : public PFCloudScriptGetCloudScriptRevisionResult, public BaseModel, public ApiResult
{
    GetCloudScriptRevisionResult();
    GetCloudScriptRevisionResult(const GetCloudScriptRevisionResult& src);
    GetCloudScriptRevisionResult(GetCloudScriptRevisionResult&& src);
    GetCloudScriptRevisionResult(const PFCloudScriptGetCloudScriptRevisionResult& src);
    GetCloudScriptRevisionResult& operator=(const GetCloudScriptRevisionResult&) = delete;
    ~GetCloudScriptRevisionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCloudScriptCloudScriptFile, CloudScriptFile> m_files;
};

struct CloudScriptVersionStatus : public PFCloudScriptCloudScriptVersionStatus, public SerializableModel
{
    CloudScriptVersionStatus();
    CloudScriptVersionStatus(const CloudScriptVersionStatus&) = default;
    CloudScriptVersionStatus(CloudScriptVersionStatus&&) = default;
    CloudScriptVersionStatus(const PFCloudScriptCloudScriptVersionStatus& src);
    CloudScriptVersionStatus& operator=(const CloudScriptVersionStatus&) = delete;
    ~CloudScriptVersionStatus() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetCloudScriptVersionsResult : public PFCloudScriptGetCloudScriptVersionsResult, public BaseModel, public ApiResult
{
    GetCloudScriptVersionsResult();
    GetCloudScriptVersionsResult(const GetCloudScriptVersionsResult& src);
    GetCloudScriptVersionsResult(GetCloudScriptVersionsResult&& src);
    GetCloudScriptVersionsResult(const PFCloudScriptGetCloudScriptVersionsResult& src);
    GetCloudScriptVersionsResult& operator=(const GetCloudScriptVersionsResult&) = delete;
    ~GetCloudScriptVersionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCloudScriptCloudScriptVersionStatus, CloudScriptVersionStatus> m_versions;
};

struct SetPublishedRevisionRequest : public PFCloudScriptSetPublishedRevisionRequest, public BaseModel
{
    SetPublishedRevisionRequest();
    SetPublishedRevisionRequest(const SetPublishedRevisionRequest& src);
    SetPublishedRevisionRequest(SetPublishedRevisionRequest&& src);
    SetPublishedRevisionRequest(const PFCloudScriptSetPublishedRevisionRequest& src);
    SetPublishedRevisionRequest& operator=(const SetPublishedRevisionRequest&) = delete;
    ~SetPublishedRevisionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UpdateCloudScriptRequest : public PFCloudScriptUpdateCloudScriptRequest, public BaseModel
{
    UpdateCloudScriptRequest();
    UpdateCloudScriptRequest(const UpdateCloudScriptRequest& src);
    UpdateCloudScriptRequest(UpdateCloudScriptRequest&& src);
    UpdateCloudScriptRequest(const PFCloudScriptUpdateCloudScriptRequest& src);
    UpdateCloudScriptRequest& operator=(const UpdateCloudScriptRequest&) = delete;
    ~UpdateCloudScriptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_developerPlayFabId;
    PointerArrayModel<PFCloudScriptCloudScriptFile, CloudScriptFile> m_files;
};

struct UpdateCloudScriptResult : public PFCloudScriptUpdateCloudScriptResult, public SerializableModel, public ApiResult
{
    UpdateCloudScriptResult();
    UpdateCloudScriptResult(const UpdateCloudScriptResult&) = default;
    UpdateCloudScriptResult(UpdateCloudScriptResult&&) = default;
    UpdateCloudScriptResult(const PFCloudScriptUpdateCloudScriptResult& src);
    UpdateCloudScriptResult& operator=(const UpdateCloudScriptResult&) = delete;
    ~UpdateCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ExecuteCloudScriptRequest : public PFCloudScriptExecuteCloudScriptRequest, public BaseModel
{
    ExecuteCloudScriptRequest();
    ExecuteCloudScriptRequest(const ExecuteCloudScriptRequest& src);
    ExecuteCloudScriptRequest(ExecuteCloudScriptRequest&& src);
    ExecuteCloudScriptRequest(const PFCloudScriptExecuteCloudScriptRequest& src);
    ExecuteCloudScriptRequest& operator=(const ExecuteCloudScriptRequest&) = delete;
    ~ExecuteCloudScriptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
    StdExtra::optional<PFCloudScriptCloudScriptRevisionOption> m_revisionSelection;
    StdExtra::optional<int32_t> m_specificRevision;
};

struct ExecuteCloudScriptServerRequest : public PFCloudScriptExecuteCloudScriptServerRequest, public BaseModel
{
    ExecuteCloudScriptServerRequest();
    ExecuteCloudScriptServerRequest(const ExecuteCloudScriptServerRequest& src);
    ExecuteCloudScriptServerRequest(ExecuteCloudScriptServerRequest&& src);
    ExecuteCloudScriptServerRequest(const PFCloudScriptExecuteCloudScriptServerRequest& src);
    ExecuteCloudScriptServerRequest& operator=(const ExecuteCloudScriptServerRequest&) = delete;
    ~ExecuteCloudScriptServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
    String m_playFabId;
    StdExtra::optional<PFCloudScriptCloudScriptRevisionOption> m_revisionSelection;
    StdExtra::optional<int32_t> m_specificRevision;
};

struct ExecuteEntityCloudScriptRequest : public PFCloudScriptExecuteEntityCloudScriptRequest, public BaseModel
{
    ExecuteEntityCloudScriptRequest();
    ExecuteEntityCloudScriptRequest(const ExecuteEntityCloudScriptRequest& src);
    ExecuteEntityCloudScriptRequest(ExecuteEntityCloudScriptRequest&& src);
    ExecuteEntityCloudScriptRequest(const PFCloudScriptExecuteEntityCloudScriptRequest& src);
    ExecuteEntityCloudScriptRequest& operator=(const ExecuteEntityCloudScriptRequest&) = delete;
    ~ExecuteEntityCloudScriptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
    StdExtra::optional<PFCloudScriptCloudScriptRevisionOption> m_revisionSelection;
    StdExtra::optional<int32_t> m_specificRevision;
};

struct ExecuteFunctionRequest : public PFCloudScriptExecuteFunctionRequest, public BaseModel
{
    ExecuteFunctionRequest();
    ExecuteFunctionRequest(const ExecuteFunctionRequest& src);
    ExecuteFunctionRequest(ExecuteFunctionRequest&& src);
    ExecuteFunctionRequest(const PFCloudScriptExecuteFunctionRequest& src);
    ExecuteFunctionRequest& operator=(const ExecuteFunctionRequest&) = delete;
    ~ExecuteFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
};

struct FunctionExecutionError : public PFCloudScriptFunctionExecutionError, public SerializableModel
{
    FunctionExecutionError();
    FunctionExecutionError(const FunctionExecutionError& src);
    FunctionExecutionError(FunctionExecutionError&& src);
    FunctionExecutionError(const PFCloudScriptFunctionExecutionError& src);
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

struct ExecuteFunctionResult : public PFCloudScriptExecuteFunctionResult, public BaseModel, public ApiResult
{
    ExecuteFunctionResult();
    ExecuteFunctionResult(const ExecuteFunctionResult& src);
    ExecuteFunctionResult(ExecuteFunctionResult&& src);
    ExecuteFunctionResult(const PFCloudScriptExecuteFunctionResult& src);
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

struct ListFunctionsRequest : public PFCloudScriptListFunctionsRequest, public BaseModel
{
    ListFunctionsRequest();
    ListFunctionsRequest(const ListFunctionsRequest& src);
    ListFunctionsRequest(ListFunctionsRequest&& src);
    ListFunctionsRequest(const PFCloudScriptListFunctionsRequest& src);
    ListFunctionsRequest& operator=(const ListFunctionsRequest&) = delete;
    ~ListFunctionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct FunctionModel : public PFCloudScriptFunctionModel, public SerializableModel
{
    FunctionModel();
    FunctionModel(const FunctionModel& src);
    FunctionModel(FunctionModel&& src);
    FunctionModel(const PFCloudScriptFunctionModel& src);
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

struct ListFunctionsResult : public PFCloudScriptListFunctionsResult, public BaseModel, public ApiResult
{
    ListFunctionsResult();
    ListFunctionsResult(const ListFunctionsResult& src);
    ListFunctionsResult(ListFunctionsResult&& src);
    ListFunctionsResult(const PFCloudScriptListFunctionsResult& src);
    ListFunctionsResult& operator=(const ListFunctionsResult&) = delete;
    ~ListFunctionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCloudScriptFunctionModel, FunctionModel> m_functions;
};

struct HttpFunctionModel : public PFCloudScriptHttpFunctionModel, public SerializableModel
{
    HttpFunctionModel();
    HttpFunctionModel(const HttpFunctionModel& src);
    HttpFunctionModel(HttpFunctionModel&& src);
    HttpFunctionModel(const PFCloudScriptHttpFunctionModel& src);
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

struct ListHttpFunctionsResult : public PFCloudScriptListHttpFunctionsResult, public BaseModel, public ApiResult
{
    ListHttpFunctionsResult();
    ListHttpFunctionsResult(const ListHttpFunctionsResult& src);
    ListHttpFunctionsResult(ListHttpFunctionsResult&& src);
    ListHttpFunctionsResult(const PFCloudScriptListHttpFunctionsResult& src);
    ListHttpFunctionsResult& operator=(const ListHttpFunctionsResult&) = delete;
    ~ListHttpFunctionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCloudScriptHttpFunctionModel, HttpFunctionModel> m_functions;
};

struct QueuedFunctionModel : public PFCloudScriptQueuedFunctionModel, public SerializableModel
{
    QueuedFunctionModel();
    QueuedFunctionModel(const QueuedFunctionModel& src);
    QueuedFunctionModel(QueuedFunctionModel&& src);
    QueuedFunctionModel(const PFCloudScriptQueuedFunctionModel& src);
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

struct ListQueuedFunctionsResult : public PFCloudScriptListQueuedFunctionsResult, public BaseModel, public ApiResult
{
    ListQueuedFunctionsResult();
    ListQueuedFunctionsResult(const ListQueuedFunctionsResult& src);
    ListQueuedFunctionsResult(ListQueuedFunctionsResult&& src);
    ListQueuedFunctionsResult(const PFCloudScriptListQueuedFunctionsResult& src);
    ListQueuedFunctionsResult& operator=(const ListQueuedFunctionsResult&) = delete;
    ~ListQueuedFunctionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCloudScriptQueuedFunctionModel, QueuedFunctionModel> m_functions;
};

struct PostFunctionResultForEntityTriggeredActionRequest : public PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest, public BaseModel
{
    PostFunctionResultForEntityTriggeredActionRequest();
    PostFunctionResultForEntityTriggeredActionRequest(const PostFunctionResultForEntityTriggeredActionRequest& src);
    PostFunctionResultForEntityTriggeredActionRequest(PostFunctionResultForEntityTriggeredActionRequest&& src);
    PostFunctionResultForEntityTriggeredActionRequest(const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& src);
    PostFunctionResultForEntityTriggeredActionRequest& operator=(const PostFunctionResultForEntityTriggeredActionRequest&) = delete;
    ~PostFunctionResultForEntityTriggeredActionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    ExecuteFunctionResult m_functionResult;
};

struct PostFunctionResultForFunctionExecutionRequest : public PFCloudScriptPostFunctionResultForFunctionExecutionRequest, public BaseModel
{
    PostFunctionResultForFunctionExecutionRequest();
    PostFunctionResultForFunctionExecutionRequest(const PostFunctionResultForFunctionExecutionRequest& src);
    PostFunctionResultForFunctionExecutionRequest(PostFunctionResultForFunctionExecutionRequest&& src);
    PostFunctionResultForFunctionExecutionRequest(const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& src);
    PostFunctionResultForFunctionExecutionRequest& operator=(const PostFunctionResultForFunctionExecutionRequest&) = delete;
    ~PostFunctionResultForFunctionExecutionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    ExecuteFunctionResult m_functionResult;
};

struct PlayStreamEventEnvelopeModel : public PFCloudScriptPlayStreamEventEnvelopeModel, public SerializableModel
{
    PlayStreamEventEnvelopeModel();
    PlayStreamEventEnvelopeModel(const PlayStreamEventEnvelopeModel& src);
    PlayStreamEventEnvelopeModel(PlayStreamEventEnvelopeModel&& src);
    PlayStreamEventEnvelopeModel(const PFCloudScriptPlayStreamEventEnvelopeModel& src);
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

struct PostFunctionResultForPlayerTriggeredActionRequest : public PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, public BaseModel
{
    PostFunctionResultForPlayerTriggeredActionRequest();
    PostFunctionResultForPlayerTriggeredActionRequest(const PostFunctionResultForPlayerTriggeredActionRequest& src);
    PostFunctionResultForPlayerTriggeredActionRequest(PostFunctionResultForPlayerTriggeredActionRequest&& src);
    PostFunctionResultForPlayerTriggeredActionRequest(const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& src);
    PostFunctionResultForPlayerTriggeredActionRequest& operator=(const PostFunctionResultForPlayerTriggeredActionRequest&) = delete;
    ~PostFunctionResultForPlayerTriggeredActionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    ExecuteFunctionResult m_functionResult;
    PlayerProfileModel m_playerProfile;
    StdExtra::optional<PlayStreamEventEnvelopeModel> m_playStreamEventEnvelope;
};

struct PostFunctionResultForScheduledTaskRequest : public PFCloudScriptPostFunctionResultForScheduledTaskRequest, public BaseModel
{
    PostFunctionResultForScheduledTaskRequest();
    PostFunctionResultForScheduledTaskRequest(const PostFunctionResultForScheduledTaskRequest& src);
    PostFunctionResultForScheduledTaskRequest(PostFunctionResultForScheduledTaskRequest&& src);
    PostFunctionResultForScheduledTaskRequest(const PFCloudScriptPostFunctionResultForScheduledTaskRequest& src);
    PostFunctionResultForScheduledTaskRequest& operator=(const PostFunctionResultForScheduledTaskRequest&) = delete;
    ~PostFunctionResultForScheduledTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    ExecuteFunctionResult m_functionResult;
    NameIdentifier m_scheduledTaskId;
};

struct RegisterHttpFunctionRequest : public PFCloudScriptRegisterHttpFunctionRequest, public BaseModel
{
    RegisterHttpFunctionRequest();
    RegisterHttpFunctionRequest(const RegisterHttpFunctionRequest& src);
    RegisterHttpFunctionRequest(RegisterHttpFunctionRequest&& src);
    RegisterHttpFunctionRequest(const PFCloudScriptRegisterHttpFunctionRequest& src);
    RegisterHttpFunctionRequest& operator=(const RegisterHttpFunctionRequest&) = delete;
    ~RegisterHttpFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    String m_functionUrl;
};

struct RegisterQueuedFunctionRequest : public PFCloudScriptRegisterQueuedFunctionRequest, public BaseModel
{
    RegisterQueuedFunctionRequest();
    RegisterQueuedFunctionRequest(const RegisterQueuedFunctionRequest& src);
    RegisterQueuedFunctionRequest(RegisterQueuedFunctionRequest&& src);
    RegisterQueuedFunctionRequest(const PFCloudScriptRegisterQueuedFunctionRequest& src);
    RegisterQueuedFunctionRequest& operator=(const RegisterQueuedFunctionRequest&) = delete;
    ~RegisterQueuedFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionString;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    String m_queueName;
};

struct UnregisterFunctionRequest : public PFCloudScriptUnregisterFunctionRequest, public BaseModel
{
    UnregisterFunctionRequest();
    UnregisterFunctionRequest(const UnregisterFunctionRequest& src);
    UnregisterFunctionRequest(UnregisterFunctionRequest&& src);
    UnregisterFunctionRequest(const PFCloudScriptUnregisterFunctionRequest& src);
    UnregisterFunctionRequest& operator=(const UnregisterFunctionRequest&) = delete;
    ~UnregisterFunctionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_functionName;
};

} // namespace CloudScriptModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFCloudScriptGetCloudScriptRevisionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptCloudScriptFile& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptGetCloudScriptRevisionResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptCloudScriptVersionStatus& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptGetCloudScriptVersionsResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptSetPublishedRevisionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptUpdateCloudScriptRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptUpdateCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptExecuteCloudScriptRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptExecuteCloudScriptServerRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptExecuteEntityCloudScriptRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptExecuteFunctionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptFunctionExecutionError& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptExecuteFunctionResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptListFunctionsRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptFunctionModel& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptListFunctionsResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptHttpFunctionModel& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptListHttpFunctionsResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptQueuedFunctionModel& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptListQueuedFunctionsResult& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptPlayStreamEventEnvelopeModel& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForScheduledTaskRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptRegisterHttpFunctionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptRegisterQueuedFunctionRequest& input);
template<> inline JsonValue ToJson<>(const PFCloudScriptUnregisterFunctionRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
