#include <stdio.h>

struct Student
{
    int r;
    char name[20];
    float per,c,m,p;
    

    
};

void main()

{
   

    int size;

    printf("Enter number of students : ");
    scanf("%d", &size);

    // Array of Object
    struct Student s1[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("Enter your roll number : ");
        scanf("%d", &s1[i].r);
        fflush(stdin);
        printf("Enter your name : ");
        scanf("%[^\n]", &s1[i].name);
        printf("Chemistry : ");
        scanf("%f", &s1[i].c);
        printf("Mathematics : ");
        scanf("%f", &s1[i].m);
        printf("Physics : ");
        scanf("%f", &s1[i].p);
       
    }

    printf("\n\n");
    printf("output");


    for (int i = 0; i < size; i++)
    {

        
        float total=s1[i].c+s1[i].m+s1[i].p;
        float per=total/3;
        
        printf("\n");
        printf("%s (%d)\n", s1[i].name, s1[i].r);
        printf("Chemistry\t => %.2f\n", s1[i].c); 
        printf("Mathematics\t => %.2f\n", s1[i].m);
        printf("Physics\t => %.2f\n", s1[i].p);
        printf("total\t => %.2f/300\n",total);
        printf("percent\t => %.2f%%\n",per);

       
    }

    
}