#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <util/delay.h>


u8 pattern1[] = {0x0e, 0x0e, 0x04, 0x04, 0x1f, 0x04, 0x0a, 0x0a};
u8 pattern2[] = {0x04, 0x1F, 0x11, 0x11, 0x1F, 0x1F, 0x1F, 0x1F};
u8 pattern3[] = {0x04, 0x0E, 0x0E, 0x0E, 0x1F, 0x00, 0x04, 0x00};
u8 pattern4[] = {0x01, 0x03, 0x05, 0x09, 0x09, 0x0B, 0x1B, 0x18};
u8 pattern5[] = {0x00, 0x0A, 0x15, 0x11, 0x0A, 0x04, 0x00, 0x00};
u8 pattern6[] = {0x00, 0x00, 0x0A, 0x00, 0x04, 0x11, 0x0E, 0x00};
u8 pattern7[] = {0x0A, 0x0A, 0x1F, 0x11, 0x11, 0x0E, 0x04, 0x04};


int main(void){
	u8 count = 0;
	DIO_u8SetPortDirection(0, 0);
	DIO_u8SetPortDirection(1, 0);
	DIO_u8SetPortDirection(2, 1);
	DIO_u8SetPortDirection(3, 1);
	LCD_init();
	

	//LCD_GoToXY(0, 3);
	LCD_String_xy (0, 0, "Embedded System", &count);

	while (1)
	{
		if(DIO_getPinValueWithoutPointer(0, 0)){
			LCD_WriteSpecialChar(0, pattern1, 1, count + 0, 0b01000000);
		}

		else if(DIO_getPinValueWithoutPointer(0, 5)){
			LCD_WriteSpecialChar(2, pattern2, 1, count + 2, 0b01010000);
		}

		else if(DIO_getPinValueWithoutPointer(0, 6)){
			LCD_WriteSpecialChar(3, pattern3, 1, count + 4, 0b01011000);
		}

		else if(DIO_getPinValueWithoutPointer(0, 7)){
			LCD_WriteSpecialChar(4, pattern4, 1, count + 6, 0b01100000);
		}

		else if(DIO_getPinValueWithoutPointer(1, 0)){
			LCD_WriteSpecialChar(5, pattern5, 1, count + 8, 0b01101000);
		}

		else if(DIO_getPinValueWithoutPointer(1, 2)){
			LCD_WriteSpecialChar(6, pattern6, 1, count + 10, 0b01110000);
		}

		else if(DIO_getPinValueWithoutPointer(1, 4)){
			LCD_WriteSpecialChar(7, pattern7, 1, count + 12, 0b01111000);
		}
	}

	return 0;
}
