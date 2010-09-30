################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/threads/mutex.o \
../src/threads/sema.o \
../src/threads/thread.o 

CPP_SRCS += \
../src/threads/mutex.cpp \
../src/threads/sema.cpp \
../src/threads/thread.cpp 

OBJS += \
./src/threads/mutex.o \
./src/threads/sema.o \
./src/threads/thread.o 

CPP_DEPS += \
./src/threads/mutex.d \
./src/threads/sema.d \
./src/threads/thread.d 


# Each subdirectory must supply rules for building sources it contributes
src/threads/%.o: ../src/threads/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


