#pragma once

#ifndef DISABLE_PLAYFABENTITY_API

#include "PlayFabEventPipeline.h"

#include <unordered_map>

namespace PlayFab
{
    /// <summary>
    /// The enumeration of all built-in event pipelines
    /// </summary>
    enum class EventPipelineKey
    {
        PlayFabPlayStream, // PlayFab (PlayStream) event pipeline
        PlayFabTelemetry // PlayFab event pipeline, bypasses PlayStream
    };

    /// <summary>
    /// Interface for any event router
    /// </summary>
    class IPlayFabEventRouter
    {
    public:
        virtual ~IPlayFabEventRouter() {}
        virtual void RouteEvent(SharedPtr<const IPlayFabEmitEventRequest> request) const = 0; // Route an event to pipelines. This method must be thread-safe.
        const UnorderedMap<EventPipelineKey, SharedPtr<IPlayFabEventPipeline>>& GetPipelines() const;

        virtual void Update() = 0;
    protected:
        UnorderedMap<EventPipelineKey, SharedPtr<IPlayFabEventPipeline>> pipelines;
    };

    /// <summary>
    /// Default implementation of event router
    /// </summary>
    class PlayFabEventRouter : public IPlayFabEventRouter
    {
    public:
        PlayFabEventRouter(bool threadedEventPipeline);
        virtual void RouteEvent(SharedPtr<const IPlayFabEmitEventRequest> request) const override;

        /// <summary>
        /// Updates underlying PlayFabEventPipeline
        /// This function must be called every game tick if threadedEventPipeline is set to false
        /// </summary>
        virtual void Update() override;
    private:
    };
}

#endif
