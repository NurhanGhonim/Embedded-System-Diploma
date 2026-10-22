/*
 * Internal_Pull_Up.c
 *
 * Created: 9/1/2026 3:12:31 AM
 *  Author: Nurhan Ghonim
 */ 


#include <avr/io.h>
#include "LED.h"
#include "button.h"
#include "DIO.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	DIO_vconnectpullup('D',0,1);
	button_vInit('D',0);
	LED_vInit('D',1);
	unsigned char z;
	while(1)
	{
		z=button_u8read('D',0);
		if (z==0)
		{
			LED_vTurnOn('D',1);
		}
		else
		{
			LED_vTurnOff('D',1);
		}
	}
}