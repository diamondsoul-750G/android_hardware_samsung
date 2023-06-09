/*
 * Copyright (C) 2019, The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.1 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.1
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "SecRadioIndication.h"

namespace vendor {
namespace samsung {
namespace hardware {
namespace radio {
namespace V1_2 {
namespace implementation {

SecRadioIndication::SecRadioIndication(
    const sp<::android::hardware::radio::V1_2::IRadioIndication>& radioIndication)
    : radioIndication(radioIndication) {}

// Methods from ::android::hardware::radio::V1_0::IRadioIndication follow.
Return<void> SecRadioIndication::radioStateChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    ::android::hardware::radio::V1_0::RadioState radioState) {
    if (radioIndication) radioIndication->radioStateChanged(type, radioState);
    return Void();
}

Return<void> SecRadioIndication::callStateChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->callStateChanged(type);
    return Void();
}

Return<void> SecRadioIndication::networkStateChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->networkStateChanged(type);
    return Void();
}

Return<void> SecRadioIndication::newSms(::android::hardware::radio::V1_0::RadioIndicationType type,
                                        const hidl_vec<uint8_t>& pdu) {
    if (radioIndication) radioIndication->newSms(type, pdu);
    return Void();
}

Return<void> SecRadioIndication::newSmsStatusReport(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_vec<uint8_t>& pdu) {
    if (radioIndication) radioIndication->newSmsStatusReport(type, pdu);
    return Void();
}

Return<void> SecRadioIndication::newSmsOnSim(
    ::android::hardware::radio::V1_0::RadioIndicationType type, int32_t recordNumber) {
    if (radioIndication) radioIndication->newSmsOnSim(type, recordNumber);
    return Void();
}

Return<void> SecRadioIndication::onUssd(::android::hardware::radio::V1_0::RadioIndicationType type,
                                        ::android::hardware::radio::V1_0::UssdModeType modeType,
                                        const hidl_string& msg) {
    if (radioIndication) radioIndication->onUssd(type, modeType, msg);
    return Void();
}

Return<void> SecRadioIndication::nitzTimeReceived(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_string& nitzTime,
    uint64_t receivedTime) {
    if (radioIndication) radioIndication->nitzTimeReceived(type, nitzTime, receivedTime);
    return Void();
}

Return<void> SecRadioIndication::currentSignalStrength(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::SignalStrength& signalStrength) {
    if (radioIndication) radioIndication->currentSignalStrength(type, signalStrength);
    return Void();
}

Return<void> SecRadioIndication::dataCallListChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const hidl_vec<::android::hardware::radio::V1_0::SetupDataCallResult>& dcList) {
    if (radioIndication) radioIndication->dataCallListChanged(type, dcList);
    return Void();
}

Return<void> SecRadioIndication::suppSvcNotify(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::SuppSvcNotification& suppSvc) {
    if (radioIndication) radioIndication->suppSvcNotify(type, suppSvc);
    return Void();
}

Return<void> SecRadioIndication::stkSessionEnd(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->stkSessionEnd(type);
    return Void();
}

Return<void> SecRadioIndication::stkProactiveCommand(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_string& cmd) {
    if (radioIndication) radioIndication->stkProactiveCommand(type, cmd);
    return Void();
}

Return<void> SecRadioIndication::stkEventNotify(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_string& cmd) {
    if (radioIndication) radioIndication->stkEventNotify(type, cmd);
    return Void();
}

Return<void> SecRadioIndication::stkCallSetup(
    ::android::hardware::radio::V1_0::RadioIndicationType type, int64_t timeout) {
    if (radioIndication) radioIndication->stkCallSetup(type, timeout);
    return Void();
}

Return<void> SecRadioIndication::simSmsStorageFull(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->simSmsStorageFull(type);
    return Void();
}

Return<void> SecRadioIndication::simRefresh(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::SimRefreshResult& refreshResult) {
    if (radioIndication) radioIndication->simRefresh(type, refreshResult);
    return Void();
}

Return<void> SecRadioIndication::callRing(
    ::android::hardware::radio::V1_0::RadioIndicationType type, bool isGsm,
    const ::android::hardware::radio::V1_0::CdmaSignalInfoRecord& record) {
    if (radioIndication) radioIndication->callRing(type, isGsm, record);
    return Void();
}

Return<void> SecRadioIndication::simStatusChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->simStatusChanged(type);
    return Void();
}

Return<void> SecRadioIndication::cdmaNewSms(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::CdmaSmsMessage& msg) {
    if (radioIndication) radioIndication->cdmaNewSms(type, msg);
    return Void();
}

Return<void> SecRadioIndication::newBroadcastSms(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_vec<uint8_t>& data) {
    if (radioIndication) radioIndication->newBroadcastSms(type, data);
    return Void();
}

Return<void> SecRadioIndication::cdmaRuimSmsStorageFull(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->cdmaRuimSmsStorageFull(type);
    return Void();
}

Return<void> SecRadioIndication::restrictedStateChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    ::android::hardware::radio::V1_0::PhoneRestrictedState state) {
    if (radioIndication) radioIndication->restrictedStateChanged(type, state);
    return Void();
}

Return<void> SecRadioIndication::enterEmergencyCallbackMode(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->enterEmergencyCallbackMode(type);
    return Void();
}

Return<void> SecRadioIndication::cdmaCallWaiting(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::CdmaCallWaiting& callWaitingRecord) {
    if (radioIndication) radioIndication->cdmaCallWaiting(type, callWaitingRecord);
    return Void();
}

Return<void> SecRadioIndication::cdmaOtaProvisionStatus(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    ::android::hardware::radio::V1_0::CdmaOtaProvisionStatus status) {
    if (radioIndication) radioIndication->cdmaOtaProvisionStatus(type, status);
    return Void();
}

Return<void> SecRadioIndication::cdmaInfoRec(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::CdmaInformationRecords& records) {
    if (radioIndication) radioIndication->cdmaInfoRec(type, records);
    return Void();
}

Return<void> SecRadioIndication::indicateRingbackTone(
    ::android::hardware::radio::V1_0::RadioIndicationType type, bool start) {
    if (radioIndication) radioIndication->indicateRingbackTone(type, start);
    return Void();
}

Return<void> SecRadioIndication::resendIncallMute(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->resendIncallMute(type);
    return Void();
}

Return<void> SecRadioIndication::cdmaSubscriptionSourceChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    ::android::hardware::radio::V1_0::CdmaSubscriptionSource cdmaSource) {
    if (radioIndication) radioIndication->cdmaSubscriptionSourceChanged(type, cdmaSource);
    return Void();
}

Return<void> SecRadioIndication::cdmaPrlChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type, int32_t version) {
    if (radioIndication) radioIndication->cdmaPrlChanged(type, version);
    return Void();
}

Return<void> SecRadioIndication::exitEmergencyCallbackMode(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->exitEmergencyCallbackMode(type);
    return Void();
}

Return<void> SecRadioIndication::rilConnected(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->rilConnected(type);
    return Void();
}

Return<void> SecRadioIndication::voiceRadioTechChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    ::android::hardware::radio::V1_0::RadioTechnology rat) {
    if (radioIndication) radioIndication->voiceRadioTechChanged(type, rat);
    return Void();
}

Return<void> SecRadioIndication::cellInfoList(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const hidl_vec<::android::hardware::radio::V1_0::CellInfo>& records) {
    if (radioIndication) radioIndication->cellInfoList(type, records);
    return Void();
}

Return<void> SecRadioIndication::imsNetworkStateChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type) {
    if (radioIndication) radioIndication->imsNetworkStateChanged(type);
    return Void();
}

Return<void> SecRadioIndication::subscriptionStatusChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type, bool activate) {
    if (radioIndication) radioIndication->subscriptionStatusChanged(type, activate);
    return Void();
}

Return<void> SecRadioIndication::srvccStateNotify(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    ::android::hardware::radio::V1_0::SrvccState state) {
    if (radioIndication) radioIndication->srvccStateNotify(type, state);
    return Void();
}

Return<void> SecRadioIndication::hardwareConfigChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const hidl_vec<::android::hardware::radio::V1_0::HardwareConfig>& configs) {
    if (radioIndication) radioIndication->hardwareConfigChanged(type, configs);
    return Void();
}

Return<void> SecRadioIndication::radioCapabilityIndication(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::RadioCapability& rc) {
    if (radioIndication) radioIndication->radioCapabilityIndication(type, rc);
    return Void();
}

Return<void> SecRadioIndication::onSupplementaryServiceIndication(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_0::StkCcUnsolSsResult& ss) {
    if (radioIndication) radioIndication->onSupplementaryServiceIndication(type, ss);
    return Void();
}

Return<void> SecRadioIndication::stkCallControlAlphaNotify(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_string& alpha) {
    if (radioIndication) radioIndication->stkCallControlAlphaNotify(type, alpha);
    return Void();
}

Return<void> SecRadioIndication::lceData(::android::hardware::radio::V1_0::RadioIndicationType type,
                                         const ::android::hardware::radio::V1_0::LceDataInfo& lce) {
    if (radioIndication) radioIndication->lceData(type, lce);
    return Void();
}

Return<void> SecRadioIndication::pcoData(::android::hardware::radio::V1_0::RadioIndicationType type,
                                         const ::android::hardware::radio::V1_0::PcoDataInfo& pco) {
    if (radioIndication) radioIndication->pcoData(type, pco);
    return Void();
}

Return<void> SecRadioIndication::modemReset(
    ::android::hardware::radio::V1_0::RadioIndicationType type, const hidl_string& reason) {
    if (radioIndication) radioIndication->modemReset(type, reason);
    return Void();
}

// Methods from ::android::hardware::radio::V1_1::IRadioIndication follow.
Return<void> SecRadioIndication::carrierInfoForImsiEncryption(
    ::android::hardware::radio::V1_0::RadioIndicationType info) {
    if (radioIndication) radioIndication->carrierInfoForImsiEncryption(info);
    return Void();
}

Return<void> SecRadioIndication::networkScanResult(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_1::NetworkScanResult& result) {
    if (radioIndication) radioIndication->networkScanResult(type, result);
    return Void();
}

Return<void> SecRadioIndication::keepaliveStatus(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_1::KeepaliveStatus& status) {
    if (radioIndication) radioIndication->keepaliveStatus(type, status);
    return Void();
}

// Methods from ::android::hardware::radio::V1_2::IRadioIndication follow.
Return<void> SecRadioIndication::networkScanResult_1_2(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_2::NetworkScanResult& result) {
    if (radioIndication) radioIndication->networkScanResult_1_2(type, result);
    return Void();
}

Return<void> SecRadioIndication::cellInfoList_1_2(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const hidl_vec<::android::hardware::radio::V1_2::CellInfo>& records) {
    if (radioIndication) radioIndication->cellInfoList_1_2(type, records);
    return Void();
}

Return<void> SecRadioIndication::currentLinkCapacityEstimate(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_2::LinkCapacityEstimate& lce) {
    if (radioIndication) radioIndication->currentLinkCapacityEstimate(type, lce);
    return Void();
}

Return<void> SecRadioIndication::currentPhysicalChannelConfigs(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const hidl_vec<::android::hardware::radio::V1_2::PhysicalChannelConfig>& configs) {
    if (radioIndication) radioIndication->currentPhysicalChannelConfigs(type, configs);
    return Void();
}

Return<void> SecRadioIndication::currentSignalStrength_1_2(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::android::hardware::radio::V1_2::SignalStrength& signalStrength) {
    if (radioIndication) radioIndication->currentSignalStrength_1_2(type, signalStrength);
    return Void();
}

// Methods from ::vendor::samsung::hardware::radio::V1_2::IRadioIndication follow.
Return<void> SecRadioIndication::secCurrentSignalStrength(
    ::android::hardware::radio::V1_0::RadioIndicationType type,
    const ::vendor::samsung::hardware::radio::V1_2::SecSignalStrength& signalStrength) {
    ::android::hardware::radio::V1_2::SignalStrength newSignalStrength = signalStrength.base;
    if (signalStrength.base.lte.signalStrength == 99) {
        // Set lte signal to invalid
        newSignalStrength.lte.timingAdvance = std::numeric_limits<int>::max();
    }
    if (radioIndication) radioIndication->currentSignalStrength_1_2(type, newSignalStrength);
    return Void();
}

Return<void> SecRadioIndication::secImsNetworkStateChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioIndication::oemAcbInfoChanged(
    ::android::hardware::radio::V1_0::RadioIndicationType, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioIndication::oemCsFallback(::android::hardware::radio::V1_0::RadioIndicationType,
                                               int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemImsPreferenceChangeInd(
    ::android::hardware::radio::V1_0::RadioIndicationType, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioIndication::oemVoiceRadioBearerHoStatusInd(
    ::android::hardware::radio::V1_0::RadioIndicationType, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemHysteresisDcnInd(
    ::android::hardware::radio::V1_0::RadioIndicationType) {
    return Void();
}

Return<void> SecRadioIndication::oemTimerStatusChangedInd(int32_t, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioIndication::oemModemCapInd(int32_t, const hidl_vec<int8_t>&) {
    return Void();
}

Return<void> SecRadioIndication::oemAmInd(int32_t, const hidl_string&) {
    return Void();
}

Return<void> SecRadioIndication::oemTrunRadioOnInd(int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemSimPbReadyInd(int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemPbInitCompleteInd(int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemDeviceReadyNoti(int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemStkSmsSendResultInd(int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemStkCallControlResultInd(int32_t, const hidl_string&) {
    return Void();
}

Return<void> SecRadioIndication::oemSimSwapStateChangedInd(int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemSimCountMismatchedInd(int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemSimIccidNoti(int32_t, const hidl_string&) {
    return Void();
}

Return<void> SecRadioIndication::oemSimOnOffNoti(int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemReleaseCompleteMessageInd(
    int32_t, const ::vendor::samsung::hardware::radio::V1_2::OemSSReleaseComplete&) {
    return Void();
}

Return<void> SecRadioIndication::oemSapNoti(int32_t, const hidl_vec<int8_t>&) {
    return Void();
}

Return<void> SecRadioIndication::oemNrBearerAllocationChangeInd(int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oem5gStatusChangeInd(int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioIndication::oemNrDcParamChangeInd(
    int32_t, const ::vendor::samsung::hardware::radio::V1_2::DcParam&) {
    return Void();
}

Return<void> SecRadioIndication::oemNrSignalStrengthInd(
    int32_t, const ::vendor::samsung::hardware::radio::V1_2::NrSignalStrength&) {
    return Void();
}

Return<void> SecRadioIndication::oemLoadApnProfile(const hidl_string&, oemLoadApnProfile_cb) {
    return Void();
}

Return<int32_t> SecRadioIndication::oemGetSettingValue(const hidl_string&, const hidl_string&) {
    return int32_t{};
}

}  // namespace implementation
}  // namespace V1_2
}  // namespace radio
}  // namespace hardware
}  // namespace samsung
}  // namespace vendor
