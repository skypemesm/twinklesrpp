################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CXX_SRCS += \
../src/ccrtp/crypto/gcrypt/InitializeGcrypt.cxx \
../src/ccrtp/crypto/gcrypt/gcryptAesSrtp.cxx \
../src/ccrtp/crypto/gcrypt/gcrypthmac.cxx 

OBJS += \
./src/ccrtp/crypto/gcrypt/InitializeGcrypt.o \
./src/ccrtp/crypto/gcrypt/gcryptAesSrtp.o \
./src/ccrtp/crypto/gcrypt/gcrypthmac.o 

CXX_DEPS += \
./src/ccrtp/crypto/gcrypt/InitializeGcrypt.d \
./src/ccrtp/crypto/gcrypt/gcryptAesSrtp.d \
./src/ccrtp/crypto/gcrypt/gcrypthmac.d 


# Each subdirectory must supply rules for building sources it contributes
src/ccrtp/crypto/gcrypt/%.o: ../src/ccrtp/crypto/gcrypt/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


