/*
 * Keypad.h
 *
 *  Created on: Jan 8, 2018
 *      Author: Mohamed
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "Micro_config.h"
#include "Common_Macros.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#define Keypad_Port_Dir DDRA
#define Keypad_Port_Out PORTA
#define Keypad_Port_In PINA
#define N_Col 3
#define N_Row 4

u8 Keypad_GetPressedKey();
u8 Keypad_4x3(u8 Num);


#endif /* KEYPAD_H_ */
