#ifndef F_CPU
#define F_CPU 16000000UL //16 MHz clock speed
#endif
#include <avr/io.h>
#include <util/delay.h>
int main()
{
	DDRC=0x00; //configuring PortC pin 0 as input
	PORTC=0x00;
	DDRB=0x01; // configuring PortB as output
	PORTB=0x00; // buzzer/LED off
	while(1)
	{
		if((PINC&(1<<0)))            // check for sensor pin PC.0 using bit
		{
			PORTB=0x01;           // buzzer /LED on
			_delay_ms(5000);
			PORTB=0x00;
		}
		else
		PORTB=0x00;  // buzzer/LED off
	}
	return 0;
}