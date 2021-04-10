#include "stdafx.h"
#include "GlobalState.h"
#include "AsyncProvider.h"
#include <httpClient/httpClient.h>

using namespace PlayFab;

GlobalState::GlobalState(String&& titleId, _In_opt_z_ const char* secretKey) :
    m_httpClient{ MakeShared<PlayFab::HttpClient>(std::move(titleId)) },
    m_secretKey{ secretKey ? MakeShared<String>(secretKey) : nullptr },
    clientAuthAPI{ m_httpClient },
    serverAuthAPI{ m_httpClient, m_secretKey },
    authenticationAuthAPI{ m_httpClient, m_secretKey },
    adminAPI{ m_httpClient, m_secretKey },
    matchmakerAPI{ m_httpClient, m_secretKey },
    serverAPI{ m_httpClient, m_secretKey }
{
}

SharedPtr<HttpClient const> GlobalState::HttpClient() const
{
    return m_httpClient;
}

PlayFabGlobalState::PlayFabGlobalState(_In_z_ const char* titleId, _In_opt_z_ const char* secretKey) :
    state{ MakeShared<GlobalState>(titleId, secretKey) }
{
}

HRESULT PlayFabGlobalState::Create(
    _In_z_ const char* titleId,
    _In_opt_z_ const char* secretKey,
    _Outptr_ PlayFabStateHandle* stateHandle
)
{
    RETURN_HR_INVALIDARG_IF_NULL(titleId);
    RETURN_IF_FAILED(HCInitialize(nullptr));

    Allocator<PlayFabGlobalState> a{};
    *stateHandle = UniquePtr<PlayFabGlobalState>(new (a.allocate(1)) PlayFabGlobalState(titleId, secretKey)).release();
    return S_OK;
}

HRESULT PlayFabGlobalState::CleanupAsync(XAsyncBlock* async)
{
    struct CleanupProvider : public Provider
    {
        CleanupProvider(XAsyncBlock* async, PlayFabStateHandle handle) :
            Provider{ async },
            stateHandle{ handle }
        {
        }

        HRESULT Begin(TaskQueue&& queue) override
        {
            if (stateHandle->state.use_count() > 1)
            {
                // Need to decide if it is client's responsibility to wait for any pending API calls to complete before
                // calling cleanup or if we should wait here
                return E_FAIL;
            }
            else
            {
                // stateHandle->state is the only remaining reference. GlobalState will be destroyed on this thread before
                // control returns to client
                UniquePtr<PlayFabGlobalState> reclaim{ stateHandle };

                // Cleanup libHttpClient
                hcCleanupQueue = queue.DeriveWorkerQueue();
                hcCleanupAsync.queue = hcCleanupQueue.GetHandle();
                hcCleanupAsync.callback = HCCleanupComplete;
                hcCleanupAsync.context = this;

                RETURN_IF_FAILED(HCCleanupAsync(&hcCleanupAsync));

                return E_PENDING;
            }
        }

        static void CALLBACK HCCleanupComplete(XAsyncBlock* async)
        {
            CleanupProvider* self = static_cast<CleanupProvider*>(async->context);
            assert(self);

            HRESULT hr = XAsyncGetStatus(async, false);
            assert(hr != E_PENDING);

            if (hr == E_HC_INTERNAL_STILLINUSE)
            {
                // If something else is still referencing libHttpClient, we do not care
                self->Complete(0);
                return;
            }
            else if (FAILED(hr))
            {
                // Pass along HCCleanup error. Note that state is still destroyed
                self->Fail(hr);
                return;
            }

            self->Complete(0);
        }

        XAsyncBlock hcCleanupAsync{};
        TaskQueue hcCleanupQueue;
        PlayFabStateHandle stateHandle;
    };

    return Provider::Run(UniquePtr<Provider>{ MakeUnique<CleanupProvider>(async, this).release() });
}
