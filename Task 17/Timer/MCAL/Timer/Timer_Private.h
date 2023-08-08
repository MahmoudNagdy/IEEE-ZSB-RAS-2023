#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

#define TIMERS_u8_TIMSK_REG				*((volatile u8 *)0x59)
#define TIMERS_u8_TIFR_REG				*((volatile u8 *)0x58)
#define TIMERS_u8_TCCR0_REG				*((volatile u8 *)0x53)
#define TIMERS_u8_TCNT0_REG				*((volatile u8 *)0x52)
#define TIMERS_u8_OCR0_REG				*((volatile u8 *)0x5C)



/**************** Registers Pins *****************************/

#define TIMERS_TCCR0_WGM00_PIN			6
#define TIMERS_TCCR0_WGM01_PIN			3

#define TIMERS_TIMSK_TOIE0_PIN			0
#define TIMERS_TIMSK_TOIE1_PIN			1

#define TIMERS_TCCR0_CS00_PIN			0
#define TIMERS_TCCR0_CS01_PIN			1
#define TIMERS_TCCR0_CS02_PIN			2

#endif
