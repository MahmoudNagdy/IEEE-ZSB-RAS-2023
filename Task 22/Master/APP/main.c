#include "APP_Includes.h"

/* Master Code */

int main(void){
	u8 data;
	DIO_voidInit();
	SPI_voidInit();
	
	while(1){
		SPI_u8SendResieve(5, &data);
		if(10 == data){
			DIO_u8SetPinValue(2, 0, 1);
		}
	}
	return 0;
}
