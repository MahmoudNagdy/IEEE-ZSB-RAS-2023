#include "LCD_Interface.h"
#include "keypad.h"
#include <util/delay.h>



/*

#define Password_Length	5


u8 pressed[9];


int main(void)
{
	u8 count;
	u8 c = 0;
	LCD_setPortDirection(0, 0);
	LCD_setPortDirection(1, 0);
	LCD_init();

	// LCD_GoToXY(0, 3);
	LCD_String_xy(0, 0, "Enter Password", &count);

	while (1)
	{


		if (LCD_getPinValue(0, 0))
		{
			pressed[0] = '1';
			LCD_GoToXY(1, 0);
			LCD_displayCharacter('1');
		}

		else if (LCD_getPinValue(0, 5))
		{
			pressed[1] = '2';
			LCD_GoToXY(1, 1);
			LCD_displayCharacter('2');
		}

		else if (LCD_getPinValue(0, 6))
		{
			pressed[2] = '3';
			LCD_GoToXY(1, 2);
			LCD_displayCharacter('3');
		}

		else if (LCD_getPinValue(0, 7))
		{
			pressed[3] = '4';
			LCD_GoToXY(1, 3);
			LCD_displayCharacter('4');
		}

		else if (LCD_getPinValue(1, 0))
		{
			pressed[4] = '5';
			LCD_GoToXY(1, 4);
			LCD_displayCharacter('5');
		}

		else if (LCD_getPinValue(1, 2))
		{
			pressed[5] = '6';
			LCD_GoToXY(1, 5);
			LCD_displayCharacter('6');
		}

		else if (LCD_getPinValue(1, 4))
		{
			pressed[6] = '7';
			LCD_GoToXY(1, 6);
			LCD_displayCharacter('7');
		}

		else if (LCD_getPinValue(1, 5))
		{
			pressed[7] = '8';
			LCD_GoToXY(1, 7);
			LCD_displayCharacter('8');
		}

		else if (LCD_getPinValue(1, 7))
		{
			pressed[8] = '9';
			LCD_GoToXY(1, 8);
			LCD_displayCharacter('9');
		}

		else if (LCD_getPinValue(0, 2))
				{
					pressed[9] = '0';
					LCD_GoToXY(1, 9);
					LCD_displayCharacter('0');
				}


		if (LCD_getPinValue(1, 6))
		{

			for (int i = 0; i < Password_Length; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (Password[i] == pressed[j])
					{
						c++;
					}
				}
			}

			if (c == Password_Length)
			{
				LCD_ClearScreen();
				LCD_displayString("Correct Password");
			}
			else
			{
				LCD_ClearScreen();
				LCD_displayString("Error");
			}

		}
	}
}*/




int main(void){
	u8 count;
	u8 c = 0;
	LCD_setPortDirection(0, 0);
	LCD_setPortDirection(1, 1);
	LCD_setPortDirection(2, 1);
	LCD_setPortDirection(3, 1);
	LCD_init();

	u8 pressed_Keys[5];
	u8 password[5] = "51120";

	LCD_String_xy(0, 0, "Enter Password", &count);
	LCD_GoToXY(1, 0);


	while(1){
		u8 key_Pressed = Keypad_GetPressedKey();

		if(key_Pressed == 1){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '1';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 2){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '2';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 3){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '3';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 4){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '4';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 5){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '5';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 6){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '6';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 7){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '7';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 8){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '8';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 9){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '9';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == '*'){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '*';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == 0){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '0';
			c++;
			_delay_ms(35);
		}

		if(key_Pressed == '#'){
			LCD_displayCharacter('*');
			pressed_Keys[c] = '#';
			c++;
			_delay_ms(35);
		}

		if(c == 5){
			for(int i = 0; i < 5; i++){
				if(pressed_Keys[i] == password[i]){
					LCD_ClearScreen();
					LCD_displayString("Correct Password");
					_delay_ms(35);
					LCD_ClearScreen();
					LCD_displayString("Opened Safely");
					break;
				}
				else{
					LCD_ClearScreen();
					LCD_displayString("Error");
					break;
				}
			}

		}

	}


	return 0;
}
