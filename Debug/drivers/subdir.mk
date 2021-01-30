################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_ctimer.c \
../drivers/fsl_flexcomm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_i2c.c \
../drivers/fsl_lpadc.c \
../drivers/fsl_power.c \
../drivers/fsl_reset.c \
../drivers/fsl_usart.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_ctimer.o \
./drivers/fsl_flexcomm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_i2c.o \
./drivers/fsl_lpadc.o \
./drivers/fsl_power.o \
./drivers/fsl_reset.o \
./drivers/fsl_usart.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_ctimer.d \
./drivers/fsl_flexcomm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_i2c.d \
./drivers/fsl_lpadc.d \
./drivers/fsl_power.d \
./drivers/fsl_reset.d \
./drivers/fsl_usart.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DSERIAL_PORT_TYPE_UART=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\board" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\source" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\drivers" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\device" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\CMSIS" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\utilities" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\serial_manager" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\lists" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\uart" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\class\cdc" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\class" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\source" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\osa" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\include" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\source\lpcip3511" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\source\generated" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\include" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\phy" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


