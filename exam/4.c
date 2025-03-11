#include <stdio.h>

void main()

{

    int a[5];
    int *ptr;

    ptr=a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }

    int squre[5];

    for (int i = 0; i < 5; i++)
    {

        squre[i] = a[i] * a[i];
    }

    printf("\noutput\n");

    for (int i = 0; i < 5; i++)
    {

        printf("%dsqure=%d\n", *ptr, squre[i]);
    }
}