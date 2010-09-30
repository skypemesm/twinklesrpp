################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/patterns/observer.o 

CPP_SRCS += \
../src/patterns/observer.cpp 

OBJS += \
./src/patterns/observer.o 

CPP_DEPS += \
./src/patterns/observer.d 


# Each subdirectory must supply rules for building sources it contributes
src/patterns/%.o: ../src/patterns/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


