################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/parser/challenge.o \
../src/parser/coding.o \
../src/parser/credentials.o \
../src/parser/definitions.o \
../src/parser/hdr_accept.o \
../src/parser/hdr_accept_encoding.o \
../src/parser/hdr_accept_language.o \
../src/parser/hdr_alert_info.o \
../src/parser/hdr_allow.o \
../src/parser/hdr_allow_events.o \
../src/parser/hdr_auth_info.o \
../src/parser/hdr_authorization.o \
../src/parser/hdr_call_id.o \
../src/parser/hdr_call_info.o \
../src/parser/hdr_contact.o \
../src/parser/hdr_content_disp.o \
../src/parser/hdr_content_encoding.o \
../src/parser/hdr_content_language.o \
../src/parser/hdr_content_length.o \
../src/parser/hdr_content_type.o \
../src/parser/hdr_cseq.o \
../src/parser/hdr_date.o \
../src/parser/hdr_error_info.o \
../src/parser/hdr_event.o \
../src/parser/hdr_expires.o \
../src/parser/hdr_from.o \
../src/parser/hdr_in_reply_to.o \
../src/parser/hdr_max_forwards.o \
../src/parser/hdr_mime_version.o \
../src/parser/hdr_min_expires.o \
../src/parser/hdr_organization.o \
../src/parser/hdr_p_asserted_identity.o \
../src/parser/hdr_p_preferred_identity.o \
../src/parser/hdr_priority.o \
../src/parser/hdr_privacy.o \
../src/parser/hdr_proxy_authenticate.o \
../src/parser/hdr_proxy_authorization.o \
../src/parser/hdr_proxy_require.o \
../src/parser/hdr_rack.o \
../src/parser/hdr_record_route.o \
../src/parser/hdr_refer_sub.o \
../src/parser/hdr_refer_to.o \
../src/parser/hdr_referred_by.o \
../src/parser/hdr_replaces.o \
../src/parser/hdr_reply_to.o \
../src/parser/hdr_request_disposition.o \
../src/parser/hdr_require.o \
../src/parser/hdr_retry_after.o \
../src/parser/hdr_route.o \
../src/parser/hdr_rseq.o \
../src/parser/hdr_server.o \
../src/parser/hdr_service_route.o \
../src/parser/hdr_sip_etag.o \
../src/parser/hdr_sip_if_match.o \
../src/parser/hdr_subject.o \
../src/parser/hdr_subscription_state.o \
../src/parser/hdr_supported.o \
../src/parser/hdr_timestamp.o \
../src/parser/hdr_to.o \
../src/parser/hdr_unsupported.o \
../src/parser/hdr_user_agent.o \
../src/parser/hdr_via.o \
../src/parser/hdr_warning.o \
../src/parser/hdr_www_authenticate.o \
../src/parser/header.o \
../src/parser/identity.o \
../src/parser/media_type.o \
../src/parser/milenage.o \
../src/parser/parameter.o \
../src/parser/parse_ctrl.o \
../src/parser/parser.o \
../src/parser/request.o \
../src/parser/response.o \
../src/parser/rijndael.o \
../src/parser/route.o \
../src/parser/scanner.o \
../src/parser/sip_body.o \
../src/parser/sip_message.o 

CPP_SRCS += \
../src/parser/challenge.cpp \
../src/parser/coding.cpp \
../src/parser/credentials.cpp \
../src/parser/definitions.cpp \
../src/parser/hdr_accept.cpp \
../src/parser/hdr_accept_encoding.cpp \
../src/parser/hdr_accept_language.cpp \
../src/parser/hdr_alert_info.cpp \
../src/parser/hdr_allow.cpp \
../src/parser/hdr_allow_events.cpp \
../src/parser/hdr_auth_info.cpp \
../src/parser/hdr_authorization.cpp \
../src/parser/hdr_call_id.cpp \
../src/parser/hdr_call_info.cpp \
../src/parser/hdr_contact.cpp \
../src/parser/hdr_content_disp.cpp \
../src/parser/hdr_content_encoding.cpp \
../src/parser/hdr_content_language.cpp \
../src/parser/hdr_content_length.cpp \
../src/parser/hdr_content_type.cpp \
../src/parser/hdr_cseq.cpp \
../src/parser/hdr_date.cpp \
../src/parser/hdr_error_info.cpp \
../src/parser/hdr_event.cpp \
../src/parser/hdr_expires.cpp \
../src/parser/hdr_from.cpp \
../src/parser/hdr_in_reply_to.cpp \
../src/parser/hdr_max_forwards.cpp \
../src/parser/hdr_mime_version.cpp \
../src/parser/hdr_min_expires.cpp \
../src/parser/hdr_organization.cpp \
../src/parser/hdr_p_asserted_identity.cpp \
../src/parser/hdr_p_preferred_identity.cpp \
../src/parser/hdr_priority.cpp \
../src/parser/hdr_privacy.cpp \
../src/parser/hdr_proxy_authenticate.cpp \
../src/parser/hdr_proxy_authorization.cpp \
../src/parser/hdr_proxy_require.cpp \
../src/parser/hdr_rack.cpp \
../src/parser/hdr_record_route.cpp \
../src/parser/hdr_refer_sub.cpp \
../src/parser/hdr_refer_to.cpp \
../src/parser/hdr_referred_by.cpp \
../src/parser/hdr_replaces.cpp \
../src/parser/hdr_reply_to.cpp \
../src/parser/hdr_request_disposition.cpp \
../src/parser/hdr_require.cpp \
../src/parser/hdr_retry_after.cpp \
../src/parser/hdr_route.cpp \
../src/parser/hdr_rseq.cpp \
../src/parser/hdr_server.cpp \
../src/parser/hdr_service_route.cpp \
../src/parser/hdr_sip_etag.cpp \
../src/parser/hdr_sip_if_match.cpp \
../src/parser/hdr_subject.cpp \
../src/parser/hdr_subscription_state.cpp \
../src/parser/hdr_supported.cpp \
../src/parser/hdr_timestamp.cpp \
../src/parser/hdr_to.cpp \
../src/parser/hdr_unsupported.cpp \
../src/parser/hdr_user_agent.cpp \
../src/parser/hdr_via.cpp \
../src/parser/hdr_warning.cpp \
../src/parser/hdr_www_authenticate.cpp \
../src/parser/header.cpp \
../src/parser/identity.cpp \
../src/parser/media_type.cpp \
../src/parser/milenage.cpp \
../src/parser/parameter.cpp \
../src/parser/parse_ctrl.cpp \
../src/parser/request.cpp \
../src/parser/response.cpp \
../src/parser/rijndael.cpp \
../src/parser/route.cpp \
../src/parser/sip_body.cpp \
../src/parser/sip_message.cpp 

CXX_SRCS += \
../src/parser/parser.cxx \
../src/parser/scanner.cxx 

OBJS += \
./src/parser/challenge.o \
./src/parser/coding.o \
./src/parser/credentials.o \
./src/parser/definitions.o \
./src/parser/hdr_accept.o \
./src/parser/hdr_accept_encoding.o \
./src/parser/hdr_accept_language.o \
./src/parser/hdr_alert_info.o \
./src/parser/hdr_allow.o \
./src/parser/hdr_allow_events.o \
./src/parser/hdr_auth_info.o \
./src/parser/hdr_authorization.o \
./src/parser/hdr_call_id.o \
./src/parser/hdr_call_info.o \
./src/parser/hdr_contact.o \
./src/parser/hdr_content_disp.o \
./src/parser/hdr_content_encoding.o \
./src/parser/hdr_content_language.o \
./src/parser/hdr_content_length.o \
./src/parser/hdr_content_type.o \
./src/parser/hdr_cseq.o \
./src/parser/hdr_date.o \
./src/parser/hdr_error_info.o \
./src/parser/hdr_event.o \
./src/parser/hdr_expires.o \
./src/parser/hdr_from.o \
./src/parser/hdr_in_reply_to.o \
./src/parser/hdr_max_forwards.o \
./src/parser/hdr_mime_version.o \
./src/parser/hdr_min_expires.o \
./src/parser/hdr_organization.o \
./src/parser/hdr_p_asserted_identity.o \
./src/parser/hdr_p_preferred_identity.o \
./src/parser/hdr_priority.o \
./src/parser/hdr_privacy.o \
./src/parser/hdr_proxy_authenticate.o \
./src/parser/hdr_proxy_authorization.o \
./src/parser/hdr_proxy_require.o \
./src/parser/hdr_rack.o \
./src/parser/hdr_record_route.o \
./src/parser/hdr_refer_sub.o \
./src/parser/hdr_refer_to.o \
./src/parser/hdr_referred_by.o \
./src/parser/hdr_replaces.o \
./src/parser/hdr_reply_to.o \
./src/parser/hdr_request_disposition.o \
./src/parser/hdr_require.o \
./src/parser/hdr_retry_after.o \
./src/parser/hdr_route.o \
./src/parser/hdr_rseq.o \
./src/parser/hdr_server.o \
./src/parser/hdr_service_route.o \
./src/parser/hdr_sip_etag.o \
./src/parser/hdr_sip_if_match.o \
./src/parser/hdr_subject.o \
./src/parser/hdr_subscription_state.o \
./src/parser/hdr_supported.o \
./src/parser/hdr_timestamp.o \
./src/parser/hdr_to.o \
./src/parser/hdr_unsupported.o \
./src/parser/hdr_user_agent.o \
./src/parser/hdr_via.o \
./src/parser/hdr_warning.o \
./src/parser/hdr_www_authenticate.o \
./src/parser/header.o \
./src/parser/identity.o \
./src/parser/media_type.o \
./src/parser/milenage.o \
./src/parser/parameter.o \
./src/parser/parse_ctrl.o \
./src/parser/parser.o \
./src/parser/request.o \
./src/parser/response.o \
./src/parser/rijndael.o \
./src/parser/route.o \
./src/parser/scanner.o \
./src/parser/sip_body.o \
./src/parser/sip_message.o 

CPP_DEPS += \
./src/parser/challenge.d \
./src/parser/coding.d \
./src/parser/credentials.d \
./src/parser/definitions.d \
./src/parser/hdr_accept.d \
./src/parser/hdr_accept_encoding.d \
./src/parser/hdr_accept_language.d \
./src/parser/hdr_alert_info.d \
./src/parser/hdr_allow.d \
./src/parser/hdr_allow_events.d \
./src/parser/hdr_auth_info.d \
./src/parser/hdr_authorization.d \
./src/parser/hdr_call_id.d \
./src/parser/hdr_call_info.d \
./src/parser/hdr_contact.d \
./src/parser/hdr_content_disp.d \
./src/parser/hdr_content_encoding.d \
./src/parser/hdr_content_language.d \
./src/parser/hdr_content_length.d \
./src/parser/hdr_content_type.d \
./src/parser/hdr_cseq.d \
./src/parser/hdr_date.d \
./src/parser/hdr_error_info.d \
./src/parser/hdr_event.d \
./src/parser/hdr_expires.d \
./src/parser/hdr_from.d \
./src/parser/hdr_in_reply_to.d \
./src/parser/hdr_max_forwards.d \
./src/parser/hdr_mime_version.d \
./src/parser/hdr_min_expires.d \
./src/parser/hdr_organization.d \
./src/parser/hdr_p_asserted_identity.d \
./src/parser/hdr_p_preferred_identity.d \
./src/parser/hdr_priority.d \
./src/parser/hdr_privacy.d \
./src/parser/hdr_proxy_authenticate.d \
./src/parser/hdr_proxy_authorization.d \
./src/parser/hdr_proxy_require.d \
./src/parser/hdr_rack.d \
./src/parser/hdr_record_route.d \
./src/parser/hdr_refer_sub.d \
./src/parser/hdr_refer_to.d \
./src/parser/hdr_referred_by.d \
./src/parser/hdr_replaces.d \
./src/parser/hdr_reply_to.d \
./src/parser/hdr_request_disposition.d \
./src/parser/hdr_require.d \
./src/parser/hdr_retry_after.d \
./src/parser/hdr_route.d \
./src/parser/hdr_rseq.d \
./src/parser/hdr_server.d \
./src/parser/hdr_service_route.d \
./src/parser/hdr_sip_etag.d \
./src/parser/hdr_sip_if_match.d \
./src/parser/hdr_subject.d \
./src/parser/hdr_subscription_state.d \
./src/parser/hdr_supported.d \
./src/parser/hdr_timestamp.d \
./src/parser/hdr_to.d \
./src/parser/hdr_unsupported.d \
./src/parser/hdr_user_agent.d \
./src/parser/hdr_via.d \
./src/parser/hdr_warning.d \
./src/parser/hdr_www_authenticate.d \
./src/parser/header.d \
./src/parser/identity.d \
./src/parser/media_type.d \
./src/parser/milenage.d \
./src/parser/parameter.d \
./src/parser/parse_ctrl.d \
./src/parser/request.d \
./src/parser/response.d \
./src/parser/rijndael.d \
./src/parser/route.d \
./src/parser/sip_body.d \
./src/parser/sip_message.d 

CXX_DEPS += \
./src/parser/parser.d \
./src/parser/scanner.d 


# Each subdirectory must supply rules for building sources it contributes
src/parser/%.o: ../src/parser/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/parser/%.o: ../src/parser/%.cxx
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


