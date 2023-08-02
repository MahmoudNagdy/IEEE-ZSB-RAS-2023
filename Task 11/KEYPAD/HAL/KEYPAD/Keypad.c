/*
 * Keypad.c
 *
 *  Created on: Jan 8, 2018
 *      Author: Mohamed
 */
#include "Keypad.h";

u8 Keypad_GetPressedKey(){
	u8 Col, Row;
	while (1)
	{
		for (Col = 0; Col < N_Col; Col++)
		{
			Keypad_Port_Dir = (0b00010000 << Col);
			Keypad_Port_Out = ~(0b00010000 << Col);

			for (Row = 0; Row < N_Row; Row++)
			{
				if (BIT_IS_CLEAR(Keypad_Port_In, Row))
				{
					return Keypad_4x3((Row * N_Col) + Col + 1);
				}
			}
		}
	}
}
#if(N_Col == 3)

u8 Keypad_4x3(u8 Num) {
	switch (Num) {
	case 10:
		return '*';
		break;
	case 11:
		return 0;
		break;
	case 12:
		return '#';
	default:
		return Num;
	}
}
#endif
