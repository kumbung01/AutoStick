################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/LibOS/Source/sysHelpers.c \
../Middlewares/LibOS/Source/sysTimer.c 

C_DEPS += \
./Middlewares/LibOS/Source/sysHelpers.d \
./Middlewares/LibOS/Source/sysTimer.d 

OBJS += \
./Middlewares/LibOS/Source/sysHelpers.o \
./Middlewares/LibOS/Source/sysTimer.o 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/LibOS/Source/sysHelpers.o: ../Middlewares/LibOS/Source/sysHelpers.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/Target -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Include -I../Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../USB_DEVICE/App -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/LibMIDI/Include -I../Middlewares/LibOS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/LibOS/Source/sysHelpers.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Middlewares/LibOS/Source/sysTimer.o: ../Middlewares/LibOS/Source/sysTimer.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/Target -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/CMSIS/Include -I../Core/Inc -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../USB_DEVICE/App -IC:/Users/JEONG/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/LibMIDI/Include -I../Middlewares/LibOS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middlewares/LibOS/Source/sysTimer.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

