//
// Created by DELL on 8/28/2026.
//

#include<stdio.h>
#include <stdlib.h>

int main ()
{
    int num, count1=0;
    printf("Plz enter number:");
    scanf("%d",&num);

    while (num!=0) {
        if (num%2!=0)
            count1++;
        num=num/2;
    }
    printf("Number of one's: %i\n", count1);
    //another sol
    int cnt=0;
    printf("Please enter a number:");
    scanf("%d",&num);
    for (cnt=0; cnt<=(8*sizeof(num))-1; cnt++) {
        if ((num&(1u<<cnt))>>cnt==1)
            count1++;
    }
    printf("Number of one's: %i", count1);
    return 0;


}
