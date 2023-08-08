#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

void TIMERS_voidTimer0Init(void);
u8 TIMERS_u8TIMER0SetCallBack(void(*Copy_pf)(void));
u8 TIMERS_u8TIMER0CTCSetCallBack(void(*Copy_pf)(void));

#endif
