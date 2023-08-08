#include "../MCAL/ADC/ADC_Interface.h"
#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"

#include "../MCAL/Global_Interrupt/GI_Interface.h"
#include "../HAL/DC_MOTOR/DC_Motor_Interface.h"
#include "../HAL/Stepper/Stepper_Interface.h"
#include "../MCAL/Timer/Timer_Interface.h"

#include "../MCAL/DIO/DIO_Interface.h"

#include<util/delay.h>
#define F_CPU 16000000UL

void ToggleLed(void);

int main(void){
	DIO_u8SetPinDirection(1, 0, 1);
	EXTI_voidEnable_GIE();
	
	TIMERS_u8TIMER0CTCSetCallBack(&ToggleLed);
	TIMERS_voidTimer0Init();
	while(1);
	return 0;
}

void ToggleLed(void){
	static u8 Local_u8Flag = 0;
	if(Local_u8Flag == 0){
		DIO_u8SetPinValue(1, 0, 1);
		Local_u8Flag = 1;
	}
	
	else{
		DIO_u8SetPinValue(1, 0, 0);
		Local_u8Flag = 0;
	}
}

