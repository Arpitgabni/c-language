#include <stdio.h>

void main()

{
    FILE *fp;
    FILE *fp1;

    fp = fopen("even.txt", "a");

    fp1 = fopen("odd.txt", "a");

    int size;

    printf("Enter size:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {

        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 1)
        {

            fprintf(fp, "even number : %d\n", a[i]);
        }
        else
        {
            fprintf(fp1, "odd number :  %d\n ", a[i]);
        }
    }
}