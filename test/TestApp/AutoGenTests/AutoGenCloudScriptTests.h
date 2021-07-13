#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/CloudScriptDataModels.h"

namespace PlayFabUnit
{

class AutoGenCloudScriptTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestCloudScriptExecuteEntityCloudScript(TestContext& testContext); 
    void TestCloudScriptExecuteFunction(TestContext& testContext); 
    void TestCloudScriptListFunctions(TestContext& testContext); 
    void TestCloudScriptListHttpFunctions(TestContext& testContext); 
    void TestCloudScriptListQueuedFunctions(TestContext& testContext); 
    void TestCloudScriptPostFunctionResultForEntityTriggeredAction(TestContext& testContext); 
    void TestCloudScriptPostFunctionResultForFunctionExecution(TestContext& testContext); 
    void TestCloudScriptPostFunctionResultForPlayerTriggeredAction(TestContext& testContext); 
    void TestCloudScriptPostFunctionResultForScheduledTask(TestContext& testContext); 
    void TestCloudScriptRegisterHttpFunction(TestContext& testContext); 
    void TestCloudScriptRegisterQueuedFunction(TestContext& testContext); 
    void TestCloudScriptUnregisterFunction(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabCloudScriptExecuteEntityCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* request, const char* testName );
    static void FillPlayFabCloudScriptExecuteEntityCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* request );
    static HRESULT LogPlayFabCloudScriptExecuteCloudScriptResult( PlayFabCloudScriptExecuteCloudScriptResult* result );
    static HRESULT ValidatePlayFabCloudScriptExecuteCloudScriptResult( PlayFabCloudScriptExecuteCloudScriptResult* result );
    static void LogPlayFabCloudScriptExecuteFunctionRequest( PlayFab::CloudScriptModels::ExecuteFunctionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptExecuteFunctionRequest( PlayFab::CloudScriptModels::ExecuteFunctionRequest* request );
    static HRESULT LogPlayFabCloudScriptExecuteFunctionResult( PlayFabCloudScriptExecuteFunctionResult* result );
    static HRESULT ValidatePlayFabCloudScriptExecuteFunctionResult( PlayFabCloudScriptExecuteFunctionResult* result );
    static void LogPlayFabCloudScriptListFunctionsRequest( PlayFab::CloudScriptModels::ListFunctionsRequest* request, const char* testName );
    static void FillPlayFabCloudScriptListFunctionsRequest( PlayFab::CloudScriptModels::ListFunctionsRequest* request );
    static HRESULT LogPlayFabCloudScriptListFunctionsResult( PlayFabCloudScriptListFunctionsResult* result );
    static HRESULT ValidatePlayFabCloudScriptListFunctionsResult( PlayFabCloudScriptListFunctionsResult* result );
    static HRESULT LogPlayFabCloudScriptListHttpFunctionsResult( PlayFabCloudScriptListHttpFunctionsResult* result );
    static HRESULT ValidatePlayFabCloudScriptListHttpFunctionsResult( PlayFabCloudScriptListHttpFunctionsResult* result );
    static HRESULT LogPlayFabCloudScriptListQueuedFunctionsResult( PlayFabCloudScriptListQueuedFunctionsResult* result );
    static HRESULT ValidatePlayFabCloudScriptListQueuedFunctionsResult( PlayFabCloudScriptListQueuedFunctionsResult* result );
    static void LogPlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request );
    static void LogPlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest( PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest( PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request );
    static void LogPlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request );
    static void LogPlayFabCloudScriptPostFunctionResultForScheduledTaskRequest( PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request, const char* testName );
    static void FillPlayFabCloudScriptPostFunctionResultForScheduledTaskRequest( PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request );
    static void LogPlayFabCloudScriptRegisterHttpFunctionRequest( PlayFab::CloudScriptModels::RegisterHttpFunctionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptRegisterHttpFunctionRequest( PlayFab::CloudScriptModels::RegisterHttpFunctionRequest* request );
    static void LogPlayFabCloudScriptRegisterQueuedFunctionRequest( PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptRegisterQueuedFunctionRequest( PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* request );
    static void LogPlayFabCloudScriptUnregisterFunctionRequest( PlayFab::CloudScriptModels::UnregisterFunctionRequest* request, const char* testName );
    static void FillPlayFabCloudScriptUnregisterFunctionRequest( PlayFab::CloudScriptModels::UnregisterFunctionRequest* request );


public:
    PlayFabStateHandle stateHandle{ nullptr };
    PlayFabEntityHandle entityHandle{ nullptr };
    PlayFabGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
