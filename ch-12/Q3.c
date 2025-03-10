#include <stdio.h>

main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);
    int a[size], b[size];
    int c[size];

    printf("\n\nEnter array A's elements:\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\n\nEnter array B's elements:\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
        c[i] = a[i] + b[i];

    printf("\n\n");
    for (int i = 0; i < size; i++)
        printf("%d\t", c[i]);
}