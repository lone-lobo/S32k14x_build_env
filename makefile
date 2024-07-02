-include ../makefile.init

RM := rm -rf

.PHONY: all clean dependents

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/subdir.mk
-include Startup_Code/subdir.mk
-include Linker_Files/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
bootloader_S32K.srec \


# All Target
all: bootloader_S32K.elf secondary-outputs  

# Tool invocations
bootloader_S32K.elf: $(OBJS) Linker_Files/S32K146_128_flash.ld $(OBJS)
	@echo Building target: $@
	@echo Invoking: Standard S32DS C Linker
	arm-none-eabi-ld -T "Linker_Files/S32K146_128_flash.ld" -o "build/bootloader_S32K.elf" $(OBJS) $(LIBS)
	@echo Finished building target: $@
	@echo.

bootloader_S32K.srec: build/bootloader_S32K.elf
	@echo Invoking: Standard S32DS Create Flash Image
	arm-none-eabi-objcopy -O srec build/bootloader_S32K.elf  "build/bootloader_S32K.srec"
	@echo Finished building: $@
	@echo.

# Other Targets
clean:
	@echo Removing all the complied objects and dependencies! 
	rmdir /s /q build
	-@echo.

secondary-outputs: $(SECONDARY_FLASH)

-include ../makefile.targets
