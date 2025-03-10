#include <stdio.h>

void loop(int start, int end)
{
    if (start <= end) // 11<=10
    {
        printf("%d\n", start); // 10
        start++;               // 11

        loop(start, end); // Recursion
    }
}

void main()
{
    printf("Hello World\n");
    loop(1, 10);
}