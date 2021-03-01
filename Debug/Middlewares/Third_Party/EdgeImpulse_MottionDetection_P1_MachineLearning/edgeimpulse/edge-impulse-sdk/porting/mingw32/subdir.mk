################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/debug_log.cpp \
../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/ei_classifier_porting.cpp 

OBJS += \
./Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/debug_log.o \
./Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/ei_classifier_porting.o 

CPP_DEPS += \
./Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/debug_log.d \
./Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/ei_classifier_porting.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/debug_log.o: ../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/debug_log.cpp Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/debug_log.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/ei_classifier_porting.o: ../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/ei_classifier_porting.cpp Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Inc/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Include/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/PrivateInclude/ -I../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/NN/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/ei_classifier_porting.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

