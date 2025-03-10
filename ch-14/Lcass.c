#include<stdio.h>

main()

{

    char name[20];

    printf("enret your name:");
    scanf("%[^\n]",&name);

    printf("\n\n");
    printf("your name:%s",name);

    int len=0;
    for(int i=0;name[i] != '\0';i++)
    {
        len++;
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }

    }

    printf("\n\n");
    printf("string length\t:%d",len);

    printf("\n\n");
    printf("your name:%s",name);
}