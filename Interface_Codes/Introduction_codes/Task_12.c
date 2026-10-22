//Repeated digit in decimal num

#include <stdio.h>

int main()
{
    int x, digit;
    int arr[10] = {0};

    scanf("%d", &x);

    while (x > 0)
    {
        digit = x % 10;

        if (arr[digit])
        {
            printf("Repeated digits");
            return 0;
        }

        arr[digit] = 1;
        x /= 10;
    }

    printf("No repeated digits");

    return 0;
}
