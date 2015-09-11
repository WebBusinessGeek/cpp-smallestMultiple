################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../test/gtest_main.cc 

CPP_SRCS += \
../test/test_Algorithm.cpp 

CC_DEPS += \
./test/gtest_main.d 

OBJS += \
./test/gtest_main.o \
./test/test_Algorithm.o 

CPP_DEPS += \
./test/test_Algorithm.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/MacBookEr/Desktop/techFit/c++/smallestMultiple/smallestMultiple/gtest_src" -I"/Users/MacBookEr/Desktop/techFit/c++/smallestMultiple/smallestMultiple/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/MacBookEr/Desktop/techFit/c++/smallestMultiple/smallestMultiple/gtest_src" -I"/Users/MacBookEr/Desktop/techFit/c++/smallestMultiple/smallestMultiple/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


