################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/audits/memman.o 

CPP_SRCS += \
../src/audits/memman.cpp 

OBJS += \
./src/audits/memman.o 

CPP_DEPS += \
./src/audits/memman.d 


# Each subdirectory must supply rules for building sources it contributes
src/audits/%.o: ../src/audits/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


