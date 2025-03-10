#include<stdio.h>

main()

{

    char Name[50];

    printf("Enter your name : ");
    scanf("%[^\n]",&Name);

    printf("\n\n");
    printf("YOUR NAME IS\t : %s",Name);


}