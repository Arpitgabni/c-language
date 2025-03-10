#include <stdio.h>

void main()
{

    printf("Int bytes : %zu\n", sizeof(int));                     // 4
    printf("Char bytes : %lu\n", sizeof(char));                   // 1
    printf("Float bytes : %lu\n", sizeof(float));                 // 4
    printf("Double bytes : %lu\n", sizeof(double));               // 8
    printf("long int bytes : %lu\n", sizeof(long int));           // 4
    printf("long long int bytes : %lu\n", sizeof(long long int)); // 8

    int a[10] = {10, 20, 30, 40, 50}; // 5 * 4 = 20
    printf("\n\n");
    printf("Array %d bytes", sizeof(a));

    char name[89];

    printf("\n\n");
    printf("String %lu bytes ", sizeof(name));
}