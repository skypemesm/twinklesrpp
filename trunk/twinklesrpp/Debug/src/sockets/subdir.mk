################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/sockets/connection.o \
../src/sockets/connection_table.o \
../src/sockets/dnssrv.o \
../src/sockets/interfaces.o \
../src/sockets/socket.o \
../src/sockets/url.o 

CPP_SRCS += \
../src/sockets/connection.cpp \
../src/sockets/connection_table.cpp \
../src/sockets/dnssrv.cpp \
../src/sockets/interfaces.cpp \
../src/sockets/socket.cpp \
../src/sockets/url.cpp 

OBJS += \
./src/sockets/connection.o \
./src/sockets/connection_table.o \
./src/sockets/dnssrv.o \
./src/sockets/interfaces.o \
./src/sockets/socket.o \
./src/sockets/url.o 

CPP_DEPS += \
./src/sockets/connection.d \
./src/sockets/connection_table.d \
./src/sockets/dnssrv.d \
./src/sockets/interfaces.d \
./src/sockets/socket.d \
./src/sockets/url.d 


# Each subdirectory must supply rules for building sources it contributes
src/sockets/%.o: ../src/sockets/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


