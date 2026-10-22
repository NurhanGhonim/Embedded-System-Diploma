//
// Created by Nurhan Ghonim on 9/29/2026.
//

#include <stdio.h>
int main()
{
    int x=(3,5,8);
    printf("x=%i\n",x);
    //It will always return the last value

    int c;
    c=3,4,5;
    //it seems like (c=3), 4, 5
    printf("c=%i\n",c);
    int b=3,4,5;
    // this should be deleted as it send an error due to it seems like b=3, c=5, d=6. but wuth inly b
    printf("b=%i",b);
    return 0;

}