#include <stdio.h>
#include <string.h>

main()

{
    char str[100];

    printf("Enter any string : ");
    gets(str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int feq = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                str[j] = '\0';
                feq++;
            }
        }

        if (str[i] != '\0')
        {
            printf("%c => %d\n", str[i], feq);
        }
    }
}