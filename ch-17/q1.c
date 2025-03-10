#include <stdio.h>

int fac(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fac(n - 1);
}

int main()
{
    int nom;
    printf("Enter a number: ");
    scanf("%d", &nom);
    printf("Factorial of %d is %d\n", nom, fac(nom));
    return 0;
}
