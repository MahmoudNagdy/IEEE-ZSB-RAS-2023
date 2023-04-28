#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"


#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/DIO/DIO_Config.h"

int main(void){
	u8 pin_val;
	DIO_u8SetPinDirection(0, 0, 1);
	DIO_u8SetPinDirection(1, 0, 1);
	DIO_u8SetPinDirection(2, 0, 0);


	while(1){

		DIO_u8GetPinValue(2, 0, &pin_val);
		if(pin_val == 1){
			DIO_u8SetPinValue(0, 0, 1);
		}
		else{
			DIO_u8SetPinValue(0, 0, 0);
		}

	}

    return 0;
}
