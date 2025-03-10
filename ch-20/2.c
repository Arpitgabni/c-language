#include <stdio.h>

void main()
{
    int a = 25;

    int *ptr;
    int **ptr2;
    int ***ptr3;

    ptr = &a;
    ptr2 = &ptr;
    ptr3 = &ptr2;

    printf("A\t: %d\n", a);          // 25
    printf("PTR\t: %d\n", *ptr);     // 25
    printf("PTR2\t: %d\n", **ptr2);  // 25
    printf("PTR2\t: %d\n", ***ptr3); // 25

    a = 56;

    printf("A\t: %d\n", a);          // 56
    printf("PTR\t: %d\n", *ptr);     // 56
    printf("PTR2\t: %d\n", **ptr2);  // 56
    printf("PTR2\t: %d\n", ***ptr3); // 56

    **ptr2 = 78;

    printf("A\t: %d\n", a);         // 56
    printf("PTR\t: %d\n", *ptr);    // 56
    printf("PTR2\t: %d\n", **ptr2); // 56
    printf("PTR3\t: %d\n", ***ptr3);
}