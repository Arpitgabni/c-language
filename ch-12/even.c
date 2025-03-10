#include <stdio.h>

main()
{
    int size;
    printf("enter velue of elements:");
    scanf("%d", &size);

    int a[size];

    printf("\n\n");
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
       }
    }
}