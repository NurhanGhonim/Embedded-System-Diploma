/*
 * CFile1.c
 *
 * Created: 9/1/2026 3:06:09 AM
 *  Author: Nurhan Ghonim
 */ 
#include "DIO.h"
void button_vInit(unsigned char portname,unsigned char pinnumber)
{
	DIO_vsetPINDir(portname,pinnumber,0);
}
unsigned char button_u8read(unsigned char portname,unsigned char pinnumber)
{
	unsigned char x;
	x=DIO_u8read(portname,pinnumber);
	return x ;
}
