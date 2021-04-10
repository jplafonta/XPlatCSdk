#include "stdafx.h"

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "EventsApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace EventsModels;

    PlayFabEventsInstanceAPI::PlayFabEventsInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        // TODO
        /* if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        } */
    }

    PlayFabEventsInstanceAPI::PlayFabEventsInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        // TODO
        /*if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }*/
    }

    SharedPtr<PlayFabApiSettings> PlayFabEventsInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabEventsInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabEventsInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabEvents instance APIs

    AsyncOp<WriteEventsResponse> PlayFabEventsInstanceAPI::WriteEvents(
        const PlayFabEventsWriteEventsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Event/WriteEvents",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<WriteEventsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                WriteEventsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<WriteEventsResponse> PlayFabEventsInstanceAPI::WriteTelemetryEvents(
        const PlayFabEventsWriteEventsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Event/WriteTelemetryEvents",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<WriteEventsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                WriteEventsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
