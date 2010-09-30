################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/libSRPP/src/Padding_Algorithms.o \
../src/libSRPP/src/Padding_functions.o \
../src/libSRPP/src/SRPP_functions.o \
../src/libSRPP/src/md5.o \
../src/libSRPP/src/srpp_timer.o 

CPP_SRCS += \
../src/libSRPP/src/Padding_Algorithms.cpp \
../src/libSRPP/src/Padding_functions.cpp \
../src/libSRPP/src/SRPP_functions.cpp \
../src/libSRPP/src/md5.cpp \
../src/libSRPP/src/srpp_timer.cpp 

OBJS += \
./src/libSRPP/src/Padding_Algorithms.o \
./src/libSRPP/src/Padding_functions.o \
./src/libSRPP/src/SRPP_functions.o \
./src/libSRPP/src/md5.o \
./src/libSRPP/src/srpp_timer.o 

CPP_DEPS += \
./src/libSRPP/src/Padding_Algorithms.d \
./src/libSRPP/src/Padding_functions.d \
./src/libSRPP/src/SRPP_functions.d \
./src/libSRPP/src/md5.d \
./src/libSRPP/src/srpp_timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/libSRPP/src/%.o: ../src/libSRPP/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


