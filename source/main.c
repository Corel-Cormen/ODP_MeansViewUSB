#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "LPC55S69_cm33_core0.h"
#include "fsl_debug_console.h"
#include "usb_device_interface_0_cic_vcom.h"
#include "fsl_power.h"

#define FS 2000

int main(void)
{

	ctimer_match_config_t CTIMER0_Match_3_new_config = CTIMER0_Match_3_config;

	/* Disable LDOGPADC power down */
	POWER_DisablePD(kPDRUNCFG_PD_LDOGPADC);
  	/* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

    CTIMER0_Match_3_new_config.matchValue=CLOCK_GetCTimerClkFreq(0U)/(2*FS);
    /* Match channel 3 of CTIMER0 peripheral initialization */
    CTIMER_SetupMatch(CTIMER0_PERIPHERAL, CTIMER0_MATCH_3_CHANNEL, &CTIMER0_Match_3_new_config);
    /* Start the timer */
    CTIMER_StartTimer(CTIMER0_PERIPHERAL);

    while(1)
    {
    	USB_DeviceInterface0CicVcomTask();
    }

    return 0 ;
}
