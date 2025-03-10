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
    int rev = 0;
    int rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("%d", rev);
}