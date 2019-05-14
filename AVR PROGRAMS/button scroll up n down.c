/*
 * GccApplication1.c
 *
 * Created: 09-May-19 2:15:59 PM
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
	DDRC=0x00;
	
	/* Replace with your application code */
	while (1)
	{
		if(PINC & (1<<PC7)==1)
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
		}
		if(PINC & (1<<PC6) ==1)
		{
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
} 