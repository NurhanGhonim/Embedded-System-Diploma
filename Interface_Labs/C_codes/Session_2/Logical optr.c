//
// Created by Nurhan Ghonim on 9/29/2026.
//

#include <stdio.h>

int main()
{
    int a = 5, b = 5, c = 10;

    printf("(a == b) && (c > b) = %d\n", (a == b) && (c > b));
    printf("(a == b) && (c < b) = %d\n", (a == b) && (c < b));
    printf("(a == b) || (c < b) = %d\n", (a == b) || (c < b));
    printf("(a != b) || (c < b) = %d\n", (a != b) || (c < b));
    printf("!(a != b) = %d\n", !(a != b));
    printf("!(a == b) = %d\n", !(a == b));

    return 0;
}