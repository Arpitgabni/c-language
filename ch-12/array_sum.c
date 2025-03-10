#include <stdio.h>

main()
{
    int size;

    printf("Enter number of elements : ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
        c[i] = a[i] + b[i];

    printf("\n\n");
    for (int i = 0; i < size; i++)
        printf("%d\t", c[i]);
}