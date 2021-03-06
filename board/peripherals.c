/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v8.0
processor: LPC55S69
package_id: LPC55S69JBD100
mcu_data: ksdk2_0
processor_version: 8.0.3
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: f0f5655a-dc6b-4dee-ad3d-c02afc663062
  called_from_default_init: true
  selectedCore: cm33_core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * ADC0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC0'
- type: 'lpadc'
- mode: 'LPADC'
- custom_name_enabled: 'false'
- type_id: 'lpadc_37e603c0367b4bb173ded9b76a178984'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC0'
- config_sets:
  - fsl_lpadc:
    - lpadcConfig:
      - enableInDozeMode: 'true'
      - conversionAverageMode: 'kLPADC_ConversionAverage1'
      - offsetCalibration: 'no'
      - autoCalibrate: 'true'
      - enableAnalogPreliminary: 'true'
      - powerUpDelay: '0x80'
      - referenceVoltageSource: 'kLPADC_ReferenceVoltageAlt2'
      - powerLevelMode: 'kLPADC_PowerLevelAlt4'
      - triggerPriorityPolicy: 'kLPADC_TriggerPriorityPreemptImmediately'
      - enableConvPause: 'false'
      - convPauseDelay: '0'
      - FIFO0Watermark: '0'
      - FIFO1Watermark: '0'
      - FIFO0WatermarkDMA: 'false'
      - FIFO1WatermarkDMA: 'false'
    - lpadcConvCommandConfig:
      - 0:
        - commandId: '1'
        - chainedNextCommandNumber: '0'
        - sampleChannelMode: 'kLPADC_SampleChannelSingleEndSideA'
        - channelNumber: 'CH.0'
        - enableAutoChannelIncrement: 'false'
        - loopCount: '0'
        - hardwareAverageMode: 'kLPADC_HardwareAverageCount1'
        - sampleTimeMode: 'kLPADC_SampleTimeADCK3'
        - hardwareCompareMode: 'kLPADC_HardwareCompareDisabled'
        - hardwareCompareValueHigh: '0'
        - hardwareCompareValueLow: '0'
        - conversionResoultuionMode: 'kLPADC_ConversionResolutionHigh'
        - enableWaitTrigger: 'false'
    - lpadcConvTriggerConfig:
      - 0:
        - triggerId: '5'
        - targetCommandId: '1'
        - delayPower: '0'
        - priority: 'false'
        - channelAFIFOSelect: '0'
        - channelBFIFOSelect: '0'
        - enableHardwareTrigger: 'true'
    - IRQ_cfg:
      - interrupt_type: 'kLPADC_FIFO0WatermarkInterruptEnable'
      - enable_irq: 'true'
      - adc_interrupt:
        - IRQn: 'ADC0_IRQn'
        - enable_interrrupt: 'enabled'
        - enable_priority: 'true'
        - priority: '0'
        - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lpadc_config_t ADC0_config = {
  .enableInDozeMode = true,
  .conversionAverageMode = kLPADC_ConversionAverage1,
  .enableAnalogPreliminary = true,
  .powerUpDelay = 0x80UL,
  .referenceVoltageSource = kLPADC_ReferenceVoltageAlt2,
  .powerLevelMode = kLPADC_PowerLevelAlt4,
  .triggerPriorityPolicy = kLPADC_TriggerPriorityPreemptImmediately,
  .enableConvPause = false,
  .convPauseDelay = 0UL,
  .FIFO0Watermark = 0UL,
  .FIFO1Watermark = 0UL
};
lpadc_conv_command_config_t ADC0_commandsConfig[1] = {
  {
    .sampleChannelMode = kLPADC_SampleChannelSingleEndSideA,
    .channelNumber = 0U,
    .chainedNextCommandNumber = 0,
    .enableAutoChannelIncrement = false,
    .loopCount = 0UL,
    .hardwareAverageMode = kLPADC_HardwareAverageCount1,
    .sampleTimeMode = kLPADC_SampleTimeADCK3,
    .hardwareCompareMode = kLPADC_HardwareCompareDisabled,
    .hardwareCompareValueHigh = 0UL,
    .hardwareCompareValueLow = 0UL,
    .conversionResolutionMode = kLPADC_ConversionResolutionHigh,
    .enableWaitTrigger = false
  }
};
lpadc_conv_trigger_config_t ADC0_triggersConfig[1] = {
  {
    .targetCommandId = 1,
    .delayPower = 0UL,
    .channelAFIFOSelect = 0,
    .channelBFIFOSelect = 0,
    .priority = 1,
    .enableHardwareTrigger = true
  }
};

static void ADC0_init(void) {
  /* Initialize LPADC converter */
  LPADC_Init(ADC0_PERIPHERAL, &ADC0_config);
  /* Perform auto calibration */
  LPADC_DoAutoCalibration(ADC0_PERIPHERAL);
  /* Configure conversion command 1. */
  LPADC_SetConvCommandConfig(ADC0_PERIPHERAL, 1, &ADC0_commandsConfig[0]);
  /* Configure trigger 5. */
  LPADC_SetConvTriggerConfig(ADC0_PERIPHERAL, 5, &ADC0_triggersConfig[0]);
  /* Interrupt vector ADC0_IRQn priority settings in the NVIC. */
  NVIC_SetPriority(ADC0_IRQN, ADC0_IRQ_PRIORITY);
  /* Enable interrupts from LPADC */
  LPADC_EnableInterrupts(ADC0_PERIPHERAL, (kLPADC_FIFO0WatermarkInterruptEnable));
  /* Enable interrupt ADC0_IRQn request in the NVIC. */
  EnableIRQ(ADC0_IRQN);
}

/***********************************************************************************************************************
 * CTIMER0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'CTIMER0'
- type: 'ctimer'
- mode: 'Capture_Match'
- custom_name_enabled: 'false'
- type_id: 'ctimer_c8b90232d8b6318ba1dac2cf08fb5f4a'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'CTIMER0'
- config_sets:
  - fsl_ctimer:
    - ctimerConfig:
      - mode: 'kCTIMER_TimerMode'
      - clockSource: 'FunctionClock'
      - clockSourceFreq: 'BOARD_BootClockPLL150M'
      - timerPrescaler: '1'
    - EnableTimerInInit: 'false'
    - matchChannels:
      - 0:
        - matchChannelPrefixId: 'Match_3'
        - matchChannel: 'kCTIMER_Match_3'
        - matchValueStr: '500'
        - enableCounterReset: 'true'
        - enableCounterStop: 'false'
        - outControl: 'kCTIMER_Output_Toggle'
        - outPinInitValue: 'low'
        - enableInterrupt: 'false'
    - interruptCallbackConfig:
      - interrupt:
        - IRQn: 'CTIMER0_IRQn'
        - enable_interrrupt: 'enabled'
        - enable_priority: 'false'
        - priority: '0'
      - callback: 'kCTIMER_NoCallback'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const ctimer_config_t CTIMER0_config = {
  .mode = kCTIMER_TimerMode,
  .input = kCTIMER_Capture_0,
  .prescale = 0
};
const ctimer_match_config_t CTIMER0_Match_3_config = {
  .matchValue = 500,
  .enableCounterReset = true,
  .enableCounterStop = false,
  .outControl = kCTIMER_Output_Toggle,
  .outPinInitState = false,
  .enableInterrupt = false
};

static void CTIMER0_init(void) {
  /* CTIMER0 peripheral initialization */
  CTIMER_Init(CTIMER0_PERIPHERAL, &CTIMER0_config);
  /* Match channel 3 of CTIMER0 peripheral initialization */
  CTIMER_SetupMatch(CTIMER0_PERIPHERAL, CTIMER0_MATCH_3_CHANNEL, &CTIMER0_Match_3_config);
}

/***********************************************************************************************************************
 * USBHSD initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'USBHSD'
- type: 'usb'
- mode: 'device'
- custom_name_enabled: 'false'
- type_id: 'usb_c84d398fe7344af73d7dbb640d3b1867'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'USBHSD'
- config_sets:
  - deviceSetting:
    - vendor_id: '0x1FC9'
    - product_id: '0x0090'
    - manufacturer_string: 'NXP'
    - product_string: 'VCOM-MEAS'
    - self_powered: 'true'
    - max_power: '100'
    - interfaces:
      - 0:
        - interface_class: 'kClassCic'
        - setting_cic:
          - interface_name: 'CIC VCOM'
          - implementation: 'kImplementationCicVcom'
          - subclass: 'kSubclassAcm'
          - protocol: 'kProtocolNone'
          - endpoints_settings:
            - 0:
              - setting_name: 'Default'
              - endpoints:
                - 0:
                  - direction: 'kIn'
                  - transfer_type: 'kInterrupt'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k16'
                  - polling_interval_fs: '8'
                  - max_packet_size_hs: 'k16'
                  - polling_interval_hs: '7'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
          - data_interface_count: '1'
          - quick_selection: 'QS_INTERFACE_CIC_VCOM'
      - 1:
        - interface_class: 'kClassDic'
        - setting_dic:
          - interface_name: 'DIC VCOM'
          - implementation: 'kImplementationDicVcom'
          - subclass: 'kSubclassNone'
          - protocol: 'kProtocolNone'
          - endpoints_settings:
            - 0:
              - setting_name: 'Default'
              - endpoints:
                - 0:
                  - direction: 'kIn'
                  - transfer_type: 'kBulk'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k64'
                  - polling_interval_fs: '0'
                  - max_packet_size_hs: 'k512'
                  - polling_interval_hs: '0'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
                - 1:
                  - direction: 'kOut'
                  - transfer_type: 'kBulk'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k64'
                  - polling_interval_fs: '0'
                  - max_packet_size_hs: 'k512'
                  - polling_interval_hs: '0'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void USBHSD_init(void) {
  USB_DeviceApplicationInit();
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  ADC0_init();
  CTIMER0_init();
  USBHSD_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
