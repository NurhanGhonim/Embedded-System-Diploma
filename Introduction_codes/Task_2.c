// Finding Min and Max Using 2 ways

//First Way Using if

#include <stdio.h>

int main()
{
    unsigned int n1, n2, n3;
    printf("Enter 3 numbers: ");
    scanf("%u %u %u", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3)
        printf("All numbers are equal.\n");
    else if (n1 >= n2 && n1 >= n3)
        printf("First number is the biggest.\n");
    else if (n2 >= n3)
        printf("Second number is the biggest.\n");
    else
        printf("Third number is the biggest.\n");




    //Second Way Using switch
    unsigned int nm1, nm2, nm3;
    printf("Enter 3 numbers: ");
    scanf("%u %u %u",&nm1, &nm2, &nm3);

    switch ((nm1 > nm2 && nm1 > nm3) +
            2 * (nm2 > nm1 && nm2 > nm3) +
            3 * (nm3 > nm1 && nm3 > nm2))    {
        case 1 :
            printf("number1 is the maximum ");
            break;
        case 2 :
            printf("number2 is the maximum ");
            break;
        case 3 :
            printf("number3 is the maximum ");
            break;
        default:
            printf("the three numbers are equal");
    }

    return 0;
}