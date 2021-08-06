#pragma once

#include <playfab/PFSegmentsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace SegmentsModels
{

// Segments Classes
struct BanPlayerSegmentAction : public PFSegmentsBanPlayerSegmentAction, public BaseModel
{
    BanPlayerSegmentAction();
    BanPlayerSegmentAction(const BanPlayerSegmentAction& src);
    BanPlayerSegmentAction(BanPlayerSegmentAction&& src);
    BanPlayerSegmentAction(const PFSegmentsBanPlayerSegmentAction& src);
    BanPlayerSegmentAction& operator=(const BanPlayerSegmentAction&) = delete;
    ~BanPlayerSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_banHours;
    String m_reasonForBan;
};

struct DeletePlayerStatisticSegmentAction : public PFSegmentsDeletePlayerStatisticSegmentAction, public SerializableModel
{
    DeletePlayerStatisticSegmentAction();
    DeletePlayerStatisticSegmentAction(const DeletePlayerStatisticSegmentAction& src);
    DeletePlayerStatisticSegmentAction(DeletePlayerStatisticSegmentAction&& src);
    DeletePlayerStatisticSegmentAction(const PFSegmentsDeletePlayerStatisticSegmentAction& src);
    DeletePlayerStatisticSegmentAction& operator=(const DeletePlayerStatisticSegmentAction&) = delete;
    ~DeletePlayerStatisticSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct EmailNotificationSegmentAction : public PFSegmentsEmailNotificationSegmentAction, public SerializableModel
{
    EmailNotificationSegmentAction();
    EmailNotificationSegmentAction(const EmailNotificationSegmentAction& src);
    EmailNotificationSegmentAction(EmailNotificationSegmentAction&& src);
    EmailNotificationSegmentAction(const PFSegmentsEmailNotificationSegmentAction& src);
    EmailNotificationSegmentAction& operator=(const EmailNotificationSegmentAction&) = delete;
    ~EmailNotificationSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_emailTemplateId;
    String m_emailTemplateName;
};

struct ExecuteAzureFunctionSegmentAction : public PFSegmentsExecuteAzureFunctionSegmentAction, public BaseModel
{
    ExecuteAzureFunctionSegmentAction();
    ExecuteAzureFunctionSegmentAction(const ExecuteAzureFunctionSegmentAction& src);
    ExecuteAzureFunctionSegmentAction(ExecuteAzureFunctionSegmentAction&& src);
    ExecuteAzureFunctionSegmentAction(const PFSegmentsExecuteAzureFunctionSegmentAction& src);
    ExecuteAzureFunctionSegmentAction& operator=(const ExecuteAzureFunctionSegmentAction&) = delete;
    ~ExecuteAzureFunctionSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_azureFunction;
    JsonObject m_functionParameter;
};

struct ExecuteCloudScriptSegmentAction : public PFSegmentsExecuteCloudScriptSegmentAction, public BaseModel
{
    ExecuteCloudScriptSegmentAction();
    ExecuteCloudScriptSegmentAction(const ExecuteCloudScriptSegmentAction& src);
    ExecuteCloudScriptSegmentAction(ExecuteCloudScriptSegmentAction&& src);
    ExecuteCloudScriptSegmentAction(const PFSegmentsExecuteCloudScriptSegmentAction& src);
    ExecuteCloudScriptSegmentAction& operator=(const ExecuteCloudScriptSegmentAction&) = delete;
    ~ExecuteCloudScriptSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_cloudScriptFunction;
    JsonObject m_functionParameter;
    String m_functionParameterJson;
};

struct GrantItemSegmentAction : public PFSegmentsGrantItemSegmentAction, public SerializableModel
{
    GrantItemSegmentAction();
    GrantItemSegmentAction(const GrantItemSegmentAction& src);
    GrantItemSegmentAction(GrantItemSegmentAction&& src);
    GrantItemSegmentAction(const PFSegmentsGrantItemSegmentAction& src);
    GrantItemSegmentAction& operator=(const GrantItemSegmentAction&) = delete;
    ~GrantItemSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catelogId;
    String m_itemId;
};

struct GrantVirtualCurrencySegmentAction : public PFSegmentsGrantVirtualCurrencySegmentAction, public SerializableModel
{
    GrantVirtualCurrencySegmentAction();
    GrantVirtualCurrencySegmentAction(const GrantVirtualCurrencySegmentAction& src);
    GrantVirtualCurrencySegmentAction(GrantVirtualCurrencySegmentAction&& src);
    GrantVirtualCurrencySegmentAction(const PFSegmentsGrantVirtualCurrencySegmentAction& src);
    GrantVirtualCurrencySegmentAction& operator=(const GrantVirtualCurrencySegmentAction&) = delete;
    ~GrantVirtualCurrencySegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_currencyCode;
};

struct IncrementPlayerStatisticSegmentAction : public PFSegmentsIncrementPlayerStatisticSegmentAction, public SerializableModel
{
    IncrementPlayerStatisticSegmentAction();
    IncrementPlayerStatisticSegmentAction(const IncrementPlayerStatisticSegmentAction& src);
    IncrementPlayerStatisticSegmentAction(IncrementPlayerStatisticSegmentAction&& src);
    IncrementPlayerStatisticSegmentAction(const PFSegmentsIncrementPlayerStatisticSegmentAction& src);
    IncrementPlayerStatisticSegmentAction& operator=(const IncrementPlayerStatisticSegmentAction&) = delete;
    ~IncrementPlayerStatisticSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct PushNotificationSegmentAction : public PFSegmentsPushNotificationSegmentAction, public SerializableModel
{
    PushNotificationSegmentAction();
    PushNotificationSegmentAction(const PushNotificationSegmentAction& src);
    PushNotificationSegmentAction(PushNotificationSegmentAction&& src);
    PushNotificationSegmentAction(const PFSegmentsPushNotificationSegmentAction& src);
    PushNotificationSegmentAction& operator=(const PushNotificationSegmentAction&) = delete;
    ~PushNotificationSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_pushNotificationTemplateId;
};

struct SegmentTrigger : public PFSegmentsSegmentTrigger, public BaseModel
{
    SegmentTrigger();
    SegmentTrigger(const SegmentTrigger& src);
    SegmentTrigger(SegmentTrigger&& src);
    SegmentTrigger(const PFSegmentsSegmentTrigger& src);
    SegmentTrigger& operator=(const SegmentTrigger&) = delete;
    ~SegmentTrigger() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<BanPlayerSegmentAction> m_banPlayerAction;
    StdExtra::optional<DeletePlayerStatisticSegmentAction> m_deletePlayerStatisticAction;
    StdExtra::optional<EmailNotificationSegmentAction> m_emailNotificationAction;
    StdExtra::optional<ExecuteAzureFunctionSegmentAction> m_executeAzureFunctionAction;
    StdExtra::optional<ExecuteCloudScriptSegmentAction> m_executeCloudScriptAction;
    StdExtra::optional<GrantItemSegmentAction> m_grantItemAction;
    StdExtra::optional<GrantVirtualCurrencySegmentAction> m_grantVirtualCurrencyAction;
    StdExtra::optional<IncrementPlayerStatisticSegmentAction> m_incrementPlayerStatisticAction;
    StdExtra::optional<PushNotificationSegmentAction> m_pushNotificationAction;
};

struct AdCampaignSegmentFilter : public PFSegmentsAdCampaignSegmentFilter, public BaseModel
{
    AdCampaignSegmentFilter();
    AdCampaignSegmentFilter(const AdCampaignSegmentFilter& src);
    AdCampaignSegmentFilter(AdCampaignSegmentFilter&& src);
    AdCampaignSegmentFilter(const PFSegmentsAdCampaignSegmentFilter& src);
    AdCampaignSegmentFilter& operator=(const AdCampaignSegmentFilter&) = delete;
    ~AdCampaignSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_campaignId;
    String m_campaignSource;
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
};

struct FirstLoginDateSegmentFilter : public PFSegmentsFirstLoginDateSegmentFilter, public BaseModel
{
    FirstLoginDateSegmentFilter();
    FirstLoginDateSegmentFilter(const FirstLoginDateSegmentFilter& src);
    FirstLoginDateSegmentFilter(FirstLoginDateSegmentFilter&& src);
    FirstLoginDateSegmentFilter(const PFSegmentsFirstLoginDateSegmentFilter& src);
    FirstLoginDateSegmentFilter& operator=(const FirstLoginDateSegmentFilter&) = delete;
    ~FirstLoginDateSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
};

struct FirstLoginTimespanSegmentFilter : public PFSegmentsFirstLoginTimespanSegmentFilter, public BaseModel
{
    FirstLoginTimespanSegmentFilter();
    FirstLoginTimespanSegmentFilter(const FirstLoginTimespanSegmentFilter& src);
    FirstLoginTimespanSegmentFilter(FirstLoginTimespanSegmentFilter&& src);
    FirstLoginTimespanSegmentFilter(const PFSegmentsFirstLoginTimespanSegmentFilter& src);
    FirstLoginTimespanSegmentFilter& operator=(const FirstLoginTimespanSegmentFilter&) = delete;
    ~FirstLoginTimespanSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
};

struct LastLoginDateSegmentFilter : public PFSegmentsLastLoginDateSegmentFilter, public BaseModel
{
    LastLoginDateSegmentFilter();
    LastLoginDateSegmentFilter(const LastLoginDateSegmentFilter& src);
    LastLoginDateSegmentFilter(LastLoginDateSegmentFilter&& src);
    LastLoginDateSegmentFilter(const PFSegmentsLastLoginDateSegmentFilter& src);
    LastLoginDateSegmentFilter& operator=(const LastLoginDateSegmentFilter&) = delete;
    ~LastLoginDateSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
};

struct LastLoginTimespanSegmentFilter : public PFSegmentsLastLoginTimespanSegmentFilter, public BaseModel
{
    LastLoginTimespanSegmentFilter();
    LastLoginTimespanSegmentFilter(const LastLoginTimespanSegmentFilter& src);
    LastLoginTimespanSegmentFilter(LastLoginTimespanSegmentFilter&& src);
    LastLoginTimespanSegmentFilter(const PFSegmentsLastLoginTimespanSegmentFilter& src);
    LastLoginTimespanSegmentFilter& operator=(const LastLoginTimespanSegmentFilter&) = delete;
    ~LastLoginTimespanSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
};

struct LinkedUserAccountSegmentFilter : public PFSegmentsLinkedUserAccountSegmentFilter, public BaseModel
{
    LinkedUserAccountSegmentFilter();
    LinkedUserAccountSegmentFilter(const LinkedUserAccountSegmentFilter& src);
    LinkedUserAccountSegmentFilter(LinkedUserAccountSegmentFilter&& src);
    LinkedUserAccountSegmentFilter(const PFSegmentsLinkedUserAccountSegmentFilter& src);
    LinkedUserAccountSegmentFilter& operator=(const LinkedUserAccountSegmentFilter&) = delete;
    ~LinkedUserAccountSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentLoginIdentityProvider> m_loginProvider;
};

struct LinkedUserAccountHasEmailSegmentFilter : public PFSegmentsLinkedUserAccountHasEmailSegmentFilter, public BaseModel
{
    LinkedUserAccountHasEmailSegmentFilter();
    LinkedUserAccountHasEmailSegmentFilter(const LinkedUserAccountHasEmailSegmentFilter& src);
    LinkedUserAccountHasEmailSegmentFilter(LinkedUserAccountHasEmailSegmentFilter&& src);
    LinkedUserAccountHasEmailSegmentFilter(const PFSegmentsLinkedUserAccountHasEmailSegmentFilter& src);
    LinkedUserAccountHasEmailSegmentFilter& operator=(const LinkedUserAccountHasEmailSegmentFilter&) = delete;
    ~LinkedUserAccountHasEmailSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
    StdExtra::optional<PFSegmentsSegmentLoginIdentityProvider> m_loginProvider;
};

struct LocationSegmentFilter : public PFSegmentsLocationSegmentFilter, public BaseModel
{
    LocationSegmentFilter();
    LocationSegmentFilter(const LocationSegmentFilter& src);
    LocationSegmentFilter(LocationSegmentFilter&& src);
    LocationSegmentFilter(const PFSegmentsLocationSegmentFilter& src);
    LocationSegmentFilter& operator=(const LocationSegmentFilter&) = delete;
    ~LocationSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentCountryCode> m_countryCode;
};

struct PushNotificationSegmentFilter : public PFSegmentsPushNotificationSegmentFilter, public BaseModel
{
    PushNotificationSegmentFilter();
    PushNotificationSegmentFilter(const PushNotificationSegmentFilter& src);
    PushNotificationSegmentFilter(PushNotificationSegmentFilter&& src);
    PushNotificationSegmentFilter(const PFSegmentsPushNotificationSegmentFilter& src);
    PushNotificationSegmentFilter& operator=(const PushNotificationSegmentFilter&) = delete;
    ~PushNotificationSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentPushNotificationDevicePlatform> m_pushNotificationDevicePlatform;
};

struct StatisticSegmentFilter : public PFSegmentsStatisticSegmentFilter, public BaseModel
{
    StatisticSegmentFilter();
    StatisticSegmentFilter(const StatisticSegmentFilter& src);
    StatisticSegmentFilter(StatisticSegmentFilter&& src);
    StatisticSegmentFilter(const PFSegmentsStatisticSegmentFilter& src);
    StatisticSegmentFilter& operator=(const StatisticSegmentFilter&) = delete;
    ~StatisticSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
    String m_filterValue;
    String m_name;
    StdExtra::optional<bool> m_useCurrentVersion;
    StdExtra::optional<int32_t> m_version;
};

struct TagSegmentFilter : public PFSegmentsTagSegmentFilter, public BaseModel
{
    TagSegmentFilter();
    TagSegmentFilter(const TagSegmentFilter& src);
    TagSegmentFilter(TagSegmentFilter&& src);
    TagSegmentFilter(const PFSegmentsTagSegmentFilter& src);
    TagSegmentFilter& operator=(const TagSegmentFilter&) = delete;
    ~TagSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
    String m_tagValue;
};

struct TotalValueToDateInUSDSegmentFilter : public PFSegmentsTotalValueToDateInUSDSegmentFilter, public BaseModel
{
    TotalValueToDateInUSDSegmentFilter();
    TotalValueToDateInUSDSegmentFilter(const TotalValueToDateInUSDSegmentFilter& src);
    TotalValueToDateInUSDSegmentFilter(TotalValueToDateInUSDSegmentFilter&& src);
    TotalValueToDateInUSDSegmentFilter(const PFSegmentsTotalValueToDateInUSDSegmentFilter& src);
    TotalValueToDateInUSDSegmentFilter& operator=(const TotalValueToDateInUSDSegmentFilter&) = delete;
    ~TotalValueToDateInUSDSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_amount;
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
};

struct UserOriginationSegmentFilter : public PFSegmentsUserOriginationSegmentFilter, public BaseModel
{
    UserOriginationSegmentFilter();
    UserOriginationSegmentFilter(const UserOriginationSegmentFilter& src);
    UserOriginationSegmentFilter(UserOriginationSegmentFilter&& src);
    UserOriginationSegmentFilter(const PFSegmentsUserOriginationSegmentFilter& src);
    UserOriginationSegmentFilter& operator=(const UserOriginationSegmentFilter&) = delete;
    ~UserOriginationSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentLoginIdentityProvider> m_loginProvider;
};

struct ValueToDateSegmentFilter : public PFSegmentsValueToDateSegmentFilter, public BaseModel
{
    ValueToDateSegmentFilter();
    ValueToDateSegmentFilter(const ValueToDateSegmentFilter& src);
    ValueToDateSegmentFilter(ValueToDateSegmentFilter&& src);
    ValueToDateSegmentFilter(const PFSegmentsValueToDateSegmentFilter& src);
    ValueToDateSegmentFilter& operator=(const ValueToDateSegmentFilter&) = delete;
    ~ValueToDateSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_amount;
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
    StdExtra::optional<PFSegmentsSegmentCurrency> m_currency;
};

struct VirtualCurrencyBalanceSegmentFilter : public PFSegmentsVirtualCurrencyBalanceSegmentFilter, public BaseModel
{
    VirtualCurrencyBalanceSegmentFilter();
    VirtualCurrencyBalanceSegmentFilter(const VirtualCurrencyBalanceSegmentFilter& src);
    VirtualCurrencyBalanceSegmentFilter(VirtualCurrencyBalanceSegmentFilter&& src);
    VirtualCurrencyBalanceSegmentFilter(const PFSegmentsVirtualCurrencyBalanceSegmentFilter& src);
    VirtualCurrencyBalanceSegmentFilter& operator=(const VirtualCurrencyBalanceSegmentFilter&) = delete;
    ~VirtualCurrencyBalanceSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFSegmentsSegmentFilterComparison> m_comparison;
    String m_currencyCode;
};

struct SegmentAndDefinition : public PFSegmentsSegmentAndDefinition, public BaseModel
{
    SegmentAndDefinition();
    SegmentAndDefinition(const SegmentAndDefinition& src);
    SegmentAndDefinition(SegmentAndDefinition&& src);
    SegmentAndDefinition(const PFSegmentsSegmentAndDefinition& src);
    SegmentAndDefinition& operator=(const SegmentAndDefinition&) = delete;
    ~SegmentAndDefinition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<AdCampaignSegmentFilter> m_adCampaignFilter;
    StdExtra::optional<FirstLoginDateSegmentFilter> m_firstLoginDateFilter;
    StdExtra::optional<FirstLoginTimespanSegmentFilter> m_firstLoginFilter;
    StdExtra::optional<LastLoginDateSegmentFilter> m_lastLoginDateFilter;
    StdExtra::optional<LastLoginTimespanSegmentFilter> m_lastLoginFilter;
    StdExtra::optional<LinkedUserAccountSegmentFilter> m_linkedUserAccountFilter;
    StdExtra::optional<LinkedUserAccountHasEmailSegmentFilter> m_linkedUserAccountHasEmailFilter;
    StdExtra::optional<LocationSegmentFilter> m_locationFilter;
    StdExtra::optional<PushNotificationSegmentFilter> m_pushNotificationFilter;
    StdExtra::optional<StatisticSegmentFilter> m_statisticFilter;
    StdExtra::optional<TagSegmentFilter> m_tagFilter;
    StdExtra::optional<TotalValueToDateInUSDSegmentFilter> m_totalValueToDateInUSDFilter;
    StdExtra::optional<UserOriginationSegmentFilter> m_userOriginationFilter;
    StdExtra::optional<ValueToDateSegmentFilter> m_valueToDateFilter;
    StdExtra::optional<VirtualCurrencyBalanceSegmentFilter> m_virtualCurrencyBalanceFilter;
};

struct SegmentOrDefinition : public PFSegmentsSegmentOrDefinition, public BaseModel
{
    SegmentOrDefinition();
    SegmentOrDefinition(const SegmentOrDefinition& src);
    SegmentOrDefinition(SegmentOrDefinition&& src);
    SegmentOrDefinition(const PFSegmentsSegmentOrDefinition& src);
    SegmentOrDefinition& operator=(const SegmentOrDefinition&) = delete;
    ~SegmentOrDefinition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFSegmentsSegmentAndDefinition, SegmentAndDefinition> m_segmentAndDefinitions;
};

struct SegmentModel : public PFSegmentsSegmentModel, public BaseModel
{
    SegmentModel();
    SegmentModel(const SegmentModel& src);
    SegmentModel(SegmentModel&& src);
    SegmentModel(const PFSegmentsSegmentModel& src);
    SegmentModel& operator=(const SegmentModel&) = delete;
    ~SegmentModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    PointerArrayModel<PFSegmentsSegmentTrigger, SegmentTrigger> m_enteredSegmentActions;
    PointerArrayModel<PFSegmentsSegmentTrigger, SegmentTrigger> m_leftSegmentActions;
    String m_name;
    String m_segmentId;
    PointerArrayModel<PFSegmentsSegmentOrDefinition, SegmentOrDefinition> m_segmentOrDefinitions;
};

struct CreateSegmentRequest : public PFSegmentsCreateSegmentRequest, public BaseModel
{
    CreateSegmentRequest();
    CreateSegmentRequest(const CreateSegmentRequest& src);
    CreateSegmentRequest(CreateSegmentRequest&& src);
    CreateSegmentRequest(const PFSegmentsCreateSegmentRequest& src);
    CreateSegmentRequest& operator=(const CreateSegmentRequest&) = delete;
    ~CreateSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    SegmentModel m_segmentModel;
};

struct CreateSegmentResponse : public PFSegmentsCreateSegmentResponse, public SerializableModel, public ApiResult
{
    CreateSegmentResponse();
    CreateSegmentResponse(const CreateSegmentResponse& src);
    CreateSegmentResponse(CreateSegmentResponse&& src);
    CreateSegmentResponse(const PFSegmentsCreateSegmentResponse& src);
    CreateSegmentResponse& operator=(const CreateSegmentResponse&) = delete;
    ~CreateSegmentResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_errorMessage;
    String m_segmentId;
};

struct DeleteSegmentRequest : public PFSegmentsDeleteSegmentRequest, public SerializableModel
{
    DeleteSegmentRequest();
    DeleteSegmentRequest(const DeleteSegmentRequest& src);
    DeleteSegmentRequest(DeleteSegmentRequest&& src);
    DeleteSegmentRequest(const PFSegmentsDeleteSegmentRequest& src);
    DeleteSegmentRequest& operator=(const DeleteSegmentRequest&) = delete;
    ~DeleteSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_segmentId;
};

struct DeleteSegmentsResponse : public PFSegmentsDeleteSegmentsResponse, public SerializableModel, public ApiResult
{
    DeleteSegmentsResponse();
    DeleteSegmentsResponse(const DeleteSegmentsResponse& src);
    DeleteSegmentsResponse(DeleteSegmentsResponse&& src);
    DeleteSegmentsResponse(const PFSegmentsDeleteSegmentsResponse& src);
    DeleteSegmentsResponse& operator=(const DeleteSegmentsResponse&) = delete;
    ~DeleteSegmentsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_errorMessage;
};

struct GetSegmentsRequest : public PFSegmentsGetSegmentsRequest, public BaseModel
{
    GetSegmentsRequest();
    GetSegmentsRequest(const GetSegmentsRequest& src);
    GetSegmentsRequest(GetSegmentsRequest&& src);
    GetSegmentsRequest(const PFSegmentsGetSegmentsRequest& src);
    GetSegmentsRequest& operator=(const GetSegmentsRequest&) = delete;
    ~GetSegmentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_segmentIds;
};

struct GetSegmentsResponse : public PFSegmentsGetSegmentsResponse, public BaseModel, public ApiResult
{
    GetSegmentsResponse();
    GetSegmentsResponse(const GetSegmentsResponse& src);
    GetSegmentsResponse(GetSegmentsResponse&& src);
    GetSegmentsResponse(const PFSegmentsGetSegmentsResponse& src);
    GetSegmentsResponse& operator=(const GetSegmentsResponse&) = delete;
    ~GetSegmentsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_errorMessage;
    PointerArrayModel<PFSegmentsSegmentModel, SegmentModel> m_segments;
};

struct UpdateSegmentRequest : public PFSegmentsUpdateSegmentRequest, public BaseModel
{
    UpdateSegmentRequest();
    UpdateSegmentRequest(const UpdateSegmentRequest& src);
    UpdateSegmentRequest(UpdateSegmentRequest&& src);
    UpdateSegmentRequest(const PFSegmentsUpdateSegmentRequest& src);
    UpdateSegmentRequest& operator=(const UpdateSegmentRequest&) = delete;
    ~UpdateSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    SegmentModel m_segmentModel;
};

struct UpdateSegmentResponse : public PFSegmentsUpdateSegmentResponse, public SerializableModel, public ApiResult
{
    UpdateSegmentResponse();
    UpdateSegmentResponse(const UpdateSegmentResponse& src);
    UpdateSegmentResponse(UpdateSegmentResponse&& src);
    UpdateSegmentResponse(const PFSegmentsUpdateSegmentResponse& src);
    UpdateSegmentResponse& operator=(const UpdateSegmentResponse&) = delete;
    ~UpdateSegmentResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_errorMessage;
    String m_segmentId;
};

} // namespace SegmentsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFSegmentsBanPlayerSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsDeletePlayerStatisticSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsEmailNotificationSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsExecuteAzureFunctionSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsExecuteCloudScriptSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsGrantItemSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsGrantVirtualCurrencySegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsIncrementPlayerStatisticSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsPushNotificationSegmentAction& input);
template<> inline JsonValue ToJson<>(const PFSegmentsSegmentTrigger& input);
template<> inline JsonValue ToJson<>(const PFSegmentsAdCampaignSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsFirstLoginDateSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsFirstLoginTimespanSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsLastLoginDateSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsLastLoginTimespanSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsLinkedUserAccountSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsLinkedUserAccountHasEmailSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsLocationSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsPushNotificationSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsStatisticSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsTagSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsTotalValueToDateInUSDSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsUserOriginationSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsValueToDateSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsVirtualCurrencyBalanceSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PFSegmentsSegmentAndDefinition& input);
template<> inline JsonValue ToJson<>(const PFSegmentsSegmentOrDefinition& input);
template<> inline JsonValue ToJson<>(const PFSegmentsSegmentModel& input);
template<> inline JsonValue ToJson<>(const PFSegmentsCreateSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PFSegmentsCreateSegmentResponse& input);
template<> inline JsonValue ToJson<>(const PFSegmentsDeleteSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PFSegmentsDeleteSegmentsResponse& input);
template<> inline JsonValue ToJson<>(const PFSegmentsGetSegmentsRequest& input);
template<> inline JsonValue ToJson<>(const PFSegmentsGetSegmentsResponse& input);
template<> inline JsonValue ToJson<>(const PFSegmentsUpdateSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PFSegmentsUpdateSegmentResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
