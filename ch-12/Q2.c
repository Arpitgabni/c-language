#include <stdio.h>

main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int a[size];
    int n;

    printf("\n\n Enter array elements: \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\n\noutput:\n\n", a);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    printf("\n\n");
    printf("Average of an Array:%.2f", (float)sum / size);
}