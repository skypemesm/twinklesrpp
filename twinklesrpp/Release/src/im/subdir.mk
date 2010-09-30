################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/im/im_iscomposing_body.o \
../src/im/msg_session.o 

CPP_SRCS += \
../src/im/im_iscomposing_body.cpp \
../src/im/msg_session.cpp 

OBJS += \
./src/im/im_iscomposing_body.o \
./src/im/msg_session.o 

CPP_DEPS += \
./src/im/im_iscomposing_body.d \
./src/im/msg_session.d 


# Each subdirectory must supply rules for building sources it contributes
src/im/%.o: ../src/im/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


