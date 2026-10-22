/*
 * Display_0_9.c
 *
 * Created: 9/24/2026 11:02:26 AM
 *  Author: Nurhan Ghonim
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>
#include "Sev_Seg.h"
int main(void)
{
    seven_seg_vinit('D');
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