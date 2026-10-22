/*
 * BCD_To_7Seg.c
 *
 * Created: 9/10/2026 5:15:39 AM
 *  Author: Nurhan Ghonim
 */ 

#define  F_CPU 8000000UL
#include <util/delay.h>
#include "Sev_Seg_bcd.h"
int main(void)
{
	seven_seg_init('D');
	unsigned char counter=0;
	while(1)
	{
		for(counter=0;counter<=9;counter++)
		{
			seven_seg_write('D',counter);
			_delay_ms(1000);
		}
	}
}