################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/mwi/mwi.o \
../src/mwi/mwi_dialog.o \
../src/mwi/mwi_subscription.o \
../src/mwi/simple_msg_sum_body.o 

CPP_SRCS += \
../src/mwi/mwi.cpp \
../src/mwi/mwi_dialog.cpp \
../src/mwi/mwi_subscription.cpp \
../src/mwi/simple_msg_sum_body.cpp 

OBJS += \
./src/mwi/mwi.o \
./src/mwi/mwi_dialog.o \
./src/mwi/mwi_subscription.o \
./src/mwi/simple_msg_sum_body.o 

CPP_DEPS += \
./src/mwi/mwi.d \
./src/mwi/mwi_dialog.d \
./src/mwi/mwi_subscription.d \
./src/mwi/simple_msg_sum_body.d 


# Each subdirectory must supply rules for building sources it contributes
src/mwi/%.o: ../src/mwi/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


