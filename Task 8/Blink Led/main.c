#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000UL

int main(void){
	DDRB = 0x01;

	while(1){
		_delay_ms(100);
		PORTB = 1 << 0;

		_delay_ms(100);
		PORTB = 0 << 0;
	}
	return 0;
}
