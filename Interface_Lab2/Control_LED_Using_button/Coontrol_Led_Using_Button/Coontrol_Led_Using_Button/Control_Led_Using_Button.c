/*
 * Coontrol_Led_Using_Button.c
 *
 * Created: 9/1/2026 3:03:31 AM
 *  Author: DELL
 */ 


#include "LED.h"
#include "button.h"

int main(void)
{
	button_vInit('D', 0);
	LED_vInit('D', 1);

	unsigned char buttonState;

	while (1)
	{
		buttonState = button_u8read('D', 0);

		if (buttonState == 1)
		{
			LED_vTurnOn('D', 1);
		}
		else
		{
			LED_vTurnOff('D', 1);
		}
	}
}