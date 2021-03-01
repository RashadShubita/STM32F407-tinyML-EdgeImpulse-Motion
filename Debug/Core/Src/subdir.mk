################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c 

CPP_SRCS += \
../Core/Src/TJ_MPU6050.cpp \
../Core/Src/main.cpp 

C_DEPS += \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d 

OBJS += \
./Core/Src/TJ_MPU6050.o \
./Core/Src/main.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o 

CPP_DEPS += \
./Core/Src/TJ_MPU6050.d \
./Core/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/TJ_MPU6050.o: ../Core/Src/TJ_MPU6050.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Core/Src/TJ_MPU6050.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/main.o: ../Core/Src/main.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Core/Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_hal_msp.o: ../Core/Src/stm32f4xx_hal_msp.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_it.o: ../Core/Src/stm32f4xx_it.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/syscalls.o: ../Core/Src/syscalls.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/sysmem.o: ../Core/Src/sysmem.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/system_stm32f4xx.o: ../Core/Src/system_stm32f4xx.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/system_stm32f4xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

