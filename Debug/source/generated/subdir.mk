################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/generated/usb_device_composite.c \
../source/generated/usb_device_descriptor.c 

OBJS += \
./source/generated/usb_device_composite.o \
./source/generated/usb_device_descriptor.o 

C_DEPS += \
./source/generated/usb_device_composite.d \
./source/generated/usb_device_descriptor.d 


# Each subdirectory must supply rules for building sources it contributes
source/generated/%.o: ../source/generated/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DSERIAL_PORT_TYPE_UART=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\board" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\source" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\drivers" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\device" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\CMSIS" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\utilities" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\serial_manager" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\lists" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\uart" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\class\cdc" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\class" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\source" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\component\osa" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\include" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\device\source\lpcip3511" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\source\generated" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\include" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\usb\phy" -I"C:\Users\kkorn\Documents\MCUXpressoIDE_11.2.1_4149\workspace\ODP_MeansViewUSB\startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


