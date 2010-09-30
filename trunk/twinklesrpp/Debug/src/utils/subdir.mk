################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/utils/file_utils.o \
../src/utils/mime_database.o 

CPP_SRCS += \
../src/utils/file_utils.cpp \
../src/utils/mime_database.cpp 

OBJS += \
./src/utils/file_utils.o \
./src/utils/mime_database.o 

CPP_DEPS += \
./src/utils/file_utils.d \
./src/utils/mime_database.d 


# Each subdirectory must supply rules for building sources it contributes
src/utils/%.o: ../src/utils/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


