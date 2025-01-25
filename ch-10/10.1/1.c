#include<stdio.h.>
#include<string.h>

main()
{
    char str[20];
    
    printf("enter any string:");
    scanf("%[^\n]",&str);

    printf("\n\n");
    printf("STRING\t:%s",str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]-=32;
        }
        else
        {
            if(str[i]>=65&&str[i]<=90)
            {
                str[i]+32;
            }
        }
        printf("\n\n");
        printf("STRING:%S",str);
    }

}