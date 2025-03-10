#include <stdio.h>

main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int a[size];
    int n;

    printf("\n\n Entyer array elements:\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    printf("\n\noutput:\n\n", a);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");
    printf("Length of an Array: %d", size);
}