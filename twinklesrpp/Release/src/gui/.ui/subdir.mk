################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/gui/.ui/addresscardform.cpp \
../src/gui/.ui/authenticationform.cpp \
../src/gui/.ui/buddyform.cpp \
../src/gui/.ui/deregisterform.cpp \
../src/gui/.ui/diamondcardprofileform.cpp \
../src/gui/.ui/dtmfform.cpp \
../src/gui/.ui/getaddressform.cpp \
../src/gui/.ui/getprofilenameform.cpp \
../src/gui/.ui/historyform.cpp \
../src/gui/.ui/inviteform.cpp \
../src/gui/.ui/logviewform.cpp \
../src/gui/.ui/messageform.cpp \
../src/gui/.ui/mphoneform.cpp \
../src/gui/.ui/numberconversionform.cpp \
../src/gui/.ui/qmake_image_collection.cpp \
../src/gui/.ui/redirectform.cpp \
../src/gui/.ui/selectnicform.cpp \
../src/gui/.ui/selectprofileform.cpp \
../src/gui/.ui/selectuserform.cpp \
../src/gui/.ui/sendfileform.cpp \
../src/gui/.ui/srvredirectform.cpp \
../src/gui/.ui/syssettingsform.cpp \
../src/gui/.ui/termcapform.cpp \
../src/gui/.ui/transferform.cpp \
../src/gui/.ui/userprofileform.cpp \
../src/gui/.ui/wizardform.cpp 

OBJS += \
./src/gui/.ui/addresscardform.o \
./src/gui/.ui/authenticationform.o \
./src/gui/.ui/buddyform.o \
./src/gui/.ui/deregisterform.o \
./src/gui/.ui/diamondcardprofileform.o \
./src/gui/.ui/dtmfform.o \
./src/gui/.ui/getaddressform.o \
./src/gui/.ui/getprofilenameform.o \
./src/gui/.ui/historyform.o \
./src/gui/.ui/inviteform.o \
./src/gui/.ui/logviewform.o \
./src/gui/.ui/messageform.o \
./src/gui/.ui/mphoneform.o \
./src/gui/.ui/numberconversionform.o \
./src/gui/.ui/qmake_image_collection.o \
./src/gui/.ui/redirectform.o \
./src/gui/.ui/selectnicform.o \
./src/gui/.ui/selectprofileform.o \
./src/gui/.ui/selectuserform.o \
./src/gui/.ui/sendfileform.o \
./src/gui/.ui/srvredirectform.o \
./src/gui/.ui/syssettingsform.o \
./src/gui/.ui/termcapform.o \
./src/gui/.ui/transferform.o \
./src/gui/.ui/userprofileform.o \
./src/gui/.ui/wizardform.o 

CPP_DEPS += \
./src/gui/.ui/addresscardform.d \
./src/gui/.ui/authenticationform.d \
./src/gui/.ui/buddyform.d \
./src/gui/.ui/deregisterform.d \
./src/gui/.ui/diamondcardprofileform.d \
./src/gui/.ui/dtmfform.d \
./src/gui/.ui/getaddressform.d \
./src/gui/.ui/getprofilenameform.d \
./src/gui/.ui/historyform.d \
./src/gui/.ui/inviteform.d \
./src/gui/.ui/logviewform.d \
./src/gui/.ui/messageform.d \
./src/gui/.ui/mphoneform.d \
./src/gui/.ui/numberconversionform.d \
./src/gui/.ui/qmake_image_collection.d \
./src/gui/.ui/redirectform.d \
./src/gui/.ui/selectnicform.d \
./src/gui/.ui/selectprofileform.d \
./src/gui/.ui/selectuserform.d \
./src/gui/.ui/sendfileform.d \
./src/gui/.ui/srvredirectform.d \
./src/gui/.ui/syssettingsform.d \
./src/gui/.ui/termcapform.d \
./src/gui/.ui/transferform.d \
./src/gui/.ui/userprofileform.d \
./src/gui/.ui/wizardform.d 


# Each subdirectory must supply rules for building sources it contributes
src/gui/.ui/%.o: ../src/gui/.ui/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


