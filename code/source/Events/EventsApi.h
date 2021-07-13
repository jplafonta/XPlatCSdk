#pragma once

#include "EventsDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class EventsAPI
{
public:
    EventsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    EventsAPI(const EventsAPI& source) = delete;
    EventsAPI& operator=(const EventsAPI& source) = delete;
    ~EventsAPI() = default;

    // ------------ Generated API calls
    AsyncOp<EventsModels::WriteEventsResponse> WriteEvents(const PlayFabEventsWriteEventsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<EventsModels::WriteEventsResponse> WriteTelemetryEvents(const PlayFabEventsWriteEventsRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
