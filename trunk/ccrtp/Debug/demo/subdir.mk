################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../demo/audiorx.o \
../demo/audiotx.o \
../demo/ccrtptest.o \
../demo/ccsrtptest.o \
../demo/rtpduphello.o \
../demo/rtphello.o \
../demo/rtplisten.o \
../demo/rtpsend.o 

CPP_SRCS += \
../demo/audiorx.cpp \
../demo/audiotx.cpp \
../demo/ccrtptest.cpp \
../demo/ccsrtptest.cpp \
../demo/rtpduphello.cpp \
../demo/rtphello.cpp \
../demo/rtplisten.cpp \
../demo/rtpsend.cpp 

OBJS += \
./demo/audiorx.o \
./demo/audiotx.o \
./demo/ccrtptest.o \
./demo/ccsrtptest.o \
./demo/rtpduphello.o \
./demo/rtphello.o \
./demo/rtplisten.o \
./demo/rtpsend.o 

CPP_DEPS += \
./demo/audiorx.d \
./demo/audiotx.d \
./demo/ccrtptest.d \
./demo/ccsrtptest.d \
./demo/rtpduphello.d \
./demo/rtphello.d \
./demo/rtplisten.d \
./demo/rtpsend.d 


# Each subdirectory must supply rules for building sources it contributes
demo/%.o: ../demo/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


