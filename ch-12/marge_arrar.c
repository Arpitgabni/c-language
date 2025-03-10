#include <stdio.h>

main()
{
    int size1, size2;

    printf("Enter first size : ");
    scanf("%d", &size1);
    printf("Enter second size : ");
    scanf("%d", &size2);

    int a[size1], b[size2], c[size1 + size2];

    printf("\n\n");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        c[i + size1] = b[i];
    }

    printf("\n\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", c[i]);
    }
}