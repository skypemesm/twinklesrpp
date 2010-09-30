################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/audio/gsm/src/add.cpp \
../src/audio/gsm/src/code.cpp \
../src/audio/gsm/src/debug.cpp \
../src/audio/gsm/src/decode.cpp \
../src/audio/gsm/src/gsm_create.cpp \
../src/audio/gsm/src/gsm_decode.cpp \
../src/audio/gsm/src/gsm_destroy.cpp \
../src/audio/gsm/src/gsm_encode.cpp \
../src/audio/gsm/src/gsm_explode.cpp \
../src/audio/gsm/src/gsm_implode.cpp \
../src/audio/gsm/src/gsm_option.cpp \
../src/audio/gsm/src/gsm_print.cpp \
../src/audio/gsm/src/long_term.cpp \
../src/audio/gsm/src/lpc.cpp \
../src/audio/gsm/src/preprocess.cpp \
../src/audio/gsm/src/rpe.cpp \
../src/audio/gsm/src/short_term.cpp \
../src/audio/gsm/src/table.cpp 

OBJS += \
./src/audio/gsm/src/add.o \
./src/audio/gsm/src/code.o \
./src/audio/gsm/src/debug.o \
./src/audio/gsm/src/decode.o \
./src/audio/gsm/src/gsm_create.o \
./src/audio/gsm/src/gsm_decode.o \
./src/audio/gsm/src/gsm_destroy.o \
./src/audio/gsm/src/gsm_encode.o \
./src/audio/gsm/src/gsm_explode.o \
./src/audio/gsm/src/gsm_implode.o \
./src/audio/gsm/src/gsm_option.o \
./src/audio/gsm/src/gsm_print.o \
./src/audio/gsm/src/long_term.o \
./src/audio/gsm/src/lpc.o \
./src/audio/gsm/src/preprocess.o \
./src/audio/gsm/src/rpe.o \
./src/audio/gsm/src/short_term.o \
./src/audio/gsm/src/table.o 

CPP_DEPS += \
./src/audio/gsm/src/add.d \
./src/audio/gsm/src/code.d \
./src/audio/gsm/src/debug.d \
./src/audio/gsm/src/decode.d \
./src/audio/gsm/src/gsm_create.d \
./src/audio/gsm/src/gsm_decode.d \
./src/audio/gsm/src/gsm_destroy.d \
./src/audio/gsm/src/gsm_encode.d \
./src/audio/gsm/src/gsm_explode.d \
./src/audio/gsm/src/gsm_implode.d \
./src/audio/gsm/src/gsm_option.d \
./src/audio/gsm/src/gsm_print.d \
./src/audio/gsm/src/long_term.d \
./src/audio/gsm/src/lpc.d \
./src/audio/gsm/src/preprocess.d \
./src/audio/gsm/src/rpe.d \
./src/audio/gsm/src/short_term.d \
./src/audio/gsm/src/table.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio/gsm/src/%.o: ../src/audio/gsm/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


