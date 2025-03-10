#include <stdio.h>

void main()
{
    // Array of Pointer
    int a[5] = {10, 20, 30, 40, 50};

    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i]; // ptr[3] = &a[3]
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *ptr[i];
        printf("%d\t", *ptr[i]);
    }
    printf("\n\n");
    printf("Array Sum : %d", sum);
}