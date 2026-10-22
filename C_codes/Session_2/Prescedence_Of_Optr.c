//
// Created by Nurhan Ghonim on 9/29/2026.
//

#include <stdio.h>
int main()
{
    int x=2,y=5,z;
    y=(x<<2)+ ++x;
    printf("x=%i\n",x);
    printf("y=%i\n",y);
    return 0;
}