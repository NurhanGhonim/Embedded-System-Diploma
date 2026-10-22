//
// Created by Nurhan Ghonim on 8/30/2026.
//

#define F_CPU 8000000UL     //cpu freq=8Mhz
#include<util/delay.h>
#include"DIO.h"

int main() {
    DIO_set_port_direction('A', 0xff);
    while(1) {
        DIO_write_port('A', 0xff);
        _delay_ms(1000);
        DIO_write_port('A', 0x0f);
        _delay_ms(1000);
    }
}