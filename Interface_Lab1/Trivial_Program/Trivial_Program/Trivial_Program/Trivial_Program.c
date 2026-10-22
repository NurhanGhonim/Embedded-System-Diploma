/*
 * Trivial_Program.c
 *
 * Created: 8/31/2026 11:30:26 PM
 *  Author: Nurhan Ghonim
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	DDRA|=(1<<0);
	while(1)
	{
		PORTA|=(1<<0);
		_delay_ms(1000);
		PORTA=0x00;//PORTA&=(~(1<<0))
		_delay_ms(1000);
	}
}