// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// CloudScriptRevisionOption enum.
/// </summary>
enum class PlayFabCloudScriptCloudScriptRevisionOption : uint32_t
{
    Live,
    Latest,
    Specific
};

/// <summary>
/// TriggerType enum.
/// </summary>
enum class PlayFabCloudScriptTriggerType : uint32_t
{
    HTTP,
    Queue
};

/// <summary>
/// PlayFabCloudScriptScriptExecutionError data model.
/// </summary>
typedef struct PlayFabCloudScriptScriptExecutionError
{
    /// <summary>
    /// (Optional) Error code, such as CloudScriptNotFound, JavascriptException, CloudScriptFunctionArgumentSizeExceeded,
    /// CloudScriptAPIRequestCountExceeded, CloudScriptAPIRequestError, or CloudScriptHTTPRequestError.
    /// </summary>
    const char* error;

    /// <summary>
    /// (Optional) Details about the error.
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Point during the execution of the script at which the error occurred, if any.
    /// </summary>
    const char* stackTrace;

} PlayFabCloudScriptScriptExecutionError;

/// <summary>
/// PlayFabCloudScriptLogStatement data model.
/// </summary>
typedef struct PlayFabCloudScriptLogStatement
{
    /// <summary>
    /// (Optional) Optional object accompanying the message as contextual information.
    /// </summary>
    PlayFabJsonObject data;

    /// <summary>
    /// (Optional) 'Debug', 'Info', or 'Error'.
    /// </summary>
    const char* level;

    /// <summary>
    /// (Optional) Message property.
    /// </summary>
    const char* message;

} PlayFabCloudScriptLogStatement;

/// <summary>
/// PlayFabCloudScriptExecuteCloudScriptResult data model. Result payload for PlayFabCloudScriptExecuteEntityCloudScriptAsync.
/// </summary>
typedef struct PlayFabCloudScriptExecuteCloudScriptResult
{
    /// <summary>
    /// Number of PlayFab API requests issued by the CloudScript function.
    /// </summary>
    int32_t aPIRequestsIssued;

    /// <summary>
    /// (Optional) Information about the error, if any, that occurred during execution.
    /// </summary>
    PlayFabCloudScriptScriptExecutionError const* error;

    /// <summary>
    /// ExecutionTimeSeconds property.
    /// </summary>
    double executionTimeSeconds;

    /// <summary>
    /// (Optional) The name of the function that executed.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) The object returned from the CloudScript function, if any.
    /// </summary>
    PlayFabJsonObject functionResult;

    /// <summary>
    /// (Optional) Flag indicating if the FunctionResult was too large and was subsequently dropped from
    /// this event. This only occurs if the total event size is larger than 350KB.
    /// </summary>
    bool const* functionResultTooLarge;

    /// <summary>
    /// Number of external HTTP requests issued by the CloudScript function.
    /// </summary>
    int32_t httpRequestsIssued;

    /// <summary>
    /// (Optional) Entries logged during the function execution. These include both entries logged in
    /// the function code using log.info() and log.error() and error entries for API and HTTP request
    /// failures.
    /// </summary>
    PlayFabCloudScriptLogStatement const* const* logs;

    /// <summary>
    /// Count of logs
    /// </summary>
    uint32_t logsCount;

    /// <summary>
    /// (Optional) Flag indicating if the logs were too large and were subsequently dropped from this
    /// event. This only occurs if the total event size is larger than 350KB after the FunctionResult
    /// was removed.
    /// </summary>
    bool const* logsTooLarge;

    /// <summary>
    /// MemoryConsumedBytes property.
    /// </summary>
    uint32_t memoryConsumedBytes;

    /// <summary>
    /// Processor time consumed while executing the function. This does not include time spent waiting
    /// on API calls or HTTP requests.
    /// </summary>
    double processorTimeSeconds;

    /// <summary>
    /// The revision of the CloudScript that executed.
    /// </summary>
    int32_t revision;

} PlayFabCloudScriptExecuteCloudScriptResult;

/// <summary>
/// PlayFabCloudScriptExecuteEntityCloudScriptRequest data model. Executes CloudScript with the entity
/// profile that is defined in the request. Request object for PlayFabCloudScriptExecuteEntityCloudScriptAsync.
/// </summary>
typedef struct PlayFabCloudScriptExecuteEntityCloudScriptRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the CloudScript function to execute.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) Object that is passed in to the function as the first argument.
    /// </summary>
    PlayFabJsonObject functionParameter;

    /// <summary>
    /// (Optional) Generate a 'entity_executed_cloudscript' PlayStream event containing the results of
    /// the function execution and other contextual information. This event will show up in the PlayStream
    /// debugger console for the player in Game Manager.
    /// </summary>
    bool const* generatePlayStreamEvent;

    /// <summary>
    /// (Optional) Option for which revision of the CloudScript to execute. 'Latest' executes the most
    /// recently created revision, 'Live' executes the current live, published revision, and 'Specific'
    /// executes the specified revision. The default value is 'Specific', if the SpecificRevision parameter
    /// is specified, otherwise it is 'Live'.
    /// </summary>
    PlayFabCloudScriptCloudScriptRevisionOption const* revisionSelection;

    /// <summary>
    /// (Optional) The specific revision to execute, when RevisionSelection is set to 'Specific'.
    /// </summary>
    int32_t const* specificRevision;

} PlayFabCloudScriptExecuteEntityCloudScriptRequest;

/// <summary>
/// PlayFabCloudScriptExecuteFunctionRequest data model. Executes an Azure Function with the profile
/// of the entity that is defined in the request. Request object for PlayFabCloudScriptExecuteFunctionAsync.
/// </summary>
typedef struct PlayFabCloudScriptExecuteFunctionRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the CloudScript function to execute.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) Object that is passed in to the function as the FunctionArgument field of the FunctionExecutionContext
    /// data structure.
    /// </summary>
    PlayFabJsonObject functionParameter;

    /// <summary>
    /// (Optional) Generate a 'entity_executed_cloudscript_function' PlayStream event containing the
    /// results of the function execution and other contextual information. This event will show up in
    /// the PlayStream debugger console for the player in Game Manager.
    /// </summary>
    bool const* generatePlayStreamEvent;

} PlayFabCloudScriptExecuteFunctionRequest;

/// <summary>
/// PlayFabCloudScriptFunctionExecutionError data model.
/// </summary>
typedef struct PlayFabCloudScriptFunctionExecutionError
{
    /// <summary>
    /// (Optional) Error code, such as CloudScriptAzureFunctionsExecutionTimeLimitExceeded, CloudScriptAzureFunctionsArgumentSizeExceeded,
    /// CloudScriptAzureFunctionsReturnSizeExceeded or CloudScriptAzureFunctionsHTTPRequestError.
    /// </summary>
    const char* error;

    /// <summary>
    /// (Optional) Details about the error.
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Point during the execution of the function at which the error occurred, if any.
    /// </summary>
    const char* stackTrace;

} PlayFabCloudScriptFunctionExecutionError;

/// <summary>
/// PlayFabCloudScriptExecuteFunctionResult data model. Result payload for PlayFabCloudScriptExecuteFunctionAsync.
/// </summary>
typedef struct PlayFabCloudScriptExecuteFunctionResult
{
    /// <summary>
    /// (Optional) Error from the CloudScript Azure Function.
    /// </summary>
    PlayFabCloudScriptFunctionExecutionError const* error;

    /// <summary>
    /// The amount of time the function took to execute.
    /// </summary>
    int32_t executionTimeMilliseconds;

    /// <summary>
    /// (Optional) The name of the function that executed.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) The object returned from the function, if any.
    /// </summary>
    PlayFabJsonObject functionResult;

    /// <summary>
    /// (Optional) Flag indicating if the FunctionResult was too large and was subsequently dropped from
    /// this event.
    /// </summary>
    bool const* functionResultTooLarge;

} PlayFabCloudScriptExecuteFunctionResult;

/// <summary>
/// PlayFabCloudScriptFunctionModel data model.
/// </summary>
typedef struct PlayFabCloudScriptFunctionModel
{
    /// <summary>
    /// (Optional) The address of the function.
    /// </summary>
    const char* functionAddress;

    /// <summary>
    /// (Optional) The name the function was registered under.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) The trigger type for the function.
    /// </summary>
    const char* triggerType;

} PlayFabCloudScriptFunctionModel;

/// <summary>
/// PlayFabCloudScriptHttpFunctionModel data model.
/// </summary>
typedef struct PlayFabCloudScriptHttpFunctionModel
{
    /// <summary>
    /// (Optional) The name the function was registered under.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) The URL of the function.
    /// </summary>
    const char* functionUrl;

} PlayFabCloudScriptHttpFunctionModel;

/// <summary>
/// PlayFabCloudScriptListFunctionsRequest data model. A title can have many functions, ListHttpFunctions
/// will return a list of all the currently registered HTTP triggered functions for a given title. Request
/// object for PlayFabCloudScriptListFunctionsAsync, PlayFabCloudScriptListHttpFunctionsAsync, and PlayFabCloudScriptListQueuedFunctionsAsync.
/// </summary>
typedef struct PlayFabCloudScriptListFunctionsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabCloudScriptListFunctionsRequest;

/// <summary>
/// PlayFabCloudScriptListFunctionsResult data model. Result payload for PlayFabCloudScriptListFunctionsAsync.
/// </summary>
typedef struct PlayFabCloudScriptListFunctionsResult
{
    /// <summary>
    /// (Optional) The list of functions that are currently registered for the title.
    /// </summary>
    PlayFabCloudScriptFunctionModel const* const* functions;

    /// <summary>
    /// Count of functions
    /// </summary>
    uint32_t functionsCount;

} PlayFabCloudScriptListFunctionsResult;

/// <summary>
/// PlayFabCloudScriptListHttpFunctionsResult data model. Result payload for PlayFabCloudScriptListHttpFunctionsAsync.
/// </summary>
typedef struct PlayFabCloudScriptListHttpFunctionsResult
{
    /// <summary>
    /// (Optional) The list of HTTP triggered functions that are currently registered for the title.
    /// </summary>
    PlayFabCloudScriptHttpFunctionModel const* const* functions;

    /// <summary>
    /// Count of functions
    /// </summary>
    uint32_t functionsCount;

} PlayFabCloudScriptListHttpFunctionsResult;

/// <summary>
/// PlayFabCloudScriptQueuedFunctionModel data model.
/// </summary>
typedef struct PlayFabCloudScriptQueuedFunctionModel
{
    /// <summary>
    /// (Optional) The connection string for the Azure Storage Account that hosts the queue.
    /// </summary>
    const char* connectionString;

    /// <summary>
    /// (Optional) The name the function was registered under.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) The name of the queue that triggers the Azure Function.
    /// </summary>
    const char* queueName;

} PlayFabCloudScriptQueuedFunctionModel;

/// <summary>
/// PlayFabCloudScriptListQueuedFunctionsResult data model. Result payload for PlayFabCloudScriptListQueuedFunctionsAsync.
/// </summary>
typedef struct PlayFabCloudScriptListQueuedFunctionsResult
{
    /// <summary>
    /// (Optional) The list of Queue triggered functions that are currently registered for the title.
    /// </summary>
    PlayFabCloudScriptQueuedFunctionModel const* const* functions;

    /// <summary>
    /// Count of functions
    /// </summary>
    uint32_t functionsCount;

} PlayFabCloudScriptListQueuedFunctionsResult;

/// <summary>
/// PlayFabCloudScriptNameIdentifier data model. Identifier by either name or ID. Note that a name may
/// change due to renaming, or reused after being deleted. ID is immutable and unique.
/// </summary>
typedef struct PlayFabCloudScriptNameIdentifier
{
    /// <summary>
    /// (Optional) Id Identifier, if present.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Name Identifier, if present.
    /// </summary>
    const char* name;

} PlayFabCloudScriptNameIdentifier;

/// <summary>
/// PlayFabCloudScriptPlayStreamEventEnvelopeModel data model.
/// </summary>
typedef struct PlayFabCloudScriptPlayStreamEventEnvelopeModel
{
    /// <summary>
    /// (Optional) The ID of the entity the event is about.
    /// </summary>
    const char* entityId;

    /// <summary>
    /// (Optional) The type of the entity the event is about.
    /// </summary>
    const char* entityType;

    /// <summary>
    /// (Optional) Data specific to this event.
    /// </summary>
    const char* eventData;

    /// <summary>
    /// (Optional) The name of the event.
    /// </summary>
    const char* eventName;

    /// <summary>
    /// (Optional) The namespace of the event.
    /// </summary>
    const char* eventNamespace;

    /// <summary>
    /// (Optional) Settings for the event.
    /// </summary>
    const char* eventSettings;

} PlayFabCloudScriptPlayStreamEventEnvelopeModel;

/// <summary>
/// PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest data model. Request object for
/// PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionAsync.
/// </summary>
typedef struct PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The result of the function execution.
    /// </summary>
    PlayFabCloudScriptExecuteFunctionResult const* functionResult;

} PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest;

/// <summary>
/// PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest data model. Request object for PlayFabCloudScriptPostFunctionResultForFunctionExecutionAsync.
/// </summary>
typedef struct PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The result of the function execution.
    /// </summary>
    PlayFabCloudScriptExecuteFunctionResult const* functionResult;

} PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest;

/// <summary>
/// PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest data model. Request object for
/// PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionAsync.
/// </summary>
typedef struct PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The result of the function execution.
    /// </summary>
    PlayFabCloudScriptExecuteFunctionResult const* functionResult;

    /// <summary>
    /// The player profile the function was invoked with.
    /// </summary>
    PlayFabPlayerProfileModel const* playerProfile;

    /// <summary>
    /// (Optional) The triggering PlayStream event, if any, that caused the function to be invoked.
    /// </summary>
    PlayFabCloudScriptPlayStreamEventEnvelopeModel const* playStreamEventEnvelope;

} PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;

/// <summary>
/// PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest data model. Request object for PlayFabCloudScriptPostFunctionResultForScheduledTaskAsync.
/// </summary>
typedef struct PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The result of the function execution.
    /// </summary>
    PlayFabCloudScriptExecuteFunctionResult const* functionResult;

    /// <summary>
    /// The id of the scheduled task that invoked the function.
    /// </summary>
    PlayFabCloudScriptNameIdentifier const* scheduledTaskId;

} PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest;

/// <summary>
/// PlayFabCloudScriptRegisterHttpFunctionRequest data model. Request object for PlayFabCloudScriptRegisterHttpFunctionAsync.
/// </summary>
typedef struct PlayFabCloudScriptRegisterHttpFunctionRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The name of the function to register.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// Full URL for Azure Function that implements the function.
    /// </summary>
    const char* functionUrl;

} PlayFabCloudScriptRegisterHttpFunctionRequest;

/// <summary>
/// PlayFabCloudScriptRegisterQueuedFunctionRequest data model. A title can have many functions, RegisterQueuedFunction
/// associates a function name with a queue name and connection string. Request object for PlayFabCloudScriptRegisterQueuedFunctionAsync.
/// </summary>
typedef struct PlayFabCloudScriptRegisterQueuedFunctionRequest
{
    /// <summary>
    /// A connection string for the storage account that hosts the queue for the Azure Function.
    /// </summary>
    const char* connectionString;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The name of the function to register.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// The name of the queue for the Azure Function.
    /// </summary>
    const char* queueName;

} PlayFabCloudScriptRegisterQueuedFunctionRequest;

/// <summary>
/// PlayFabCloudScriptUnregisterFunctionRequest data model. Request object for PlayFabCloudScriptUnregisterFunctionAsync.
/// </summary>
typedef struct PlayFabCloudScriptUnregisterFunctionRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The name of the function to unregister.
    /// </summary>
    const char* functionName;

} PlayFabCloudScriptUnregisterFunctionRequest;

#pragma pop_macro("IN")

}
