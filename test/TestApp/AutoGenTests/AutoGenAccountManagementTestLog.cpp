#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAccountManagementTests.h"
#include "XAsyncHelper.h"

uint32_t g_AccountManagementTestIndex = 1;

namespace PlayFabUnit
{

 

void AutoGenAccountManagementTests::LogBanUsersRequest( PlayFab::AccountManagementModels::BanUsersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementBanUsersRequest struct:
    // request->bans: PFAccountManagementBanRequest const* const*
    // request->bansCount: uint32_t    
    ss << "  bansCount " << request->bansCount; Log(ss);

    // PFAccountManagementBanRequest
    for( uint32_t i=0; i<request->bansCount; i++ )
    {
            ss << "  request->bans[" << i << "]:" << request->bans[i]; Log(ss); // PFAccountManagementBanRequest
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementBanUsersResult(PFAccountManagementBanUsersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementBanUsersResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PFAccountManagementBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
            ss << "  result->banData[" << i << "]:" << result->banData[i]; Log(ss); // PFAccountManagementBanInfo
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogDeleteMasterPlayerAccountRequest( PlayFab::AccountManagementModels::DeleteMasterPlayerAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementDeleteMasterPlayerAccountRequest struct:
    // request->metaData: const char*
    if( request->metaData ) { ss << "  metaData " << request->metaData; Log(ss); } else { ss << "  metaData = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementDeleteMasterPlayerAccountResult(PFAccountManagementDeleteMasterPlayerAccountResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementDeleteMasterPlayerAccountResult
    if( result->jobReceiptId ) { ss << "  jobReceiptId " << result->jobReceiptId; Log(ss); } else { ss << "  jobReceiptId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  titleIdsCount " << result->titleIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->titleIdsCount; i++ )
    {
            ss << "  result->titleIds[" << i << "]:" << result->titleIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogDeletePlayerRequest( PlayFab::AccountManagementModels::DeletePlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementDeletePlayerRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogExportMasterPlayerDataRequest( PlayFab::AccountManagementModels::ExportMasterPlayerDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementExportMasterPlayerDataRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementExportMasterPlayerDataResult(PFAccountManagementExportMasterPlayerDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementExportMasterPlayerDataResult
    if( result->jobReceiptId ) { ss << "  jobReceiptId " << result->jobReceiptId; Log(ss); } else { ss << "  jobReceiptId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayedTitleListRequest( PlayFab::AccountManagementModels::GetPlayedTitleListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayedTitleListRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayedTitleListResult(PFAccountManagementGetPlayedTitleListResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayedTitleListResult    
    ss << "  titleIdsCount " << result->titleIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->titleIdsCount; i++ )
    {
            ss << "  result->titleIds[" << i << "]:" << result->titleIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayerIdFromAuthTokenRequest( PlayFab::AccountManagementModels::GetPlayerIdFromAuthTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayerIdFromAuthTokenRequest struct:
    // request->token: const char*
    if( request->token ) { ss << "  token " << request->token; Log(ss); } else { ss << "  token = nullptr"; Log(ss); } // Class: const char* 
    ss << "  tokenType " << request->tokenType; Log(ss); // Class: PFAccountManagementAuthTokenType 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayerIdFromAuthTokenResult(PFAccountManagementGetPlayerIdFromAuthTokenResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayerIdFromAuthTokenResult
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayerProfileRequest( PlayFab::AccountManagementModels::GetPlayerProfileRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayerProfileRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PFPlayerProfileViewConstraints 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayerProfileResult(PFAccountManagementGetPlayerProfileResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayerProfileResult
    ss << "  playerProfile " << result->playerProfile; Log(ss); // Class: PFPlayerProfileModel 
    return S_OK;
}

void AutoGenAccountManagementTests::LogLookupUserAccountInfoRequest( PlayFab::AccountManagementModels::LookupUserAccountInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLookupUserAccountInfoRequest struct:
    // request->email: const char*
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->titleDisplayName ) { ss << "  titleDisplayName " << request->titleDisplayName; Log(ss); } else { ss << "  titleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementLookupUserAccountInfoResult(PFAccountManagementLookupUserAccountInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementLookupUserAccountInfoResult
    ss << "  userInfo " << result->userInfo; Log(ss); // Class: PFUserAccountInfo 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetUserBansRequest( PlayFab::AccountManagementModels::GetUserBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetUserBansRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetUserBansResult(PFAccountManagementGetUserBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetUserBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PFAccountManagementBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
            ss << "  result->banData[" << i << "]:" << result->banData[i]; Log(ss); // PFAccountManagementBanInfo
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogResetPasswordRequest( PlayFab::AccountManagementModels::ResetPasswordRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementResetPasswordRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->password ) { ss << "  password " << request->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( request->token ) { ss << "  token " << request->token; Log(ss); } else { ss << "  token = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogRevokeAllBansForUserRequest( PlayFab::AccountManagementModels::RevokeAllBansForUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementRevokeAllBansForUserRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementRevokeAllBansForUserResult(PFAccountManagementRevokeAllBansForUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementRevokeAllBansForUserResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PFAccountManagementBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
            ss << "  result->banData[" << i << "]:" << result->banData[i]; Log(ss); // PFAccountManagementBanInfo
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogRevokeBansRequest( PlayFab::AccountManagementModels::RevokeBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementRevokeBansRequest struct:
    // request->banIds: const char* const*
    // request->banIdsCount: uint32_t    
    ss << "  banIdsCount " << request->banIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->banIdsCount; i++ )
    {
            ss << "  request->banIds[" << i << "]:" << request->banIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementRevokeBansResult(PFAccountManagementRevokeBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementRevokeBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PFAccountManagementBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
            ss << "  result->banData[" << i << "]:" << result->banData[i]; Log(ss); // PFAccountManagementBanInfo
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogAdminSendAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::AdminSendAccountRecoveryEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogUpdateBansRequest( PlayFab::AccountManagementModels::UpdateBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUpdateBansRequest struct:
    // request->bans: PFAccountManagementUpdateBanRequest const* const*
    // request->bansCount: uint32_t    
    ss << "  bansCount " << request->bansCount; Log(ss);

    // PFAccountManagementUpdateBanRequest
    for( uint32_t i=0; i<request->bansCount; i++ )
    {
            ss << "  request->bans[" << i << "]:" << request->bans[i]; Log(ss); // PFAccountManagementUpdateBanRequest
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementUpdateBansResult(PFAccountManagementUpdateBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementUpdateBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PFAccountManagementBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
            ss << "  result->banData[" << i << "]:" << result->banData[i]; Log(ss); // PFAccountManagementBanInfo
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogAdminUpdateUserTitleDisplayNameRequest( PlayFab::AccountManagementModels::AdminUpdateUserTitleDisplayNameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementUpdateUserTitleDisplayNameResult(PFAccountManagementUpdateUserTitleDisplayNameResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementUpdateUserTitleDisplayNameResult
    if( result->displayName ) { ss << "  displayName " << result->displayName; Log(ss); } else { ss << "  displayName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAccountManagementTests::LogClientAddGenericIDRequest( PlayFab::AccountManagementModels::ClientAddGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogAddOrUpdateContactEmailRequest( PlayFab::AccountManagementModels::AddOrUpdateContactEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementAddOrUpdateContactEmailRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->emailAddress ) { ss << "  emailAddress " << request->emailAddress; Log(ss); } else { ss << "  emailAddress = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogAddUsernamePasswordRequest( PlayFab::AccountManagementModels::AddUsernamePasswordRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementAddUsernamePasswordRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->password ) { ss << "  password " << request->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementAddUsernamePasswordResult(PFAccountManagementAddUsernamePasswordResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementAddUsernamePasswordResult
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetAccountInfoRequest( PlayFab::AccountManagementModels::GetAccountInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetAccountInfoRequest struct:
    // request->email: const char*
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->titleDisplayName ) { ss << "  titleDisplayName " << request->titleDisplayName; Log(ss); } else { ss << "  titleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetAccountInfoResult(PFAccountManagementGetAccountInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetAccountInfoResult
    ss << "  accountInfo " << result->accountInfo; Log(ss); // Class: PFUserAccountInfo 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayerCombinedInfoRequest( PlayFab::GetPlayerCombinedInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayerCombinedInfoRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  infoRequestParameters " << request->infoRequestParameters; Log(ss); // Class: PFGetPlayerCombinedInfoRequestParams 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFGetPlayerCombinedInfoResult(PFGetPlayerCombinedInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayerCombinedInfoResult
    ss << "  infoResultPayload " << result->infoResultPayload; Log(ss); // Class: PFGetPlayerCombinedInfoResultPayload 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromFacebookIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromFacebookIDsRequest struct:
    // request->facebookIDs: const char* const*
    // request->facebookIDsCount: uint32_t    
    ss << "  facebookIDsCount " << request->facebookIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->facebookIDsCount; i++ )
    {
            ss << "  request->facebookIDs[" << i << "]:" << request->facebookIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromFacebookIDsResult(PFAccountManagementGetPlayFabIDsFromFacebookIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromFacebookIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementFacebookPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementFacebookPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromFacebookInstantGamesIdsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest struct:
    // request->facebookInstantGamesIds: const char* const*
    // request->facebookInstantGamesIdsCount: uint32_t    
    ss << "  facebookInstantGamesIdsCount " << request->facebookInstantGamesIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->facebookInstantGamesIdsCount; i++ )
    {
            ss << "  request->facebookInstantGamesIds[" << i << "]:" << request->facebookInstantGamesIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult(PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementFacebookInstantGamesPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementFacebookInstantGamesPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromGameCenterIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGameCenterIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromGameCenterIDsRequest struct:
    // request->gameCenterIDs: const char* const*
    // request->gameCenterIDsCount: uint32_t    
    ss << "  gameCenterIDsCount " << request->gameCenterIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->gameCenterIDsCount; i++ )
    {
            ss << "  request->gameCenterIDs[" << i << "]:" << request->gameCenterIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromGameCenterIDsResult(PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromGameCenterIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementGameCenterPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementGameCenterPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromGenericIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGenericIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromGenericIDsRequest struct:
    // request->genericIDs: PFAccountManagementGenericServiceId const* const*
    // request->genericIDsCount: uint32_t    
    ss << "  genericIDsCount " << request->genericIDsCount; Log(ss);

    // PFAccountManagementGenericServiceId
    for( uint32_t i=0; i<request->genericIDsCount; i++ )
    {
            ss << "  request->genericIDs[" << i << "]:" << request->genericIDs[i]; Log(ss); // PFAccountManagementGenericServiceId
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromGenericIDsResult(PFAccountManagementGetPlayFabIDsFromGenericIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromGenericIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementGenericPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementGenericPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromGoogleIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGoogleIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromGoogleIDsRequest struct:
    // request->googleIDs: const char* const*
    // request->googleIDsCount: uint32_t    
    ss << "  googleIDsCount " << request->googleIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->googleIDsCount; i++ )
    {
            ss << "  request->googleIDs[" << i << "]:" << request->googleIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromGoogleIDsResult(PFAccountManagementGetPlayFabIDsFromGoogleIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromGoogleIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementGooglePlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementGooglePlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromKongregateIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromKongregateIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromKongregateIDsRequest struct:
    // request->kongregateIDs: const char* const*
    // request->kongregateIDsCount: uint32_t    
    ss << "  kongregateIDsCount " << request->kongregateIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->kongregateIDsCount; i++ )
    {
            ss << "  request->kongregateIDs[" << i << "]:" << request->kongregateIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromKongregateIDsResult(PFAccountManagementGetPlayFabIDsFromKongregateIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromKongregateIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementKongregatePlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementKongregatePlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest struct:
    // request->nintendoSwitchDeviceIds: const char* const*
    // request->nintendoSwitchDeviceIdsCount: uint32_t    
    ss << "  nintendoSwitchDeviceIdsCount " << request->nintendoSwitchDeviceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->nintendoSwitchDeviceIdsCount; i++ )
    {
            ss << "  request->nintendoSwitchDeviceIds[" << i << "]:" << request->nintendoSwitchDeviceIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult(PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementNintendoSwitchPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementNintendoSwitchPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromPSNAccountIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest struct:
    // request->issuerId: int32_t const*
    ss << "  issuerId " << request->issuerId; Log(ss); // Class: int32_t     
    ss << "  PSNAccountIDsCount " << request->PSNAccountIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->PSNAccountIDsCount; i++ )
    {
            ss << "  request->PSNAccountIDs[" << i << "]:" << request->PSNAccountIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult(PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromPSNAccountIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementPSNAccountPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementPSNAccountPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromSteamIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromSteamIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromSteamIDsRequest struct:
    // request->steamStringIDs: const char* const*
    // request->steamStringIDsCount: uint32_t    
    ss << "  steamStringIDsCount " << request->steamStringIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->steamStringIDsCount; i++ )
    {
            ss << "  request->steamStringIDs[" << i << "]:" << request->steamStringIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromSteamIDsResult(PFAccountManagementGetPlayFabIDsFromSteamIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromSteamIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementSteamPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementSteamPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromTwitchIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromTwitchIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromTwitchIDsRequest struct:
    // request->twitchIds: const char* const*
    // request->twitchIdsCount: uint32_t    
    ss << "  twitchIdsCount " << request->twitchIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->twitchIdsCount; i++ )
    {
            ss << "  request->twitchIds[" << i << "]:" << request->twitchIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromTwitchIDsResult(PFAccountManagementGetPlayFabIDsFromTwitchIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromTwitchIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementTwitchPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementTwitchPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetPlayFabIDsFromXboxLiveIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest struct:
    // request->sandbox: const char*
    if( request->sandbox ) { ss << "  sandbox " << request->sandbox; Log(ss); } else { ss << "  sandbox = nullptr"; Log(ss); } // Class: const char*     
    ss << "  xboxLiveAccountIDsCount " << request->xboxLiveAccountIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->xboxLiveAccountIDsCount; i++ )
    {
            ss << "  request->xboxLiveAccountIDs[" << i << "]:" << request->xboxLiveAccountIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult(PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetPlayFabIDsFromXboxLiveIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementXboxLiveAccountPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementXboxLiveAccountPlayFabIdPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogLinkAndroidDeviceIDRequest( PlayFab::AccountManagementModels::LinkAndroidDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkAndroidDeviceIDRequest struct:
    // request->androidDevice: const char*
    if( request->androidDevice ) { ss << "  androidDevice " << request->androidDevice; Log(ss); } else { ss << "  androidDevice = nullptr"; Log(ss); } // Class: const char* 
    if( request->androidDeviceId ) { ss << "  androidDeviceId " << request->androidDeviceId; Log(ss); } else { ss << "  androidDeviceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->OS ) { ss << "  OS " << request->OS; Log(ss); } else { ss << "  OS = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkAppleRequest( PlayFab::AccountManagementModels::LinkAppleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkAppleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->identityToken ) { ss << "  identityToken " << request->identityToken; Log(ss); } else { ss << "  identityToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkCustomIDRequest( PlayFab::AccountManagementModels::LinkCustomIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkCustomIDRequest struct:
    // request->customId: const char*
    if( request->customId ) { ss << "  customId " << request->customId; Log(ss); } else { ss << "  customId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenAccountManagementTests::LogLinkFacebookAccountRequest( PlayFab::AccountManagementModels::LinkFacebookAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkFacebookAccountRequest struct:
    // request->accessToken: const char*
    if( request->accessToken ) { ss << "  accessToken " << request->accessToken; Log(ss); } else { ss << "  accessToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenAccountManagementTests::LogLinkFacebookInstantGamesIdRequest( PlayFab::AccountManagementModels::LinkFacebookInstantGamesIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkFacebookInstantGamesIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->facebookInstantGamesSignature ) { ss << "  facebookInstantGamesSignature " << request->facebookInstantGamesSignature; Log(ss); } else { ss << "  facebookInstantGamesSignature = nullptr"; Log(ss); } // Class: const char* 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenAccountManagementTests::LogLinkGameCenterAccountRequest( PlayFab::AccountManagementModels::LinkGameCenterAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkGameCenterAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->gameCenterId ) { ss << "  gameCenterId " << request->gameCenterId; Log(ss); } else { ss << "  gameCenterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->publicKeyUrl ) { ss << "  publicKeyUrl " << request->publicKeyUrl; Log(ss); } else { ss << "  publicKeyUrl = nullptr"; Log(ss); } // Class: const char* 
    if( request->salt ) { ss << "  salt " << request->salt; Log(ss); } else { ss << "  salt = nullptr"; Log(ss); } // Class: const char* 
    if( request->signature ) { ss << "  signature " << request->signature; Log(ss); } else { ss << "  signature = nullptr"; Log(ss); } // Class: const char* 
    if( request->timestamp ) { ss << "  timestamp " << request->timestamp; Log(ss); } else { ss << "  timestamp = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkGoogleAccountRequest( PlayFab::AccountManagementModels::LinkGoogleAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkGoogleAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->serverAuthCode ) { ss << "  serverAuthCode " << request->serverAuthCode; Log(ss); } else { ss << "  serverAuthCode = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkIOSDeviceIDRequest( PlayFab::AccountManagementModels::LinkIOSDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkIOSDeviceIDRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->deviceId ) { ss << "  deviceId " << request->deviceId; Log(ss); } else { ss << "  deviceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->deviceModel ) { ss << "  deviceModel " << request->deviceModel; Log(ss); } else { ss << "  deviceModel = nullptr"; Log(ss); } // Class: const char* 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->OS ) { ss << "  OS " << request->OS; Log(ss); } else { ss << "  OS = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkKongregateAccountRequest( PlayFab::AccountManagementModels::LinkKongregateAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkKongregateAccountRequest struct:
    // request->authTicket: const char*
    if( request->authTicket ) { ss << "  authTicket " << request->authTicket; Log(ss); } else { ss << "  authTicket = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->kongregateId ) { ss << "  kongregateId " << request->kongregateId; Log(ss); } else { ss << "  kongregateId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkNintendoServiceAccountRequest( PlayFab::AccountManagementModels::LinkNintendoServiceAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkNintendoServiceAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->identityToken ) { ss << "  identityToken " << request->identityToken; Log(ss); } else { ss << "  identityToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkNintendoSwitchDeviceIdRequest( PlayFab::AccountManagementModels::LinkNintendoSwitchDeviceIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkNintendoSwitchDeviceIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->nintendoSwitchDeviceId ) { ss << "  nintendoSwitchDeviceId " << request->nintendoSwitchDeviceId; Log(ss); } else { ss << "  nintendoSwitchDeviceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkOpenIdConnectRequest( PlayFab::AccountManagementModels::LinkOpenIdConnectRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkOpenIdConnectRequest struct:
    // request->connectionId: const char*
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->idToken ) { ss << "  idToken " << request->idToken; Log(ss); } else { ss << "  idToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogClientLinkPSNAccountRequest( PlayFab::AccountManagementModels::ClientLinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogLinkSteamAccountRequest( PlayFab::AccountManagementModels::LinkSteamAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkSteamAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->steamTicket ) { ss << "  steamTicket " << request->steamTicket; Log(ss); } else { ss << "  steamTicket = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogLinkTwitchAccountRequest( PlayFab::AccountManagementModels::LinkTwitchAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkTwitchAccountRequest struct:
    // request->accessToken: const char*
    if( request->accessToken ) { ss << "  accessToken " << request->accessToken; Log(ss); } else { ss << "  accessToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenAccountManagementTests::LogClientLinkXboxAccountRequest( PlayFab::AccountManagementModels::ClientLinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogRemoveContactEmailRequest( PlayFab::AccountManagementModels::RemoveContactEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementRemoveContactEmailRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogClientRemoveGenericIDRequest( PlayFab::AccountManagementModels::ClientRemoveGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogReportPlayerClientRequest( PlayFab::AccountManagementModels::ReportPlayerClientRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementReportPlayerClientRequest struct:
    // request->comment: const char*
    if( request->comment ) { ss << "  comment " << request->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->reporteeId ) { ss << "  reporteeId " << request->reporteeId; Log(ss); } else { ss << "  reporteeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementReportPlayerClientResult(PFAccountManagementReportPlayerClientResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementReportPlayerClientResult
    ss << "  submissionsRemaining " << result->submissionsRemaining; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenAccountManagementTests::LogClientSendAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::ClientSendAccountRecoveryEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogUnlinkAndroidDeviceIDRequest( PlayFab::AccountManagementModels::UnlinkAndroidDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkAndroidDeviceIDRequest struct:
    // request->androidDeviceId: const char*
    if( request->androidDeviceId ) { ss << "  androidDeviceId " << request->androidDeviceId; Log(ss); } else { ss << "  androidDeviceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkAppleRequest( PlayFab::AccountManagementModels::UnlinkAppleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkAppleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkCustomIDRequest( PlayFab::AccountManagementModels::UnlinkCustomIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkCustomIDRequest struct:
    // request->customId: const char*
    if( request->customId ) { ss << "  customId " << request->customId; Log(ss); } else { ss << "  customId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkFacebookAccountRequest( PlayFab::AccountManagementModels::UnlinkFacebookAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkFacebookAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkFacebookInstantGamesIdRequest( PlayFab::AccountManagementModels::UnlinkFacebookInstantGamesIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkFacebookInstantGamesIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->facebookInstantGamesId ) { ss << "  facebookInstantGamesId " << request->facebookInstantGamesId; Log(ss); } else { ss << "  facebookInstantGamesId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogUnlinkGameCenterAccountRequest( PlayFab::AccountManagementModels::UnlinkGameCenterAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkGameCenterAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkGoogleAccountRequest( PlayFab::AccountManagementModels::UnlinkGoogleAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkGoogleAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkIOSDeviceIDRequest( PlayFab::AccountManagementModels::UnlinkIOSDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkIOSDeviceIDRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->deviceId ) { ss << "  deviceId " << request->deviceId; Log(ss); } else { ss << "  deviceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogUnlinkKongregateAccountRequest( PlayFab::AccountManagementModels::UnlinkKongregateAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkKongregateAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkNintendoServiceAccountRequest( PlayFab::AccountManagementModels::UnlinkNintendoServiceAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkNintendoServiceAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkNintendoSwitchDeviceIdRequest( PlayFab::AccountManagementModels::UnlinkNintendoSwitchDeviceIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkNintendoSwitchDeviceIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->nintendoSwitchDeviceId ) { ss << "  nintendoSwitchDeviceId " << request->nintendoSwitchDeviceId; Log(ss); } else { ss << "  nintendoSwitchDeviceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogUnlinkOpenIdConnectRequest( PlayFab::AccountManagementModels::UnlinkOpenIdConnectRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkOpenIdConnectRequest struct:
    // request->connectionId: const char*
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogClientUnlinkPSNAccountRequest( PlayFab::AccountManagementModels::ClientUnlinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogUnlinkSteamAccountRequest( PlayFab::AccountManagementModels::UnlinkSteamAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkSteamAccountRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogUnlinkTwitchAccountRequest( PlayFab::AccountManagementModels::UnlinkTwitchAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkTwitchAccountRequest struct:
    // request->accessToken: const char*
    if( request->accessToken ) { ss << "  accessToken " << request->accessToken; Log(ss); } else { ss << "  accessToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenAccountManagementTests::LogClientUnlinkXboxAccountRequest( PlayFab::AccountManagementModels::ClientUnlinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogClientUpdateAvatarUrlRequest( PlayFab::AccountManagementModels::ClientUpdateAvatarUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogClientUpdateUserTitleDisplayNameRequest( PlayFab::AccountManagementModels::ClientUpdateUserTitleDisplayNameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogServerAddGenericIDRequest( PlayFab::AccountManagementModels::ServerAddGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogDeletePushNotificationTemplateRequest( PlayFab::AccountManagementModels::DeletePushNotificationTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementDeletePushNotificationTemplateRequest struct:
    // request->pushNotificationTemplateId: const char*
    if( request->pushNotificationTemplateId ) { ss << "  pushNotificationTemplateId " << request->pushNotificationTemplateId; Log(ss); } else { ss << "  pushNotificationTemplateId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogGetServerCustomIDsFromPlayFabIDsRequest( PlayFab::AccountManagementModels::GetServerCustomIDsFromPlayFabIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetServerCustomIDsFromPlayFabIDsRequest struct:
    // request->playFabIDs: const char* const*
    // request->playFabIDsCount: uint32_t    
    ss << "  playFabIDsCount " << request->playFabIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->playFabIDsCount; i++ )
    {
            ss << "  request->playFabIDs[" << i << "]:" << request->playFabIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetServerCustomIDsFromPlayFabIDsResult(PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetServerCustomIDsFromPlayFabIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFAccountManagementServerCustomIDPlayFabIDPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PFAccountManagementServerCustomIDPlayFabIDPair
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetUserAccountInfoRequest( PlayFab::AccountManagementModels::GetUserAccountInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetUserAccountInfoRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetUserAccountInfoResult(PFAccountManagementGetUserAccountInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetUserAccountInfoResult
    ss << "  userInfo " << result->userInfo; Log(ss); // Class: PFUserAccountInfo 
    return S_OK;
}

void AutoGenAccountManagementTests::LogServerLinkPSNAccountRequest( PlayFab::AccountManagementModels::ServerLinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogLinkServerCustomIdRequest( PlayFab::AccountManagementModels::LinkServerCustomIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementLinkServerCustomIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverCustomId ) { ss << "  serverCustomId " << request->serverCustomId; Log(ss); } else { ss << "  serverCustomId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogServerLinkXboxAccountRequest( PlayFab::AccountManagementModels::ServerLinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogServerRemoveGenericIDRequest( PlayFab::AccountManagementModels::ServerRemoveGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogSavePushNotificationTemplateRequest( PlayFab::AccountManagementModels::SavePushNotificationTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSavePushNotificationTemplateRequest struct:
    // request->androidPayload: const char*
    if( request->androidPayload ) { ss << "  androidPayload " << request->androidPayload; Log(ss); } else { ss << "  androidPayload = nullptr"; Log(ss); } // Class: const char* 
    if( request->id ) { ss << "  id " << request->id; Log(ss); } else { ss << "  id = nullptr"; Log(ss); } // Class: const char* 
    if( request->iOSPayload ) { ss << "  iOSPayload " << request->iOSPayload; Log(ss); } else { ss << "  iOSPayload = nullptr"; Log(ss); } // Class: const char*     
    ss << "  localizedPushNotificationTemplatesCount " << request->localizedPushNotificationTemplatesCount; Log(ss);

    // PFAccountManagementLocalizedPushNotificationPropertiesDictionaryEntry
    for( uint32_t i=0; i<request->localizedPushNotificationTemplatesCount; i++ )
    {
            ss << "  request->localizedPushNotificationTemplates[" << i << "]:" << request->localizedPushNotificationTemplates[i].key << "=" << request->localizedPushNotificationTemplates[i].value; Log(ss);
            
    } 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementSavePushNotificationTemplateResult(PFAccountManagementSavePushNotificationTemplateResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementSavePushNotificationTemplateResult
    if( result->pushNotificationTemplateId ) { ss << "  pushNotificationTemplateId " << result->pushNotificationTemplateId; Log(ss); } else { ss << "  pushNotificationTemplateId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAccountManagementTests::LogSendCustomAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::SendCustomAccountRecoveryEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSendCustomAccountRecoveryEmailRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->emailTemplateId ) { ss << "  emailTemplateId " << request->emailTemplateId; Log(ss); } else { ss << "  emailTemplateId = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogSendEmailFromTemplateRequest( PlayFab::AccountManagementModels::SendEmailFromTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSendEmailFromTemplateRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->emailTemplateId ) { ss << "  emailTemplateId " << request->emailTemplateId; Log(ss); } else { ss << "  emailTemplateId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogSendPushNotificationRequest( PlayFab::AccountManagementModels::SendPushNotificationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSendPushNotificationRequest struct:
    // request->advancedPlatformDelivery: PFAccountManagementAdvancedPushPlatformMsg const* const*
    // request->advancedPlatformDeliveryCount: uint32_t    
    ss << "  advancedPlatformDeliveryCount " << request->advancedPlatformDeliveryCount; Log(ss);

    // PFAccountManagementAdvancedPushPlatformMsg
    for( uint32_t i=0; i<request->advancedPlatformDeliveryCount; i++ )
    {
            ss << "  request->advancedPlatformDelivery[" << i << "]:" << request->advancedPlatformDelivery[i]; Log(ss); // PFAccountManagementAdvancedPushPlatformMsg
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->message ) { ss << "  message " << request->message; Log(ss); } else { ss << "  message = nullptr"; Log(ss); } // Class: const char* 
    ss << "  package " << request->package; Log(ss); // Class: PFAccountManagementPushNotificationPackage 
    if( request->recipient ) { ss << "  recipient " << request->recipient; Log(ss); } else { ss << "  recipient = nullptr"; Log(ss); } // Class: const char* 
    if( request->subject ) { ss << "  subject " << request->subject; Log(ss); } else { ss << "  subject = nullptr"; Log(ss); } // Class: const char*     
    ss << "  targetPlatformsCount " << request->targetPlatformsCount; Log(ss);

    // PFPushNotificationPlatform
    for( uint32_t i=0; i<request->targetPlatformsCount; i++ )
    {
            ss << "  request->targetPlatforms[" << i << "]:" << request->targetPlatforms[i]; Log(ss); // PFPushNotificationPlatform
    } 

}

void AutoGenAccountManagementTests::LogSendPushNotificationFromTemplateRequest( PlayFab::AccountManagementModels::SendPushNotificationFromTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSendPushNotificationFromTemplateRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->pushNotificationTemplateId ) { ss << "  pushNotificationTemplateId " << request->pushNotificationTemplateId; Log(ss); } else { ss << "  pushNotificationTemplateId = nullptr"; Log(ss); } // Class: const char* 
    if( request->recipient ) { ss << "  recipient " << request->recipient; Log(ss); } else { ss << "  recipient = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogServerUnlinkPSNAccountRequest( PlayFab::AccountManagementModels::ServerUnlinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogUnlinkServerCustomIdRequest( PlayFab::AccountManagementModels::UnlinkServerCustomIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementUnlinkServerCustomIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverCustomId ) { ss << "  serverCustomId " << request->serverCustomId; Log(ss); } else { ss << "  serverCustomId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAccountManagementTests::LogServerUnlinkXboxAccountRequest( PlayFab::AccountManagementModels::ServerUnlinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogServerUpdateAvatarUrlRequest( PlayFab::AccountManagementModels::ServerUpdateAvatarUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenAccountManagementTests::LogGetGlobalPolicyRequest( PlayFab::AccountManagementModels::GetGlobalPolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetGlobalPolicyRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetGlobalPolicyResponse(PFAccountManagementGetGlobalPolicyResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetGlobalPolicyResponse    
    ss << "  permissionsCount " << result->permissionsCount; Log(ss);

    // PFAccountManagementEntityPermissionStatement
    for( uint32_t i=0; i<result->permissionsCount; i++ )
    {
            ss << "  result->permissions[" << i << "]:" << result->permissions[i]; Log(ss); // PFAccountManagementEntityPermissionStatement
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetEntityProfileRequest( PlayFab::AccountManagementModels::GetEntityProfileRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetEntityProfileRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  dataAsObject " << request->dataAsObject; Log(ss); // Class: bool 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetEntityProfileResponse(PFAccountManagementGetEntityProfileResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetEntityProfileResponse
    ss << "  profile " << result->profile; Log(ss); // Class: PFAccountManagementEntityProfileBody 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetEntityProfilesRequest( PlayFab::AccountManagementModels::GetEntityProfilesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetEntityProfilesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  dataAsObject " << request->dataAsObject; Log(ss); // Class: bool     
    ss << "  entitiesCount " << request->entitiesCount; Log(ss);

    // PFEntityKey
    for( uint32_t i=0; i<request->entitiesCount; i++ )
    {
            ss << "  request->entities[" << i << "]:" << request->entities[i]; Log(ss); // PFEntityKey
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetEntityProfilesResponse(PFAccountManagementGetEntityProfilesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetEntityProfilesResponse    
    ss << "  profilesCount " << result->profilesCount; Log(ss);

    // PFAccountManagementEntityProfileBody
    for( uint32_t i=0; i<result->profilesCount; i++ )
    {
            ss << "  result->profiles[" << i << "]:" << result->profiles[i]; Log(ss); // PFAccountManagementEntityProfileBody
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogGetTitlePlayersFromMasterPlayerAccountIdsRequest( PlayFab::AccountManagementModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  masterPlayerAccountIdsCount " << request->masterPlayerAccountIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->masterPlayerAccountIdsCount; i++ )
    {
            ss << "  request->masterPlayerAccountIds[" << i << "]:" << request->masterPlayerAccountIds[i]; Log(ss); // const char*
    } 
    if( request->titleId ) { ss << "  titleId " << request->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse(PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse
    if( result->titleId ) { ss << "  titleId " << result->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  titlePlayerAccountsCount " << result->titlePlayerAccountsCount; Log(ss);

    // PFEntityKeyDictionaryEntry
    for( uint32_t i=0; i<result->titlePlayerAccountsCount; i++ )
    {
            ss << "  result->titlePlayerAccounts[" << i << "]:" << result->titlePlayerAccounts[i].key << "=" << result->titlePlayerAccounts[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenAccountManagementTests::LogSetGlobalPolicyRequest( PlayFab::AccountManagementModels::SetGlobalPolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSetGlobalPolicyRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  permissionsCount " << request->permissionsCount; Log(ss);

    // PFAccountManagementEntityPermissionStatement
    for( uint32_t i=0; i<request->permissionsCount; i++ )
    {
            ss << "  request->permissions[" << i << "]:" << request->permissions[i]; Log(ss); // PFAccountManagementEntityPermissionStatement
    } 

}

void AutoGenAccountManagementTests::LogSetProfileLanguageRequest( PlayFab::AccountManagementModels::SetProfileLanguageRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSetProfileLanguageRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  expectedVersion " << request->expectedVersion; Log(ss); // Class: int32_t 
    if( request->language ) { ss << "  language " << request->language; Log(ss); } else { ss << "  language = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementSetProfileLanguageResponse(PFAccountManagementSetProfileLanguageResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementSetProfileLanguageResponse
    ss << "  operationResult " << result->operationResult; Log(ss); // Class: PFOperationTypes 
    ss << "  versionNumber " << result->versionNumber; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenAccountManagementTests::LogSetEntityProfilePolicyRequest( PlayFab::AccountManagementModels::SetEntityProfilePolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_AccountManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAccountManagementSetEntityProfilePolicyRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey     
    ss << "  statementsCount " << request->statementsCount; Log(ss);

    // PFAccountManagementEntityPermissionStatement
    for( uint32_t i=0; i<request->statementsCount; i++ )
    {
            ss << "  request->statements[" << i << "]:" << request->statements[i]; Log(ss); // PFAccountManagementEntityPermissionStatement
    } 

}

HRESULT AutoGenAccountManagementTests::LogPFAccountManagementSetEntityProfilePolicyResponse(PFAccountManagementSetEntityProfilePolicyResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAccountManagementSetEntityProfilePolicyResponse    
    ss << "  permissionsCount " << result->permissionsCount; Log(ss);

    // PFAccountManagementEntityPermissionStatement
    for( uint32_t i=0; i<result->permissionsCount; i++ )
    {
            ss << "  result->permissions[" << i << "]:" << result->permissions[i]; Log(ss); // PFAccountManagementEntityPermissionStatement
    } 
    return S_OK;
}

 

}
