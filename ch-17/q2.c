#include <stdio.h>

// TSRN
void sum(int n);

void main()
{
    int n;

    printf("enter n:");
    scanf("%d", &n);

    sum(n);
}

void sum(int n)
{
    for (int i = 1; i <= n; i++)
    {

        printf("%d\n", i);
    }
}
