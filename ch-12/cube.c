#include <stdio.h>
main()
{
    int size;
    printf("enter size of elements:");
    scanf("%d", &size);

    int a[size];
    int cube;

    printf("Enter array of elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {

        cube = a[i] * a[i] * a[i];

        printf("%d\t", cube);
    }
}