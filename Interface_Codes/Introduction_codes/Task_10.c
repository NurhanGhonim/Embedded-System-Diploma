
//Sorting arr ascending

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int asc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int arr[SIZE], temp;

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    // Manual sorting
    for (int i = 0; i < SIZE - 1; i++)
        for (int j = i + 1; j < SIZE; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    printf("Manual: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    // qsort
    qsort(arr, SIZE, sizeof(int), asc);

    printf("\nqsort: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    return 0;
}