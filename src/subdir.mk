# Add inputs and outputs from these tool invocations to the build variables 
# C_SRCS += \
# ./src/appl.c \
# ./src/rchw.c 

# OBJS += \
# ./build/src/appl.o \
# ./build/src/rchw.o 

# C_DEPS += \
# ./build/src/appl.d \
# ./build/src/rchw.d 

SRC_DIR := src

# Define the build directory
BUILD_DIR := build/src

# Get a list of all source files in the source directory
SRC_FILES  := $(wildcard $(SRC_DIR)/*.c)

# Generate a list of object files based on source files
OBJ_FILES  := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_FILES))

# Generate dependency files
DEP_FILES  := $(OBJ_FILES:.o=.d)

C_SRCS += $(SRC_FILES)

OBJS += $(OBJ_FILES)

C_DEPS += $(DEP_FILES)

CC_OPTS += -DCPU_S32K144HFT0VLLT -I./include -O0 -g3 -Wall -c -fmessage-length=0 -fsigned-char \
			-ffunction-sections -fdata-sections -mcpu=cortex-m4 -mthumb  

# Each subdirectory must supply rules for building sources it contributes
build/src/%.o: ./src/%.c
	@echo checking for the output directory src
	if not exist build\src mkdir build\src
	@echo Building file: $<
	@echo Invoking: Standard S32DS C Compiler for src files
	arm-none-eabi-gcc $(CC_OPTS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo Finished building: $<
	@echo.


