################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/sdp/sdp.o \
../src/sdp/sdp_parse_ctrl.o \
../src/sdp/sdp_parser.o \
../src/sdp/sdp_scanner.o 

CPP_SRCS += \
../src/sdp/sdp.cpp \
../src/sdp/sdp_parse_ctrl.cpp 

CXX_SRCS += \
../src/sdp/sdp_parser.cxx \
../src/sdp/sdp_scanner.cxx 

OBJS += \
./src/sdp/sdp.o \
./src/sdp/sdp_parse_ctrl.o \
./src/sdp/sdp_parser.o \
./src/sdp/sdp_scanner.o 

CPP_DEPS += \
./src/sdp/sdp.d \
./src/sdp/sdp_parse_ctrl.d 

CXX_DEPS += \
./src/sdp/sdp_parser.d \
./src/sdp/sdp_scanner.d 


# Each subdirectory must supply rules for building sources it contributes
src/sdp/%.o: ../src/sdp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sdp/%.o: ../src/sdp/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


