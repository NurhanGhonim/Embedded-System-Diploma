//Finding min and max num
#include <stdio.h>
int main() {
    int n=5;
    int arr[n], min, max;
    printf("plz enter values of arr:");
    min=1e9;
    max=0;
    for (int i=0;i<n;i++){
    scanf("%i", &arr[i]);

    if (arr[i]>max)
        max=arr[i];
    if (arr[i]<min)
        min=arr[i];
}
    printf("the max value=%i\n",max);
    printf("the min value=%i\n",min);
    return 0;
}
