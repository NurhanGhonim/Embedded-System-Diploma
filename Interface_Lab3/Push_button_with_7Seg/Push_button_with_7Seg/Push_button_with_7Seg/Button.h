/*
 * Button.h
 *
 * Created: 9/25/2026 7:57:44 PM
 *  Author: DELL
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void button_vInit(unsigned char portname,unsigned char pinnumber);
/*
Function Name        : button_u8read
Function Returns     : unsigned char
Function Arguments   : unsigned char portname,unsigned char pinnumber
Function Description : Returns 0 or 1 depend on the status of the button(pressed or not) and the type of connection (pull up or pull down)
*/

unsigned char button_u8read(unsigned char portname,unsigned char pinnumber);

#endif /* BUTTON_H_ */