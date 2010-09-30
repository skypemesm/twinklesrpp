################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/presence/buddy.o \
../src/presence/pidf_body.o \
../src/presence/presence_dialog.o \
../src/presence/presence_epa.o \
../src/presence/presence_state.o \
../src/presence/presence_subscription.o 

CPP_SRCS += \
../src/presence/buddy.cpp \
../src/presence/pidf_body.cpp \
../src/presence/presence_dialog.cpp \
../src/presence/presence_epa.cpp \
../src/presence/presence_state.cpp \
../src/presence/presence_subscription.cpp 

OBJS += \
./src/presence/buddy.o \
./src/presence/pidf_body.o \
./src/presence/presence_dialog.o \
./src/presence/presence_epa.o \
./src/presence/presence_state.o \
./src/presence/presence_subscription.o 

CPP_DEPS += \
./src/presence/buddy.d \
./src/presence/pidf_body.d \
./src/presence/presence_dialog.d \
./src/presence/presence_epa.d \
./src/presence/presence_state.d \
./src/presence/presence_subscription.d 


# Each subdirectory must supply rules for building sources it contributes
src/presence/%.o: ../src/presence/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


