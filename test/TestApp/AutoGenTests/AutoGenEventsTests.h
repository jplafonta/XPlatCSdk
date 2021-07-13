#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/EventsDataModels.h"

namespace PlayFabUnit
{

class AutoGenEventsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestEventsWriteEvents(TestContext& testContext); 
    void TestEventsWriteTelemetryEvents(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabEventsWriteEventsRequest( PlayFab::EventsModels::WriteEventsRequest* request, const char* testName );
    static void FillPlayFabEventsWriteEventsRequest( PlayFab::EventsModels::WriteEventsRequest* request );
    static HRESULT LogPlayFabEventsWriteEventsResponse( PlayFabEventsWriteEventsResponse* result );
    static HRESULT ValidatePlayFabEventsWriteEventsResponse( PlayFabEventsWriteEventsResponse* result );


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
