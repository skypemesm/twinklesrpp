################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/gui/address_finder.cpp \
../src/gui/addresslistviewitem.cpp \
../src/gui/buddylistview.cpp \
../src/gui/freedesksystray.cpp \
../src/gui/gui.cpp \
../src/gui/historylistview.cpp \
../src/gui/main.cpp \
../src/gui/messageformview.cpp \
../src/gui/twinkleapplication.cpp \
../src/gui/twinklesystray.cpp \
../src/gui/yesnodialog.cpp 

OBJS += \
./src/gui/address_finder.o \
./src/gui/addresslistviewitem.o \
./src/gui/buddylistview.o \
./src/gui/freedesksystray.o \
./src/gui/gui.o \
./src/gui/historylistview.o \
./src/gui/main.o \
./src/gui/messageformview.o \
./src/gui/twinkleapplication.o \
./src/gui/twinklesystray.o \
./src/gui/yesnodialog.o 

CPP_DEPS += \
./src/gui/address_finder.d \
./src/gui/addresslistviewitem.d \
./src/gui/buddylistview.d \
./src/gui/freedesksystray.d \
./src/gui/gui.d \
./src/gui/historylistview.d \
./src/gui/main.d \
./src/gui/messageformview.d \
./src/gui/twinkleapplication.d \
./src/gui/twinklesystray.d \
./src/gui/yesnodialog.d 


# Each subdirectory must supply rules for building sources it contributes
src/gui/%.o: ../src/gui/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


