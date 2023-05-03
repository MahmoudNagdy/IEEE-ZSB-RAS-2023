/*********************************************************/
/*************** Name 	  : Mahmoud Nagdy 	**************/
/*************** Date 	  : 27/4/2023 		**************/
/*************** SWC  	  : DIO 			**************/
/*************** Version  : 1.0 			**************/
/*********************************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/* Macros For PORTS*/

#define DIO_u8_PORTA		0
#define DIO_u8_PORTB		1
#define DIO_u8_PORTC		2
#define DIO_u8_PORTD		3

/* Macros For PINS*/
#define DIO_u8_PIN0			0
#define DIO_u8_PIN1			1
#define DIO_u8_PIN2			2
#define DIO_u8_PIN3			3
#define DIO_u8_PIN4			4
#define DIO_u8_PIN5			5
#define DIO_u8_PIN6			6
#define DIO_u8_PIN7			7

/* Macros For Pin Direction*/
#define DIO_u8_OUTPUT		1
#define DIO_u8_INPUT		0

/* Macros For Pin Value*/
#define DIO_u8_HIGH		1
#define DIO_u8_LOW		0

void DIO_voidInit(void);

u8 DIO_u8SetPinDirection	(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinDirection);

u8 DIO_u8SetPinValue		(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinValue);

u8 DIO_u8GetPinValue		(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 *Copy_pu8ReturnedPinValue);

u8 DIO_u8SetPortDirection	(u8 Copy_u8PortId, u8 Copy_u8PortDirection);

u8 DIO_u8SetPortValue		(u8 Copy_u8PortId, u8 Copy_u8PortValue);

u8 DIO_u8GetPortValue		(u8 Copy_u8PortId, u8 *Copy_pu8ReturnedPortValue);

u8 DIO_u8SetValueToAllPins	(u8 Copy_u8PortId, u8 Copy_u8Pin0, u8 Copy_u8Pin1, u8 Copy_u8Pin2, u8 Copy_u8Pin3, u8 Copy_u8Pin4, u8 Copy_u8Pin5, u8 Copy_u8Pin6, u8 Copy_u8Pin7);

#endif
