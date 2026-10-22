/*
 * Push_button_with_7Seg.c
 *
 * Created: 9/25/2026 7:24:17 PM
 *  Author: DELL
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>
#include "sev_Seg.h"
#include "button.h"
int main(void)
{
	seven_seg_vinit('D');
	unsigned char counter=0;
	unsigned char button_val;
	button_vInit('A',0);
	seven_seg_vinit('D');
	while(1)
	{
		
		button_val=button_u8read('A',0);
		if (button_val==1)
		{
			counter++;
		}
		if (counter>9)
		{
			counter=0;
		}
		seven_seg_write('D',counter);
		_delay_ms(200);
	}
}