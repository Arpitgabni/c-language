#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");
    
        int enumber;
        char ename[20],role[20];

        
        printf("Enter employees' number: ");
        scanf("%d",&enumber);
        fflush(stdin);
        printf("Enter employees' name: ");
        scanf("%[^\n]", &ename);
        fflush(stdin);
        printf("Enter your role : ");
        scanf("%[^\n]", &role);


        fprintf(fp,"Enter employees' number:%d \n",enumber);
        fprintf(fp,"Enter employees' name:%s \n",ename);
        fprintf(fp,"Enter your role : %s\n",role);
        
    }
    