################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/audio/audio_codecs.o \
../src/audio/audio_decoder.o \
../src/audio/audio_device.o \
../src/audio/audio_encoder.o \
../src/audio/audio_rx.o \
../src/audio/audio_session.o \
../src/audio/audio_tx.o \
../src/audio/dtmf_player.o \
../src/audio/freq_gen.o \
../src/audio/g711.o \
../src/audio/g721.o \
../src/audio/g723_16.o \
../src/audio/g723_24.o \
../src/audio/g723_40.o \
../src/audio/g72x.o \
../src/audio/media_buffer.o \
../src/audio/rtp_telephone_event.o \
../src/audio/tone_gen.o \
../src/audio/twinkle_rtp_session.o \
../src/audio/twinkle_zrtp_ui.o 

CPP_SRCS += \
../src/audio/audio_codecs.cpp \
../src/audio/audio_decoder.cpp \
../src/audio/audio_device.cpp \
../src/audio/audio_encoder.cpp \
../src/audio/audio_rx.cpp \
../src/audio/audio_session.cpp \
../src/audio/audio_tx.cpp \
../src/audio/dtmf_player.cpp \
../src/audio/freq_gen.cpp \
../src/audio/g711.cpp \
../src/audio/g721.cpp \
../src/audio/g723_16.cpp \
../src/audio/g723_24.cpp \
../src/audio/g723_40.cpp \
../src/audio/g72x.cpp \
../src/audio/media_buffer.cpp \
../src/audio/rtp_telephone_event.cpp \
../src/audio/tone_gen.cpp \
../src/audio/twinkle_rtp_session.cpp \
../src/audio/twinkle_zrtp_ui.cpp 

OBJS += \
./src/audio/audio_codecs.o \
./src/audio/audio_decoder.o \
./src/audio/audio_device.o \
./src/audio/audio_encoder.o \
./src/audio/audio_rx.o \
./src/audio/audio_session.o \
./src/audio/audio_tx.o \
./src/audio/dtmf_player.o \
./src/audio/freq_gen.o \
./src/audio/g711.o \
./src/audio/g721.o \
./src/audio/g723_16.o \
./src/audio/g723_24.o \
./src/audio/g723_40.o \
./src/audio/g72x.o \
./src/audio/media_buffer.o \
./src/audio/rtp_telephone_event.o \
./src/audio/tone_gen.o \
./src/audio/twinkle_rtp_session.o \
./src/audio/twinkle_zrtp_ui.o 

CPP_DEPS += \
./src/audio/audio_codecs.d \
./src/audio/audio_decoder.d \
./src/audio/audio_device.d \
./src/audio/audio_encoder.d \
./src/audio/audio_rx.d \
./src/audio/audio_session.d \
./src/audio/audio_tx.d \
./src/audio/dtmf_player.d \
./src/audio/freq_gen.d \
./src/audio/g711.d \
./src/audio/g721.d \
./src/audio/g723_16.d \
./src/audio/g723_24.d \
./src/audio/g723_40.d \
./src/audio/g72x.d \
./src/audio/media_buffer.d \
./src/audio/rtp_telephone_event.d \
./src/audio/tone_gen.d \
./src/audio/twinkle_rtp_session.d \
./src/audio/twinkle_zrtp_ui.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio/%.o: ../src/audio/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


