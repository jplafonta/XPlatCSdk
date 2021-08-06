#pragma once

#include <playfab/PFAccountManagementDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AccountManagementModels
{

// AccountManagement Classes
struct BanRequest : public PFAccountManagementBanRequest, public BaseModel
{
    BanRequest();
    BanRequest(const BanRequest& src);
    BanRequest(BanRequest&& src);
    BanRequest(const PFAccountManagementBanRequest& src);
    BanRequest& operator=(const BanRequest&) = delete;
    ~BanRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_durationInHours;
    String m_IPAddress;
    String m_MACAddress;
    String m_playFabId;
    String m_reason;
};

struct BanUsersRequest : public PFAccountManagementBanUsersRequest, public BaseModel
{
    BanUsersRequest();
    BanUsersRequest(const BanUsersRequest& src);
    BanUsersRequest(BanUsersRequest&& src);
    BanUsersRequest(const PFAccountManagementBanUsersRequest& src);
    BanUsersRequest& operator=(const BanUsersRequest&) = delete;
    ~BanUsersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementBanRequest, BanRequest> m_bans;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct BanInfo : public PFAccountManagementBanInfo, public BaseModel
{
    BanInfo();
    BanInfo(const BanInfo& src);
    BanInfo(BanInfo&& src);
    BanInfo(const PFAccountManagementBanInfo& src);
    BanInfo& operator=(const BanInfo&) = delete;
    ~BanInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_banId;
    StdExtra::optional<time_t> m_created;
    StdExtra::optional<time_t> m_expires;
    String m_IPAddress;
    String m_MACAddress;
    String m_playFabId;
    String m_reason;
};

struct BanUsersResult : public PFAccountManagementBanUsersResult, public BaseModel, public ApiResult
{
    BanUsersResult();
    BanUsersResult(const BanUsersResult& src);
    BanUsersResult(BanUsersResult&& src);
    BanUsersResult(const PFAccountManagementBanUsersResult& src);
    BanUsersResult& operator=(const BanUsersResult&) = delete;
    ~BanUsersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementBanInfo, BanInfo> m_banData;
};

struct DeleteMasterPlayerAccountRequest : public PFAccountManagementDeleteMasterPlayerAccountRequest, public SerializableModel
{
    DeleteMasterPlayerAccountRequest();
    DeleteMasterPlayerAccountRequest(const DeleteMasterPlayerAccountRequest& src);
    DeleteMasterPlayerAccountRequest(DeleteMasterPlayerAccountRequest&& src);
    DeleteMasterPlayerAccountRequest(const PFAccountManagementDeleteMasterPlayerAccountRequest& src);
    DeleteMasterPlayerAccountRequest& operator=(const DeleteMasterPlayerAccountRequest&) = delete;
    ~DeleteMasterPlayerAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_metaData;
    String m_playFabId;
};

struct DeleteMasterPlayerAccountResult : public PFAccountManagementDeleteMasterPlayerAccountResult, public BaseModel, public ApiResult
{
    DeleteMasterPlayerAccountResult();
    DeleteMasterPlayerAccountResult(const DeleteMasterPlayerAccountResult& src);
    DeleteMasterPlayerAccountResult(DeleteMasterPlayerAccountResult&& src);
    DeleteMasterPlayerAccountResult(const PFAccountManagementDeleteMasterPlayerAccountResult& src);
    DeleteMasterPlayerAccountResult& operator=(const DeleteMasterPlayerAccountResult&) = delete;
    ~DeleteMasterPlayerAccountResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_jobReceiptId;
    PointerArrayModel<char, String> m_titleIds;
};

struct DeletePlayerRequest : public PFAccountManagementDeletePlayerRequest, public SerializableModel
{
    DeletePlayerRequest();
    DeletePlayerRequest(const DeletePlayerRequest& src);
    DeletePlayerRequest(DeletePlayerRequest&& src);
    DeletePlayerRequest(const PFAccountManagementDeletePlayerRequest& src);
    DeletePlayerRequest& operator=(const DeletePlayerRequest&) = delete;
    ~DeletePlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct ExportMasterPlayerDataRequest : public PFAccountManagementExportMasterPlayerDataRequest, public SerializableModel
{
    ExportMasterPlayerDataRequest();
    ExportMasterPlayerDataRequest(const ExportMasterPlayerDataRequest& src);
    ExportMasterPlayerDataRequest(ExportMasterPlayerDataRequest&& src);
    ExportMasterPlayerDataRequest(const PFAccountManagementExportMasterPlayerDataRequest& src);
    ExportMasterPlayerDataRequest& operator=(const ExportMasterPlayerDataRequest&) = delete;
    ~ExportMasterPlayerDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct ExportMasterPlayerDataResult : public PFAccountManagementExportMasterPlayerDataResult, public SerializableModel, public ApiResult
{
    ExportMasterPlayerDataResult();
    ExportMasterPlayerDataResult(const ExportMasterPlayerDataResult& src);
    ExportMasterPlayerDataResult(ExportMasterPlayerDataResult&& src);
    ExportMasterPlayerDataResult(const PFAccountManagementExportMasterPlayerDataResult& src);
    ExportMasterPlayerDataResult& operator=(const ExportMasterPlayerDataResult&) = delete;
    ~ExportMasterPlayerDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_jobReceiptId;
};

struct GetPlayedTitleListRequest : public PFAccountManagementGetPlayedTitleListRequest, public SerializableModel
{
    GetPlayedTitleListRequest();
    GetPlayedTitleListRequest(const GetPlayedTitleListRequest& src);
    GetPlayedTitleListRequest(GetPlayedTitleListRequest&& src);
    GetPlayedTitleListRequest(const PFAccountManagementGetPlayedTitleListRequest& src);
    GetPlayedTitleListRequest& operator=(const GetPlayedTitleListRequest&) = delete;
    ~GetPlayedTitleListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetPlayedTitleListResult : public PFAccountManagementGetPlayedTitleListResult, public BaseModel, public ApiResult
{
    GetPlayedTitleListResult();
    GetPlayedTitleListResult(const GetPlayedTitleListResult& src);
    GetPlayedTitleListResult(GetPlayedTitleListResult&& src);
    GetPlayedTitleListResult(const PFAccountManagementGetPlayedTitleListResult& src);
    GetPlayedTitleListResult& operator=(const GetPlayedTitleListResult&) = delete;
    ~GetPlayedTitleListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_titleIds;
};

struct GetPlayerIdFromAuthTokenRequest : public PFAccountManagementGetPlayerIdFromAuthTokenRequest, public SerializableModel
{
    GetPlayerIdFromAuthTokenRequest();
    GetPlayerIdFromAuthTokenRequest(const GetPlayerIdFromAuthTokenRequest& src);
    GetPlayerIdFromAuthTokenRequest(GetPlayerIdFromAuthTokenRequest&& src);
    GetPlayerIdFromAuthTokenRequest(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& src);
    GetPlayerIdFromAuthTokenRequest& operator=(const GetPlayerIdFromAuthTokenRequest&) = delete;
    ~GetPlayerIdFromAuthTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_token;
};

struct GetPlayerIdFromAuthTokenResult : public PFAccountManagementGetPlayerIdFromAuthTokenResult, public SerializableModel, public ApiResult
{
    GetPlayerIdFromAuthTokenResult();
    GetPlayerIdFromAuthTokenResult(const GetPlayerIdFromAuthTokenResult& src);
    GetPlayerIdFromAuthTokenResult(GetPlayerIdFromAuthTokenResult&& src);
    GetPlayerIdFromAuthTokenResult(const PFAccountManagementGetPlayerIdFromAuthTokenResult& src);
    GetPlayerIdFromAuthTokenResult& operator=(const GetPlayerIdFromAuthTokenResult&) = delete;
    ~GetPlayerIdFromAuthTokenResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetPlayerProfileRequest : public PFAccountManagementGetPlayerProfileRequest, public BaseModel
{
    GetPlayerProfileRequest();
    GetPlayerProfileRequest(const GetPlayerProfileRequest& src);
    GetPlayerProfileRequest(GetPlayerProfileRequest&& src);
    GetPlayerProfileRequest(const PFAccountManagementGetPlayerProfileRequest& src);
    GetPlayerProfileRequest& operator=(const GetPlayerProfileRequest&) = delete;
    ~GetPlayerProfileRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
};

struct GetPlayerProfileResult : public PFAccountManagementGetPlayerProfileResult, public BaseModel, public ApiResult
{
    GetPlayerProfileResult();
    GetPlayerProfileResult(const GetPlayerProfileResult& src);
    GetPlayerProfileResult(GetPlayerProfileResult&& src);
    GetPlayerProfileResult(const PFAccountManagementGetPlayerProfileResult& src);
    GetPlayerProfileResult& operator=(const GetPlayerProfileResult&) = delete;
    ~GetPlayerProfileResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerProfileModel> m_playerProfile;
};

struct LookupUserAccountInfoRequest : public PFAccountManagementLookupUserAccountInfoRequest, public SerializableModel
{
    LookupUserAccountInfoRequest();
    LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src);
    LookupUserAccountInfoRequest(LookupUserAccountInfoRequest&& src);
    LookupUserAccountInfoRequest(const PFAccountManagementLookupUserAccountInfoRequest& src);
    LookupUserAccountInfoRequest& operator=(const LookupUserAccountInfoRequest&) = delete;
    ~LookupUserAccountInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_email;
    String m_playFabId;
    String m_titleDisplayName;
    String m_username;
};

struct LookupUserAccountInfoResult : public PFAccountManagementLookupUserAccountInfoResult, public BaseModel, public ApiResult
{
    LookupUserAccountInfoResult();
    LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src);
    LookupUserAccountInfoResult(LookupUserAccountInfoResult&& src);
    LookupUserAccountInfoResult(const PFAccountManagementLookupUserAccountInfoResult& src);
    LookupUserAccountInfoResult& operator=(const LookupUserAccountInfoResult&) = delete;
    ~LookupUserAccountInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct GetUserBansRequest : public PFAccountManagementGetUserBansRequest, public SerializableModel
{
    GetUserBansRequest();
    GetUserBansRequest(const GetUserBansRequest& src);
    GetUserBansRequest(GetUserBansRequest&& src);
    GetUserBansRequest(const PFAccountManagementGetUserBansRequest& src);
    GetUserBansRequest& operator=(const GetUserBansRequest&) = delete;
    ~GetUserBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetUserBansResult : public PFAccountManagementGetUserBansResult, public BaseModel, public ApiResult
{
    GetUserBansResult();
    GetUserBansResult(const GetUserBansResult& src);
    GetUserBansResult(GetUserBansResult&& src);
    GetUserBansResult(const PFAccountManagementGetUserBansResult& src);
    GetUserBansResult& operator=(const GetUserBansResult&) = delete;
    ~GetUserBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementBanInfo, BanInfo> m_banData;
};

struct ResetPasswordRequest : public PFAccountManagementResetPasswordRequest, public BaseModel
{
    ResetPasswordRequest();
    ResetPasswordRequest(const ResetPasswordRequest& src);
    ResetPasswordRequest(ResetPasswordRequest&& src);
    ResetPasswordRequest(const PFAccountManagementResetPasswordRequest& src);
    ResetPasswordRequest& operator=(const ResetPasswordRequest&) = delete;
    ~ResetPasswordRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_password;
    String m_token;
};

struct RevokeAllBansForUserRequest : public PFAccountManagementRevokeAllBansForUserRequest, public SerializableModel
{
    RevokeAllBansForUserRequest();
    RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src);
    RevokeAllBansForUserRequest(RevokeAllBansForUserRequest&& src);
    RevokeAllBansForUserRequest(const PFAccountManagementRevokeAllBansForUserRequest& src);
    RevokeAllBansForUserRequest& operator=(const RevokeAllBansForUserRequest&) = delete;
    ~RevokeAllBansForUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct RevokeAllBansForUserResult : public PFAccountManagementRevokeAllBansForUserResult, public BaseModel, public ApiResult
{
    RevokeAllBansForUserResult();
    RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src);
    RevokeAllBansForUserResult(RevokeAllBansForUserResult&& src);
    RevokeAllBansForUserResult(const PFAccountManagementRevokeAllBansForUserResult& src);
    RevokeAllBansForUserResult& operator=(const RevokeAllBansForUserResult&) = delete;
    ~RevokeAllBansForUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementBanInfo, BanInfo> m_banData;
};

struct RevokeBansRequest : public PFAccountManagementRevokeBansRequest, public BaseModel
{
    RevokeBansRequest();
    RevokeBansRequest(const RevokeBansRequest& src);
    RevokeBansRequest(RevokeBansRequest&& src);
    RevokeBansRequest(const PFAccountManagementRevokeBansRequest& src);
    RevokeBansRequest& operator=(const RevokeBansRequest&) = delete;
    ~RevokeBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_banIds;
};

struct RevokeBansResult : public PFAccountManagementRevokeBansResult, public BaseModel, public ApiResult
{
    RevokeBansResult();
    RevokeBansResult(const RevokeBansResult& src);
    RevokeBansResult(RevokeBansResult&& src);
    RevokeBansResult(const PFAccountManagementRevokeBansResult& src);
    RevokeBansResult& operator=(const RevokeBansResult&) = delete;
    ~RevokeBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementBanInfo, BanInfo> m_banData;
};

struct AdminSendAccountRecoveryEmailRequest : public PFAccountManagementAdminSendAccountRecoveryEmailRequest, public BaseModel
{
    AdminSendAccountRecoveryEmailRequest();
    AdminSendAccountRecoveryEmailRequest(const AdminSendAccountRecoveryEmailRequest& src);
    AdminSendAccountRecoveryEmailRequest(AdminSendAccountRecoveryEmailRequest&& src);
    AdminSendAccountRecoveryEmailRequest(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& src);
    AdminSendAccountRecoveryEmailRequest& operator=(const AdminSendAccountRecoveryEmailRequest&) = delete;
    ~AdminSendAccountRecoveryEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_emailTemplateId;
};

struct UpdateBanRequest : public PFAccountManagementUpdateBanRequest, public BaseModel
{
    UpdateBanRequest();
    UpdateBanRequest(const UpdateBanRequest& src);
    UpdateBanRequest(UpdateBanRequest&& src);
    UpdateBanRequest(const PFAccountManagementUpdateBanRequest& src);
    UpdateBanRequest& operator=(const UpdateBanRequest&) = delete;
    ~UpdateBanRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_active;
    String m_banId;
    StdExtra::optional<time_t> m_expires;
    String m_IPAddress;
    String m_MACAddress;
    StdExtra::optional<bool> m_permanent;
    String m_reason;
};

struct UpdateBansRequest : public PFAccountManagementUpdateBansRequest, public BaseModel
{
    UpdateBansRequest();
    UpdateBansRequest(const UpdateBansRequest& src);
    UpdateBansRequest(UpdateBansRequest&& src);
    UpdateBansRequest(const PFAccountManagementUpdateBansRequest& src);
    UpdateBansRequest& operator=(const UpdateBansRequest&) = delete;
    ~UpdateBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementUpdateBanRequest, UpdateBanRequest> m_bans;
};

struct UpdateBansResult : public PFAccountManagementUpdateBansResult, public BaseModel, public ApiResult
{
    UpdateBansResult();
    UpdateBansResult(const UpdateBansResult& src);
    UpdateBansResult(UpdateBansResult&& src);
    UpdateBansResult(const PFAccountManagementUpdateBansResult& src);
    UpdateBansResult& operator=(const UpdateBansResult&) = delete;
    ~UpdateBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementBanInfo, BanInfo> m_banData;
};

struct AdminUpdateUserTitleDisplayNameRequest : public PFAccountManagementAdminUpdateUserTitleDisplayNameRequest, public BaseModel
{
    AdminUpdateUserTitleDisplayNameRequest();
    AdminUpdateUserTitleDisplayNameRequest(const AdminUpdateUserTitleDisplayNameRequest& src);
    AdminUpdateUserTitleDisplayNameRequest(AdminUpdateUserTitleDisplayNameRequest&& src);
    AdminUpdateUserTitleDisplayNameRequest(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& src);
    AdminUpdateUserTitleDisplayNameRequest& operator=(const AdminUpdateUserTitleDisplayNameRequest&) = delete;
    ~AdminUpdateUserTitleDisplayNameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_displayName;
    String m_playFabId;
};

struct UpdateUserTitleDisplayNameResult : public PFAccountManagementUpdateUserTitleDisplayNameResult, public SerializableModel, public ApiResult
{
    UpdateUserTitleDisplayNameResult();
    UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src);
    UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult&& src);
    UpdateUserTitleDisplayNameResult(const PFAccountManagementUpdateUserTitleDisplayNameResult& src);
    UpdateUserTitleDisplayNameResult& operator=(const UpdateUserTitleDisplayNameResult&) = delete;
    ~UpdateUserTitleDisplayNameResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_displayName;
};

struct GenericServiceId : public PFAccountManagementGenericServiceId, public SerializableModel
{
    GenericServiceId();
    GenericServiceId(const GenericServiceId& src);
    GenericServiceId(GenericServiceId&& src);
    GenericServiceId(const PFAccountManagementGenericServiceId& src);
    GenericServiceId& operator=(const GenericServiceId&) = delete;
    ~GenericServiceId() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_serviceName;
    String m_userId;
};

struct ClientAddGenericIDRequest : public PFAccountManagementClientAddGenericIDRequest, public BaseModel
{
    ClientAddGenericIDRequest();
    ClientAddGenericIDRequest(const ClientAddGenericIDRequest& src);
    ClientAddGenericIDRequest(ClientAddGenericIDRequest&& src);
    ClientAddGenericIDRequest(const PFAccountManagementClientAddGenericIDRequest& src);
    ClientAddGenericIDRequest& operator=(const ClientAddGenericIDRequest&) = delete;
    ~ClientAddGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
};

struct AddOrUpdateContactEmailRequest : public PFAccountManagementAddOrUpdateContactEmailRequest, public BaseModel
{
    AddOrUpdateContactEmailRequest();
    AddOrUpdateContactEmailRequest(const AddOrUpdateContactEmailRequest& src);
    AddOrUpdateContactEmailRequest(AddOrUpdateContactEmailRequest&& src);
    AddOrUpdateContactEmailRequest(const PFAccountManagementAddOrUpdateContactEmailRequest& src);
    AddOrUpdateContactEmailRequest& operator=(const AddOrUpdateContactEmailRequest&) = delete;
    ~AddOrUpdateContactEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_emailAddress;
};

struct AddUsernamePasswordRequest : public PFAccountManagementAddUsernamePasswordRequest, public BaseModel
{
    AddUsernamePasswordRequest();
    AddUsernamePasswordRequest(const AddUsernamePasswordRequest& src);
    AddUsernamePasswordRequest(AddUsernamePasswordRequest&& src);
    AddUsernamePasswordRequest(const PFAccountManagementAddUsernamePasswordRequest& src);
    AddUsernamePasswordRequest& operator=(const AddUsernamePasswordRequest&) = delete;
    ~AddUsernamePasswordRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_password;
    String m_username;
};

struct AddUsernamePasswordResult : public PFAccountManagementAddUsernamePasswordResult, public SerializableModel, public ApiResult
{
    AddUsernamePasswordResult();
    AddUsernamePasswordResult(const AddUsernamePasswordResult& src);
    AddUsernamePasswordResult(AddUsernamePasswordResult&& src);
    AddUsernamePasswordResult(const PFAccountManagementAddUsernamePasswordResult& src);
    AddUsernamePasswordResult& operator=(const AddUsernamePasswordResult&) = delete;
    ~AddUsernamePasswordResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_username;
};

struct GetAccountInfoRequest : public PFAccountManagementGetAccountInfoRequest, public SerializableModel
{
    GetAccountInfoRequest();
    GetAccountInfoRequest(const GetAccountInfoRequest& src);
    GetAccountInfoRequest(GetAccountInfoRequest&& src);
    GetAccountInfoRequest(const PFAccountManagementGetAccountInfoRequest& src);
    GetAccountInfoRequest& operator=(const GetAccountInfoRequest&) = delete;
    ~GetAccountInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_email;
    String m_playFabId;
    String m_titleDisplayName;
    String m_username;
};

struct GetAccountInfoResult : public PFAccountManagementGetAccountInfoResult, public BaseModel, public ApiResult
{
    GetAccountInfoResult();
    GetAccountInfoResult(const GetAccountInfoResult& src);
    GetAccountInfoResult(GetAccountInfoResult&& src);
    GetAccountInfoResult(const PFAccountManagementGetAccountInfoResult& src);
    GetAccountInfoResult& operator=(const GetAccountInfoResult&) = delete;
    ~GetAccountInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_accountInfo;
};

struct GetPlayFabIDsFromFacebookIDsRequest : public PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest, public BaseModel
{
    GetPlayFabIDsFromFacebookIDsRequest();
    GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src);
    GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest&& src);
    GetPlayFabIDsFromFacebookIDsRequest(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& src);
    GetPlayFabIDsFromFacebookIDsRequest& operator=(const GetPlayFabIDsFromFacebookIDsRequest&) = delete;
    ~GetPlayFabIDsFromFacebookIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_facebookIDs;
};

struct FacebookPlayFabIdPair : public PFAccountManagementFacebookPlayFabIdPair, public SerializableModel
{
    FacebookPlayFabIdPair();
    FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src);
    FacebookPlayFabIdPair(FacebookPlayFabIdPair&& src);
    FacebookPlayFabIdPair(const PFAccountManagementFacebookPlayFabIdPair& src);
    FacebookPlayFabIdPair& operator=(const FacebookPlayFabIdPair&) = delete;
    ~FacebookPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookId;
    String m_playFabId;
};

struct GetPlayFabIDsFromFacebookIDsResult : public PFAccountManagementGetPlayFabIDsFromFacebookIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromFacebookIDsResult();
    GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src);
    GetPlayFabIDsFromFacebookIDsResult(GetPlayFabIDsFromFacebookIDsResult&& src);
    GetPlayFabIDsFromFacebookIDsResult(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& src);
    GetPlayFabIDsFromFacebookIDsResult& operator=(const GetPlayFabIDsFromFacebookIDsResult&) = delete;
    ~GetPlayFabIDsFromFacebookIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementFacebookPlayFabIdPair, FacebookPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest, public BaseModel
{
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest();
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest&& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest& operator=(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest&) = delete;
    ~GetPlayFabIDsFromFacebookInstantGamesIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_facebookInstantGamesIds;
};

struct FacebookInstantGamesPlayFabIdPair : public PFAccountManagementFacebookInstantGamesPlayFabIdPair, public SerializableModel
{
    FacebookInstantGamesPlayFabIdPair();
    FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src);
    FacebookInstantGamesPlayFabIdPair(FacebookInstantGamesPlayFabIdPair&& src);
    FacebookInstantGamesPlayFabIdPair(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& src);
    FacebookInstantGamesPlayFabIdPair& operator=(const FacebookInstantGamesPlayFabIdPair&) = delete;
    ~FacebookInstantGamesPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookInstantGamesId;
    String m_playFabId;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromFacebookInstantGamesIdsResult();
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(GetPlayFabIDsFromFacebookInstantGamesIdsResult&& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult& operator=(const GetPlayFabIDsFromFacebookInstantGamesIdsResult&) = delete;
    ~GetPlayFabIDsFromFacebookInstantGamesIdsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementFacebookInstantGamesPlayFabIdPair, FacebookInstantGamesPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGameCenterIDsRequest : public PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGameCenterIDsRequest();
    GetPlayFabIDsFromGameCenterIDsRequest(const GetPlayFabIDsFromGameCenterIDsRequest& src);
    GetPlayFabIDsFromGameCenterIDsRequest(GetPlayFabIDsFromGameCenterIDsRequest&& src);
    GetPlayFabIDsFromGameCenterIDsRequest(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& src);
    GetPlayFabIDsFromGameCenterIDsRequest& operator=(const GetPlayFabIDsFromGameCenterIDsRequest&) = delete;
    ~GetPlayFabIDsFromGameCenterIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_gameCenterIDs;
};

struct GameCenterPlayFabIdPair : public PFAccountManagementGameCenterPlayFabIdPair, public SerializableModel
{
    GameCenterPlayFabIdPair();
    GameCenterPlayFabIdPair(const GameCenterPlayFabIdPair& src);
    GameCenterPlayFabIdPair(GameCenterPlayFabIdPair&& src);
    GameCenterPlayFabIdPair(const PFAccountManagementGameCenterPlayFabIdPair& src);
    GameCenterPlayFabIdPair& operator=(const GameCenterPlayFabIdPair&) = delete;
    ~GameCenterPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameCenterId;
    String m_playFabId;
};

struct GetPlayFabIDsFromGameCenterIDsResult : public PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGameCenterIDsResult();
    GetPlayFabIDsFromGameCenterIDsResult(const GetPlayFabIDsFromGameCenterIDsResult& src);
    GetPlayFabIDsFromGameCenterIDsResult(GetPlayFabIDsFromGameCenterIDsResult&& src);
    GetPlayFabIDsFromGameCenterIDsResult(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& src);
    GetPlayFabIDsFromGameCenterIDsResult& operator=(const GetPlayFabIDsFromGameCenterIDsResult&) = delete;
    ~GetPlayFabIDsFromGameCenterIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementGameCenterPlayFabIdPair, GameCenterPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGenericIDsRequest : public PFAccountManagementGetPlayFabIDsFromGenericIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGenericIDsRequest();
    GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src);
    GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest&& src);
    GetPlayFabIDsFromGenericIDsRequest(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& src);
    GetPlayFabIDsFromGenericIDsRequest& operator=(const GetPlayFabIDsFromGenericIDsRequest&) = delete;
    ~GetPlayFabIDsFromGenericIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementGenericServiceId, GenericServiceId> m_genericIDs;
};

struct GenericPlayFabIdPair : public PFAccountManagementGenericPlayFabIdPair, public BaseModel
{
    GenericPlayFabIdPair();
    GenericPlayFabIdPair(const GenericPlayFabIdPair& src);
    GenericPlayFabIdPair(GenericPlayFabIdPair&& src);
    GenericPlayFabIdPair(const PFAccountManagementGenericPlayFabIdPair& src);
    GenericPlayFabIdPair& operator=(const GenericPlayFabIdPair&) = delete;
    ~GenericPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<GenericServiceId> m_genericId;
    String m_playFabId;
};

struct GetPlayFabIDsFromGenericIDsResult : public PFAccountManagementGetPlayFabIDsFromGenericIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGenericIDsResult();
    GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src);
    GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult&& src);
    GetPlayFabIDsFromGenericIDsResult(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& src);
    GetPlayFabIDsFromGenericIDsResult& operator=(const GetPlayFabIDsFromGenericIDsResult&) = delete;
    ~GetPlayFabIDsFromGenericIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementGenericPlayFabIdPair, GenericPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGoogleIDsRequest : public PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGoogleIDsRequest();
    GetPlayFabIDsFromGoogleIDsRequest(const GetPlayFabIDsFromGoogleIDsRequest& src);
    GetPlayFabIDsFromGoogleIDsRequest(GetPlayFabIDsFromGoogleIDsRequest&& src);
    GetPlayFabIDsFromGoogleIDsRequest(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& src);
    GetPlayFabIDsFromGoogleIDsRequest& operator=(const GetPlayFabIDsFromGoogleIDsRequest&) = delete;
    ~GetPlayFabIDsFromGoogleIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_googleIDs;
};

struct GooglePlayFabIdPair : public PFAccountManagementGooglePlayFabIdPair, public SerializableModel
{
    GooglePlayFabIdPair();
    GooglePlayFabIdPair(const GooglePlayFabIdPair& src);
    GooglePlayFabIdPair(GooglePlayFabIdPair&& src);
    GooglePlayFabIdPair(const PFAccountManagementGooglePlayFabIdPair& src);
    GooglePlayFabIdPair& operator=(const GooglePlayFabIdPair&) = delete;
    ~GooglePlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_googleId;
    String m_playFabId;
};

struct GetPlayFabIDsFromGoogleIDsResult : public PFAccountManagementGetPlayFabIDsFromGoogleIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGoogleIDsResult();
    GetPlayFabIDsFromGoogleIDsResult(const GetPlayFabIDsFromGoogleIDsResult& src);
    GetPlayFabIDsFromGoogleIDsResult(GetPlayFabIDsFromGoogleIDsResult&& src);
    GetPlayFabIDsFromGoogleIDsResult(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& src);
    GetPlayFabIDsFromGoogleIDsResult& operator=(const GetPlayFabIDsFromGoogleIDsResult&) = delete;
    ~GetPlayFabIDsFromGoogleIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementGooglePlayFabIdPair, GooglePlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromKongregateIDsRequest : public PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest, public BaseModel
{
    GetPlayFabIDsFromKongregateIDsRequest();
    GetPlayFabIDsFromKongregateIDsRequest(const GetPlayFabIDsFromKongregateIDsRequest& src);
    GetPlayFabIDsFromKongregateIDsRequest(GetPlayFabIDsFromKongregateIDsRequest&& src);
    GetPlayFabIDsFromKongregateIDsRequest(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& src);
    GetPlayFabIDsFromKongregateIDsRequest& operator=(const GetPlayFabIDsFromKongregateIDsRequest&) = delete;
    ~GetPlayFabIDsFromKongregateIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_kongregateIDs;
};

struct KongregatePlayFabIdPair : public PFAccountManagementKongregatePlayFabIdPair, public SerializableModel
{
    KongregatePlayFabIdPair();
    KongregatePlayFabIdPair(const KongregatePlayFabIdPair& src);
    KongregatePlayFabIdPair(KongregatePlayFabIdPair&& src);
    KongregatePlayFabIdPair(const PFAccountManagementKongregatePlayFabIdPair& src);
    KongregatePlayFabIdPair& operator=(const KongregatePlayFabIdPair&) = delete;
    ~KongregatePlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_kongregateId;
    String m_playFabId;
};

struct GetPlayFabIDsFromKongregateIDsResult : public PFAccountManagementGetPlayFabIDsFromKongregateIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromKongregateIDsResult();
    GetPlayFabIDsFromKongregateIDsResult(const GetPlayFabIDsFromKongregateIDsResult& src);
    GetPlayFabIDsFromKongregateIDsResult(GetPlayFabIDsFromKongregateIDsResult&& src);
    GetPlayFabIDsFromKongregateIDsResult(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& src);
    GetPlayFabIDsFromKongregateIDsResult& operator=(const GetPlayFabIDsFromKongregateIDsResult&) = delete;
    ~GetPlayFabIDsFromKongregateIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementKongregatePlayFabIdPair, KongregatePlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, public BaseModel
{
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest();
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& operator=(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&) = delete;
    ~GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_nintendoSwitchDeviceIds;
};

struct NintendoSwitchPlayFabIdPair : public PFAccountManagementNintendoSwitchPlayFabIdPair, public SerializableModel
{
    NintendoSwitchPlayFabIdPair();
    NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src);
    NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair&& src);
    NintendoSwitchPlayFabIdPair(const PFAccountManagementNintendoSwitchPlayFabIdPair& src);
    NintendoSwitchPlayFabIdPair& operator=(const NintendoSwitchPlayFabIdPair&) = delete;
    ~NintendoSwitchPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchDeviceId;
    String m_playFabId;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult();
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& operator=(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&) = delete;
    ~GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementNintendoSwitchPlayFabIdPair, NintendoSwitchPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest : public PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest, public BaseModel
{
    GetPlayFabIDsFromPSNAccountIDsRequest();
    GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src);
    GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest&& src);
    GetPlayFabIDsFromPSNAccountIDsRequest(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& src);
    GetPlayFabIDsFromPSNAccountIDsRequest& operator=(const GetPlayFabIDsFromPSNAccountIDsRequest&) = delete;
    ~GetPlayFabIDsFromPSNAccountIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_issuerId;
    PointerArrayModel<char, String> m_PSNAccountIDs;
};

struct PSNAccountPlayFabIdPair : public PFAccountManagementPSNAccountPlayFabIdPair, public SerializableModel
{
    PSNAccountPlayFabIdPair();
    PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src);
    PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair&& src);
    PSNAccountPlayFabIdPair(const PFAccountManagementPSNAccountPlayFabIdPair& src);
    PSNAccountPlayFabIdPair& operator=(const PSNAccountPlayFabIdPair&) = delete;
    ~PSNAccountPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_PSNAccountId;
};

struct GetPlayFabIDsFromPSNAccountIDsResult : public PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromPSNAccountIDsResult();
    GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src);
    GetPlayFabIDsFromPSNAccountIDsResult(GetPlayFabIDsFromPSNAccountIDsResult&& src);
    GetPlayFabIDsFromPSNAccountIDsResult(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& src);
    GetPlayFabIDsFromPSNAccountIDsResult& operator=(const GetPlayFabIDsFromPSNAccountIDsResult&) = delete;
    ~GetPlayFabIDsFromPSNAccountIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementPSNAccountPlayFabIdPair, PSNAccountPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromSteamIDsRequest : public PFAccountManagementGetPlayFabIDsFromSteamIDsRequest, public BaseModel
{
    GetPlayFabIDsFromSteamIDsRequest();
    GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src);
    GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest&& src);
    GetPlayFabIDsFromSteamIDsRequest(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& src);
    GetPlayFabIDsFromSteamIDsRequest& operator=(const GetPlayFabIDsFromSteamIDsRequest&) = delete;
    ~GetPlayFabIDsFromSteamIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_steamStringIDs;
};

struct SteamPlayFabIdPair : public PFAccountManagementSteamPlayFabIdPair, public SerializableModel
{
    SteamPlayFabIdPair();
    SteamPlayFabIdPair(const SteamPlayFabIdPair& src);
    SteamPlayFabIdPair(SteamPlayFabIdPair&& src);
    SteamPlayFabIdPair(const PFAccountManagementSteamPlayFabIdPair& src);
    SteamPlayFabIdPair& operator=(const SteamPlayFabIdPair&) = delete;
    ~SteamPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_steamStringId;
};

struct GetPlayFabIDsFromSteamIDsResult : public PFAccountManagementGetPlayFabIDsFromSteamIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromSteamIDsResult();
    GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src);
    GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult&& src);
    GetPlayFabIDsFromSteamIDsResult(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& src);
    GetPlayFabIDsFromSteamIDsResult& operator=(const GetPlayFabIDsFromSteamIDsResult&) = delete;
    ~GetPlayFabIDsFromSteamIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementSteamPlayFabIdPair, SteamPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromTwitchIDsRequest : public PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest, public BaseModel
{
    GetPlayFabIDsFromTwitchIDsRequest();
    GetPlayFabIDsFromTwitchIDsRequest(const GetPlayFabIDsFromTwitchIDsRequest& src);
    GetPlayFabIDsFromTwitchIDsRequest(GetPlayFabIDsFromTwitchIDsRequest&& src);
    GetPlayFabIDsFromTwitchIDsRequest(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& src);
    GetPlayFabIDsFromTwitchIDsRequest& operator=(const GetPlayFabIDsFromTwitchIDsRequest&) = delete;
    ~GetPlayFabIDsFromTwitchIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_twitchIds;
};

struct TwitchPlayFabIdPair : public PFAccountManagementTwitchPlayFabIdPair, public SerializableModel
{
    TwitchPlayFabIdPair();
    TwitchPlayFabIdPair(const TwitchPlayFabIdPair& src);
    TwitchPlayFabIdPair(TwitchPlayFabIdPair&& src);
    TwitchPlayFabIdPair(const PFAccountManagementTwitchPlayFabIdPair& src);
    TwitchPlayFabIdPair& operator=(const TwitchPlayFabIdPair&) = delete;
    ~TwitchPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_twitchId;
};

struct GetPlayFabIDsFromTwitchIDsResult : public PFAccountManagementGetPlayFabIDsFromTwitchIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromTwitchIDsResult();
    GetPlayFabIDsFromTwitchIDsResult(const GetPlayFabIDsFromTwitchIDsResult& src);
    GetPlayFabIDsFromTwitchIDsResult(GetPlayFabIDsFromTwitchIDsResult&& src);
    GetPlayFabIDsFromTwitchIDsResult(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& src);
    GetPlayFabIDsFromTwitchIDsResult& operator=(const GetPlayFabIDsFromTwitchIDsResult&) = delete;
    ~GetPlayFabIDsFromTwitchIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementTwitchPlayFabIdPair, TwitchPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromXboxLiveIDsRequest : public PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest, public BaseModel
{
    GetPlayFabIDsFromXboxLiveIDsRequest();
    GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src);
    GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest&& src);
    GetPlayFabIDsFromXboxLiveIDsRequest(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& src);
    GetPlayFabIDsFromXboxLiveIDsRequest& operator=(const GetPlayFabIDsFromXboxLiveIDsRequest&) = delete;
    ~GetPlayFabIDsFromXboxLiveIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_sandbox;
    PointerArrayModel<char, String> m_xboxLiveAccountIDs;
};

struct XboxLiveAccountPlayFabIdPair : public PFAccountManagementXboxLiveAccountPlayFabIdPair, public SerializableModel
{
    XboxLiveAccountPlayFabIdPair();
    XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src);
    XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair&& src);
    XboxLiveAccountPlayFabIdPair(const PFAccountManagementXboxLiveAccountPlayFabIdPair& src);
    XboxLiveAccountPlayFabIdPair& operator=(const XboxLiveAccountPlayFabIdPair&) = delete;
    ~XboxLiveAccountPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_xboxLiveAccountId;
};

struct GetPlayFabIDsFromXboxLiveIDsResult : public PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromXboxLiveIDsResult();
    GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src);
    GetPlayFabIDsFromXboxLiveIDsResult(GetPlayFabIDsFromXboxLiveIDsResult&& src);
    GetPlayFabIDsFromXboxLiveIDsResult(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& src);
    GetPlayFabIDsFromXboxLiveIDsResult& operator=(const GetPlayFabIDsFromXboxLiveIDsResult&) = delete;
    ~GetPlayFabIDsFromXboxLiveIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementXboxLiveAccountPlayFabIdPair, XboxLiveAccountPlayFabIdPair> m_data;
};

struct LinkAndroidDeviceIDRequest : public PFAccountManagementLinkAndroidDeviceIDRequest, public BaseModel
{
    LinkAndroidDeviceIDRequest();
    LinkAndroidDeviceIDRequest(const LinkAndroidDeviceIDRequest& src);
    LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest&& src);
    LinkAndroidDeviceIDRequest(const PFAccountManagementLinkAndroidDeviceIDRequest& src);
    LinkAndroidDeviceIDRequest& operator=(const LinkAndroidDeviceIDRequest&) = delete;
    ~LinkAndroidDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidDevice;
    String m_androidDeviceId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_OS;
};

struct LinkAppleRequest : public PFAccountManagementLinkAppleRequest, public BaseModel
{
    LinkAppleRequest();
    LinkAppleRequest(const LinkAppleRequest& src);
    LinkAppleRequest(LinkAppleRequest&& src);
    LinkAppleRequest(const PFAccountManagementLinkAppleRequest& src);
    LinkAppleRequest& operator=(const LinkAppleRequest&) = delete;
    ~LinkAppleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_identityToken;
};

struct LinkCustomIDRequest : public PFAccountManagementLinkCustomIDRequest, public BaseModel
{
    LinkCustomIDRequest();
    LinkCustomIDRequest(const LinkCustomIDRequest& src);
    LinkCustomIDRequest(LinkCustomIDRequest&& src);
    LinkCustomIDRequest(const PFAccountManagementLinkCustomIDRequest& src);
    LinkCustomIDRequest& operator=(const LinkCustomIDRequest&) = delete;
    ~LinkCustomIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_customId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkFacebookAccountRequest : public PFAccountManagementLinkFacebookAccountRequest, public BaseModel
{
    LinkFacebookAccountRequest();
    LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src);
    LinkFacebookAccountRequest(LinkFacebookAccountRequest&& src);
    LinkFacebookAccountRequest(const PFAccountManagementLinkFacebookAccountRequest& src);
    LinkFacebookAccountRequest& operator=(const LinkFacebookAccountRequest&) = delete;
    ~LinkFacebookAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkFacebookInstantGamesIdRequest : public PFAccountManagementLinkFacebookInstantGamesIdRequest, public BaseModel
{
    LinkFacebookInstantGamesIdRequest();
    LinkFacebookInstantGamesIdRequest(const LinkFacebookInstantGamesIdRequest& src);
    LinkFacebookInstantGamesIdRequest(LinkFacebookInstantGamesIdRequest&& src);
    LinkFacebookInstantGamesIdRequest(const PFAccountManagementLinkFacebookInstantGamesIdRequest& src);
    LinkFacebookInstantGamesIdRequest& operator=(const LinkFacebookInstantGamesIdRequest&) = delete;
    ~LinkFacebookInstantGamesIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_facebookInstantGamesSignature;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkGameCenterAccountRequest : public PFAccountManagementLinkGameCenterAccountRequest, public BaseModel
{
    LinkGameCenterAccountRequest();
    LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src);
    LinkGameCenterAccountRequest(LinkGameCenterAccountRequest&& src);
    LinkGameCenterAccountRequest(const PFAccountManagementLinkGameCenterAccountRequest& src);
    LinkGameCenterAccountRequest& operator=(const LinkGameCenterAccountRequest&) = delete;
    ~LinkGameCenterAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_gameCenterId;
    String m_publicKeyUrl;
    String m_salt;
    String m_signature;
    String m_timestamp;
};

struct LinkGoogleAccountRequest : public PFAccountManagementLinkGoogleAccountRequest, public BaseModel
{
    LinkGoogleAccountRequest();
    LinkGoogleAccountRequest(const LinkGoogleAccountRequest& src);
    LinkGoogleAccountRequest(LinkGoogleAccountRequest&& src);
    LinkGoogleAccountRequest(const PFAccountManagementLinkGoogleAccountRequest& src);
    LinkGoogleAccountRequest& operator=(const LinkGoogleAccountRequest&) = delete;
    ~LinkGoogleAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_serverAuthCode;
};

struct LinkIOSDeviceIDRequest : public PFAccountManagementLinkIOSDeviceIDRequest, public BaseModel
{
    LinkIOSDeviceIDRequest();
    LinkIOSDeviceIDRequest(const LinkIOSDeviceIDRequest& src);
    LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest&& src);
    LinkIOSDeviceIDRequest(const PFAccountManagementLinkIOSDeviceIDRequest& src);
    LinkIOSDeviceIDRequest& operator=(const LinkIOSDeviceIDRequest&) = delete;
    ~LinkIOSDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_deviceId;
    String m_deviceModel;
    StdExtra::optional<bool> m_forceLink;
    String m_OS;
};

struct LinkKongregateAccountRequest : public PFAccountManagementLinkKongregateAccountRequest, public BaseModel
{
    LinkKongregateAccountRequest();
    LinkKongregateAccountRequest(const LinkKongregateAccountRequest& src);
    LinkKongregateAccountRequest(LinkKongregateAccountRequest&& src);
    LinkKongregateAccountRequest(const PFAccountManagementLinkKongregateAccountRequest& src);
    LinkKongregateAccountRequest& operator=(const LinkKongregateAccountRequest&) = delete;
    ~LinkKongregateAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authTicket;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_kongregateId;
};

struct LinkNintendoServiceAccountRequest : public PFAccountManagementLinkNintendoServiceAccountRequest, public BaseModel
{
    LinkNintendoServiceAccountRequest();
    LinkNintendoServiceAccountRequest(const LinkNintendoServiceAccountRequest& src);
    LinkNintendoServiceAccountRequest(LinkNintendoServiceAccountRequest&& src);
    LinkNintendoServiceAccountRequest(const PFAccountManagementLinkNintendoServiceAccountRequest& src);
    LinkNintendoServiceAccountRequest& operator=(const LinkNintendoServiceAccountRequest&) = delete;
    ~LinkNintendoServiceAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_identityToken;
};

struct LinkNintendoSwitchDeviceIdRequest : public PFAccountManagementLinkNintendoSwitchDeviceIdRequest, public BaseModel
{
    LinkNintendoSwitchDeviceIdRequest();
    LinkNintendoSwitchDeviceIdRequest(const LinkNintendoSwitchDeviceIdRequest& src);
    LinkNintendoSwitchDeviceIdRequest(LinkNintendoSwitchDeviceIdRequest&& src);
    LinkNintendoSwitchDeviceIdRequest(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& src);
    LinkNintendoSwitchDeviceIdRequest& operator=(const LinkNintendoSwitchDeviceIdRequest&) = delete;
    ~LinkNintendoSwitchDeviceIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_nintendoSwitchDeviceId;
};

struct LinkOpenIdConnectRequest : public PFAccountManagementLinkOpenIdConnectRequest, public BaseModel
{
    LinkOpenIdConnectRequest();
    LinkOpenIdConnectRequest(const LinkOpenIdConnectRequest& src);
    LinkOpenIdConnectRequest(LinkOpenIdConnectRequest&& src);
    LinkOpenIdConnectRequest(const PFAccountManagementLinkOpenIdConnectRequest& src);
    LinkOpenIdConnectRequest& operator=(const LinkOpenIdConnectRequest&) = delete;
    ~LinkOpenIdConnectRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_idToken;
};

struct ClientLinkPSNAccountRequest : public PFAccountManagementClientLinkPSNAccountRequest, public BaseModel
{
    ClientLinkPSNAccountRequest();
    ClientLinkPSNAccountRequest(const ClientLinkPSNAccountRequest& src);
    ClientLinkPSNAccountRequest(ClientLinkPSNAccountRequest&& src);
    ClientLinkPSNAccountRequest(const PFAccountManagementClientLinkPSNAccountRequest& src);
    ClientLinkPSNAccountRequest& operator=(const ClientLinkPSNAccountRequest&) = delete;
    ~ClientLinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    StdExtra::optional<int32_t> m_issuerId;
    String m_redirectUri;
};

struct LinkSteamAccountRequest : public PFAccountManagementLinkSteamAccountRequest, public BaseModel
{
    LinkSteamAccountRequest();
    LinkSteamAccountRequest(const LinkSteamAccountRequest& src);
    LinkSteamAccountRequest(LinkSteamAccountRequest&& src);
    LinkSteamAccountRequest(const PFAccountManagementLinkSteamAccountRequest& src);
    LinkSteamAccountRequest& operator=(const LinkSteamAccountRequest&) = delete;
    ~LinkSteamAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_steamTicket;
};

struct LinkTwitchAccountRequest : public PFAccountManagementLinkTwitchAccountRequest, public BaseModel
{
    LinkTwitchAccountRequest();
    LinkTwitchAccountRequest(const LinkTwitchAccountRequest& src);
    LinkTwitchAccountRequest(LinkTwitchAccountRequest&& src);
    LinkTwitchAccountRequest(const PFAccountManagementLinkTwitchAccountRequest& src);
    LinkTwitchAccountRequest& operator=(const LinkTwitchAccountRequest&) = delete;
    ~LinkTwitchAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
};

struct ClientLinkXboxAccountRequest : public PFAccountManagementClientLinkXboxAccountRequest, public BaseModel
{
    ClientLinkXboxAccountRequest();
    ClientLinkXboxAccountRequest(const ClientLinkXboxAccountRequest& src);
    ClientLinkXboxAccountRequest(ClientLinkXboxAccountRequest&& src);
    ClientLinkXboxAccountRequest(const PFAccountManagementClientLinkXboxAccountRequest& src);
    ClientLinkXboxAccountRequest& operator=(const ClientLinkXboxAccountRequest&) = delete;
    ~ClientLinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_xboxToken;
};

struct RemoveContactEmailRequest : public PFAccountManagementRemoveContactEmailRequest, public BaseModel
{
    RemoveContactEmailRequest();
    RemoveContactEmailRequest(const RemoveContactEmailRequest& src);
    RemoveContactEmailRequest(RemoveContactEmailRequest&& src);
    RemoveContactEmailRequest(const PFAccountManagementRemoveContactEmailRequest& src);
    RemoveContactEmailRequest& operator=(const RemoveContactEmailRequest&) = delete;
    ~RemoveContactEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ClientRemoveGenericIDRequest : public PFAccountManagementClientRemoveGenericIDRequest, public BaseModel
{
    ClientRemoveGenericIDRequest();
    ClientRemoveGenericIDRequest(const ClientRemoveGenericIDRequest& src);
    ClientRemoveGenericIDRequest(ClientRemoveGenericIDRequest&& src);
    ClientRemoveGenericIDRequest(const PFAccountManagementClientRemoveGenericIDRequest& src);
    ClientRemoveGenericIDRequest& operator=(const ClientRemoveGenericIDRequest&) = delete;
    ~ClientRemoveGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
};

struct ReportPlayerClientRequest : public PFAccountManagementReportPlayerClientRequest, public BaseModel
{
    ReportPlayerClientRequest();
    ReportPlayerClientRequest(const ReportPlayerClientRequest& src);
    ReportPlayerClientRequest(ReportPlayerClientRequest&& src);
    ReportPlayerClientRequest(const PFAccountManagementReportPlayerClientRequest& src);
    ReportPlayerClientRequest& operator=(const ReportPlayerClientRequest&) = delete;
    ~ReportPlayerClientRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_comment;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_reporteeId;
};

struct ReportPlayerClientResult : public PFAccountManagementReportPlayerClientResult, public SerializableModel, public ApiResult
{
    ReportPlayerClientResult();
    ReportPlayerClientResult(const ReportPlayerClientResult&) = default;
    ReportPlayerClientResult(ReportPlayerClientResult&&) = default;
    ReportPlayerClientResult(const PFAccountManagementReportPlayerClientResult& src);
    ReportPlayerClientResult& operator=(const ReportPlayerClientResult&) = delete;
    ~ReportPlayerClientResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ClientSendAccountRecoveryEmailRequest : public PFAccountManagementClientSendAccountRecoveryEmailRequest, public BaseModel
{
    ClientSendAccountRecoveryEmailRequest();
    ClientSendAccountRecoveryEmailRequest(const ClientSendAccountRecoveryEmailRequest& src);
    ClientSendAccountRecoveryEmailRequest(ClientSendAccountRecoveryEmailRequest&& src);
    ClientSendAccountRecoveryEmailRequest(const PFAccountManagementClientSendAccountRecoveryEmailRequest& src);
    ClientSendAccountRecoveryEmailRequest& operator=(const ClientSendAccountRecoveryEmailRequest&) = delete;
    ~ClientSendAccountRecoveryEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_emailTemplateId;
    String m_titleId;
};

struct UnlinkAndroidDeviceIDRequest : public PFAccountManagementUnlinkAndroidDeviceIDRequest, public BaseModel
{
    UnlinkAndroidDeviceIDRequest();
    UnlinkAndroidDeviceIDRequest(const UnlinkAndroidDeviceIDRequest& src);
    UnlinkAndroidDeviceIDRequest(UnlinkAndroidDeviceIDRequest&& src);
    UnlinkAndroidDeviceIDRequest(const PFAccountManagementUnlinkAndroidDeviceIDRequest& src);
    UnlinkAndroidDeviceIDRequest& operator=(const UnlinkAndroidDeviceIDRequest&) = delete;
    ~UnlinkAndroidDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidDeviceId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkAppleRequest : public PFAccountManagementUnlinkAppleRequest, public BaseModel
{
    UnlinkAppleRequest();
    UnlinkAppleRequest(const UnlinkAppleRequest& src);
    UnlinkAppleRequest(UnlinkAppleRequest&& src);
    UnlinkAppleRequest(const PFAccountManagementUnlinkAppleRequest& src);
    UnlinkAppleRequest& operator=(const UnlinkAppleRequest&) = delete;
    ~UnlinkAppleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkCustomIDRequest : public PFAccountManagementUnlinkCustomIDRequest, public BaseModel
{
    UnlinkCustomIDRequest();
    UnlinkCustomIDRequest(const UnlinkCustomIDRequest& src);
    UnlinkCustomIDRequest(UnlinkCustomIDRequest&& src);
    UnlinkCustomIDRequest(const PFAccountManagementUnlinkCustomIDRequest& src);
    UnlinkCustomIDRequest& operator=(const UnlinkCustomIDRequest&) = delete;
    ~UnlinkCustomIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_customId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkFacebookAccountRequest : public PFAccountManagementUnlinkFacebookAccountRequest, public BaseModel
{
    UnlinkFacebookAccountRequest();
    UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src);
    UnlinkFacebookAccountRequest(UnlinkFacebookAccountRequest&& src);
    UnlinkFacebookAccountRequest(const PFAccountManagementUnlinkFacebookAccountRequest& src);
    UnlinkFacebookAccountRequest& operator=(const UnlinkFacebookAccountRequest&) = delete;
    ~UnlinkFacebookAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkFacebookInstantGamesIdRequest : public PFAccountManagementUnlinkFacebookInstantGamesIdRequest, public BaseModel
{
    UnlinkFacebookInstantGamesIdRequest();
    UnlinkFacebookInstantGamesIdRequest(const UnlinkFacebookInstantGamesIdRequest& src);
    UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest&& src);
    UnlinkFacebookInstantGamesIdRequest(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& src);
    UnlinkFacebookInstantGamesIdRequest& operator=(const UnlinkFacebookInstantGamesIdRequest&) = delete;
    ~UnlinkFacebookInstantGamesIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_facebookInstantGamesId;
};

struct UnlinkGameCenterAccountRequest : public PFAccountManagementUnlinkGameCenterAccountRequest, public BaseModel
{
    UnlinkGameCenterAccountRequest();
    UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src);
    UnlinkGameCenterAccountRequest(UnlinkGameCenterAccountRequest&& src);
    UnlinkGameCenterAccountRequest(const PFAccountManagementUnlinkGameCenterAccountRequest& src);
    UnlinkGameCenterAccountRequest& operator=(const UnlinkGameCenterAccountRequest&) = delete;
    ~UnlinkGameCenterAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkGoogleAccountRequest : public PFAccountManagementUnlinkGoogleAccountRequest, public BaseModel
{
    UnlinkGoogleAccountRequest();
    UnlinkGoogleAccountRequest(const UnlinkGoogleAccountRequest& src);
    UnlinkGoogleAccountRequest(UnlinkGoogleAccountRequest&& src);
    UnlinkGoogleAccountRequest(const PFAccountManagementUnlinkGoogleAccountRequest& src);
    UnlinkGoogleAccountRequest& operator=(const UnlinkGoogleAccountRequest&) = delete;
    ~UnlinkGoogleAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkIOSDeviceIDRequest : public PFAccountManagementUnlinkIOSDeviceIDRequest, public BaseModel
{
    UnlinkIOSDeviceIDRequest();
    UnlinkIOSDeviceIDRequest(const UnlinkIOSDeviceIDRequest& src);
    UnlinkIOSDeviceIDRequest(UnlinkIOSDeviceIDRequest&& src);
    UnlinkIOSDeviceIDRequest(const PFAccountManagementUnlinkIOSDeviceIDRequest& src);
    UnlinkIOSDeviceIDRequest& operator=(const UnlinkIOSDeviceIDRequest&) = delete;
    ~UnlinkIOSDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_deviceId;
};

struct UnlinkKongregateAccountRequest : public PFAccountManagementUnlinkKongregateAccountRequest, public BaseModel
{
    UnlinkKongregateAccountRequest();
    UnlinkKongregateAccountRequest(const UnlinkKongregateAccountRequest& src);
    UnlinkKongregateAccountRequest(UnlinkKongregateAccountRequest&& src);
    UnlinkKongregateAccountRequest(const PFAccountManagementUnlinkKongregateAccountRequest& src);
    UnlinkKongregateAccountRequest& operator=(const UnlinkKongregateAccountRequest&) = delete;
    ~UnlinkKongregateAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkNintendoServiceAccountRequest : public PFAccountManagementUnlinkNintendoServiceAccountRequest, public BaseModel
{
    UnlinkNintendoServiceAccountRequest();
    UnlinkNintendoServiceAccountRequest(const UnlinkNintendoServiceAccountRequest& src);
    UnlinkNintendoServiceAccountRequest(UnlinkNintendoServiceAccountRequest&& src);
    UnlinkNintendoServiceAccountRequest(const PFAccountManagementUnlinkNintendoServiceAccountRequest& src);
    UnlinkNintendoServiceAccountRequest& operator=(const UnlinkNintendoServiceAccountRequest&) = delete;
    ~UnlinkNintendoServiceAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkNintendoSwitchDeviceIdRequest : public PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest, public BaseModel
{
    UnlinkNintendoSwitchDeviceIdRequest();
    UnlinkNintendoSwitchDeviceIdRequest(const UnlinkNintendoSwitchDeviceIdRequest& src);
    UnlinkNintendoSwitchDeviceIdRequest(UnlinkNintendoSwitchDeviceIdRequest&& src);
    UnlinkNintendoSwitchDeviceIdRequest(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& src);
    UnlinkNintendoSwitchDeviceIdRequest& operator=(const UnlinkNintendoSwitchDeviceIdRequest&) = delete;
    ~UnlinkNintendoSwitchDeviceIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_nintendoSwitchDeviceId;
};

struct UnlinkOpenIdConnectRequest : public PFAccountManagementUnlinkOpenIdConnectRequest, public BaseModel
{
    UnlinkOpenIdConnectRequest();
    UnlinkOpenIdConnectRequest(const UnlinkOpenIdConnectRequest& src);
    UnlinkOpenIdConnectRequest(UnlinkOpenIdConnectRequest&& src);
    UnlinkOpenIdConnectRequest(const PFAccountManagementUnlinkOpenIdConnectRequest& src);
    UnlinkOpenIdConnectRequest& operator=(const UnlinkOpenIdConnectRequest&) = delete;
    ~UnlinkOpenIdConnectRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ClientUnlinkPSNAccountRequest : public PFAccountManagementClientUnlinkPSNAccountRequest, public BaseModel
{
    ClientUnlinkPSNAccountRequest();
    ClientUnlinkPSNAccountRequest(const ClientUnlinkPSNAccountRequest& src);
    ClientUnlinkPSNAccountRequest(ClientUnlinkPSNAccountRequest&& src);
    ClientUnlinkPSNAccountRequest(const PFAccountManagementClientUnlinkPSNAccountRequest& src);
    ClientUnlinkPSNAccountRequest& operator=(const ClientUnlinkPSNAccountRequest&) = delete;
    ~ClientUnlinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkSteamAccountRequest : public PFAccountManagementUnlinkSteamAccountRequest, public BaseModel
{
    UnlinkSteamAccountRequest();
    UnlinkSteamAccountRequest(const UnlinkSteamAccountRequest& src);
    UnlinkSteamAccountRequest(UnlinkSteamAccountRequest&& src);
    UnlinkSteamAccountRequest(const PFAccountManagementUnlinkSteamAccountRequest& src);
    UnlinkSteamAccountRequest& operator=(const UnlinkSteamAccountRequest&) = delete;
    ~UnlinkSteamAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UnlinkTwitchAccountRequest : public PFAccountManagementUnlinkTwitchAccountRequest, public BaseModel
{
    UnlinkTwitchAccountRequest();
    UnlinkTwitchAccountRequest(const UnlinkTwitchAccountRequest& src);
    UnlinkTwitchAccountRequest(UnlinkTwitchAccountRequest&& src);
    UnlinkTwitchAccountRequest(const PFAccountManagementUnlinkTwitchAccountRequest& src);
    UnlinkTwitchAccountRequest& operator=(const UnlinkTwitchAccountRequest&) = delete;
    ~UnlinkTwitchAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ClientUnlinkXboxAccountRequest : public PFAccountManagementClientUnlinkXboxAccountRequest, public BaseModel
{
    ClientUnlinkXboxAccountRequest();
    ClientUnlinkXboxAccountRequest(const ClientUnlinkXboxAccountRequest& src);
    ClientUnlinkXboxAccountRequest(ClientUnlinkXboxAccountRequest&& src);
    ClientUnlinkXboxAccountRequest(const PFAccountManagementClientUnlinkXboxAccountRequest& src);
    ClientUnlinkXboxAccountRequest& operator=(const ClientUnlinkXboxAccountRequest&) = delete;
    ~ClientUnlinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ClientUpdateAvatarUrlRequest : public PFAccountManagementClientUpdateAvatarUrlRequest, public SerializableModel
{
    ClientUpdateAvatarUrlRequest();
    ClientUpdateAvatarUrlRequest(const ClientUpdateAvatarUrlRequest& src);
    ClientUpdateAvatarUrlRequest(ClientUpdateAvatarUrlRequest&& src);
    ClientUpdateAvatarUrlRequest(const PFAccountManagementClientUpdateAvatarUrlRequest& src);
    ClientUpdateAvatarUrlRequest& operator=(const ClientUpdateAvatarUrlRequest&) = delete;
    ~ClientUpdateAvatarUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_imageUrl;
};

struct ClientUpdateUserTitleDisplayNameRequest : public PFAccountManagementClientUpdateUserTitleDisplayNameRequest, public BaseModel
{
    ClientUpdateUserTitleDisplayNameRequest();
    ClientUpdateUserTitleDisplayNameRequest(const ClientUpdateUserTitleDisplayNameRequest& src);
    ClientUpdateUserTitleDisplayNameRequest(ClientUpdateUserTitleDisplayNameRequest&& src);
    ClientUpdateUserTitleDisplayNameRequest(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& src);
    ClientUpdateUserTitleDisplayNameRequest& operator=(const ClientUpdateUserTitleDisplayNameRequest&) = delete;
    ~ClientUpdateUserTitleDisplayNameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_displayName;
};

struct ServerAddGenericIDRequest : public PFAccountManagementServerAddGenericIDRequest, public BaseModel
{
    ServerAddGenericIDRequest();
    ServerAddGenericIDRequest(const ServerAddGenericIDRequest& src);
    ServerAddGenericIDRequest(ServerAddGenericIDRequest&& src);
    ServerAddGenericIDRequest(const PFAccountManagementServerAddGenericIDRequest& src);
    ServerAddGenericIDRequest& operator=(const ServerAddGenericIDRequest&) = delete;
    ~ServerAddGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
    String m_playFabId;
};

struct DeletePushNotificationTemplateRequest : public PFAccountManagementDeletePushNotificationTemplateRequest, public SerializableModel
{
    DeletePushNotificationTemplateRequest();
    DeletePushNotificationTemplateRequest(const DeletePushNotificationTemplateRequest& src);
    DeletePushNotificationTemplateRequest(DeletePushNotificationTemplateRequest&& src);
    DeletePushNotificationTemplateRequest(const PFAccountManagementDeletePushNotificationTemplateRequest& src);
    DeletePushNotificationTemplateRequest& operator=(const DeletePushNotificationTemplateRequest&) = delete;
    ~DeletePushNotificationTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_pushNotificationTemplateId;
};

struct GetServerCustomIDsFromPlayFabIDsRequest : public PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest, public BaseModel
{
    GetServerCustomIDsFromPlayFabIDsRequest();
    GetServerCustomIDsFromPlayFabIDsRequest(const GetServerCustomIDsFromPlayFabIDsRequest& src);
    GetServerCustomIDsFromPlayFabIDsRequest(GetServerCustomIDsFromPlayFabIDsRequest&& src);
    GetServerCustomIDsFromPlayFabIDsRequest(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& src);
    GetServerCustomIDsFromPlayFabIDsRequest& operator=(const GetServerCustomIDsFromPlayFabIDsRequest&) = delete;
    ~GetServerCustomIDsFromPlayFabIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIDs;
};

struct ServerCustomIDPlayFabIDPair : public PFAccountManagementServerCustomIDPlayFabIDPair, public SerializableModel
{
    ServerCustomIDPlayFabIDPair();
    ServerCustomIDPlayFabIDPair(const ServerCustomIDPlayFabIDPair& src);
    ServerCustomIDPlayFabIDPair(ServerCustomIDPlayFabIDPair&& src);
    ServerCustomIDPlayFabIDPair(const PFAccountManagementServerCustomIDPlayFabIDPair& src);
    ServerCustomIDPlayFabIDPair& operator=(const ServerCustomIDPlayFabIDPair&) = delete;
    ~ServerCustomIDPlayFabIDPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_serverCustomId;
};

struct GetServerCustomIDsFromPlayFabIDsResult : public PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult, public BaseModel, public ApiResult
{
    GetServerCustomIDsFromPlayFabIDsResult();
    GetServerCustomIDsFromPlayFabIDsResult(const GetServerCustomIDsFromPlayFabIDsResult& src);
    GetServerCustomIDsFromPlayFabIDsResult(GetServerCustomIDsFromPlayFabIDsResult&& src);
    GetServerCustomIDsFromPlayFabIDsResult(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& src);
    GetServerCustomIDsFromPlayFabIDsResult& operator=(const GetServerCustomIDsFromPlayFabIDsResult&) = delete;
    ~GetServerCustomIDsFromPlayFabIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementServerCustomIDPlayFabIDPair, ServerCustomIDPlayFabIDPair> m_data;
};

struct GetUserAccountInfoRequest : public PFAccountManagementGetUserAccountInfoRequest, public SerializableModel
{
    GetUserAccountInfoRequest();
    GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src);
    GetUserAccountInfoRequest(GetUserAccountInfoRequest&& src);
    GetUserAccountInfoRequest(const PFAccountManagementGetUserAccountInfoRequest& src);
    GetUserAccountInfoRequest& operator=(const GetUserAccountInfoRequest&) = delete;
    ~GetUserAccountInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetUserAccountInfoResult : public PFAccountManagementGetUserAccountInfoResult, public BaseModel, public ApiResult
{
    GetUserAccountInfoResult();
    GetUserAccountInfoResult(const GetUserAccountInfoResult& src);
    GetUserAccountInfoResult(GetUserAccountInfoResult&& src);
    GetUserAccountInfoResult(const PFAccountManagementGetUserAccountInfoResult& src);
    GetUserAccountInfoResult& operator=(const GetUserAccountInfoResult&) = delete;
    ~GetUserAccountInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct ServerLinkPSNAccountRequest : public PFAccountManagementServerLinkPSNAccountRequest, public BaseModel
{
    ServerLinkPSNAccountRequest();
    ServerLinkPSNAccountRequest(const ServerLinkPSNAccountRequest& src);
    ServerLinkPSNAccountRequest(ServerLinkPSNAccountRequest&& src);
    ServerLinkPSNAccountRequest(const PFAccountManagementServerLinkPSNAccountRequest& src);
    ServerLinkPSNAccountRequest& operator=(const ServerLinkPSNAccountRequest&) = delete;
    ~ServerLinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    StdExtra::optional<int32_t> m_issuerId;
    String m_playFabId;
    String m_redirectUri;
};

struct LinkServerCustomIdRequest : public PFAccountManagementLinkServerCustomIdRequest, public BaseModel
{
    LinkServerCustomIdRequest();
    LinkServerCustomIdRequest(const LinkServerCustomIdRequest& src);
    LinkServerCustomIdRequest(LinkServerCustomIdRequest&& src);
    LinkServerCustomIdRequest(const PFAccountManagementLinkServerCustomIdRequest& src);
    LinkServerCustomIdRequest& operator=(const LinkServerCustomIdRequest&) = delete;
    ~LinkServerCustomIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_playFabId;
    String m_serverCustomId;
};

struct ServerLinkXboxAccountRequest : public PFAccountManagementServerLinkXboxAccountRequest, public BaseModel
{
    ServerLinkXboxAccountRequest();
    ServerLinkXboxAccountRequest(const ServerLinkXboxAccountRequest& src);
    ServerLinkXboxAccountRequest(ServerLinkXboxAccountRequest&& src);
    ServerLinkXboxAccountRequest(const PFAccountManagementServerLinkXboxAccountRequest& src);
    ServerLinkXboxAccountRequest& operator=(const ServerLinkXboxAccountRequest&) = delete;
    ~ServerLinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_playFabId;
    String m_xboxToken;
};

struct ServerRemoveGenericIDRequest : public PFAccountManagementServerRemoveGenericIDRequest, public BaseModel
{
    ServerRemoveGenericIDRequest();
    ServerRemoveGenericIDRequest(const ServerRemoveGenericIDRequest& src);
    ServerRemoveGenericIDRequest(ServerRemoveGenericIDRequest&& src);
    ServerRemoveGenericIDRequest(const PFAccountManagementServerRemoveGenericIDRequest& src);
    ServerRemoveGenericIDRequest& operator=(const ServerRemoveGenericIDRequest&) = delete;
    ~ServerRemoveGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
    String m_playFabId;
};

struct LocalizedPushNotificationProperties : public PFAccountManagementLocalizedPushNotificationProperties, public SerializableModel
{
    LocalizedPushNotificationProperties();
    LocalizedPushNotificationProperties(const LocalizedPushNotificationProperties& src);
    LocalizedPushNotificationProperties(LocalizedPushNotificationProperties&& src);
    LocalizedPushNotificationProperties(const PFAccountManagementLocalizedPushNotificationProperties& src);
    LocalizedPushNotificationProperties& operator=(const LocalizedPushNotificationProperties&) = delete;
    ~LocalizedPushNotificationProperties() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_message;
    String m_subject;
};

struct SavePushNotificationTemplateRequest : public PFAccountManagementSavePushNotificationTemplateRequest, public BaseModel
{
    SavePushNotificationTemplateRequest();
    SavePushNotificationTemplateRequest(const SavePushNotificationTemplateRequest& src);
    SavePushNotificationTemplateRequest(SavePushNotificationTemplateRequest&& src);
    SavePushNotificationTemplateRequest(const PFAccountManagementSavePushNotificationTemplateRequest& src);
    SavePushNotificationTemplateRequest& operator=(const SavePushNotificationTemplateRequest&) = delete;
    ~SavePushNotificationTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidPayload;
    String m_id;
    String m_iOSPayload;
    AssociativeArrayModel<PFAccountManagementLocalizedPushNotificationPropertiesDictionaryEntry, LocalizedPushNotificationProperties> m_localizedPushNotificationTemplates;
    String m_name;
};

struct SavePushNotificationTemplateResult : public PFAccountManagementSavePushNotificationTemplateResult, public SerializableModel, public ApiResult
{
    SavePushNotificationTemplateResult();
    SavePushNotificationTemplateResult(const SavePushNotificationTemplateResult& src);
    SavePushNotificationTemplateResult(SavePushNotificationTemplateResult&& src);
    SavePushNotificationTemplateResult(const PFAccountManagementSavePushNotificationTemplateResult& src);
    SavePushNotificationTemplateResult& operator=(const SavePushNotificationTemplateResult&) = delete;
    ~SavePushNotificationTemplateResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_pushNotificationTemplateId;
};

struct SendCustomAccountRecoveryEmailRequest : public PFAccountManagementSendCustomAccountRecoveryEmailRequest, public BaseModel
{
    SendCustomAccountRecoveryEmailRequest();
    SendCustomAccountRecoveryEmailRequest(const SendCustomAccountRecoveryEmailRequest& src);
    SendCustomAccountRecoveryEmailRequest(SendCustomAccountRecoveryEmailRequest&& src);
    SendCustomAccountRecoveryEmailRequest(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& src);
    SendCustomAccountRecoveryEmailRequest& operator=(const SendCustomAccountRecoveryEmailRequest&) = delete;
    ~SendCustomAccountRecoveryEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_emailTemplateId;
    String m_username;
};

struct SendEmailFromTemplateRequest : public PFAccountManagementSendEmailFromTemplateRequest, public BaseModel
{
    SendEmailFromTemplateRequest();
    SendEmailFromTemplateRequest(const SendEmailFromTemplateRequest& src);
    SendEmailFromTemplateRequest(SendEmailFromTemplateRequest&& src);
    SendEmailFromTemplateRequest(const PFAccountManagementSendEmailFromTemplateRequest& src);
    SendEmailFromTemplateRequest& operator=(const SendEmailFromTemplateRequest&) = delete;
    ~SendEmailFromTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_emailTemplateId;
    String m_playFabId;
};

struct AdvancedPushPlatformMsg : public PFAccountManagementAdvancedPushPlatformMsg, public BaseModel
{
    AdvancedPushPlatformMsg();
    AdvancedPushPlatformMsg(const AdvancedPushPlatformMsg& src);
    AdvancedPushPlatformMsg(AdvancedPushPlatformMsg&& src);
    AdvancedPushPlatformMsg(const PFAccountManagementAdvancedPushPlatformMsg& src);
    AdvancedPushPlatformMsg& operator=(const AdvancedPushPlatformMsg&) = delete;
    ~AdvancedPushPlatformMsg() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_gCMDataOnly;
    String m_json;
};

struct PushNotificationPackage : public PFAccountManagementPushNotificationPackage, public SerializableModel
{
    PushNotificationPackage();
    PushNotificationPackage(const PushNotificationPackage& src);
    PushNotificationPackage(PushNotificationPackage&& src);
    PushNotificationPackage(const PFAccountManagementPushNotificationPackage& src);
    PushNotificationPackage& operator=(const PushNotificationPackage&) = delete;
    ~PushNotificationPackage() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_customData;
    String m_icon;
    String m_message;
    String m_sound;
    String m_title;
};

struct SendPushNotificationRequest : public PFAccountManagementSendPushNotificationRequest, public BaseModel
{
    SendPushNotificationRequest();
    SendPushNotificationRequest(const SendPushNotificationRequest& src);
    SendPushNotificationRequest(SendPushNotificationRequest&& src);
    SendPushNotificationRequest(const PFAccountManagementSendPushNotificationRequest& src);
    SendPushNotificationRequest& operator=(const SendPushNotificationRequest&) = delete;
    ~SendPushNotificationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementAdvancedPushPlatformMsg, AdvancedPushPlatformMsg> m_advancedPlatformDelivery;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_message;
    StdExtra::optional<PushNotificationPackage> m_package;
    String m_recipient;
    String m_subject;
    Vector<PFPushNotificationPlatform> m_targetPlatforms;
};

struct SendPushNotificationFromTemplateRequest : public PFAccountManagementSendPushNotificationFromTemplateRequest, public BaseModel
{
    SendPushNotificationFromTemplateRequest();
    SendPushNotificationFromTemplateRequest(const SendPushNotificationFromTemplateRequest& src);
    SendPushNotificationFromTemplateRequest(SendPushNotificationFromTemplateRequest&& src);
    SendPushNotificationFromTemplateRequest(const PFAccountManagementSendPushNotificationFromTemplateRequest& src);
    SendPushNotificationFromTemplateRequest& operator=(const SendPushNotificationFromTemplateRequest&) = delete;
    ~SendPushNotificationFromTemplateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_pushNotificationTemplateId;
    String m_recipient;
};

struct ServerUnlinkPSNAccountRequest : public PFAccountManagementServerUnlinkPSNAccountRequest, public BaseModel
{
    ServerUnlinkPSNAccountRequest();
    ServerUnlinkPSNAccountRequest(const ServerUnlinkPSNAccountRequest& src);
    ServerUnlinkPSNAccountRequest(ServerUnlinkPSNAccountRequest&& src);
    ServerUnlinkPSNAccountRequest(const PFAccountManagementServerUnlinkPSNAccountRequest& src);
    ServerUnlinkPSNAccountRequest& operator=(const ServerUnlinkPSNAccountRequest&) = delete;
    ~ServerUnlinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UnlinkServerCustomIdRequest : public PFAccountManagementUnlinkServerCustomIdRequest, public BaseModel
{
    UnlinkServerCustomIdRequest();
    UnlinkServerCustomIdRequest(const UnlinkServerCustomIdRequest& src);
    UnlinkServerCustomIdRequest(UnlinkServerCustomIdRequest&& src);
    UnlinkServerCustomIdRequest(const PFAccountManagementUnlinkServerCustomIdRequest& src);
    UnlinkServerCustomIdRequest& operator=(const UnlinkServerCustomIdRequest&) = delete;
    ~UnlinkServerCustomIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_serverCustomId;
};

struct ServerUnlinkXboxAccountRequest : public PFAccountManagementServerUnlinkXboxAccountRequest, public BaseModel
{
    ServerUnlinkXboxAccountRequest();
    ServerUnlinkXboxAccountRequest(const ServerUnlinkXboxAccountRequest& src);
    ServerUnlinkXboxAccountRequest(ServerUnlinkXboxAccountRequest&& src);
    ServerUnlinkXboxAccountRequest(const PFAccountManagementServerUnlinkXboxAccountRequest& src);
    ServerUnlinkXboxAccountRequest& operator=(const ServerUnlinkXboxAccountRequest&) = delete;
    ~ServerUnlinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ServerUpdateAvatarUrlRequest : public PFAccountManagementServerUpdateAvatarUrlRequest, public SerializableModel
{
    ServerUpdateAvatarUrlRequest();
    ServerUpdateAvatarUrlRequest(const ServerUpdateAvatarUrlRequest& src);
    ServerUpdateAvatarUrlRequest(ServerUpdateAvatarUrlRequest&& src);
    ServerUpdateAvatarUrlRequest(const PFAccountManagementServerUpdateAvatarUrlRequest& src);
    ServerUpdateAvatarUrlRequest& operator=(const ServerUpdateAvatarUrlRequest&) = delete;
    ~ServerUpdateAvatarUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_imageUrl;
    String m_playFabId;
};

struct GetGlobalPolicyRequest : public PFAccountManagementGetGlobalPolicyRequest, public BaseModel
{
    GetGlobalPolicyRequest();
    GetGlobalPolicyRequest(const GetGlobalPolicyRequest& src);
    GetGlobalPolicyRequest(GetGlobalPolicyRequest&& src);
    GetGlobalPolicyRequest(const PFAccountManagementGetGlobalPolicyRequest& src);
    GetGlobalPolicyRequest& operator=(const GetGlobalPolicyRequest&) = delete;
    ~GetGlobalPolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct EntityPermissionStatement : public PFAccountManagementEntityPermissionStatement, public BaseModel
{
    EntityPermissionStatement();
    EntityPermissionStatement(const EntityPermissionStatement& src);
    EntityPermissionStatement(EntityPermissionStatement&& src);
    EntityPermissionStatement(const PFAccountManagementEntityPermissionStatement& src);
    EntityPermissionStatement& operator=(const EntityPermissionStatement&) = delete;
    ~EntityPermissionStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_action;
    String m_comment;
    JsonObject m_condition;
    JsonObject m_principal;
    String m_resource;
};

struct GetGlobalPolicyResponse : public PFAccountManagementGetGlobalPolicyResponse, public BaseModel, public ApiResult
{
    GetGlobalPolicyResponse();
    GetGlobalPolicyResponse(const GetGlobalPolicyResponse& src);
    GetGlobalPolicyResponse(GetGlobalPolicyResponse&& src);
    GetGlobalPolicyResponse(const PFAccountManagementGetGlobalPolicyResponse& src);
    GetGlobalPolicyResponse& operator=(const GetGlobalPolicyResponse&) = delete;
    ~GetGlobalPolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementEntityPermissionStatement, EntityPermissionStatement> m_permissions;
};

struct GetEntityProfileRequest : public PFAccountManagementGetEntityProfileRequest, public BaseModel
{
    GetEntityProfileRequest();
    GetEntityProfileRequest(const GetEntityProfileRequest& src);
    GetEntityProfileRequest(GetEntityProfileRequest&& src);
    GetEntityProfileRequest(const PFAccountManagementGetEntityProfileRequest& src);
    GetEntityProfileRequest& operator=(const GetEntityProfileRequest&) = delete;
    ~GetEntityProfileRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_dataAsObject;
    StdExtra::optional<EntityKey> m_entity;
};

struct EntityProfileFileMetadata : public PFAccountManagementEntityProfileFileMetadata, public SerializableModel
{
    EntityProfileFileMetadata();
    EntityProfileFileMetadata(const EntityProfileFileMetadata& src);
    EntityProfileFileMetadata(EntityProfileFileMetadata&& src);
    EntityProfileFileMetadata(const PFAccountManagementEntityProfileFileMetadata& src);
    EntityProfileFileMetadata& operator=(const EntityProfileFileMetadata&) = delete;
    ~EntityProfileFileMetadata() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_checksum;
    String m_fileName;
};

struct EntityDataObject : public PFAccountManagementEntityDataObject, public BaseModel
{
    EntityDataObject();
    EntityDataObject(const EntityDataObject& src);
    EntityDataObject(EntityDataObject&& src);
    EntityDataObject(const PFAccountManagementEntityDataObject& src);
    EntityDataObject& operator=(const EntityDataObject&) = delete;
    ~EntityDataObject() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    String m_escapedDataObject;
    String m_objectName;
};

struct EntityStatisticChildValue : public PFAccountManagementEntityStatisticChildValue, public SerializableModel
{
    EntityStatisticChildValue();
    EntityStatisticChildValue(const EntityStatisticChildValue& src);
    EntityStatisticChildValue(EntityStatisticChildValue&& src);
    EntityStatisticChildValue(const PFAccountManagementEntityStatisticChildValue& src);
    EntityStatisticChildValue& operator=(const EntityStatisticChildValue&) = delete;
    ~EntityStatisticChildValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_childName;
    String m_metadata;
};

struct EntityStatisticValue : public PFAccountManagementEntityStatisticValue, public BaseModel
{
    EntityStatisticValue();
    EntityStatisticValue(const EntityStatisticValue& src);
    EntityStatisticValue(EntityStatisticValue&& src);
    EntityStatisticValue(const PFAccountManagementEntityStatisticValue& src);
    EntityStatisticValue& operator=(const EntityStatisticValue&) = delete;
    ~EntityStatisticValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFAccountManagementEntityStatisticChildValueDictionaryEntry, EntityStatisticChildValue> m_childStatistics;
    String m_metadata;
    String m_name;
    StdExtra::optional<int32_t> m_value;
};

struct EntityProfileBody : public PFAccountManagementEntityProfileBody, public BaseModel
{
    EntityProfileBody();
    EntityProfileBody(const EntityProfileBody& src);
    EntityProfileBody(EntityProfileBody&& src);
    EntityProfileBody(const PFAccountManagementEntityProfileBody& src);
    EntityProfileBody& operator=(const EntityProfileBody&) = delete;
    ~EntityProfileBody() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_avatarUrl;
    String m_displayName;
    StdExtra::optional<EntityKey> m_entity;
    String m_entityChain;
    PointerArrayModel<char, String> m_experimentVariants;
    AssociativeArrayModel<PFAccountManagementEntityProfileFileMetadataDictionaryEntry, EntityProfileFileMetadata> m_files;
    String m_language;
    String m_leaderboardMetadata;
    StdExtra::optional<EntityLineage> m_lineage;
    AssociativeArrayModel<PFAccountManagementEntityDataObjectDictionaryEntry, EntityDataObject> m_objects;
    PointerArrayModel<PFAccountManagementEntityPermissionStatement, EntityPermissionStatement> m_permissions;
    AssociativeArrayModel<PFAccountManagementEntityStatisticValueDictionaryEntry, EntityStatisticValue> m_statistics;
};

struct GetEntityProfileResponse : public PFAccountManagementGetEntityProfileResponse, public BaseModel, public ApiResult
{
    GetEntityProfileResponse();
    GetEntityProfileResponse(const GetEntityProfileResponse& src);
    GetEntityProfileResponse(GetEntityProfileResponse&& src);
    GetEntityProfileResponse(const PFAccountManagementGetEntityProfileResponse& src);
    GetEntityProfileResponse& operator=(const GetEntityProfileResponse&) = delete;
    ~GetEntityProfileResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityProfileBody> m_profile;
};

struct GetEntityProfilesRequest : public PFAccountManagementGetEntityProfilesRequest, public BaseModel
{
    GetEntityProfilesRequest();
    GetEntityProfilesRequest(const GetEntityProfilesRequest& src);
    GetEntityProfilesRequest(GetEntityProfilesRequest&& src);
    GetEntityProfilesRequest(const PFAccountManagementGetEntityProfilesRequest& src);
    GetEntityProfilesRequest& operator=(const GetEntityProfilesRequest&) = delete;
    ~GetEntityProfilesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_dataAsObject;
    PointerArrayModel<PFEntityKey, EntityKey> m_entities;
};

struct GetEntityProfilesResponse : public PFAccountManagementGetEntityProfilesResponse, public BaseModel, public ApiResult
{
    GetEntityProfilesResponse();
    GetEntityProfilesResponse(const GetEntityProfilesResponse& src);
    GetEntityProfilesResponse(GetEntityProfilesResponse&& src);
    GetEntityProfilesResponse(const PFAccountManagementGetEntityProfilesResponse& src);
    GetEntityProfilesResponse& operator=(const GetEntityProfilesResponse&) = delete;
    ~GetEntityProfilesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementEntityProfileBody, EntityProfileBody> m_profiles;
};

struct GetTitlePlayersFromMasterPlayerAccountIdsRequest : public PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest, public BaseModel
{
    GetTitlePlayersFromMasterPlayerAccountIdsRequest();
    GetTitlePlayersFromMasterPlayerAccountIdsRequest(const GetTitlePlayersFromMasterPlayerAccountIdsRequest& src);
    GetTitlePlayersFromMasterPlayerAccountIdsRequest(GetTitlePlayersFromMasterPlayerAccountIdsRequest&& src);
    GetTitlePlayersFromMasterPlayerAccountIdsRequest(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& src);
    GetTitlePlayersFromMasterPlayerAccountIdsRequest& operator=(const GetTitlePlayersFromMasterPlayerAccountIdsRequest&) = delete;
    ~GetTitlePlayersFromMasterPlayerAccountIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_masterPlayerAccountIds;
    String m_titleId;
};

struct GetTitlePlayersFromMasterPlayerAccountIdsResponse : public PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse, public BaseModel, public ApiResult
{
    GetTitlePlayersFromMasterPlayerAccountIdsResponse();
    GetTitlePlayersFromMasterPlayerAccountIdsResponse(const GetTitlePlayersFromMasterPlayerAccountIdsResponse& src);
    GetTitlePlayersFromMasterPlayerAccountIdsResponse(GetTitlePlayersFromMasterPlayerAccountIdsResponse&& src);
    GetTitlePlayersFromMasterPlayerAccountIdsResponse(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& src);
    GetTitlePlayersFromMasterPlayerAccountIdsResponse& operator=(const GetTitlePlayersFromMasterPlayerAccountIdsResponse&) = delete;
    ~GetTitlePlayersFromMasterPlayerAccountIdsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_titleId;
    AssociativeArrayModel<PFEntityKeyDictionaryEntry, EntityKey> m_titlePlayerAccounts;
};

struct SetGlobalPolicyRequest : public PFAccountManagementSetGlobalPolicyRequest, public BaseModel
{
    SetGlobalPolicyRequest();
    SetGlobalPolicyRequest(const SetGlobalPolicyRequest& src);
    SetGlobalPolicyRequest(SetGlobalPolicyRequest&& src);
    SetGlobalPolicyRequest(const PFAccountManagementSetGlobalPolicyRequest& src);
    SetGlobalPolicyRequest& operator=(const SetGlobalPolicyRequest&) = delete;
    ~SetGlobalPolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFAccountManagementEntityPermissionStatement, EntityPermissionStatement> m_permissions;
};

struct SetProfileLanguageRequest : public PFAccountManagementSetProfileLanguageRequest, public BaseModel
{
    SetProfileLanguageRequest();
    SetProfileLanguageRequest(const SetProfileLanguageRequest& src);
    SetProfileLanguageRequest(SetProfileLanguageRequest&& src);
    SetProfileLanguageRequest(const PFAccountManagementSetProfileLanguageRequest& src);
    SetProfileLanguageRequest& operator=(const SetProfileLanguageRequest&) = delete;
    ~SetProfileLanguageRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    StdExtra::optional<int32_t> m_expectedVersion;
    String m_language;
};

struct SetProfileLanguageResponse : public PFAccountManagementSetProfileLanguageResponse, public BaseModel, public ApiResult
{
    SetProfileLanguageResponse();
    SetProfileLanguageResponse(const SetProfileLanguageResponse& src);
    SetProfileLanguageResponse(SetProfileLanguageResponse&& src);
    SetProfileLanguageResponse(const PFAccountManagementSetProfileLanguageResponse& src);
    SetProfileLanguageResponse& operator=(const SetProfileLanguageResponse&) = delete;
    ~SetProfileLanguageResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFOperationTypes> m_operationResult;
    StdExtra::optional<int32_t> m_versionNumber;
};

struct SetEntityProfilePolicyRequest : public PFAccountManagementSetEntityProfilePolicyRequest, public BaseModel
{
    SetEntityProfilePolicyRequest();
    SetEntityProfilePolicyRequest(const SetEntityProfilePolicyRequest& src);
    SetEntityProfilePolicyRequest(SetEntityProfilePolicyRequest&& src);
    SetEntityProfilePolicyRequest(const PFAccountManagementSetEntityProfilePolicyRequest& src);
    SetEntityProfilePolicyRequest& operator=(const SetEntityProfilePolicyRequest&) = delete;
    ~SetEntityProfilePolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<PFAccountManagementEntityPermissionStatement, EntityPermissionStatement> m_statements;
};

struct SetEntityProfilePolicyResponse : public PFAccountManagementSetEntityProfilePolicyResponse, public BaseModel, public ApiResult
{
    SetEntityProfilePolicyResponse();
    SetEntityProfilePolicyResponse(const SetEntityProfilePolicyResponse& src);
    SetEntityProfilePolicyResponse(SetEntityProfilePolicyResponse&& src);
    SetEntityProfilePolicyResponse(const PFAccountManagementSetEntityProfilePolicyResponse& src);
    SetEntityProfilePolicyResponse& operator=(const SetEntityProfilePolicyResponse&) = delete;
    ~SetEntityProfilePolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAccountManagementEntityPermissionStatement, EntityPermissionStatement> m_permissions;
};

} // namespace AccountManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFAccountManagementBanRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementBanUsersRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementBanInfo& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementBanUsersResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementDeleteMasterPlayerAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementDeleteMasterPlayerAccountResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementDeletePlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementExportMasterPlayerDataRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementExportMasterPlayerDataResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayedTitleListRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayedTitleListResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayerIdFromAuthTokenResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayerProfileRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayerProfileResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLookupUserAccountInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLookupUserAccountInfoResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetUserBansRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetUserBansResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementResetPasswordRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementRevokeAllBansForUserRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementRevokeAllBansForUserResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementRevokeBansRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementRevokeBansResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUpdateBanRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUpdateBansRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUpdateBansResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUpdateUserTitleDisplayNameResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGenericServiceId& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientAddGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementAddOrUpdateContactEmailRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementAddUsernamePasswordRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementAddUsernamePasswordResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetAccountInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetAccountInfoResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementFacebookPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGameCenterPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGenericPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGooglePlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementKongregatePlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementNintendoSwitchPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementPSNAccountPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSteamPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementTwitchPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementXboxLiveAccountPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkAndroidDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkAppleRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkCustomIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkFacebookAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkFacebookInstantGamesIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkGameCenterAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkGoogleAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkIOSDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkKongregateAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkNintendoServiceAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkOpenIdConnectRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientLinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkSteamAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkTwitchAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientLinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementRemoveContactEmailRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientRemoveGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementReportPlayerClientRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementReportPlayerClientResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientSendAccountRecoveryEmailRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkAndroidDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkAppleRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkCustomIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkFacebookAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkGameCenterAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkGoogleAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkIOSDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkKongregateAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkNintendoServiceAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkOpenIdConnectRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientUnlinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkSteamAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkTwitchAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientUnlinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientUpdateAvatarUrlRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerAddGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementDeletePushNotificationTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerCustomIDPlayFabIDPair& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetUserAccountInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetUserAccountInfoResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerLinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLinkServerCustomIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerLinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerRemoveGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementLocalizedPushNotificationProperties& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSavePushNotificationTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSavePushNotificationTemplateResult& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSendEmailFromTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementAdvancedPushPlatformMsg& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementPushNotificationPackage& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSendPushNotificationRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSendPushNotificationFromTemplateRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerUnlinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementUnlinkServerCustomIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerUnlinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementServerUpdateAvatarUrlRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetGlobalPolicyRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementEntityPermissionStatement& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetGlobalPolicyResponse& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfileRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementEntityProfileFileMetadata& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementEntityDataObject& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementEntityStatisticChildValue& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementEntityStatisticValue& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementEntityProfileBody& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfileResponse& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfilesRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfilesResponse& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSetGlobalPolicyRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSetProfileLanguageRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSetProfileLanguageResponse& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSetEntityProfilePolicyRequest& input);
template<> inline JsonValue ToJson<>(const PFAccountManagementSetEntityProfilePolicyResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
