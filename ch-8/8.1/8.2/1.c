#include <stdio.h>

main()
{

    char name [20];

    printf("enter your name :");
    scanf("%[^\n]",&name);

    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a'&&name[i]<='z')
        {
            name[i] -=32;
        }

    }
    printf("Name : %s",name);
}