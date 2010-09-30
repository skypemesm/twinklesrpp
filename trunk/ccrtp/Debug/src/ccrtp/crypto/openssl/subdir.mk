################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CXX_SRCS += \
../src/ccrtp/crypto/openssl/AesSrtp.cxx \
../src/ccrtp/crypto/openssl/InitializeOpenSSL.cxx \
../src/ccrtp/crypto/openssl/hmac.cxx 

OBJS += \
./src/ccrtp/crypto/openssl/AesSrtp.o \
./src/ccrtp/crypto/openssl/InitializeOpenSSL.o \
./src/ccrtp/crypto/openssl/hmac.o 

CXX_DEPS += \
./src/ccrtp/crypto/openssl/AesSrtp.d \
./src/ccrtp/crypto/openssl/InitializeOpenSSL.d \
./src/ccrtp/crypto/openssl/hmac.d 


# Each subdirectory must supply rules for building sources it contributes
src/ccrtp/crypto/openssl/%.o: ../src/ccrtp/crypto/openssl/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


