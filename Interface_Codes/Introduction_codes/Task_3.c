// Even, odd or prime


#include <stdio.h>

int main()
{
    int prime = 1;
    unsigned int num;

    printf("Please enter number: ");
    scanf("%u", &num);

    if (num % 2 == 0)
        printf("Number is even\n");
    else
        printf("Number is odd\n");

    // Prime - normal method
    if (num < 2)
        prime = 0;
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("Number is prime\n");
        else
            printf("Number is not prime\n");
    }

    // Prime - Sieve method
    int sieve[num + 1];

    for (int i = 0; i <= num; i++)
        sieve[i] = 1;

    sieve[0] = sieve[1] = 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= num; j += i)
                sieve[j] = 0;
        }
    }

    if (num >= 2 && sieve[num])
        printf("Number is prime\n");
    else
        printf("Number is not prime\n");

    return 0;
}

