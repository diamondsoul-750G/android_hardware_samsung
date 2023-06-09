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

#include "SecRadioResponse.h"

namespace vendor {
namespace samsung {
namespace hardware {
namespace radio {
namespace V1_2 {
namespace implementation {

SecRadioResponse::SecRadioResponse(
    int simSlot, const sp<::android::hardware::radio::V1_2::IRadioResponse>& radioResponse)
    : simSlot(simSlot), radioResponse(radioResponse) {}

// Methods from ::android::hardware::radio::V1_0::IRadioResponse follow.
Return<void> SecRadioResponse::getIccCardStatusResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::CardStatus& cardStatus) {
    if (radioResponse) radioResponse->getIccCardStatusResponse(info, cardStatus);
    return Void();
}

Return<void> SecRadioResponse::supplyIccPinForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->supplyIccPinForAppResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::supplyIccPukForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->supplyIccPukForAppResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::supplyIccPin2ForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->supplyIccPin2ForAppResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::supplyIccPuk2ForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->supplyIccPuk2ForAppResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::changeIccPinForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->changeIccPinForAppResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::changeIccPin2ForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->changeIccPin2ForAppResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::supplyNetworkDepersonalizationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t remainingRetries) {
    if (radioResponse) radioResponse->supplyNetworkDepersonalizationResponse(info, remainingRetries);
    return Void();
}

Return<void> SecRadioResponse::getCurrentCallsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::Call>& calls) {
    if (radioResponse) radioResponse->getCurrentCallsResponse(info, calls);
    return Void();
}

Return<void> SecRadioResponse::dialResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->dialResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getIMSIForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& imsi) {
    if (radioResponse) radioResponse->getIMSIForAppResponse(info, imsi);
    return Void();
}

Return<void> SecRadioResponse::hangupConnectionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->hangupConnectionResponse(info);
    return Void();
}

Return<void> SecRadioResponse::hangupWaitingOrBackgroundResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->hangupWaitingOrBackgroundResponse(info);
    return Void();
}

Return<void> SecRadioResponse::hangupForegroundResumeBackgroundResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->hangupForegroundResumeBackgroundResponse(info);
    return Void();
}

Return<void> SecRadioResponse::switchWaitingOrHoldingAndActiveResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->switchWaitingOrHoldingAndActiveResponse(info);
    return Void();
}

Return<void> SecRadioResponse::conferenceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->conferenceResponse(info);
    return Void();
}

Return<void> SecRadioResponse::rejectCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->rejectCallResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getLastCallFailCauseResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::LastCallFailCauseInfo& failCauseinfo) {
    if (radioResponse) radioResponse->getLastCallFailCauseResponse(info, failCauseinfo);
    return Void();
}

Return<void> SecRadioResponse::getSignalStrengthResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::SignalStrength& sigStrength) {
    if (radioResponse) radioResponse->getSignalStrengthResponse(info, sigStrength);
    return Void();
}

Return<void> SecRadioResponse::getVoiceRegistrationStateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::VoiceRegStateResult& voiceRegResponse) {
    if (radioResponse) radioResponse->getVoiceRegistrationStateResponse(info, voiceRegResponse);
    return Void();
}

Return<void> SecRadioResponse::getDataRegistrationStateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::DataRegStateResult& dataRegResponse) {
    if (radioResponse) radioResponse->getDataRegistrationStateResponse(info, dataRegResponse);
    return Void();
}

Return<void> SecRadioResponse::getOperatorResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& longName,
    const hidl_string& shortName, const hidl_string& numeric) {
    if (radioResponse) radioResponse->getOperatorResponse(info, longName, shortName, numeric);
    return Void();
}

Return<void> SecRadioResponse::setRadioPowerResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setRadioPowerResponse(info);
    return Void();
}

Return<void> SecRadioResponse::sendDtmfResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->sendDtmfResponse(info);
    return Void();
}

Return<void> SecRadioResponse::sendSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::SendSmsResult& sms) {
    if (radioResponse) radioResponse->sendSmsResponse(info, sms);
    return Void();
}

Return<void> SecRadioResponse::sendSMSExpectMoreResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::SendSmsResult& sms) {
    if (radioResponse) radioResponse->sendSMSExpectMoreResponse(info, sms);
    return Void();
}

Return<void> SecRadioResponse::setupDataCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::SetupDataCallResult& dcResponse) {
    if (radioResponse) radioResponse->setupDataCallResponse(info, dcResponse);
    return Void();
}

Return<void> SecRadioResponse::iccIOForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::IccIoResult& iccIo) {
    if (radioResponse) radioResponse->iccIOForAppResponse(info, iccIo);
    return Void();
}

Return<void> SecRadioResponse::sendUssdResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->sendUssdResponse(info);
    return Void();
}

Return<void> SecRadioResponse::cancelPendingUssdResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->cancelPendingUssdResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getClirResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t n, int32_t m) {
    if (radioResponse) radioResponse->getClirResponse(info, n, m);
    return Void();
}

Return<void> SecRadioResponse::setClirResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setClirResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCallForwardStatusResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::CallForwardInfo>& callForwardInfos) {
    if (radioResponse) radioResponse->getCallForwardStatusResponse(info, callForwardInfos);
    return Void();
}

Return<void> SecRadioResponse::setCallForwardResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCallForwardResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCallWaitingResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, bool enable,
    int32_t serviceClass) {
    if (radioResponse) radioResponse->getCallWaitingResponse(info, enable, serviceClass);
    return Void();
}

Return<void> SecRadioResponse::setCallWaitingResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCallWaitingResponse(info);
    return Void();
}

Return<void> SecRadioResponse::acknowledgeLastIncomingGsmSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->acknowledgeLastIncomingGsmSmsResponse(info);
    return Void();
}

Return<void> SecRadioResponse::acceptCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->acceptCallResponse(info);
    return Void();
}

Return<void> SecRadioResponse::deactivateDataCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->deactivateDataCallResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getFacilityLockForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t response) {
    if (radioResponse) radioResponse->getFacilityLockForAppResponse(info, response);
    return Void();
}

Return<void> SecRadioResponse::setFacilityLockForAppResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t retry) {
    if (radioResponse) radioResponse->setFacilityLockForAppResponse(info, retry);
    return Void();
}

Return<void> SecRadioResponse::setBarringPasswordResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setBarringPasswordResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getNetworkSelectionModeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, bool manual) {
    if (radioResponse) radioResponse->getNetworkSelectionModeResponse(info, manual);
    return Void();
}

Return<void> SecRadioResponse::setNetworkSelectionModeAutomaticResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setNetworkSelectionModeAutomaticResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setNetworkSelectionModeManualResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setNetworkSelectionModeManualResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getAvailableNetworksResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::OperatorInfo>& networkInfos) {
    if (radioResponse) radioResponse->getAvailableNetworksResponse(info, networkInfos);
    return Void();
}

Return<void> SecRadioResponse::startDtmfResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->startDtmfResponse(info);
    return Void();
}

Return<void> SecRadioResponse::stopDtmfResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->stopDtmfResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getBasebandVersionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& version) {
    if (radioResponse) radioResponse->getBasebandVersionResponse(info, version);
    return Void();
}

Return<void> SecRadioResponse::separateConnectionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->separateConnectionResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setMuteResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setMuteResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getMuteResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, bool enable) {
    if (radioResponse) radioResponse->getMuteResponse(info, enable);
    return Void();
}

Return<void> SecRadioResponse::getClipResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    ::android::hardware::radio::V1_0::ClipStatus status) {
    if (radioResponse) radioResponse->getClipResponse(info, status);
    return Void();
}

Return<void> SecRadioResponse::getDataCallListResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::SetupDataCallResult>& dcResponse) {
    if (radioResponse) radioResponse->getDataCallListResponse(info, dcResponse);
    return Void();
}

Return<void> SecRadioResponse::setSuppServiceNotificationsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setSuppServiceNotificationsResponse(info);
    return Void();
}

Return<void> SecRadioResponse::writeSmsToSimResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t index) {
    if (radioResponse) radioResponse->writeSmsToSimResponse(info, index);
    return Void();
}

Return<void> SecRadioResponse::deleteSmsOnSimResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->deleteSmsOnSimResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setBandModeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setBandModeResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getAvailableBandModesResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::RadioBandMode>& bandModes) {
    if (radioResponse) radioResponse->getAvailableBandModesResponse(info, bandModes);
    return Void();
}

Return<void> SecRadioResponse::sendEnvelopeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_string& commandResponse) {
    if (radioResponse) radioResponse->sendEnvelopeResponse(info, commandResponse);
    return Void();
}

Return<void> SecRadioResponse::sendTerminalResponseToSimResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->sendTerminalResponseToSimResponse(info);
    return Void();
}

Return<void> SecRadioResponse::handleStkCallSetupRequestFromSimResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->handleStkCallSetupRequestFromSimResponse(info);
    return Void();
}

Return<void> SecRadioResponse::explicitCallTransferResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->explicitCallTransferResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setPreferredNetworkTypeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setPreferredNetworkTypeResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getPreferredNetworkTypeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    ::android::hardware::radio::V1_0::PreferredNetworkType nwType) {
    if (radioResponse) radioResponse->getPreferredNetworkTypeResponse(info, nwType);
    return Void();
}

Return<void> SecRadioResponse::getNeighboringCidsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::NeighboringCell>& cells) {
    if (radioResponse) radioResponse->getNeighboringCidsResponse(info, cells);
    return Void();
}

Return<void> SecRadioResponse::setLocationUpdatesResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setLocationUpdatesResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setCdmaSubscriptionSourceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCdmaSubscriptionSourceResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setCdmaRoamingPreferenceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCdmaRoamingPreferenceResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCdmaRoamingPreferenceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    ::android::hardware::radio::V1_0::CdmaRoamingType type) {
    if (radioResponse) radioResponse->getCdmaRoamingPreferenceResponse(info, type);
    return Void();
}

Return<void> SecRadioResponse::setTTYModeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setTTYModeResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getTTYModeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    ::android::hardware::radio::V1_0::TtyMode mode) {
    if (radioResponse) radioResponse->getTTYModeResponse(info, mode);
    return Void();
}

Return<void> SecRadioResponse::setPreferredVoicePrivacyResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setPreferredVoicePrivacyResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getPreferredVoicePrivacyResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, bool enable) {
    if (radioResponse) radioResponse->getPreferredVoicePrivacyResponse(info, enable);
    return Void();
}

Return<void> SecRadioResponse::sendCDMAFeatureCodeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->sendCDMAFeatureCodeResponse(info);
    return Void();
}

Return<void> SecRadioResponse::sendBurstDtmfResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->sendBurstDtmfResponse(info);
    return Void();
}

Return<void> SecRadioResponse::sendCdmaSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::SendSmsResult& sms) {
    if (radioResponse) radioResponse->sendCdmaSmsResponse(info, sms);
    return Void();
}

Return<void> SecRadioResponse::acknowledgeLastIncomingCdmaSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->acknowledgeLastIncomingCdmaSmsResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getGsmBroadcastConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::GsmBroadcastSmsConfigInfo>& configs) {
    if (radioResponse) radioResponse->getGsmBroadcastConfigResponse(info, configs);
    return Void();
}

Return<void> SecRadioResponse::setGsmBroadcastConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setGsmBroadcastConfigResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setGsmBroadcastActivationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setGsmBroadcastActivationResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCdmaBroadcastConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::CdmaBroadcastSmsConfigInfo>& configs) {
    if (radioResponse) radioResponse->getCdmaBroadcastConfigResponse(info, configs);
    return Void();
}

Return<void> SecRadioResponse::setCdmaBroadcastConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCdmaBroadcastConfigResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setCdmaBroadcastActivationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCdmaBroadcastActivationResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCDMASubscriptionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& mdn,
    const hidl_string& hSid, const hidl_string& hNid, const hidl_string& min,
    const hidl_string& prl) {
    if (radioResponse) radioResponse->getCDMASubscriptionResponse(info, mdn, hSid, hNid, min, prl);
    return Void();
}

Return<void> SecRadioResponse::writeSmsToRuimResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, uint32_t index) {
    if (radioResponse) radioResponse->writeSmsToRuimResponse(info, index);
    return Void();
}

Return<void> SecRadioResponse::deleteSmsOnRuimResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->deleteSmsOnRuimResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getDeviceIdentityResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& imei,
    const hidl_string& imeisv, const hidl_string& esn, const hidl_string& meid) {
    if (radioResponse) radioResponse->getDeviceIdentityResponse(info, imei, imeisv, esn, meid);
    return Void();
}

Return<void> SecRadioResponse::exitEmergencyCallbackModeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->exitEmergencyCallbackModeResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getSmscAddressResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& smsc) {
    if (radioResponse) radioResponse->getSmscAddressResponse(info, smsc);
    return Void();
}

Return<void> SecRadioResponse::setSmscAddressResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setSmscAddressResponse(info);
    return Void();
}

Return<void> SecRadioResponse::reportSmsMemoryStatusResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->reportSmsMemoryStatusResponse(info);
    return Void();
}

Return<void> SecRadioResponse::reportStkServiceIsRunningResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->reportStkServiceIsRunningResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCdmaSubscriptionSourceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    ::android::hardware::radio::V1_0::CdmaSubscriptionSource source) {
    if (radioResponse) radioResponse->getCdmaSubscriptionSourceResponse(info, source);
    return Void();
}

Return<void> SecRadioResponse::requestIsimAuthenticationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& response) {
    if (radioResponse) radioResponse->requestIsimAuthenticationResponse(info, response);
    return Void();
}

Return<void> SecRadioResponse::acknowledgeIncomingGsmSmsWithPduResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->acknowledgeIncomingGsmSmsWithPduResponse(info);
    return Void();
}

Return<void> SecRadioResponse::sendEnvelopeWithStatusResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::IccIoResult& iccIo) {
    if (radioResponse) radioResponse->sendEnvelopeWithStatusResponse(info, iccIo);
    return Void();
}

Return<void> SecRadioResponse::getVoiceRadioTechnologyResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    ::android::hardware::radio::V1_0::RadioTechnology rat) {
    if (radioResponse) radioResponse->getVoiceRadioTechnologyResponse(info, rat);
    return Void();
}

Return<void> SecRadioResponse::getCellInfoListResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::CellInfo>& cellInfo) {
    if (radioResponse) radioResponse->getCellInfoListResponse(info, cellInfo);
    return Void();
}

Return<void> SecRadioResponse::setCellInfoListRateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCellInfoListRateResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setInitialAttachApnResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setInitialAttachApnResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getImsRegistrationStateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, bool isRegistered,
    ::android::hardware::radio::V1_0::RadioTechnologyFamily ratFamily) {
    if (radioResponse) radioResponse->getImsRegistrationStateResponse(info, isRegistered, ratFamily);
    return Void();
}

Return<void> SecRadioResponse::sendImsSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::SendSmsResult& sms) {
    if (radioResponse) radioResponse->sendImsSmsResponse(info, sms);
    return Void();
}

Return<void> SecRadioResponse::iccTransmitApduBasicChannelResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::IccIoResult& result) {
    if (radioResponse) radioResponse->iccTransmitApduBasicChannelResponse(info, result);
    return Void();
}

Return<void> SecRadioResponse::iccOpenLogicalChannelResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t channelId,
    const hidl_vec<int8_t>& selectResponse) {
    if (radioResponse) radioResponse->iccOpenLogicalChannelResponse(info, channelId, selectResponse);
    return Void();
}

Return<void> SecRadioResponse::iccCloseLogicalChannelResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->iccCloseLogicalChannelResponse(info);
    return Void();
}

Return<void> SecRadioResponse::iccTransmitApduLogicalChannelResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::IccIoResult& result) {
    if (radioResponse) radioResponse->iccTransmitApduLogicalChannelResponse(info, result);
    return Void();
}

Return<void> SecRadioResponse::nvReadItemResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, const hidl_string& result) {
    if (radioResponse) radioResponse->nvReadItemResponse(info, result);
    return Void();
}

Return<void> SecRadioResponse::nvWriteItemResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->nvWriteItemResponse(info);
    return Void();
}

Return<void> SecRadioResponse::nvWriteCdmaPrlResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->nvWriteCdmaPrlResponse(info);
    return Void();
}

Return<void> SecRadioResponse::nvResetConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->nvResetConfigResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setUiccSubscriptionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setUiccSubscriptionResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setDataAllowedResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setDataAllowedResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getHardwareConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_0::HardwareConfig>& config) {
    if (radioResponse) radioResponse->getHardwareConfigResponse(info, config);
    return Void();
}

Return<void> SecRadioResponse::requestIccSimAuthenticationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::IccIoResult& result) {
    if (radioResponse) radioResponse->requestIccSimAuthenticationResponse(info, result);
    return Void();
}

Return<void> SecRadioResponse::setDataProfileResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setDataProfileResponse(info);
    return Void();
}

Return<void> SecRadioResponse::requestShutdownResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->requestShutdownResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getRadioCapabilityResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::RadioCapability& rc) {
    if (radioResponse) radioResponse->getRadioCapabilityResponse(info, rc);
    return Void();
}

Return<void> SecRadioResponse::setRadioCapabilityResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::RadioCapability& rc) {
    if (radioResponse) radioResponse->setRadioCapabilityResponse(info, rc);
    return Void();
}

Return<void> SecRadioResponse::startLceServiceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::LceStatusInfo& statusInfo) {
    if (radioResponse) radioResponse->startLceServiceResponse(info, statusInfo);
    return Void();
}

Return<void> SecRadioResponse::stopLceServiceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::LceStatusInfo& statusInfo) {
    if (radioResponse) radioResponse->stopLceServiceResponse(info, statusInfo);
    return Void();
}

Return<void> SecRadioResponse::pullLceDataResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::LceDataInfo& lceInfo) {
    if (radioResponse) radioResponse->pullLceDataResponse(info, lceInfo);
    return Void();
}

Return<void> SecRadioResponse::getModemActivityInfoResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_0::ActivityStatsInfo& activityInfo) {
    if (radioResponse) radioResponse->getModemActivityInfoResponse(info, activityInfo);
    return Void();
}

Return<void> SecRadioResponse::setAllowedCarriersResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, int32_t numAllowed) {
    if (radioResponse) radioResponse->setAllowedCarriersResponse(info, numAllowed);
    return Void();
}

Return<void> SecRadioResponse::getAllowedCarriersResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info, bool allAllowed,
    const ::android::hardware::radio::V1_0::CarrierRestrictions& carriers) {
    if (radioResponse) radioResponse->getAllowedCarriersResponse(info, allAllowed, carriers);
    return Void();
}

Return<void> SecRadioResponse::sendDeviceStateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->sendDeviceStateResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setIndicationFilterResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setIndicationFilterResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setSimCardPowerResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setSimCardPowerResponse(info);
    return Void();
}

Return<void> SecRadioResponse::acknowledgeRequest(int32_t serial) {
    if (radioResponse) radioResponse->acknowledgeRequest(serial);
    return Void();
}

// Methods from ::android::hardware::radio::V1_1::IRadioResponse follow.
Return<void> SecRadioResponse::setCarrierInfoForImsiEncryptionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setCarrierInfoForImsiEncryptionResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setSimCardPowerResponse_1_1(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setSimCardPowerResponse_1_1(info);
    return Void();
}

Return<void> SecRadioResponse::startNetworkScanResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->startNetworkScanResponse(info);
    return Void();
}

Return<void> SecRadioResponse::stopNetworkScanResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->stopNetworkScanResponse(info);
    return Void();
}

Return<void> SecRadioResponse::startKeepaliveResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_1::KeepaliveStatus& status) {
    if (radioResponse) radioResponse->startKeepaliveResponse(info, status);
    return Void();
}

Return<void> SecRadioResponse::stopKeepaliveResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->stopKeepaliveResponse(info);
    return Void();
}

// Methods from ::android::hardware::radio::V1_2::IRadioResponse follow.
Return<void> SecRadioResponse::getCellInfoListResponse_1_2(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_2::CellInfo>& cellInfo) {
    if (radioResponse) radioResponse->getCellInfoListResponse_1_2(info, cellInfo);
    return Void();
}

Return<void> SecRadioResponse::getIccCardStatusResponse_1_2(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_2::CardStatus& cardStatus) {
    if (radioResponse) radioResponse->getIccCardStatusResponse_1_2(info, cardStatus);
    return Void();
}

Return<void> SecRadioResponse::setSignalStrengthReportingCriteriaResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setSignalStrengthReportingCriteriaResponse(info);
    return Void();
}

Return<void> SecRadioResponse::setLinkCapacityReportingCriteriaResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info) {
    if (radioResponse) radioResponse->setLinkCapacityReportingCriteriaResponse(info);
    return Void();
}

Return<void> SecRadioResponse::getCurrentCallsResponse_1_2(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const hidl_vec<::android::hardware::radio::V1_2::Call>& calls) {
    if (radioResponse) radioResponse->getCurrentCallsResponse_1_2(info, calls);
    return Void();
}

Return<void> SecRadioResponse::getSignalStrengthResponse_1_2(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_2::SignalStrength& signalStrength) {
    if (radioResponse) radioResponse->getSignalStrengthResponse_1_2(info, signalStrength);
    return Void();
}

Return<void> SecRadioResponse::getVoiceRegistrationStateResponse_1_2(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_2::VoiceRegStateResult& voiceRegResponse) {
    if (radioResponse) radioResponse->getVoiceRegistrationStateResponse_1_2(info, voiceRegResponse);
    return Void();
}

Return<void> SecRadioResponse::getDataRegistrationStateResponse_1_2(
    const ::android::hardware::radio::V1_0::RadioResponseInfo& info,
    const ::android::hardware::radio::V1_2::DataRegStateResult& dataRegResponse) {
    if (radioResponse) radioResponse->getDataRegistrationStateResponse_1_2(info, dataRegResponse);
    return Void();
}

// Methods from ::vendor::samsung::hardware::radio::V1_2::IRadioResponse follow.
Return<void> SecRadioResponse::secGetIccCardStatusReponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecCardStatus&) {
    return Void();
}

Return<void> SecRadioResponse::secSupplyNetworkDepersonalizationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::secAcceptCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secDialResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secGetCurrentCallsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const hidl_vec<::vendor::samsung::hardware::radio::V1_2::SecCall>&) {
    return Void();
}

Return<void> SecRadioResponse::secGetSignalStrengthResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecSignalStrength&) {
    return Void();
}

Return<void> SecRadioResponse::secGetVoiceRegistrationStateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecVoiceRegStateResult&) {
    return Void();
}

Return<void> SecRadioResponse::secGetDataRegistrationStateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecDataRegStateResult&) {
    return Void();
}

Return<void> SecRadioResponse::secExplicitCallTransferResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secGetOperatorRespnse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_string&,
    const hidl_string&, const hidl_string&, const hidl_string&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetBarringPasswordResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secgetImsRegistrationStateReponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioResponse::secGetAvailableNetworkResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const hidl_vec<::vendor::samsung::hardware::radio::V1_2::SecOperatorInfo>&) {
    return Void();
}

Return<void> SecRadioResponse::oemDialEmergencyCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemCallDeflectionResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemModifyCallInitiateResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::android::hardware::radio::V1_0::LastCallFailCauseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetImsCallListResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetPreferredNetworkListResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const hidl_vec<::vendor::samsung::hardware::radio::V1_2::OemPreferredNetworkInfo>&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetPreferredNetworkListResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemSendEncodedUSSDResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemHoldCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetDisable2gResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::oemSetDisable2gResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oenGetAcbInfoResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetTransferCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetICBarringResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_string&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetICBarringResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemQueryCnapResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::oemRefreshNitzTimeResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemEnableUnsolResponseResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemCancelTransferCallResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemAcknowledgeRilConnectedResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetPhoneBookStorageInfoResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioResponse::oemUsimPbCapaResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetSimPowerResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::oemSetSimOnOffResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemSetSimInitEventResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetSimLockInfoResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_vec<int32_t>&) {
    return Void();
}

Return<void> SecRadioResponse::oemSupplyIccPersoResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemChangeIccPersoResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetPhoneBookEntryResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::OemSimPBResponse&) {
    return Void();
}

Return<void> SecRadioResponse::oemAccessPhoneBookEntryResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::oemGetCellBroadcastConfigResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::OemCbConfigArgs&) {
    return Void();
}

Return<void> SecRadioResponse::oemEmergencySearchResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::oemEmergencyControlResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::oemGetAtrResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, const hidl_string&) {
    return Void();
}

Return<void> SecRadioResponse::oemSendCdmaSmsExpectMoreResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecSendSmsResult&) {
    return Void();
}

Return<void> SecRadioResponse::secSendSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecSendSmsResult&) {
    return Void();
}

Return<void> SecRadioResponse::secSendSMSExpectMoreResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecSendSmsResult&) {
    return Void();
}

Return<void> SecRadioResponse::secSendCdmaSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecSendSmsResult&) {
    return Void();
}

Return<void> SecRadioResponse::secSendImsSmsResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::SecSendSmsResult&) {
    return Void();
}

Return<void> SecRadioResponse::secSetDataAllowedResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secGetCdmaRoamingPreferenceResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::secEnable5gResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secDisable5gResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secQuery5gStatusResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

Return<void> SecRadioResponse::secQueryNrDcParamResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::DcParam&) {
    return Void();
}

Return<void> SecRadioResponse::secQueryNrBearerAllocationResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&, int32_t) {
    return Void();
}

Return<void> SecRadioResponse::secQueryNrSignalStrengthResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const ::vendor::samsung::hardware::radio::V1_2::NrSignalStrength&) {
    return Void();
}

Return<void> SecRadioResponse::oemQueryCsgListResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&,
    const hidl_vec<::vendor::samsung::hardware::radio::V1_2::OemCsgInfo>&) {
    return Void();
}

Return<void> SecRadioResponse::oemSelectCsgManualResponse(
    const ::android::hardware::radio::V1_0::RadioResponseInfo&) {
    return Void();
}

}  // namespace implementation
}  // namespace V1_2
}  // namespace radio
}  // namespace hardware
}  // namespace samsung
}  // namespace vendor
