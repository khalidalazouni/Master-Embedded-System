################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
lab1_toggle_led.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
lab1_toggle_led.list \

OBJCOPY_HEX += \
lab1_toggle_led.hex \

OBJCOPY_BIN += \
lab1_toggle_led.bin \


# All Target
all: lab1_toggle_led.elf secondary-outputs

# Tool invocations
lab1_toggle_led.elf: $(OBJS) $(USER_OBJS) D:\master\ online\ diploma\unit\ 3\lesson\ 1\ (lab1_toggle_led)\lab1_toggle_led\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "lab1_toggle_led.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\master online diploma\unit 3\lesson 1 (lab1_toggle_led)\lab1_toggle_led\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="lab1_toggle_led.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

lab1_toggle_led.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "lab1_toggle_led.list"
	@echo 'Finished building: $@'
	@echo ' '

lab1_toggle_led.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "lab1_toggle_led.hex"
	@echo 'Finished building: $@'
	@echo ' '

lab1_toggle_led.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "lab1_toggle_led.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
