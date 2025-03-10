#include <stdio.h>

main()
{
    char name[50];

    printf("enter your name:");
    scanf("%[^\n]", &name);

    
    printf("\n\n");
    printf("your is Name\t: %s", name);

}