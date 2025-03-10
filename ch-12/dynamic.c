#include <stdio.h>

main()
{
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size); // 5

    int a[size]; // a[5]
    int n;

    printf("\n\nArray Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nArray Output\n\n");
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
    printf("Array Elements Of Sum : %d", sum);

    printf("\n\n");
    printf("AVG : %.2f", (float)sum / size);
}