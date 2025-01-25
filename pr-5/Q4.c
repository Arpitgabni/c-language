#include <stdio.h>

main()
{
    int i, j, r, c;

    printf("enter the array's row size:");
    scanf("%d", &r);

    printf("enter the array's column size:");
    scanf("%d", &c);

    int a[r][c];

    printf("enter array elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d] [%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowsum = 0;
    int row;

    printf("\nEnter  row number : ");
    scanf("%d", &row);

    printf("element of row  %d : ",row);
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            if (i == row)
            {
                printf("  %d   ", a[i][j]);
                rowsum = rowsum + a[i][j];
            }
        }
    }

    printf("\n The sum of a row %d : %d \n", row, rowsum);

    int colum = 0;
    int col;

    printf("\nEnter  col number : ");
    scanf("%d", &col);
    
     printf("element of col  %d : ",col);

    for (i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            if (j == col)
            {
                printf("   %d   ", a[i][j]);
                colum = colum + a[i][j];
            }
        }
    }
    printf("\n The sum of column %d : %d\n", col, colum);
}