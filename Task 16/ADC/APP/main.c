#include "../MCAL/ADC/ADC_Interface.h"
#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD_Interface.h"

#include "../MCAL/DIO/DIO_Interface.h"

#include<util/delay.h>
#define F_CPU 16000000UL

void App_voidADCCallBack(u16 Copy_u16ADCValue);
static u16 App_u16DigitalValue;

int main(void){
	DIO_u8SetPinDirection(0, 4, 0);
	DIO_u8SetPortDirection(2, 1);
	DIO_u8SetPortDirection(3, 1);
	LCD_init();
	ADC_void_Init();

	u16 DigitalValue, AnalogValue;
	u32 Res;

	LCD_GoToXY(0, 0);
	LCD_displayString("Volt: ");

	LCD_GoToXY(1, 0);
	LCD_displayString("Res: ");
	while(1){
		/********************** Asynch App   *******************************/
		//ADC_u8_Get_Digital_ValueAsynch(4, &App_voidADCCallBack);
		//AnalogValue = (App_u16DigitalValue * 5000UL) / 1024;
		/*******************************************************************/
		ADC_u8_Get_Digital_ValueSynchNonBlocking(4, &DigitalValue);
		AnalogValue = (DigitalValue * 5000UL) / 1024;
		Res = ((10000*1024UL)/DigitalValue) - 10000;;
		LCD_GoToXY(0, 5);
		LCD_display_32bit(AnalogValue);

		LCD_GoToXY(1, 5);
		LCD_display_32bit(Res);

	}
	return 0;
}

void App_voidADCCallBack(u16 Copy_u16ADCValue){
	App_u16DigitalValue = Copy_u16ADCValue;
}
