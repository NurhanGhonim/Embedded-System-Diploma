/*
 * Display0_F.c
 *
 * Created: 9/24/2026 11:56:47 AM
 *  Author: Nurhan Ghonim
 */ 



#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f,0x77,0x7f,0x39,0x3f,0x79,0x71};
unsigned char counter=0 ;
DDRD=0xff;
while(1)
{
	for(counter=0;counter<=15;counter++)
	{
		PORTD=arr[counter];
		_delay_ms(1000);
	}
}
}