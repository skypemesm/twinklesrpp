################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/abstract_dialog.o \
../src/address_book.o \
../src/auth.o \
../src/call_history.o \
../src/call_script.o \
../src/client_request.o \
../src/cmd_socket.o \
../src/dialog.o \
../src/diamondcard.o \
../src/epa.o \
../src/events.o \
../src/id_object.o \
../src/line.o \
../src/listener.o \
../src/log.o \
../src/main.o \
../src/phone.o \
../src/phone_user.o \
../src/prohibit_thread.o \
../src/redirect.o \
../src/sender.o \
../src/service.o \
../src/session.o \
../src/sub_refer.o \
../src/subscription.o \
../src/subscription_dialog.o \
../src/sys_settings.o \
../src/timekeeper.o \
../src/transaction.o \
../src/transaction_layer.o \
../src/transaction_mgr.o \
../src/user.o \
../src/userintf.o \
../src/util.o 

CPP_SRCS += \
../src/abstract_dialog.cpp \
../src/address_book.cpp \
../src/auth.cpp \
../src/call_history.cpp \
../src/call_script.cpp \
../src/client_request.cpp \
../src/cmd_socket.cpp \
../src/dialog.cpp \
../src/diamondcard.cpp \
../src/epa.cpp \
../src/events.cpp \
../src/id_object.cpp \
../src/line.cpp \
../src/listener.cpp \
../src/log.cpp \
../src/main.cpp \
../src/phone.cpp \
../src/phone_user.cpp \
../src/prohibit_thread.cpp \
../src/redirect.cpp \
../src/sender.cpp \
../src/service.cpp \
../src/session.cpp \
../src/sub_refer.cpp \
../src/subscription.cpp \
../src/subscription_dialog.cpp \
../src/sys_settings.cpp \
../src/timekeeper.cpp \
../src/transaction.cpp \
../src/transaction_layer.cpp \
../src/transaction_mgr.cpp \
../src/user.cpp \
../src/userintf.cpp \
../src/util.cpp 

OBJS += \
./src/abstract_dialog.o \
./src/address_book.o \
./src/auth.o \
./src/call_history.o \
./src/call_script.o \
./src/client_request.o \
./src/cmd_socket.o \
./src/dialog.o \
./src/diamondcard.o \
./src/epa.o \
./src/events.o \
./src/id_object.o \
./src/line.o \
./src/listener.o \
./src/log.o \
./src/main.o \
./src/phone.o \
./src/phone_user.o \
./src/prohibit_thread.o \
./src/redirect.o \
./src/sender.o \
./src/service.o \
./src/session.o \
./src/sub_refer.o \
./src/subscription.o \
./src/subscription_dialog.o \
./src/sys_settings.o \
./src/timekeeper.o \
./src/transaction.o \
./src/transaction_layer.o \
./src/transaction_mgr.o \
./src/user.o \
./src/userintf.o \
./src/util.o 

CPP_DEPS += \
./src/abstract_dialog.d \
./src/address_book.d \
./src/auth.d \
./src/call_history.d \
./src/call_script.d \
./src/client_request.d \
./src/cmd_socket.d \
./src/dialog.d \
./src/diamondcard.d \
./src/epa.d \
./src/events.d \
./src/id_object.d \
./src/line.d \
./src/listener.d \
./src/log.d \
./src/main.d \
./src/phone.d \
./src/phone_user.d \
./src/prohibit_thread.d \
./src/redirect.d \
./src/sender.d \
./src/service.d \
./src/session.d \
./src/sub_refer.d \
./src/subscription.d \
./src/subscription_dialog.d \
./src/sys_settings.d \
./src/timekeeper.d \
./src/transaction.d \
./src/transaction_layer.d \
./src/transaction_mgr.d \
./src/user.d \
./src/userintf.d \
./src/util.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


