#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a; // c = 10
    *a = *b;    // a = 20
    *b = c;     // b = 10
}

void main()
{
    int a, b;

    printf("Enter a & b : ");
    scanf("%d %d", &a, &b); // a= 10, b = 20

    swap(&a, &b); // call by refernces

    printf("A\t: %d\nB\t: %d", a, b);
}