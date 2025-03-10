#include <stdio.h>
#include "my_function.c"

void main()
{
    int size;

    printf("Enter number of elements : ");
    size = inputInt(); // 5

    int a[size];

    arrayInput(size, a);
}