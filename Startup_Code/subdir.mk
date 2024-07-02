# Add inputs and outputs from these tool invocations to the build variables 
# C_SRCS += \
# ./Startup_Code/startup.c \
# ./Startup_Code/system_S32K144.c 

# S_UPPER_SRCS += \
# ./Startup_Code/startup_S32K144.S 

# OBJS += \
# ./build/Startup_Code/startup.o \
# ./build/Startup_Code/startup_S32K144.o \
# ./build/Startup_Code/system_S32K144.o 

# C_DEPS += \
# ./build/Startup_Code/startup.d \
# ./build/Startup_Code/system_S32K144.d 

# Define the source directory
SRC_DIR := Startup_Code

# Define the build directory
BUILD_DIR := build/Startup_Code

# Get a list of all source files in the source directory
SRC_C_FILES  := $(wildcard $(SRC_DIR)/*.c)

SRC_S_FILES  := $(wildcard $(SRC_DIR)/*.S)

# Generate a list of object files based on source files
OBJ_FILES_1 := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_C_FILES))

OBJ_FILES_2 := $(patsubst $(SRC_DIR)/%.S,$(BUILD_DIR)/%.o,$(SRC_S_FILES))

# Generate dependency files
DEP_FILES  := $(OBJ_FILES_1:.o=.d)

C_SRCS += $(SRC_C_FILES)

OBJS += $(OBJ_FILES_1) 

OBJS += $(OBJ_FILES_2)

C_DEPS += $(DEP_FILES)

S_SRCS += $(SRC_S_FILES)

# Each subdirectory must supply rules for building sources it contributes
build/Startup_Code/%.o: ./Startup_Code/%.c
	@echo checking for the output directory Startup_Code
	if not exist build\Startup_Code mkdir build\Startup_Code
	@echo Building file: $<
	@echo Invoking: Standard S32DS C Compiler for startup source code
	arm-none-eabi-gcc $(CC_OPTS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo Finished building: $<
	@echo.

build/Startup_Code/%.o: ./Startup_Code/%.S
	@echo checking for the output directory Startup_Code
	if not exist build\Startup_Code mkdir build\Startup_Code
	@echo Building file: $<
	@echo Invoking: Standard S32DS Assembler for startup source code
	arm-none-eabi-gcc $(CC_OPTS) -x assembler-with-cpp -o "$@" "$<"
	@echo Finished building: $<
	@echo.


