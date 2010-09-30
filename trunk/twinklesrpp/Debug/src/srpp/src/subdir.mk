################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/srpp/src/Padding_Algorithms.cpp \
../src/srpp/src/Padding_functions.cpp \
../src/srpp/src/SRPP_functions.cpp \
../src/srpp/src/md5.cpp \
../src/srpp/src/srpp_timer.cpp 

OBJS += \
./src/srpp/src/Padding_Algorithms.o \
./src/srpp/src/Padding_functions.o \
./src/srpp/src/SRPP_functions.o \
./src/srpp/src/md5.o \
./src/srpp/src/srpp_timer.o 

CPP_DEPS += \
./src/srpp/src/Padding_Algorithms.d \
./src/srpp/src/Padding_functions.d \
./src/srpp/src/SRPP_functions.d \
./src/srpp/src/md5.d \
./src/srpp/src/srpp_timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/srpp/src/%.o: ../src/srpp/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


