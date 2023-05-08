#include "../HAL/LCD/lcd.h"
#include <util/delay.h>

int main(void)
{

	LCD_setPortDirection(0, 0);
	LCD_setPortDirection(1, 0);
	LCD_init();

	LCD_GoToXY(0, 3);
	LCD_displayString("LCD Sticker");

	while (1)
	{
		if(LCD_getPinValue(0, 0)){
			LCD_sendCommand(0b01000000);
			LCD_displayCharacter(0x0e);
			LCD_displayCharacter(0x0e);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x1f);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x0a);
			LCD_displayCharacter(0x0a);

			LCD_GoToXY(1, 2);
			LCD_displayCharacter(0);
		}

		else if(LCD_getPinValue(0, 5)){
			LCD_sendCommand(0b01010000);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x1F);
			LCD_displayCharacter(0x11);
			LCD_displayCharacter(0x11);
			LCD_displayCharacter(0x1F);
			LCD_displayCharacter(0x1F);
			LCD_displayCharacter(0x1F);
			LCD_displayCharacter(0x1F);

			LCD_GoToXY(1, 4);
			LCD_displayCharacter(2);

		}

		else if(LCD_getPinValue(0, 6)){
			LCD_sendCommand(0b01011000);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x0E);
			LCD_displayCharacter(0x0E);
			LCD_displayCharacter(0x0E);
			LCD_displayCharacter(0x1F);
			LCD_displayCharacter(0x00);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x00 );

			LCD_GoToXY(1, 6);
			LCD_displayCharacter(3);

		}

		else if(LCD_getPinValue(0, 7)){
			LCD_sendCommand(0b01100000);
			LCD_displayCharacter(0x01);
			LCD_displayCharacter(0x03);
			LCD_displayCharacter(0x05);
			LCD_displayCharacter(0x09);
			LCD_displayCharacter(0x09);
			LCD_displayCharacter(0x0B);
			LCD_displayCharacter(0x1B);
			LCD_displayCharacter(0x18);

			LCD_GoToXY(1, 8);
			LCD_displayCharacter(4);

		}

		else if(LCD_getPinValue(1, 0)){
			LCD_sendCommand(0b01101000);
			LCD_displayCharacter(0x00);
			LCD_displayCharacter(0x0A);
			LCD_displayCharacter(0x15);
			LCD_displayCharacter(0x11);
			LCD_displayCharacter(0x0A);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x00);
			LCD_displayCharacter(0x00);

			LCD_GoToXY(1, 10);
			LCD_displayCharacter(5);

		}

		else if(LCD_getPinValue(1, 2)){
			LCD_sendCommand(0b01110000);
			LCD_displayCharacter(0x00);
			LCD_displayCharacter(0x00);
			LCD_displayCharacter(0x0A);
			LCD_displayCharacter(0x00);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x11);
			LCD_displayCharacter(0x0E);
			LCD_displayCharacter(0x00);

			LCD_GoToXY(1, 12);
			LCD_displayCharacter(6);

		}

		else if(LCD_getPinValue(1, 4)){
			LCD_sendCommand(0b01111000);
			LCD_displayCharacter(0x0A);
			LCD_displayCharacter(0x0A);
			LCD_displayCharacter(0x1F);
			LCD_displayCharacter(0x11);
			LCD_displayCharacter(0x11);
			LCD_displayCharacter(0x0E);
			LCD_displayCharacter(0x04);
			LCD_displayCharacter(0x04);

			LCD_GoToXY(1, 14);
			LCD_displayCharacter(7);

		}
	}

	while(1){

	}
}
