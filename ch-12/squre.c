#include <stdio.h>
main()
{
    int size;
    printf("enter size of elements:");
    scanf("%d", &size);

    int a[size];
    int squre;

    printf("Enter array of elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        squre = a[i] * a[i];
        
        printf("%d\t", squre);
    }
}