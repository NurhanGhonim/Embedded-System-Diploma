/*
 * Use_Of_Volatile_Keyword.c
 *
 * Created: 8/31/2026 11:39:38 PM
 *  Author: Nurhan Ghonim
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>

#define MY_DDRA  *((volatile unsigned char *)(0x3A))
#define MY_PORTA *((volatile unsigned char *)(0x3B))

int main(void)
{
	MY_DDRA = 0xff;
	
	while(1)
	{
		MY_PORTA = 0xff;
		_delay_ms(1000);

		MY_PORTA = 0x00;
		_delay_ms(1000);
	}
}