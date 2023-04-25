#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

char sig_val[] =  {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

int main(void){

	int c = 0;
	DDRC = 0xff;
	while(1){

		PORTC = sig_val[c];
		_delay_ms(100);
		c++;

		if(c == 10){
			c = 0;
		}

	}
	return 0;
}
