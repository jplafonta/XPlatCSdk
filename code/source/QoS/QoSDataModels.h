#pragma once

#include <playfab/PFQoS.h>

namespace PlayFab
{
namespace QoS
{

struct Server
{
    String region;
    String address;
};

struct RegionResult : public PFQoSRegionResult
{
    RegionResult(const String& _region);
    RegionResult(const RegionResult& src);
    RegionResult(RegionResult&& src) = default;
    RegionResult& operator=(const RegionResult& src);
    RegionResult& operator=(RegionResult&& src) = default;
    ~RegionResult() = default;

    void AddPingResult(Result<uint32_t> pingResult);

private:
    String m_region;
    uint32_t m_totalLatencyMs;
};

struct Measurements : public PFQoSMeasurements, public ApiResult
{
    Measurements();
    Measurements(const UnorderedMap<String, RegionResult>& regionResultsMap);
    Measurements(const Measurements& src);
    Measurements(Measurements&& src) = default;
    ~Measurements() = default;

private:
    static Vector<RegionResult> SortRegionResults(const UnorderedMap<String, RegionResult>& regionResultsMap);

    PointerArray<PFQoSRegionResult, RegionResult> m_regionResults;
};

} // namespace QoS
} // namespace PlayFab
