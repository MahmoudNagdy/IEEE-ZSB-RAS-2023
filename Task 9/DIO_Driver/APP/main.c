#include "../HAL/LCD/lcd.h"
#include <util/delay.h>

int main(void)
{
	LCD_init();
	LCD_displayCharacter('M');
	LCD_displayCharacter('a');
	LCD_displayCharacter('h');
	LCD_displayCharacter('m');
	LCD_displayCharacter('o');
	LCD_displayCharacter('u');
	LCD_displayCharacter('d');
	LCD_displayCharacter(' ');
	LCD_displayCharacter('N');
	LCD_displayCharacter('a');
	LCD_displayCharacter('g');
	LCD_displayCharacter('d');
	LCD_displayCharacter('y');
	while (1)
	{
	}
}
