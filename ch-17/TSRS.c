#include <stdio.h>

// TSRS
int sub(int a, int b)
{
    return a - b;
}

void main()
{
    int a, b;

    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    int ans = sub(a, b);

    printf("Ans : %d\n", ans);
}

// To print facroial number using UDF. 5 => 120  = 5 * 4 * 3 * 2 * 1 = 120
// To Print 1 to n number using loop and UDF.
// To print reverse number using loop and UDF. 896 => 698m 