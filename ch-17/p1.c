#include <stdio.h>

int fac(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)//1 2.3.4 5
    {
        fact = fact * i;//24*5 = 120
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num); //5

    

printf("Factorial of %d is: %d\n", num, fac(num)); // 5 => 120

    return 0;
}
