################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/zephyr/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/stm32-cubeai/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/mingw32/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/porting/himax/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/dsp/kissfft/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/dsp/dct/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/dsp/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/TransformFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/SupportFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/StatisticsFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/SVMFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/MatrixFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/FilteringFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/FastMathFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/DistanceFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/ControllerFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/ComplexMathFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/CommonTables/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/BayesFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/edge-impulse-sdk/CMSIS/DSP/Source/BasicMathFunctions/subdir.mk
-include Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/cubeai-model/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := MotionC_V1
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
MotionC_V1.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
MotionC_V1.list \

OBJCOPY_HEX += \
MotionC_V1.hex \

OBJCOPY_BIN += \
MotionC_V1.bin \


# All Target
all: main-build

# Main-build Target
main-build: MotionC_V1.elf secondary-outputs

# Tool invocations
MotionC_V1.elf: $(OBJS) $(USER_OBJS) D:\IoT\MotionC_V1\STM32F407VGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-g++ -o "MotionC_V1.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\IoT\MotionC_V1\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="MotionC_V1.map" -Wl,--gc-sections -static -Wl,--start-group -l:NetworkRuntime500_CM4_IAR.a -Wl,--end-group -L"D:\IoT\MotionC_V1\Middlewares\Third_Party\EdgeImpulse_MottionDetection_P1_MachineLearning\edgeimpulse\Middlewares\ST\AI\Lib\MDK\ARMCortexM4" -L../Middlewares/Third_Party/EdgeImpulse_MottionDetection_P1_MachineLearning/edgeimpulse/Middlewares/ST/AI/Lib/ABI2.1/ARMCortexM4 -u _printf_float --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

MotionC_V1.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "MotionC_V1.list"
	@echo 'Finished building: $@'
	@echo ' '

MotionC_V1.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "MotionC_V1.hex"
	@echo 'Finished building: $@'
	@echo ' '

MotionC_V1.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "MotionC_V1.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
