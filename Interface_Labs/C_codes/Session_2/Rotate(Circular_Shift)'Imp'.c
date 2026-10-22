//
// Created by Nurhan Ghonim on 9/29/2026.
//

#include <stdio.h>
int main() {
    unsigned char x;
    x=128;
    x=(x<<3)|(x>>5); //Rotate left with 3 bits
    printf("x=%i\n",x);
    x=128;
    x=(x>>3)|(x<<5); //rotate right by 3 bits
    printf("x=%i\n",x);
    signed char y=-6,z;
    z=y>>2;
    printf("z=%i\n",z);
    return 0;
}