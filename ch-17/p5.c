#include <stdio.h>

// TSRN
void sum(int n,int a);

void main()
{
    int n;
    int a;

    printf("enter n:");
    scanf("%d", &n);

    a=n;

    sum(n,a);
}

void sum(int n,int a)
{
    int rev = 0;
    int rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }


    if (rev== a)
    {
        printf("number is polindrom");
    }
    else
    {
        printf("number is not pelindrom");
    }
}