/*
 * Relay.c
 *
 * Created: 9/25/2026 9:06:45 PM
 *  Author: Nurhan Ghonim
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
    DDRD=0x01;
	while(1)
	{
		
		PORTD=0x01;
		_delay_ms(2000);
		PORTD=0x00;;
		_delay_ms(2000);
	}
}