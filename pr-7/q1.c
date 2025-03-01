#include <stdio.h>

void  main()
{
    int n, a, b, sum;
    do
    {
        printf("\n\t*  select your choy's \n");
        printf("\n\t press 1 in Addition \n");
        printf("\n\t press 2 in Subtraction \n");
        printf("\n\t press 3 in Multiply \n");
        printf("\n\t press 4 in Divide \n");
        printf("\n\t press 0 in exit \n");

        printf("enter your choys:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:

            printf("enter a & b ");
            scanf("%d %d", &a, &b);

            sum = a + b;

            printf("ans is : %d\n", sum);

            break;

        case 2:

            printf("enter a & b ");
            scanf("%d %d", &a, &b);

            sum = a - b;

            printf("ans is : %d\n", sum);

            break;

        case 3:

            printf("enter a & b ");
            scanf("%d %d", &a, &b);

            sum = a * b;

            printf("ans is : %d\n", sum);

            break;

        case 4:

            printf("enter a & b ");
            scanf("%d %d", &a, &b);

            sum = a / b;

            printf("ans is : %d\n", sum);

            break;

        case 0:
            break;
        
        default:
            break;
        }

    } while (n != 0);
}