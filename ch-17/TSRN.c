#include <stdio.h>

// TSRN
void sum(int a, int b);

void myFun(int a, char ch, float pi)
{
    printf("Int   : %d\n", a);
    printf("Char  : %c\n", ch);
    printf("Float : %.2f\n", pi);
}

void main()
{
    int a, b;

    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    sum(a, b);

    int arpit = 89;
    char myChar = 'A';
    float myPer = 96.32;

    myFun(arpit, myChar, myPer);
}

void sum(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}