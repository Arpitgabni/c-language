#include <stdio.h>

int cube(int *ptr)
{
    return (*ptr) * (*ptr) * (*ptr);
}

void main()
{
    int r, c;

    printf("Enter row : ");
    scanf("%d", &r);
    printf("Enter column : ");
    scanf("%d", &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element : ");
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", cube(&a[i][j]));
        }
        printf("\n");
    }
}