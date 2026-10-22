/*
 * LED_Reverse_Dim.c
 *
 * Created: 8/31/2026 11:51:19 PM
 *  Author: Nurhan Ghonim
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"

int main(void)
{
	signed char i;

	for (i = 0; i <= 7; i++)
	{
		LED_vInit('D', i);
	}

	while (1)
	{
		for (i = 0; i <= 7; i++)
		{
			LED_vTurnOn('D', i);
			_delay_ms(1000);
		}

		for (i = 7; i >= 0; i--)
		{
			LED_vTurnOff('D', i);
			_delay_ms(1000);
		}
	}
}