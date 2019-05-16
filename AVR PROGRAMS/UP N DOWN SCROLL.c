/*
 * GccApplication3.c
 *
 * Created: 16-May-19 3:07:46 PM
 * Author : ROHITH
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL //16 MHz clock speed
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA=0xFF;
	
	/* Replace with your application code */
	while (1)
	{
			PORTA=0x80;
			_delay_ms(100);
			PORTA=0x40;
			_delay_ms(100);
			PORTA=0x20;
			_delay_ms(100);
			PORTA=0x10;
			_delay_ms(100);
			PORTA=0x08;
			_delay_ms(100);
			PORTA=0x04;
			_delay_ms(100);
			PORTA=0x02;
			_delay_ms(100);
			PORTA=0x01;
			_delay_ms(100);
			PORTA=0x01;
			_delay_ms(100);
			PORTA=0x02;
			_delay_ms(100);
			PORTA=0x04;
			_delay_ms(100);
			PORTA=0x08;
			_delay_ms(100);
			PORTA=0x10;
			_delay_ms(100);
			PORTA=0x20;
			_delay_ms(100);
			PORTA=0x40;
			_delay_ms(100);
			PORTA=0x80;
			_delay_ms(100);
	}
}