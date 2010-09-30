################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/CryptoContext.o \
../src/InitializeGcrypt.o \
../src/control.o \
../src/data.o \
../src/duplex.o \
../src/gcryptAesSrtp.o \
../src/gcrypthmac.o \
../src/incqueue.o \
../src/members.o \
../src/outqueue.o \
../src/pool.o \
../src/queue.o \
../src/rtcppkt.o \
../src/rtppkt.o \
../src/socket.o \
../src/source.o 

CPP_SRCS += \
../src/control.cpp \
../src/data.cpp \
../src/duplex.cpp \
../src/incqueue.cpp \
../src/members.cpp \
../src/outqueue.cpp \
../src/pool.cpp \
../src/queue.cpp \
../src/rtcppkt.cpp \
../src/rtppkt.cpp \
../src/socket.cpp \
../src/source.cpp 

CXX_SRCS += \
../src/CryptoContext.cxx 

OBJS += \
./src/CryptoContext.o \
./src/control.o \
./src/data.o \
./src/duplex.o \
./src/incqueue.o \
./src/members.o \
./src/outqueue.o \
./src/pool.o \
./src/queue.o \
./src/rtcppkt.o \
./src/rtppkt.o \
./src/socket.o \
./src/source.o 

CPP_DEPS += \
./src/control.d \
./src/data.d \
./src/duplex.d \
./src/incqueue.d \
./src/members.d \
./src/outqueue.d \
./src/pool.d \
./src/queue.d \
./src/rtcppkt.d \
./src/rtppkt.d \
./src/socket.d \
./src/source.d 

CXX_DEPS += \
./src/CryptoContext.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


