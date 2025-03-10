#include <stdio.h>

void main()
{ // 201053

    // Pointer
    int a = 10;

    int *ptr;

    ptr = &a;

    printf("A\t: %d\n", a); // 10
    // printf("Address : %u\n", &a); // 201053 => 56
    printf("PTR\t: %d\n", *ptr);

    a = 56;

    printf("A\t: %d\n", a);      // 56
    printf("PTR\t: %d\n", *ptr); // 56

    *ptr = 89;

    printf("A\t: %d\n", a);      // 89
    printf("PTR\t: %d\n", *ptr); // 89
}