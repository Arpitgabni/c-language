#include <stdio.h>

main()

{

    int n;
    int a;

    printf("enter n:");
    scanf("%d", &n);

    a=n;

    int rev = 0;
    int rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

   
}