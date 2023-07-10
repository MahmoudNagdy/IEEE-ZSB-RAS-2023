#include "LCD_Interface.h"
#include "keypad.h"
#include <util/delay.h>


#define Password_Length	6

int main(void){
	u8 count;
	u8 c = 0;
	LCD_setPortDirection(0, 0);
	LCD_setPortDirection(1, 1);
	LCD_setPortDirection(2, 1);
	LCD_setPortDirection(3, 1);
	LCD_init();

	u8 pressed_Keys[10];
	u8 password[10] = "#2020#";

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

		if(c == Password_Length){
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
