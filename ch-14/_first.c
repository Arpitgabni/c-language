#include<stdio.h>

main()

    {

        char name[50];

        printf("enter your name:");
        scanf("%[^\n]",&name);

        int len = 0;

        if(name[0] >= 'a' && name[0] <= 'z')
        {
            name[0] -= 32;
        }

        for(int i=1 ; name[i] != '\0' ; i++)
        {
            len++;
            if(name[i] >= 'A' && name[i] <= 'Z')
            {
            
                name[i] += 32;
            }
            else
            {
                if(name[i]=='_')
                {
                    
                    if(name[i+1]>='a' && name[i+1] <= 'z')
                    {
                        name[i+1] -= 32;
                    }
                }
            }
            
        }



        printf("\n\n");
        printf("%d",len);

        printf("\n\n");
        printf("your name is : %s",name);

    }
