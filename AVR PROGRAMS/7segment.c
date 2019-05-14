/*
 * 7segment.c
 *
 * Created: 14-May-19 9:47:33 AM
 * Author : ROHITH
 */ 
 #ifndef F_CPU
 #define F_CPU 1600000
 #endif  
 #include <avr/io.h> 
 #include <util/delay.h>


int main(void)
{
	DDRA=0xFF;
	PORTA=0xFF;
    while (1) 
    {
		_delay_ms(1000);
		PORTA=0b11111100;
		_delay_ms(1000);
		PORTA=0b01100000;
		_delay_ms(1000);
		PORTA=0b11011010;
		_delay_ms(1000);
		PORTA=0b11110010;
		_delay_ms(1000);
		PORTA=0b01100110;
		_delay_ms(1000);
		PORTA=0b10110110;
		_delay_ms(1000);
		PORTA=0b10111110;
		_delay_ms(1000);
		PORTA=0b11100000;
		_delay_ms(1000);
		PORTA=0b11111110;
		_delay_ms(1000);
		PORTA=0b11100110;
		_delay_ms(1000);
		PORTA=0b11101110;
		_delay_ms(1000);
		PORTA=0b11100110;
		_delay_ms(1000);
		PORTA=0b00111110;
		_delay_ms(1000);
		PORTA=0b10011100;
		_delay_ms(1000);
		PORTA=0b11100110;
		_delay_ms(1000);
		PORTA=0b01111010;
		_delay_ms(1000);
		PORTA=0b10011110;
		_delay_ms(1000);
		PORTA=0b10001110;
		_delay_ms(1000);
		
    }
}

