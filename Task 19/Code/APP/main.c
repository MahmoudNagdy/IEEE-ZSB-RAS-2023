#include "APP_Includes.h"


#define Password_Length	4
u8 Local_u8_Flag = 0;

void First_Screen(){
	_delay_ms(35);
	LCD_ClearScreen();
	LCD_displayString("1-DC Motor");
	LCD_GoToXY(1, 0);
	LCD_displayString("2-Stepper");
	LCD_GoToXY(1, 9);
	LCD_displayString("3-Servo");
}

void Second_Screen(){
	LCD_ClearScreen();
	LCD_displayString("1-CW Motor");
	LCD_GoToXY(1, 0);
	LCD_displayString("2-CCW Motor");
	LCD_GoToXY(0, 10);
	LCD_displayString("3-back");
}

void StepperAngles_Screen(){
	LCD_ClearScreen();

	LCD_displayString("1-90");

	LCD_GoToXY(1, 0);
	LCD_displayString("2-180");
}

void StepperDirection_Screen(){
	LCD_ClearScreen();

	LCD_displayString("1-CW");

	LCD_GoToXY(1, 0);
	LCD_displayString("2-CCW");
}

u8 count;
u8 c = 0;
u8 pressed_Keys[10];
u8 password[10] = "2020";

u16 digitalValue, motorValue;


void EXTI_System(void);

int main(){
	DIO_voidInit();
	DC_Motor_Init(1, 2);
	Stepper_Init();
	LCD_init();
	ADC_void_Init();
	Servo_Init();

	EXTI_voidEnable(1, 2);
	EXTI_voidEnable_GIE();

	setCallBack(&EXTI_System, 1);

	while(1);
	return 0;
}


void EXTI_System(void){
	u8 key_Pressed;

	if(Local_u8_Flag == 0){
		Local_u8_Flag = 1;
		LCD_String_xy(0, 0, "Enter Password", &count);
		LCD_GoToXY(1, 0);

		while(1){
			key_Pressed = Keypad_GetPressedKey();

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

						// Dc Motor

						LCD_displayString("Welcome to Motor");
						LCD_GoToXY(1, 0);
						LCD_displayString("DachBoard");
						First_Screen();

						while(1){
							u8 key_Motor = Keypad_GetPressedKey();
							if(key_Motor == 1){
								Second_Screen();
								_delay_ms(35);

								while(1){
									u8 Motor_Rotate = Keypad_GetPressedKey();
									if(Motor_Rotate == 1){
										DC_Motor_Stop(0);
										_delay_ms(20);
										DC_Motor_Rotate(0, 0);
									}

									else if(Motor_Rotate == 2){
										DC_Motor_Stop(0);
										_delay_ms(20);
										DC_Motor_Rotate(0, 1);
									}

									else if(Motor_Rotate == 3){
										DC_Motor_Stop(0);
										First_Screen();

										while(1){
											u8 Motor_Back = Keypad_GetPressedKey();
											if(Motor_Back == 1){
												Second_Screen();
												_delay_ms(35);

												while(1){
													u8 new_System = Keypad_GetPressedKey;

													if(new_System == 1){
														DC_Motor_Rotate(0, 0);
													}

													else if(new_System == 2){
														DC_Motor_Stop(0);
														_delay_ms(35);
														DC_Motor_Rotate(0, 1);
													}

													else if(new_System == 3){
														DC_Motor_Stop(0);
														First_Screen();
													}
												}

											}

											else if(Motor_Back == 2){
												DC_Motor_Stop(0);
												LCD_ClearScreen();
											}
										}
									}
								}
							}

							else if(key_Motor == 2){
								StepperAngles_Screen();
								while(1){
									u8 Stepper_angle = Keypad_GetPressedKey();
									if(Stepper_angle == 1){
										StepperDirection_Screen();
										while(1){
											u8 Stepper_Diection90 = Keypad_GetPressedKey();
											if(Stepper_Diection90 == 1){
												SelectStepAngle(90, 0);
											}

											else if(Stepper_Diection90 == 2){
												SelectStepAngle(90, 1);
											}
										}
									}

									else if(Stepper_angle == 2){
										StepperDirection_Screen();
										while(1){
											u8 Stepper_Diection180 = Keypad_GetPressedKey();
											if(Stepper_Diection180 == 1){
												SelectStepAngle(180, 0);
											}

											else if(Stepper_Diection180 == 2){
												SelectStepAngle(180, 1);
											}
										}
									}
								}
							}

							else if(key_Motor == 3){
								LCD_ClearScreen();
								LCD_displayString("Servo Is Running");
								while(1){
									ADC_u8_Get_Digital_ValueSynchNonBlocking(0, &digitalValue);
									motorValue = (digitalValue * 1000UL) / 1023;
									Servo_SetAngle(motorValue);
								}
							}
						}
						break;
					}
					else{
						LCD_ClearScreen();
						LCD_displayString("Wrong Password");
						break;
					}
				}

			}

		}

	}
	else if(Local_u8_Flag == 1){
		Local_u8_Flag = 0;
		LCD_ClearScreen();
	}

}
