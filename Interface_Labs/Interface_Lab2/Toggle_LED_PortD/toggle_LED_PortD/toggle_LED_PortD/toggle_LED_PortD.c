/*
 * toggle_LED_PortD.c
 *
 * Created: 9/1/2026 3:32:36 AM
 *  Author: Nurhan Ghonim
 */ 


#include "LED.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	
	LED_vInit('D',0);
	while(1)
	{
		LED_vToggle('D',0);
		_delay_ms(1000);
	}
}

