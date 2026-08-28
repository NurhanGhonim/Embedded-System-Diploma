//Finding unrpeated element in arr

#include <stdio.h>
int main()
{
    int i,x;
    int arr[9]={1,2,3,3,2,5,7,1,5};
    x=arr[0];
    for(i=1;i<=8;i++)
    {
        x^=arr[i];
    }
    printf("the unrepeated element is :%i",x);
    return 0;
}

