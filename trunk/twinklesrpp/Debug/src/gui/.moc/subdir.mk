################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/gui/.moc/moc_address_finder.cpp \
../src/gui/.moc/moc_addresscardform.cpp \
../src/gui/.moc/moc_authenticationform.cpp \
../src/gui/.moc/moc_buddyform.cpp \
../src/gui/.moc/moc_deregisterform.cpp \
../src/gui/.moc/moc_diamondcardprofileform.cpp \
../src/gui/.moc/moc_dtmfform.cpp \
../src/gui/.moc/moc_freedesksystray.cpp \
../src/gui/.moc/moc_getaddressform.cpp \
../src/gui/.moc/moc_getprofilenameform.cpp \
../src/gui/.moc/moc_gui.cpp \
../src/gui/.moc/moc_historyform.cpp \
../src/gui/.moc/moc_inviteform.cpp \
../src/gui/.moc/moc_logviewform.cpp \
../src/gui/.moc/moc_messageform.cpp \
../src/gui/.moc/moc_mphoneform.cpp \
../src/gui/.moc/moc_numberconversionform.cpp \
../src/gui/.moc/moc_redirectform.cpp \
../src/gui/.moc/moc_selectnicform.cpp \
../src/gui/.moc/moc_selectprofileform.cpp \
../src/gui/.moc/moc_selectuserform.cpp \
../src/gui/.moc/moc_sendfileform.cpp \
../src/gui/.moc/moc_srvredirectform.cpp \
../src/gui/.moc/moc_syssettingsform.cpp \
../src/gui/.moc/moc_termcapform.cpp \
../src/gui/.moc/moc_textbrowsernoautolink.cpp \
../src/gui/.moc/moc_transferform.cpp \
../src/gui/.moc/moc_userprofileform.cpp \
../src/gui/.moc/moc_wizardform.cpp \
../src/gui/.moc/moc_yesnodialog.cpp 

OBJS += \
./src/gui/.moc/moc_address_finder.o \
./src/gui/.moc/moc_addresscardform.o \
./src/gui/.moc/moc_authenticationform.o \
./src/gui/.moc/moc_buddyform.o \
./src/gui/.moc/moc_deregisterform.o \
./src/gui/.moc/moc_diamondcardprofileform.o \
./src/gui/.moc/moc_dtmfform.o \
./src/gui/.moc/moc_freedesksystray.o \
./src/gui/.moc/moc_getaddressform.o \
./src/gui/.moc/moc_getprofilenameform.o \
./src/gui/.moc/moc_gui.o \
./src/gui/.moc/moc_historyform.o \
./src/gui/.moc/moc_inviteform.o \
./src/gui/.moc/moc_logviewform.o \
./src/gui/.moc/moc_messageform.o \
./src/gui/.moc/moc_mphoneform.o \
./src/gui/.moc/moc_numberconversionform.o \
./src/gui/.moc/moc_redirectform.o \
./src/gui/.moc/moc_selectnicform.o \
./src/gui/.moc/moc_selectprofileform.o \
./src/gui/.moc/moc_selectuserform.o \
./src/gui/.moc/moc_sendfileform.o \
./src/gui/.moc/moc_srvredirectform.o \
./src/gui/.moc/moc_syssettingsform.o \
./src/gui/.moc/moc_termcapform.o \
./src/gui/.moc/moc_textbrowsernoautolink.o \
./src/gui/.moc/moc_transferform.o \
./src/gui/.moc/moc_userprofileform.o \
./src/gui/.moc/moc_wizardform.o \
./src/gui/.moc/moc_yesnodialog.o 

CPP_DEPS += \
./src/gui/.moc/moc_address_finder.d \
./src/gui/.moc/moc_addresscardform.d \
./src/gui/.moc/moc_authenticationform.d \
./src/gui/.moc/moc_buddyform.d \
./src/gui/.moc/moc_deregisterform.d \
./src/gui/.moc/moc_diamondcardprofileform.d \
./src/gui/.moc/moc_dtmfform.d \
./src/gui/.moc/moc_freedesksystray.d \
./src/gui/.moc/moc_getaddressform.d \
./src/gui/.moc/moc_getprofilenameform.d \
./src/gui/.moc/moc_gui.d \
./src/gui/.moc/moc_historyform.d \
./src/gui/.moc/moc_inviteform.d \
./src/gui/.moc/moc_logviewform.d \
./src/gui/.moc/moc_messageform.d \
./src/gui/.moc/moc_mphoneform.d \
./src/gui/.moc/moc_numberconversionform.d \
./src/gui/.moc/moc_redirectform.d \
./src/gui/.moc/moc_selectnicform.d \
./src/gui/.moc/moc_selectprofileform.d \
./src/gui/.moc/moc_selectuserform.d \
./src/gui/.moc/moc_sendfileform.d \
./src/gui/.moc/moc_srvredirectform.d \
./src/gui/.moc/moc_syssettingsform.d \
./src/gui/.moc/moc_termcapform.d \
./src/gui/.moc/moc_textbrowsernoautolink.d \
./src/gui/.moc/moc_transferform.d \
./src/gui/.moc/moc_userprofileform.d \
./src/gui/.moc/moc_wizardform.d \
./src/gui/.moc/moc_yesnodialog.d 


# Each subdirectory must supply rules for building sources it contributes
src/gui/.moc/%.o: ../src/gui/.moc/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


