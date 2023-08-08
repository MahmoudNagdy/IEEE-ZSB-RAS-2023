#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/ERROR_STATE.h"

#include "../DIO/DIO_Interface.h"

#include "Timer_Config.h"
#include "Timer_Private.h"

/* Global Pointer To Function for TIMER0 Overflow */
static void(*TIMERS_pfTIMER0OVF)(void) = NULL;

/* Global Pointer To Function for TIMER0 CTC */
static void(*TIMERS_pfTIMER0CTC)(void) = NULL;


void TIMERS_voidTimer0Init(void){
	/* Select Mode => Normal Mode*/
	#if TIMER_MODE == NORMAL_MODE
	CLR_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_WGM00_PIN);
	CLR_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_WGM01_PIN);
	/* Set Preload Value */
	TIMERS_u8_TCNT0_REG = 192;
	#else if TIMER_MODE == CTC_MODE
	CLR_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_WGM00_PIN);
	SET_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_WGM01_PIN);
	/* SET Compare Match Unit Register */
	TIMERS_u8_OCR0_REG = 99;
	#endif
	
	/* Enable Overflow Interrupt */	
	#if INTERRUPT_MODE == Overflow_Mode
	SET_BIT(TIMERS_u8_TIMSK_REG, TIMERS_TIMSK_TOIE0_PIN);
	#else if INTERRUPT_MODE == CTC_Mode
	SET_BIT(TIMERS_u8_TIMSK_REG, TIMERS_TIMSK_TOIE1_PIN);
	#endif
	
	
	/* Set Prescaler Value => clk / 8 */
	CLR_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_CS00_PIN);
	SET_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_CS01_PIN);
	CLR_BIT(TIMERS_u8_TCCR0_REG, TIMERS_TCCR0_CS02_PIN);
}


u8 TIMERS_u8TIMER0SetCallBack(void(*Copy_pf)(void)){
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_pf != NULL){
		TIMERS_pfTIMER0OVF = Copy_pf;
	}
	else{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}


u8 TIMERS_u8TIMER0CTCSetCallBack(void(*Copy_pf)(void)){
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_pf != NULL){
		TIMERS_pfTIMER0CTC = Copy_pf;
	}
	else{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}

/********************** ISR Of Timer0 Overflow ************************/

void __vector_11(void)		__attribute__((signal));

void __vector_11(void){
	static u16 Local_u16CounterOVF = 0;
	Local_u16CounterOVF++;
	if(Local_u16CounterOVF == 3907){
		/* Update Preload Value */
		TIMERS_u8_TCNT0_REG = 192;
		
		/* Clear Overflow Counter */
		Local_u16CounterOVF = 0;
		
		/* Call App Function */
		if(TIMERS_pfTIMER0OVF != NULL){
			TIMERS_pfTIMER0OVF();
		}
	}
}


/********************** ISR Of Timer0 CTC ************************/

void __vector_10(void)		__attribute__((signal));

void __vector_10(void){
	static u16 Local_u16CounterCTC = 0;
	Local_u16CounterCTC++;
	if(Local_u16CounterCTC == 1000){
		Local_u16CounterCTC = 0;
		/* Call App Function */
		if(TIMERS_pfTIMER0CTC != NULL){
			TIMERS_pfTIMER0CTC();
		}
	}
}





