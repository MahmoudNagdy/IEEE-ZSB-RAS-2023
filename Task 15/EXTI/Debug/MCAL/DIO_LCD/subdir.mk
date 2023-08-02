################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO_LCD/Dio_Program.c 

OBJS += \
./MCAL/DIO_LCD/Dio_Program.o 

C_DEPS += \
./MCAL/DIO_LCD/Dio_Program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/DIO_LCD/%.o: ../MCAL/DIO_LCD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


