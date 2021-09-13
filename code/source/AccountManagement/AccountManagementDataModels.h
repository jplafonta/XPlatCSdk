#pragma once

#include <playfab/cpp/PFAccountManagementDataModelWrappers.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AccountManagement
{

// AccountManagement Classes
class BanRequest : public Wrappers::PFAccountManagementBanRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementBanRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementBanRequest& input);

};

class BanUsersRequest : public Wrappers::PFAccountManagementBanUsersRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementBanUsersRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementBanUsersRequest& input);

};

class BanInfo : public Wrappers::PFAccountManagementBanInfoWrapper<Allocator>, public OutputModel<PFAccountManagementBanInfo>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementBanInfoWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementBanInfo const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementBanInfo& model);
    static HRESULT Copy(const PFAccountManagementBanInfo& input, PFAccountManagementBanInfo& output, ModelBuffer& buffer);
};

class BanUsersResult : public Wrappers::PFAccountManagementBanUsersResultWrapper<Allocator>, public OutputModel<PFAccountManagementBanUsersResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementBanUsersResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementBanUsersResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementBanUsersResult& model);
    static HRESULT Copy(const PFAccountManagementBanUsersResult& input, PFAccountManagementBanUsersResult& output, ModelBuffer& buffer);
};

class DeleteMasterPlayerAccountRequest : public Wrappers::PFAccountManagementDeleteMasterPlayerAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementDeleteMasterPlayerAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementDeleteMasterPlayerAccountRequest& input);

};

class DeleteMasterPlayerAccountResult : public Wrappers::PFAccountManagementDeleteMasterPlayerAccountResultWrapper<Allocator>, public OutputModel<PFAccountManagementDeleteMasterPlayerAccountResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementDeleteMasterPlayerAccountResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementDeleteMasterPlayerAccountResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementDeleteMasterPlayerAccountResult& model);
    static HRESULT Copy(const PFAccountManagementDeleteMasterPlayerAccountResult& input, PFAccountManagementDeleteMasterPlayerAccountResult& output, ModelBuffer& buffer);
};

class DeletePlayerRequest : public Wrappers::PFAccountManagementDeletePlayerRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementDeletePlayerRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementDeletePlayerRequest& input);

};

class ExportMasterPlayerDataRequest : public Wrappers::PFAccountManagementExportMasterPlayerDataRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementExportMasterPlayerDataRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementExportMasterPlayerDataRequest& input);

};

class ExportMasterPlayerDataResult : public Wrappers::PFAccountManagementExportMasterPlayerDataResultWrapper<Allocator>, public OutputModel<PFAccountManagementExportMasterPlayerDataResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementExportMasterPlayerDataResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementExportMasterPlayerDataResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementExportMasterPlayerDataResult& model);
    static HRESULT Copy(const PFAccountManagementExportMasterPlayerDataResult& input, PFAccountManagementExportMasterPlayerDataResult& output, ModelBuffer& buffer);
};

class GetPlayedTitleListRequest : public Wrappers::PFAccountManagementGetPlayedTitleListRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayedTitleListRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayedTitleListRequest& input);

};

class GetPlayedTitleListResult : public Wrappers::PFAccountManagementGetPlayedTitleListResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayedTitleListResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayedTitleListResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayedTitleListResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayedTitleListResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayedTitleListResult& input, PFAccountManagementGetPlayedTitleListResult& output, ModelBuffer& buffer);
};

class GetPlayerIdFromAuthTokenRequest : public Wrappers::PFAccountManagementGetPlayerIdFromAuthTokenRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayerIdFromAuthTokenRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& input);

};

class GetPlayerIdFromAuthTokenResult : public Wrappers::PFAccountManagementGetPlayerIdFromAuthTokenResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayerIdFromAuthTokenResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayerIdFromAuthTokenResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayerIdFromAuthTokenResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayerIdFromAuthTokenResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayerIdFromAuthTokenResult& input, PFAccountManagementGetPlayerIdFromAuthTokenResult& output, ModelBuffer& buffer);
};

class GetPlayerProfileRequest : public Wrappers::PFAccountManagementGetPlayerProfileRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayerProfileRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayerProfileRequest& input);

};

class GetPlayerProfileResult : public Wrappers::PFAccountManagementGetPlayerProfileResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayerProfileResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayerProfileResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayerProfileResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayerProfileResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayerProfileResult& input, PFAccountManagementGetPlayerProfileResult& output, ModelBuffer& buffer);
};

class LookupUserAccountInfoRequest : public Wrappers::PFAccountManagementLookupUserAccountInfoRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLookupUserAccountInfoRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLookupUserAccountInfoRequest& input);

};

class LookupUserAccountInfoResult : public Wrappers::PFAccountManagementLookupUserAccountInfoResultWrapper<Allocator>, public OutputModel<PFAccountManagementLookupUserAccountInfoResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLookupUserAccountInfoResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementLookupUserAccountInfoResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementLookupUserAccountInfoResult& model);
    static HRESULT Copy(const PFAccountManagementLookupUserAccountInfoResult& input, PFAccountManagementLookupUserAccountInfoResult& output, ModelBuffer& buffer);
};

class GetUserBansRequest : public Wrappers::PFAccountManagementGetUserBansRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetUserBansRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetUserBansRequest& input);

};

class GetUserBansResult : public Wrappers::PFAccountManagementGetUserBansResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetUserBansResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetUserBansResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetUserBansResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetUserBansResult& model);
    static HRESULT Copy(const PFAccountManagementGetUserBansResult& input, PFAccountManagementGetUserBansResult& output, ModelBuffer& buffer);
};

class ResetPasswordRequest : public Wrappers::PFAccountManagementResetPasswordRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementResetPasswordRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementResetPasswordRequest& input);

};

class RevokeAllBansForUserRequest : public Wrappers::PFAccountManagementRevokeAllBansForUserRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementRevokeAllBansForUserRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementRevokeAllBansForUserRequest& input);

};

class RevokeAllBansForUserResult : public Wrappers::PFAccountManagementRevokeAllBansForUserResultWrapper<Allocator>, public OutputModel<PFAccountManagementRevokeAllBansForUserResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementRevokeAllBansForUserResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementRevokeAllBansForUserResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementRevokeAllBansForUserResult& model);
    static HRESULT Copy(const PFAccountManagementRevokeAllBansForUserResult& input, PFAccountManagementRevokeAllBansForUserResult& output, ModelBuffer& buffer);
};

class RevokeBansRequest : public Wrappers::PFAccountManagementRevokeBansRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementRevokeBansRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementRevokeBansRequest& input);

};

class RevokeBansResult : public Wrappers::PFAccountManagementRevokeBansResultWrapper<Allocator>, public OutputModel<PFAccountManagementRevokeBansResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementRevokeBansResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementRevokeBansResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementRevokeBansResult& model);
    static HRESULT Copy(const PFAccountManagementRevokeBansResult& input, PFAccountManagementRevokeBansResult& output, ModelBuffer& buffer);
};

class AdminSendAccountRecoveryEmailRequest : public Wrappers::PFAccountManagementAdminSendAccountRecoveryEmailRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementAdminSendAccountRecoveryEmailRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& input);

};

class UpdateBanRequest : public Wrappers::PFAccountManagementUpdateBanRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUpdateBanRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUpdateBanRequest& input);

};

class UpdateBansRequest : public Wrappers::PFAccountManagementUpdateBansRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUpdateBansRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUpdateBansRequest& input);

};

class UpdateBansResult : public Wrappers::PFAccountManagementUpdateBansResultWrapper<Allocator>, public OutputModel<PFAccountManagementUpdateBansResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUpdateBansResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementUpdateBansResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementUpdateBansResult& model);
    static HRESULT Copy(const PFAccountManagementUpdateBansResult& input, PFAccountManagementUpdateBansResult& output, ModelBuffer& buffer);
};

class AdminUpdateUserTitleDisplayNameRequest : public Wrappers::PFAccountManagementAdminUpdateUserTitleDisplayNameRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementAdminUpdateUserTitleDisplayNameRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& input);

};

class UpdateUserTitleDisplayNameResult : public Wrappers::PFAccountManagementUpdateUserTitleDisplayNameResultWrapper<Allocator>, public OutputModel<PFAccountManagementUpdateUserTitleDisplayNameResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUpdateUserTitleDisplayNameResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementUpdateUserTitleDisplayNameResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementUpdateUserTitleDisplayNameResult& model);
    static HRESULT Copy(const PFAccountManagementUpdateUserTitleDisplayNameResult& input, PFAccountManagementUpdateUserTitleDisplayNameResult& output, ModelBuffer& buffer);
};

class GenericServiceId : public Wrappers::PFAccountManagementGenericServiceIdWrapper<Allocator>, public InputModel, public OutputModel<PFAccountManagementGenericServiceId>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGenericServiceIdWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGenericServiceId& input);

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGenericServiceId const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGenericServiceId& model);
    static HRESULT Copy(const PFAccountManagementGenericServiceId& input, PFAccountManagementGenericServiceId& output, ModelBuffer& buffer);
};

class ClientAddGenericIDRequest : public Wrappers::PFAccountManagementClientAddGenericIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientAddGenericIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientAddGenericIDRequest& input);

};

class AddOrUpdateContactEmailRequest : public Wrappers::PFAccountManagementAddOrUpdateContactEmailRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementAddOrUpdateContactEmailRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementAddOrUpdateContactEmailRequest& input);

};

class AddUsernamePasswordRequest : public Wrappers::PFAccountManagementAddUsernamePasswordRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementAddUsernamePasswordRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementAddUsernamePasswordRequest& input);

};

class AddUsernamePasswordResult : public Wrappers::PFAccountManagementAddUsernamePasswordResultWrapper<Allocator>, public OutputModel<PFAccountManagementAddUsernamePasswordResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementAddUsernamePasswordResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementAddUsernamePasswordResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementAddUsernamePasswordResult& model);
    static HRESULT Copy(const PFAccountManagementAddUsernamePasswordResult& input, PFAccountManagementAddUsernamePasswordResult& output, ModelBuffer& buffer);
};

class GetAccountInfoRequest : public Wrappers::PFAccountManagementGetAccountInfoRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetAccountInfoRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetAccountInfoRequest& input);

};

class GetAccountInfoResult : public Wrappers::PFAccountManagementGetAccountInfoResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetAccountInfoResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetAccountInfoResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetAccountInfoResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetAccountInfoResult& model);
    static HRESULT Copy(const PFAccountManagementGetAccountInfoResult& input, PFAccountManagementGetAccountInfoResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromFacebookIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& input);

};

class FacebookPlayFabIdPair : public Wrappers::PFAccountManagementFacebookPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementFacebookPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementFacebookPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementFacebookPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementFacebookPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementFacebookPlayFabIdPair& input, PFAccountManagementFacebookPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromFacebookIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromFacebookIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromFacebookIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& input, PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input);

};

class FacebookInstantGamesPlayFabIdPair : public Wrappers::PFAccountManagementFacebookInstantGamesPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementFacebookInstantGamesPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementFacebookInstantGamesPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementFacebookInstantGamesPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& input, PFAccountManagementFacebookInstantGamesPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromFacebookInstantGamesIdsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& input, PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromGameCenterIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& input);

};

class GameCenterPlayFabIdPair : public Wrappers::PFAccountManagementGameCenterPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementGameCenterPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGameCenterPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGameCenterPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGameCenterPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementGameCenterPlayFabIdPair& input, PFAccountManagementGameCenterPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromGameCenterIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromGameCenterIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromGameCenterIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& input, PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromGenericIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromGenericIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromGenericIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& input);

};

class GenericPlayFabIdPair : public Wrappers::PFAccountManagementGenericPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementGenericPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGenericPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGenericPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGenericPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementGenericPlayFabIdPair& input, PFAccountManagementGenericPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromGenericIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromGenericIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromGenericIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromGenericIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromGenericIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& input, PFAccountManagementGetPlayFabIDsFromGenericIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromGoogleIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromGoogleIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromGoogleIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& input);

};

class GooglePlayFabIdPair : public Wrappers::PFAccountManagementGooglePlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementGooglePlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGooglePlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGooglePlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGooglePlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementGooglePlayFabIdPair& input, PFAccountManagementGooglePlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromGoogleIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromGoogleIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromGoogleIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromGoogleIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromGoogleIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& input, PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromKongregateIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromKongregateIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromKongregateIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& input);

};

class KongregatePlayFabIdPair : public Wrappers::PFAccountManagementKongregatePlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementKongregatePlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementKongregatePlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementKongregatePlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementKongregatePlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementKongregatePlayFabIdPair& input, PFAccountManagementKongregatePlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromKongregateIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromKongregateIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromKongregateIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromKongregateIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromKongregateIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& input, PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input);

};

class NintendoSwitchPlayFabIdPair : public Wrappers::PFAccountManagementNintendoSwitchPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementNintendoSwitchPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementNintendoSwitchPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementNintendoSwitchPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementNintendoSwitchPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementNintendoSwitchPlayFabIdPair& input, PFAccountManagementNintendoSwitchPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input, PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromPSNAccountIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& input);

};

class PSNAccountPlayFabIdPair : public Wrappers::PFAccountManagementPSNAccountPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementPSNAccountPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementPSNAccountPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementPSNAccountPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementPSNAccountPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementPSNAccountPlayFabIdPair& input, PFAccountManagementPSNAccountPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromPSNAccountIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& input, PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromSteamIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromSteamIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromSteamIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& input);

};

class SteamPlayFabIdPair : public Wrappers::PFAccountManagementSteamPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementSteamPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSteamPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementSteamPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementSteamPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementSteamPlayFabIdPair& input, PFAccountManagementSteamPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromSteamIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromSteamIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromSteamIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromSteamIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromSteamIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& input, PFAccountManagementGetPlayFabIDsFromSteamIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromTwitchIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromTwitchIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromTwitchIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& input);

};

class TwitchPlayFabIdPair : public Wrappers::PFAccountManagementTwitchPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementTwitchPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementTwitchPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementTwitchPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementTwitchPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementTwitchPlayFabIdPair& input, PFAccountManagementTwitchPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromTwitchIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromTwitchIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromTwitchIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromTwitchIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromTwitchIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& input, PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromXboxLiveIDsRequest : public Wrappers::PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& input);

};

class XboxLiveAccountPlayFabIdPair : public Wrappers::PFAccountManagementXboxLiveAccountPlayFabIdPairWrapper<Allocator>, public OutputModel<PFAccountManagementXboxLiveAccountPlayFabIdPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementXboxLiveAccountPlayFabIdPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementXboxLiveAccountPlayFabIdPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementXboxLiveAccountPlayFabIdPair& model);
    static HRESULT Copy(const PFAccountManagementXboxLiveAccountPlayFabIdPair& input, PFAccountManagementXboxLiveAccountPlayFabIdPair& output, ModelBuffer& buffer);
};

class GetPlayFabIDsFromXboxLiveIDsResult : public Wrappers::PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& input, PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& output, ModelBuffer& buffer);
};

class LinkAndroidDeviceIDRequest : public Wrappers::PFAccountManagementLinkAndroidDeviceIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkAndroidDeviceIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkAndroidDeviceIDRequest& input);

};

class LinkAppleRequest : public Wrappers::PFAccountManagementLinkAppleRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkAppleRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkAppleRequest& input);

};

class LinkCustomIDRequest : public Wrappers::PFAccountManagementLinkCustomIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkCustomIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkCustomIDRequest& input);

};

class LinkFacebookAccountRequest : public Wrappers::PFAccountManagementLinkFacebookAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkFacebookAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkFacebookAccountRequest& input);

};

class LinkFacebookInstantGamesIdRequest : public Wrappers::PFAccountManagementLinkFacebookInstantGamesIdRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkFacebookInstantGamesIdRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkFacebookInstantGamesIdRequest& input);

};

class LinkGameCenterAccountRequest : public Wrappers::PFAccountManagementLinkGameCenterAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkGameCenterAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkGameCenterAccountRequest& input);

};

class LinkGoogleAccountRequest : public Wrappers::PFAccountManagementLinkGoogleAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkGoogleAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkGoogleAccountRequest& input);

};

class LinkIOSDeviceIDRequest : public Wrappers::PFAccountManagementLinkIOSDeviceIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkIOSDeviceIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkIOSDeviceIDRequest& input);

};

class LinkKongregateAccountRequest : public Wrappers::PFAccountManagementLinkKongregateAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkKongregateAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkKongregateAccountRequest& input);

};

class LinkNintendoServiceAccountRequest : public Wrappers::PFAccountManagementLinkNintendoServiceAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkNintendoServiceAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkNintendoServiceAccountRequest& input);

};

class LinkNintendoSwitchDeviceIdRequest : public Wrappers::PFAccountManagementLinkNintendoSwitchDeviceIdRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkNintendoSwitchDeviceIdRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& input);

};

class LinkOpenIdConnectRequest : public Wrappers::PFAccountManagementLinkOpenIdConnectRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkOpenIdConnectRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkOpenIdConnectRequest& input);

};

class ClientLinkPSNAccountRequest : public Wrappers::PFAccountManagementClientLinkPSNAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientLinkPSNAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientLinkPSNAccountRequest& input);

};

class LinkSteamAccountRequest : public Wrappers::PFAccountManagementLinkSteamAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkSteamAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkSteamAccountRequest& input);

};

class LinkTwitchAccountRequest : public Wrappers::PFAccountManagementLinkTwitchAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkTwitchAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkTwitchAccountRequest& input);

};

class ClientLinkXboxAccountRequest : public Wrappers::PFAccountManagementClientLinkXboxAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientLinkXboxAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientLinkXboxAccountRequest& input);

};

class RemoveContactEmailRequest : public Wrappers::PFAccountManagementRemoveContactEmailRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementRemoveContactEmailRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementRemoveContactEmailRequest& input);

};

class ClientRemoveGenericIDRequest : public Wrappers::PFAccountManagementClientRemoveGenericIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientRemoveGenericIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientRemoveGenericIDRequest& input);

};

class ReportPlayerClientRequest : public Wrappers::PFAccountManagementReportPlayerClientRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementReportPlayerClientRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementReportPlayerClientRequest& input);

};

class ReportPlayerClientResult : public Wrappers::PFAccountManagementReportPlayerClientResultWrapper<Allocator>, public OutputModel<PFAccountManagementReportPlayerClientResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementReportPlayerClientResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementReportPlayerClientResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementReportPlayerClientResult& model);
    static HRESULT Copy(const PFAccountManagementReportPlayerClientResult& input, PFAccountManagementReportPlayerClientResult& output, ModelBuffer& buffer);
};

class ClientSendAccountRecoveryEmailRequest : public Wrappers::PFAccountManagementClientSendAccountRecoveryEmailRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientSendAccountRecoveryEmailRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientSendAccountRecoveryEmailRequest& input);

};

class UnlinkAndroidDeviceIDRequest : public Wrappers::PFAccountManagementUnlinkAndroidDeviceIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkAndroidDeviceIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkAndroidDeviceIDRequest& input);

};

class UnlinkAppleRequest : public Wrappers::PFAccountManagementUnlinkAppleRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkAppleRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkAppleRequest& input);

};

class UnlinkCustomIDRequest : public Wrappers::PFAccountManagementUnlinkCustomIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkCustomIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkCustomIDRequest& input);

};

class UnlinkFacebookAccountRequest : public Wrappers::PFAccountManagementUnlinkFacebookAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkFacebookAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkFacebookAccountRequest& input);

};

class UnlinkFacebookInstantGamesIdRequest : public Wrappers::PFAccountManagementUnlinkFacebookInstantGamesIdRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkFacebookInstantGamesIdRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& input);

};

class UnlinkGameCenterAccountRequest : public Wrappers::PFAccountManagementUnlinkGameCenterAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkGameCenterAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkGameCenterAccountRequest& input);

};

class UnlinkGoogleAccountRequest : public Wrappers::PFAccountManagementUnlinkGoogleAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkGoogleAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkGoogleAccountRequest& input);

};

class UnlinkIOSDeviceIDRequest : public Wrappers::PFAccountManagementUnlinkIOSDeviceIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkIOSDeviceIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkIOSDeviceIDRequest& input);

};

class UnlinkKongregateAccountRequest : public Wrappers::PFAccountManagementUnlinkKongregateAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkKongregateAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkKongregateAccountRequest& input);

};

class UnlinkNintendoServiceAccountRequest : public Wrappers::PFAccountManagementUnlinkNintendoServiceAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkNintendoServiceAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkNintendoServiceAccountRequest& input);

};

class UnlinkNintendoSwitchDeviceIdRequest : public Wrappers::PFAccountManagementUnlinkNintendoSwitchDeviceIdRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkNintendoSwitchDeviceIdRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& input);

};

class UnlinkOpenIdConnectRequest : public Wrappers::PFAccountManagementUnlinkOpenIdConnectRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkOpenIdConnectRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkOpenIdConnectRequest& input);

};

class ClientUnlinkPSNAccountRequest : public Wrappers::PFAccountManagementClientUnlinkPSNAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientUnlinkPSNAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientUnlinkPSNAccountRequest& input);

};

class UnlinkSteamAccountRequest : public Wrappers::PFAccountManagementUnlinkSteamAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkSteamAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkSteamAccountRequest& input);

};

class UnlinkTwitchAccountRequest : public Wrappers::PFAccountManagementUnlinkTwitchAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkTwitchAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkTwitchAccountRequest& input);

};

class ClientUnlinkXboxAccountRequest : public Wrappers::PFAccountManagementClientUnlinkXboxAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientUnlinkXboxAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientUnlinkXboxAccountRequest& input);

};

class ClientUpdateAvatarUrlRequest : public Wrappers::PFAccountManagementClientUpdateAvatarUrlRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientUpdateAvatarUrlRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientUpdateAvatarUrlRequest& input);

};

class ClientUpdateUserTitleDisplayNameRequest : public Wrappers::PFAccountManagementClientUpdateUserTitleDisplayNameRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementClientUpdateUserTitleDisplayNameRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& input);

};

class ServerAddGenericIDRequest : public Wrappers::PFAccountManagementServerAddGenericIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerAddGenericIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerAddGenericIDRequest& input);

};

class DeletePushNotificationTemplateRequest : public Wrappers::PFAccountManagementDeletePushNotificationTemplateRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementDeletePushNotificationTemplateRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementDeletePushNotificationTemplateRequest& input);

};

class GetServerCustomIDsFromPlayFabIDsRequest : public Wrappers::PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& input);

};

class ServerCustomIDPlayFabIDPair : public Wrappers::PFAccountManagementServerCustomIDPlayFabIDPairWrapper<Allocator>, public OutputModel<PFAccountManagementServerCustomIDPlayFabIDPair>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerCustomIDPlayFabIDPairWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementServerCustomIDPlayFabIDPair const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementServerCustomIDPlayFabIDPair& model);
    static HRESULT Copy(const PFAccountManagementServerCustomIDPlayFabIDPair& input, PFAccountManagementServerCustomIDPlayFabIDPair& output, ModelBuffer& buffer);
};

class GetServerCustomIDsFromPlayFabIDsResult : public Wrappers::PFAccountManagementGetServerCustomIDsFromPlayFabIDsResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetServerCustomIDsFromPlayFabIDsResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& model);
    static HRESULT Copy(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& input, PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& output, ModelBuffer& buffer);
};

class GetUserAccountInfoRequest : public Wrappers::PFAccountManagementGetUserAccountInfoRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetUserAccountInfoRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetUserAccountInfoRequest& input);

};

class GetUserAccountInfoResult : public Wrappers::PFAccountManagementGetUserAccountInfoResultWrapper<Allocator>, public OutputModel<PFAccountManagementGetUserAccountInfoResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetUserAccountInfoResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetUserAccountInfoResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetUserAccountInfoResult& model);
    static HRESULT Copy(const PFAccountManagementGetUserAccountInfoResult& input, PFAccountManagementGetUserAccountInfoResult& output, ModelBuffer& buffer);
};

class ServerLinkPSNAccountRequest : public Wrappers::PFAccountManagementServerLinkPSNAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerLinkPSNAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerLinkPSNAccountRequest& input);

};

class LinkServerCustomIdRequest : public Wrappers::PFAccountManagementLinkServerCustomIdRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLinkServerCustomIdRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLinkServerCustomIdRequest& input);

};

class ServerLinkXboxAccountRequest : public Wrappers::PFAccountManagementServerLinkXboxAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerLinkXboxAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerLinkXboxAccountRequest& input);

};

class ServerRemoveGenericIDRequest : public Wrappers::PFAccountManagementServerRemoveGenericIDRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerRemoveGenericIDRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerRemoveGenericIDRequest& input);

};

class LocalizedPushNotificationProperties : public Wrappers::PFAccountManagementLocalizedPushNotificationPropertiesWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementLocalizedPushNotificationPropertiesWrapper<Allocator>;
    using ModelWrapperType::ModelType;
    using DictionaryEntryType = ModelWrapperType::DictionaryEntryType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementLocalizedPushNotificationProperties& input);

};

class SavePushNotificationTemplateRequest : public Wrappers::PFAccountManagementSavePushNotificationTemplateRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSavePushNotificationTemplateRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSavePushNotificationTemplateRequest& input);

};

class SavePushNotificationTemplateResult : public Wrappers::PFAccountManagementSavePushNotificationTemplateResultWrapper<Allocator>, public OutputModel<PFAccountManagementSavePushNotificationTemplateResult>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSavePushNotificationTemplateResultWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementSavePushNotificationTemplateResult const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementSavePushNotificationTemplateResult& model);
    static HRESULT Copy(const PFAccountManagementSavePushNotificationTemplateResult& input, PFAccountManagementSavePushNotificationTemplateResult& output, ModelBuffer& buffer);
};

class SendCustomAccountRecoveryEmailRequest : public Wrappers::PFAccountManagementSendCustomAccountRecoveryEmailRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSendCustomAccountRecoveryEmailRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& input);

};

class SendEmailFromTemplateRequest : public Wrappers::PFAccountManagementSendEmailFromTemplateRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSendEmailFromTemplateRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSendEmailFromTemplateRequest& input);

};

class AdvancedPushPlatformMsg : public Wrappers::PFAccountManagementAdvancedPushPlatformMsgWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementAdvancedPushPlatformMsgWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementAdvancedPushPlatformMsg& input);

};

class PushNotificationPackage : public Wrappers::PFAccountManagementPushNotificationPackageWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementPushNotificationPackageWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementPushNotificationPackage& input);

};

class SendPushNotificationRequest : public Wrappers::PFAccountManagementSendPushNotificationRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSendPushNotificationRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSendPushNotificationRequest& input);

};

class SendPushNotificationFromTemplateRequest : public Wrappers::PFAccountManagementSendPushNotificationFromTemplateRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSendPushNotificationFromTemplateRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSendPushNotificationFromTemplateRequest& input);

};

class ServerUnlinkPSNAccountRequest : public Wrappers::PFAccountManagementServerUnlinkPSNAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerUnlinkPSNAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerUnlinkPSNAccountRequest& input);

};

class UnlinkServerCustomIdRequest : public Wrappers::PFAccountManagementUnlinkServerCustomIdRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementUnlinkServerCustomIdRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementUnlinkServerCustomIdRequest& input);

};

class ServerUnlinkXboxAccountRequest : public Wrappers::PFAccountManagementServerUnlinkXboxAccountRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerUnlinkXboxAccountRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerUnlinkXboxAccountRequest& input);

};

class ServerUpdateAvatarUrlRequest : public Wrappers::PFAccountManagementServerUpdateAvatarUrlRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementServerUpdateAvatarUrlRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementServerUpdateAvatarUrlRequest& input);

};

class GetGlobalPolicyRequest : public Wrappers::PFAccountManagementGetGlobalPolicyRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetGlobalPolicyRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetGlobalPolicyRequest& input);

};

class EntityPermissionStatement : public Wrappers::PFAccountManagementEntityPermissionStatementWrapper<Allocator>, public InputModel, public OutputModel<PFAccountManagementEntityPermissionStatement>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementEntityPermissionStatementWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementEntityPermissionStatement& input);

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementEntityPermissionStatement const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementEntityPermissionStatement& model);
    static HRESULT Copy(const PFAccountManagementEntityPermissionStatement& input, PFAccountManagementEntityPermissionStatement& output, ModelBuffer& buffer);
};

class GetGlobalPolicyResponse : public Wrappers::PFAccountManagementGetGlobalPolicyResponseWrapper<Allocator>, public OutputModel<PFAccountManagementGetGlobalPolicyResponse>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetGlobalPolicyResponseWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetGlobalPolicyResponse const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetGlobalPolicyResponse& model);
    static HRESULT Copy(const PFAccountManagementGetGlobalPolicyResponse& input, PFAccountManagementGetGlobalPolicyResponse& output, ModelBuffer& buffer);
};

class GetEntityProfileRequest : public Wrappers::PFAccountManagementGetEntityProfileRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetEntityProfileRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetEntityProfileRequest& input);

};

class EntityProfileFileMetadata : public Wrappers::PFAccountManagementEntityProfileFileMetadataWrapper<Allocator>, public OutputModel<PFAccountManagementEntityProfileFileMetadata>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementEntityProfileFileMetadataWrapper<Allocator>;
    using ModelWrapperType::ModelType;
    using DictionaryEntryType = ModelWrapperType::DictionaryEntryType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementEntityProfileFileMetadata const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementEntityProfileFileMetadata& model);
    static HRESULT Copy(const PFAccountManagementEntityProfileFileMetadata& input, PFAccountManagementEntityProfileFileMetadata& output, ModelBuffer& buffer);
};

class EntityDataObject : public Wrappers::PFAccountManagementEntityDataObjectWrapper<Allocator>, public OutputModel<PFAccountManagementEntityDataObject>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementEntityDataObjectWrapper<Allocator>;
    using ModelWrapperType::ModelType;
    using DictionaryEntryType = ModelWrapperType::DictionaryEntryType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementEntityDataObject const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementEntityDataObject& model);
    static HRESULT Copy(const PFAccountManagementEntityDataObject& input, PFAccountManagementEntityDataObject& output, ModelBuffer& buffer);
};

class EntityStatisticChildValue : public Wrappers::PFAccountManagementEntityStatisticChildValueWrapper<Allocator>, public OutputModel<PFAccountManagementEntityStatisticChildValue>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementEntityStatisticChildValueWrapper<Allocator>;
    using ModelWrapperType::ModelType;
    using DictionaryEntryType = ModelWrapperType::DictionaryEntryType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementEntityStatisticChildValue const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementEntityStatisticChildValue& model);
    static HRESULT Copy(const PFAccountManagementEntityStatisticChildValue& input, PFAccountManagementEntityStatisticChildValue& output, ModelBuffer& buffer);
};

class EntityStatisticValue : public Wrappers::PFAccountManagementEntityStatisticValueWrapper<Allocator>, public OutputModel<PFAccountManagementEntityStatisticValue>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementEntityStatisticValueWrapper<Allocator>;
    using ModelWrapperType::ModelType;
    using DictionaryEntryType = ModelWrapperType::DictionaryEntryType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementEntityStatisticValue const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementEntityStatisticValue& model);
    static HRESULT Copy(const PFAccountManagementEntityStatisticValue& input, PFAccountManagementEntityStatisticValue& output, ModelBuffer& buffer);
};

class EntityProfileBody : public Wrappers::PFAccountManagementEntityProfileBodyWrapper<Allocator>, public OutputModel<PFAccountManagementEntityProfileBody>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementEntityProfileBodyWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementEntityProfileBody const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementEntityProfileBody& model);
    static HRESULT Copy(const PFAccountManagementEntityProfileBody& input, PFAccountManagementEntityProfileBody& output, ModelBuffer& buffer);
};

class GetEntityProfileResponse : public Wrappers::PFAccountManagementGetEntityProfileResponseWrapper<Allocator>, public OutputModel<PFAccountManagementGetEntityProfileResponse>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetEntityProfileResponseWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetEntityProfileResponse const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetEntityProfileResponse& model);
    static HRESULT Copy(const PFAccountManagementGetEntityProfileResponse& input, PFAccountManagementGetEntityProfileResponse& output, ModelBuffer& buffer);
};

class GetEntityProfilesRequest : public Wrappers::PFAccountManagementGetEntityProfilesRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetEntityProfilesRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetEntityProfilesRequest& input);

};

class GetEntityProfilesResponse : public Wrappers::PFAccountManagementGetEntityProfilesResponseWrapper<Allocator>, public OutputModel<PFAccountManagementGetEntityProfilesResponse>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetEntityProfilesResponseWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetEntityProfilesResponse const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetEntityProfilesResponse& model);
    static HRESULT Copy(const PFAccountManagementGetEntityProfilesResponse& input, PFAccountManagementGetEntityProfilesResponse& output, ModelBuffer& buffer);
};

class GetTitlePlayersFromMasterPlayerAccountIdsRequest : public Wrappers::PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& input);

};

class GetTitlePlayersFromMasterPlayerAccountIdsResponse : public Wrappers::PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponseWrapper<Allocator>, public OutputModel<PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponseWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& model);
    static HRESULT Copy(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& input, PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& output, ModelBuffer& buffer);
};

class SetGlobalPolicyRequest : public Wrappers::PFAccountManagementSetGlobalPolicyRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSetGlobalPolicyRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSetGlobalPolicyRequest& input);

};

class SetProfileLanguageRequest : public Wrappers::PFAccountManagementSetProfileLanguageRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSetProfileLanguageRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSetProfileLanguageRequest& input);

};

class SetProfileLanguageResponse : public Wrappers::PFAccountManagementSetProfileLanguageResponseWrapper<Allocator>, public OutputModel<PFAccountManagementSetProfileLanguageResponse>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSetProfileLanguageResponseWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementSetProfileLanguageResponse const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementSetProfileLanguageResponse& model);
    static HRESULT Copy(const PFAccountManagementSetProfileLanguageResponse& input, PFAccountManagementSetProfileLanguageResponse& output, ModelBuffer& buffer);
};

class SetEntityProfilePolicyRequest : public Wrappers::PFAccountManagementSetEntityProfilePolicyRequestWrapper<Allocator>, public InputModel
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSetEntityProfilePolicyRequestWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // InputModel
    JsonValue ToJson() const override;
    static JsonValue ToJson(const PFAccountManagementSetEntityProfilePolicyRequest& input);

};

class SetEntityProfilePolicyResponse : public Wrappers::PFAccountManagementSetEntityProfilePolicyResponseWrapper<Allocator>, public OutputModel<PFAccountManagementSetEntityProfilePolicyResponse>
{
public:
    using ModelWrapperType = typename Wrappers::PFAccountManagementSetEntityProfilePolicyResponseWrapper<Allocator>;
    using ModelWrapperType::ModelType;

    // Constructors
    using ModelWrapperType::ModelWrapperType;

    // OutputModel
    void FromJson(const JsonValue& input) override;
    size_t RequiredBufferSize() const override;
    Result<PFAccountManagementSetEntityProfilePolicyResponse const*> Copy(ModelBuffer& buffer) const override;

    static size_t RequiredBufferSize(const PFAccountManagementSetEntityProfilePolicyResponse& model);
    static HRESULT Copy(const PFAccountManagementSetEntityProfilePolicyResponse& input, PFAccountManagementSetEntityProfilePolicyResponse& output, ModelBuffer& buffer);
};

} // namespace AccountManagement
// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
