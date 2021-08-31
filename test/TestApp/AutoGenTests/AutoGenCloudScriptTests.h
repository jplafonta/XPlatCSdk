#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/CloudScript/CloudScriptDataModels.h"

namespace PlayFabUnit
{

class AutoGenCloudScriptTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestCloudScriptAdminGetCloudScriptRevision(TestContext& testContext);

    void TestCloudScriptAdminGetCloudScriptVersions(TestContext& testContext);

    void TestCloudScriptAdminSetPublishedRevision(TestContext& testContext);

    void TestCloudScriptAdminUpdateCloudScript(TestContext& testContext);

    void TestCloudScriptClientExecuteCloudScript(TestContext& testContext);

    void TestCloudScriptServerExecuteCloudScript(TestContext& testContext);

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

    static void LogGetCloudScriptRevisionRequest( PlayFab::CloudScriptModels::GetCloudScriptRevisionRequest* request, const char* testName );
    static void FillGetCloudScriptRevisionRequest( PlayFab::CloudScriptModels::GetCloudScriptRevisionRequest* request );
    static HRESULT LogPFCloudScriptGetCloudScriptRevisionResult( PFCloudScriptGetCloudScriptRevisionResult* result );
    static HRESULT ValidatePFCloudScriptGetCloudScriptRevisionResult( PFCloudScriptGetCloudScriptRevisionResult* result );

    static HRESULT LogPFCloudScriptGetCloudScriptVersionsResult( PFCloudScriptGetCloudScriptVersionsResult* result );
    static HRESULT ValidatePFCloudScriptGetCloudScriptVersionsResult( PFCloudScriptGetCloudScriptVersionsResult* result );

    static void LogSetPublishedRevisionRequest( PlayFab::CloudScriptModels::SetPublishedRevisionRequest* request, const char* testName );
    static void FillSetPublishedRevisionRequest( PlayFab::CloudScriptModels::SetPublishedRevisionRequest* request );

    static void LogUpdateCloudScriptRequest( PlayFab::CloudScriptModels::UpdateCloudScriptRequest* request, const char* testName );
    static void FillUpdateCloudScriptRequest( PlayFab::CloudScriptModels::UpdateCloudScriptRequest* request );
    static HRESULT LogPFCloudScriptUpdateCloudScriptResult( PFCloudScriptUpdateCloudScriptResult* result );
    static HRESULT ValidatePFCloudScriptUpdateCloudScriptResult( PFCloudScriptUpdateCloudScriptResult* result );

    static void LogExecuteCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteCloudScriptRequest* request, const char* testName );
    static void FillExecuteCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteCloudScriptRequest* request );
    static HRESULT LogPFExecuteCloudScriptResult( PFExecuteCloudScriptResult* result );
    static HRESULT ValidatePFExecuteCloudScriptResult( PFExecuteCloudScriptResult* result );

    static void LogExecuteCloudScriptServerRequest( PlayFab::CloudScriptModels::ExecuteCloudScriptServerRequest* request, const char* testName );
    static void FillExecuteCloudScriptServerRequest( PlayFab::CloudScriptModels::ExecuteCloudScriptServerRequest* request );

    static void LogExecuteEntityCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* request, const char* testName );
    static void FillExecuteEntityCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* request );

    static void LogExecuteFunctionRequest( PlayFab::CloudScriptModels::ExecuteFunctionRequest* request, const char* testName );
    static void FillExecuteFunctionRequest( PlayFab::CloudScriptModels::ExecuteFunctionRequest* request );
    static HRESULT LogPFCloudScriptExecuteFunctionResult( PFCloudScriptExecuteFunctionResult* result );
    static HRESULT ValidatePFCloudScriptExecuteFunctionResult( PFCloudScriptExecuteFunctionResult* result );

    static void LogListFunctionsRequest( PlayFab::CloudScriptModels::ListFunctionsRequest* request, const char* testName );
    static void FillListFunctionsRequest( PlayFab::CloudScriptModels::ListFunctionsRequest* request );
    static HRESULT LogPFCloudScriptListFunctionsResult( PFCloudScriptListFunctionsResult* result );
    static HRESULT ValidatePFCloudScriptListFunctionsResult( PFCloudScriptListFunctionsResult* result );

    static HRESULT LogPFCloudScriptListHttpFunctionsResult( PFCloudScriptListHttpFunctionsResult* result );
    static HRESULT ValidatePFCloudScriptListHttpFunctionsResult( PFCloudScriptListHttpFunctionsResult* result );

    static HRESULT LogPFCloudScriptListQueuedFunctionsResult( PFCloudScriptListQueuedFunctionsResult* result );
    static HRESULT ValidatePFCloudScriptListQueuedFunctionsResult( PFCloudScriptListQueuedFunctionsResult* result );

    static void LogPostFunctionResultForEntityTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request, const char* testName );
    static void FillPostFunctionResultForEntityTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request );

    static void LogPostFunctionResultForFunctionExecutionRequest( PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request, const char* testName );
    static void FillPostFunctionResultForFunctionExecutionRequest( PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request );

    static void LogPostFunctionResultForPlayerTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request, const char* testName );
    static void FillPostFunctionResultForPlayerTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request );

    static void LogPostFunctionResultForScheduledTaskRequest( PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request, const char* testName );
    static void FillPostFunctionResultForScheduledTaskRequest( PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request );

    static void LogRegisterHttpFunctionRequest( PlayFab::CloudScriptModels::RegisterHttpFunctionRequest* request, const char* testName );
    static void FillRegisterHttpFunctionRequest( PlayFab::CloudScriptModels::RegisterHttpFunctionRequest* request );

    static void LogRegisterQueuedFunctionRequest( PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* request, const char* testName );
    static void FillRegisterQueuedFunctionRequest( PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* request );

    static void LogUnregisterFunctionRequest( PlayFab::CloudScriptModels::UnregisterFunctionRequest* request, const char* testName );
    static void FillUnregisterFunctionRequest( PlayFab::CloudScriptModels::UnregisterFunctionRequest* request );

    struct CloudScriptTestData
    {
        ~CloudScriptTestData()
        {

        }

    };

    static CloudScriptTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
