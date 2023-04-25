#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000UL

int main(void){
	DDRA = 0x00;
	DDRD = 0xff;

	while(1){
		if(PINA == 0x01){
			PORTD = 1 << 5;
			_delay_ms(100);

			PORTD = 0 << 5;
			_delay_ms(100);
		}
		else{
			PORTD = 0 << 5;
		}
	}
	return 0;
}
