#include <stdio.h>
#include <string.h>

main()

{

    char name[20];
    char revers[20];
    char pal[20];

    printf("enter any string:");
    gets(name); // arpit

    strcpy(pal, name);

    strrev(name); // name = tipra

    strcpy(revers, name); // revers = tipra

    printf("revers\t:%s", revers);

    printf("\n\n");

    int cmp = strcmp(pal, revers); // tipra , tipra

    if (cmp == 0)
    {
        printf("The given string is a palidrome.");
    }
    else
    {
        printf("The given string is not palidrome.");
    }
}