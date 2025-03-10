#include <stdio.h>

main()
{
    int row, col;

    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter column : ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\nArray Input\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nArray Output\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)     
            sum += a[i][j];
    }

    printf("\n\n");
    printf("Array Sum : %d", sum);

    printf("\n\n");
    printf("Array AVG : %.2f", (float)sum / (row * col));
}