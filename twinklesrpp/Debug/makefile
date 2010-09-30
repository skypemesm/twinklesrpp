################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/utils/subdir.mk
-include src/subdir.mk
-include src/threads/subdir.mk
-include src/stun/subdir.mk
-include src/srpp/subdir.mk
-include src/srpp/src/subdir.mk
-include src/sockets/subdir.mk
-include src/sdp/subdir.mk
-include src/presence/subdir.mk
-include src/patterns/subdir.mk
-include src/parser/subdir.mk
-include src/mwi/subdir.mk
-include src/im/subdir.mk
-include src/gui/subdir.mk
-include src/gui/.ui/subdir.mk
-include src/gui/.obj/subdir.mk
-include src/gui/.moc/subdir.mk
-include src/audits/subdir.mk
-include src/audio/subdir.mk
-include src/audio/gsm/subdir.mk
-include src/audio/gsm/src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: twinklesrpp

# Tool invocations
twinklesrpp: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++  -o"twinklesrpp" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) twinklesrpp
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
