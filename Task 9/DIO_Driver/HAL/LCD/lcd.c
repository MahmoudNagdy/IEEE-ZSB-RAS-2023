#include<util/delay.h>
#include "lcd.h"

#include "BIT_MATH.h"
#include "Dio_Interface.h"

void LCD_sendCommand(u8 command){

	LCD_setPinValue(LCD_RS_PORT_ID,LCD_RS_PIN_ID,LOGIC_LOW);
	_delay_ms(1);
	LCD_setPinValue(LCD_E_PORT_ID,LCD_E_PIN_ID,LOGIC_HIGH);
	_delay_ms(1);
	LCD_setPortValue(LCD_DATA_PORT_ID,command);
	_delay_ms(1);
	LCD_setPinValue(LCD_E_PORT_ID,LCD_E_PIN_ID,LOGIC_LOW);
	_delay_ms(1);
}
void LCD_displayCharacter(u8 data){
	LCD_setPinValue(LCD_RS_PORT_ID,LCD_RS_PIN_ID,LOGIC_HIGH);
	_delay_ms(1);
	LCD_setPinValue(LCD_E_PORT_ID,LCD_E_PIN_ID,LOGIC_HIGH);
	_delay_ms(1);
	LCD_setPortValue(LCD_DATA_PORT_ID,data);
	_delay_ms(1);
	LCD_setPinValue(LCD_E_PORT_ID,LCD_E_PIN_ID,LOGIC_LOW);
	_delay_ms(1);
}
void LCD_init(void){
	LCD_setPinDirection(LCD_RS_PORT_ID,LCD_RS_PIN_ID,PIN_OUTPUT);
	LCD_setPinDirection(LCD_E_PORT_ID,LCD_E_PIN_ID,PIN_OUTPUT);
	LCD_setPortDirection(LCD_DATA_PORT_ID,PORT_OUTPUT);

	_delay_ms(20);

	LCD_sendCommand(LCD_TWO_LINES_EIGHT_BITS_MODE);
	LCD_sendCommand(LCD_CURSOR_OFF);
	LCD_sendCommand(LCD_CLEAR_COMMAND);
}
