//
// Created by Nurhan Ghonim on 9/29/2026.
//
#include <stdio.h>
int main()
{
    int x=4,z;
    z=sizeof(x++);
    printf("z=%i\nx=%i",z,x);
    return 0;
}