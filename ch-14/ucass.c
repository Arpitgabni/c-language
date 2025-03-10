#include<stdio.h>

main()

{

    char name[20];

    printf("Enter your name : ");
    scanf("%[^\n]", &name);   

    printf("\n\n");
    printf("Name\t: %s", name); 

    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }

    printf("\n\n");
    printf("String Length : %d", len);

    printf("\n\n");
    printf("Name\t: %s", name);
}





