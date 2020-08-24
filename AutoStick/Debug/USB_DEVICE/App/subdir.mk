################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../USB_DEVICE/App/usb_device.c \
../USB_DEVICE/App/usbd_cdc_if.c \
../USB_DEVICE/App/usbd_midi.c \
../USB_DEVICE/App/usbd_midi_desc.c 

C_DEPS += \
./USB_DEVICE/App/usb_device.d \
./USB_DEVICE/App/usbd_cdc_if.d \
./USB_DEVICE/App/usbd_midi.d \
./USB_DEVICE/App/usbd_midi_desc.d 

OBJS += \
./USB_DEVICE/App/usb_device.o \
./USB_DEVICE/App/usbd_cdc_if.o \
./USB_DEVICE/App/usbd_midi.o \
./USB_DEVICE/App/usbd_midi_desc.o 


# Each subdirectory must supply rules for building sources it contributes
USB_DEVICE/App/usb_device.o: ../USB_DEVICE/App/usb_device.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/Target -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Include -I../Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../USB_DEVICE/App -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/LibMIDI/Include -I../Middlewares/LibOS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"USB_DEVICE/App/usb_device.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
USB_DEVICE/App/usbd_cdc_if.o: ../USB_DEVICE/App/usbd_cdc_if.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/Target -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Include -I../Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../USB_DEVICE/App -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/LibMIDI/Include -I../Middlewares/LibOS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"USB_DEVICE/App/usbd_cdc_if.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
USB_DEVICE/App/usbd_midi.o: ../USB_DEVICE/App/usbd_midi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/Target -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Include -I../Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../USB_DEVICE/App -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/LibMIDI/Include -I../Middlewares/LibOS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"USB_DEVICE/App/usbd_midi.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
USB_DEVICE/App/usbd_midi_desc.o: ../USB_DEVICE/App/usbd_midi_desc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/Target -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Include -I../Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../USB_DEVICE/App -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/LibMIDI/Include -I../Middlewares/LibOS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"USB_DEVICE/App/usbd_midi_desc.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

