//
// Created by Nurhan Ghonim on 9/29/2026.
//

#include <stdio.h>
int main () {
    unsigned char x=1;
    x|=(1<<7); //Set bit num7
    printf("x=%i \n",x);
    x&=(1<<7); //Clr bit 7
    printf("x=%i \n",x);
    x^=(1<<7);
    printf("x=%i \n",x);
    /*read the 7's bit from number and then print it*/
    printf("the 7's bit=%i as the last operation",((x&(1<<7))>>7));
    return 0;
}
