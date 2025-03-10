#include <stdio.h>
main()
{
    int size;
    printf("enter size of elements:");
    scanf("%d", &size);

    int a[size];

    printf("Enter array of elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%d", a[i]);
        }
    }
}