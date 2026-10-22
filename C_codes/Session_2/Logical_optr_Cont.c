//
// Created by Nurhan Ghonim on 9/29/2026.
//

#include <stdio.h>
int main()
{
    int a=1,b=1,c,d;
    c=a++||b++;
    d=--b && a--;
    printf("a=%i\nb=%i\nc=%i\nd=%i\n",a,b,c,d);
    return 0;
}