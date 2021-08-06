#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/ScheduledTask/ScheduledTaskDataModels.h"

namespace PlayFabUnit
{

class AutoGenScheduledTaskTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestScheduledTaskAdminAbortTaskInstance(TestContext& testContext); 
    void TestScheduledTaskAdminCreateActionsOnPlayersInSegmentTask(TestContext& testContext); 
    void TestScheduledTaskAdminCreateCloudScriptTask(TestContext& testContext); 
    void TestScheduledTaskAdminCreateInsightsScheduledScalingTask(TestContext& testContext); 
    void TestScheduledTaskAdminDeleteTask(TestContext& testContext); 
    void TestScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstance(TestContext& testContext); 
    void TestScheduledTaskAdminGetCloudScriptTaskInstance(TestContext& testContext); 
    void TestScheduledTaskAdminGetTaskInstances(TestContext& testContext); 
    void TestScheduledTaskAdminGetTasks(TestContext& testContext); 
    void TestScheduledTaskAdminRunTask(TestContext& testContext); 
    void TestScheduledTaskAdminUpdateTask(TestContext& testContext); 


protected:
    void AddTests();


    static void LogAbortTaskInstanceRequest( PlayFab::ScheduledTaskModels::AbortTaskInstanceRequest* request, const char* testName );
    static void FillAbortTaskInstanceRequest( PlayFab::ScheduledTaskModels::AbortTaskInstanceRequest* request );
    static void LogCreateActionsOnPlayerSegmentTaskRequest( PlayFab::ScheduledTaskModels::CreateActionsOnPlayerSegmentTaskRequest* request, const char* testName );
    static void FillCreateActionsOnPlayerSegmentTaskRequest( PlayFab::ScheduledTaskModels::CreateActionsOnPlayerSegmentTaskRequest* request );
    static HRESULT LogPFScheduledTaskCreateTaskResult( PFScheduledTaskCreateTaskResult* result );
    static HRESULT ValidatePFScheduledTaskCreateTaskResult( PFScheduledTaskCreateTaskResult* result );
    static void LogCreateCloudScriptTaskRequest( PlayFab::ScheduledTaskModels::CreateCloudScriptTaskRequest* request, const char* testName );
    static void FillCreateCloudScriptTaskRequest( PlayFab::ScheduledTaskModels::CreateCloudScriptTaskRequest* request );
    static void LogCreateInsightsScheduledScalingTaskRequest( PlayFab::ScheduledTaskModels::CreateInsightsScheduledScalingTaskRequest* request, const char* testName );
    static void FillCreateInsightsScheduledScalingTaskRequest( PlayFab::ScheduledTaskModels::CreateInsightsScheduledScalingTaskRequest* request );
    static void LogDeleteTaskRequest( PlayFab::ScheduledTaskModels::DeleteTaskRequest* request, const char* testName );
    static void FillDeleteTaskRequest( PlayFab::ScheduledTaskModels::DeleteTaskRequest* request );
    static void LogGetTaskInstanceRequest( PlayFab::ScheduledTaskModels::GetTaskInstanceRequest* request, const char* testName );
    static void FillGetTaskInstanceRequest( PlayFab::ScheduledTaskModels::GetTaskInstanceRequest* request );
    static HRESULT LogPFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult( PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult* result );
    static HRESULT ValidatePFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult( PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult* result );
    static HRESULT LogPFScheduledTaskGetCloudScriptTaskInstanceResult( PFScheduledTaskGetCloudScriptTaskInstanceResult* result );
    static HRESULT ValidatePFScheduledTaskGetCloudScriptTaskInstanceResult( PFScheduledTaskGetCloudScriptTaskInstanceResult* result );
    static void LogGetTaskInstancesRequest( PlayFab::ScheduledTaskModels::GetTaskInstancesRequest* request, const char* testName );
    static void FillGetTaskInstancesRequest( PlayFab::ScheduledTaskModels::GetTaskInstancesRequest* request );
    static HRESULT LogPFScheduledTaskGetTaskInstancesResult( PFScheduledTaskGetTaskInstancesResult* result );
    static HRESULT ValidatePFScheduledTaskGetTaskInstancesResult( PFScheduledTaskGetTaskInstancesResult* result );
    static void LogGetTasksRequest( PlayFab::ScheduledTaskModels::GetTasksRequest* request, const char* testName );
    static void FillGetTasksRequest( PlayFab::ScheduledTaskModels::GetTasksRequest* request );
    static HRESULT LogPFScheduledTaskGetTasksResult( PFScheduledTaskGetTasksResult* result );
    static HRESULT ValidatePFScheduledTaskGetTasksResult( PFScheduledTaskGetTasksResult* result );
    static void LogRunTaskRequest( PlayFab::ScheduledTaskModels::RunTaskRequest* request, const char* testName );
    static void FillRunTaskRequest( PlayFab::ScheduledTaskModels::RunTaskRequest* request );
    static HRESULT LogPFScheduledTaskRunTaskResult( PFScheduledTaskRunTaskResult* result );
    static HRESULT ValidatePFScheduledTaskRunTaskResult( PFScheduledTaskRunTaskResult* result );
    static void LogUpdateTaskRequest( PlayFab::ScheduledTaskModels::UpdateTaskRequest* request, const char* testName );
    static void FillUpdateTaskRequest( PlayFab::ScheduledTaskModels::UpdateTaskRequest* request );

public:
    PFStateHandle stateHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
