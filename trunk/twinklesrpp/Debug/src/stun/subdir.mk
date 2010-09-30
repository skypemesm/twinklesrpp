################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/stun/stun.o \
../src/stun/stun_transaction.o \
../src/stun/udp.o 

CPP_SRCS += \
../src/stun/stun_transaction.cpp 

CXX_SRCS += \
../src/stun/stun.cxx \
../src/stun/udp.cxx 

OBJS += \
./src/stun/stun.o \
./src/stun/stun_transaction.o \
./src/stun/udp.o 

CPP_DEPS += \
./src/stun/stun_transaction.d 

CXX_DEPS += \
./src/stun/stun.d \
./src/stun/udp.d 


# Each subdirectory must supply rules for building sources it contributes
src/stun/%.o: ../src/stun/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/stun/%.o: ../src/stun/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


