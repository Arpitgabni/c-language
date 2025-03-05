#include <stdio.h>
#include <string.h>

void main()

{
    char string[20];

    char *ptr[20];

    printf(" enter any string : ");
    scanf("%[^\n]", &string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        ptr[i] = &string[i];    
    }

    printf("string lenth : %d", strlen(*ptr));
}
