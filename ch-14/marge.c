#include <stdio.h>

main()

{

    char name[50], surname[50];
    char fullname[50];

    printf("enter your name :");
    scanf("%s", &name);

    printf("enter your surname :");
    scanf("%s", &surname);

    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
        fullname[i] = name[i];
    }

    for (int i = 0; surname[i] != '\0'; i++)
    {
        fullname[len + i] = surname[i];
    }

    printf("\n\n");
    printf("Full Name : ");

    for (int i = 0; fullname[i] != '\0'; i++)
    {
        printf("%c", fullname[i]);
    }
}
