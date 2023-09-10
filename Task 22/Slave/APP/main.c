#include "APP_Includes.h"

/* Slave Code */

int main(void){
	u8 data, keyPressed, i = 0, c = 0, n = 0, tries = 0,motorSelect, dcMotorDirection, stepperAngle;
	SPI_voidInit();
	LCD_init();
	KPD_voidInit();
	DC_Motor_Init(1, 0);
	Stepper_Init();
	
	u8 password[5] = "1234";
	u8 enteredPassword[5];
	
	LCD_GoToXY(0, 0);
	LCD_displayCharacter('E');
	LCD_displayCharacter('n');
	LCD_displayCharacter('t');
	LCD_displayCharacter('e');
	LCD_displayCharacter('r');
	LCD_displayCharacter(' ');
	LCD_displayCharacter('P');
	LCD_displayCharacter('a');
	LCD_displayCharacter('s');
	LCD_displayCharacter('s');
	LCD_displayCharacter('w');
	LCD_displayCharacter('o');
	LCD_displayCharacter('r');
	LCD_displayCharacter('d');
	LCD_GoToXY(1, 0);
	while(1){
		SPI_u8SendResieve(10, &data);
		if(5 == data){

			KPD_u8GetKeyState(&keyPressed);
			if(keyPressed != KPD_UnPressed){
				if((keyPressed >= '0' && (keyPressed <= '9'))){
					LCD_displayCharacter(keyPressed);
				}
				if(i < 4){
					enteredPassword[i] = keyPressed;
					i++;
				}
				if(i == 4){
					
					for(u8 j = 0; j < 5; j++){
						if(enteredPassword[j] == password[j]){
							c++;
						}
						else{
							n++;
						}
					}
					
				}
				
				if((c >= 4) && (n == 0)){
					LCD_ClearScreen();
					LCD_displayString("Welcome");
					_delay_ms(10);
					LCD_ClearScreen();
					LCD_displayCharacter('1');
					LCD_displayCharacter('-');
					LCD_displayCharacter('D');
					LCD_displayCharacter('C');
					LCD_displayCharacter(' ');
					LCD_displayCharacter('M');
					LCD_displayCharacter('o');
					LCD_displayCharacter('t');
					LCD_displayCharacter('o');
					LCD_displayCharacter('r');
					
					LCD_GoToXY(1, 0);
					LCD_displayCharacter('2');
					LCD_displayCharacter('-');
					LCD_displayCharacter('S');
					LCD_displayCharacter('t');
					LCD_displayCharacter('e');
					LCD_displayCharacter('p');
					LCD_displayCharacter('p');
					LCD_displayCharacter('e');
					LCD_displayCharacter('r');
					
					
					while(1){
						KPD_u8GetKeyState(&motorSelect);
						if(motorSelect != KPD_UnPressed){
							if(motorSelect == '1'){
								LCD_ClearScreen();
								LCD_displayCharacter('1');
								LCD_displayCharacter('-');
								LCD_displayCharacter('C');
								LCD_displayCharacter('W');
								
								LCD_GoToXY(1, 0);
								LCD_displayCharacter('2');
								LCD_displayCharacter('-');
								LCD_displayCharacter('C');
								LCD_displayCharacter('C');
								LCD_displayCharacter('W');
								
								while(1){
									KPD_u8GetKeyState(&dcMotorDirection);
									if(dcMotorDirection != KPD_UnPressed){
										if(dcMotorDirection == '1'){
												DC_Motor_Rotate(1, 1);
										}
										else if(dcMotorDirection == '2'){
											DC_Motor_Rotate(1, 0);
										}
									}
								}
							}
							
							else if(motorSelect == '2'){
								LCD_ClearScreen();
								LCD_displayCharacter('1');
								LCD_displayCharacter('-');
								LCD_displayCharacter('9');
								LCD_displayCharacter('0');
								
								LCD_GoToXY(0, 8);
								LCD_displayCharacter('2');
								LCD_displayCharacter('-');
								LCD_displayCharacter('-');
								LCD_displayCharacter('9');
								LCD_displayCharacter('0');
								
								LCD_GoToXY(1, 0);
								LCD_displayCharacter('3');
								LCD_displayCharacter('-');
								LCD_displayCharacter('1');
								LCD_displayCharacter('8');
								LCD_displayCharacter('0');
								
								LCD_GoToXY(1, 8);
								LCD_displayCharacter('4');
								LCD_displayCharacter('-');
								LCD_displayCharacter('-');
								LCD_displayCharacter('1');
								LCD_displayCharacter('8');
								LCD_displayCharacter('0');
								
								while(1){
									KPD_u8GetKeyState(&stepperAngle);
									if(stepperAngle != KPD_UnPressed){
										if(stepperAngle == '1'){
											SelectStepAngle(90, 0);
										}
										else if(stepperAngle == '2'){
											SelectStepAngle(90, 1);
										}
										else if(stepperAngle == '3'){
											SelectStepAngle(180, 0);
										}
										else if(stepperAngle == '4'){
											SelectStepAngle(180, 1);
										}
									}
								}
								
							}
						}
					}
				}
				
				else if(n > 0){
					u8 flag = 0;
					if(!flag){
						LCD_ClearScreen();
						LCD_displayCharacter('W');
						LCD_displayCharacter('r');
						LCD_displayCharacter('o');
						LCD_displayCharacter('n');
						LCD_displayCharacter('g');
						flag = 1;
					}
				}
				
			}
		}
	}
	return 0;
}
