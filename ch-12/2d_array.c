#include <stdio.h>

main()
{
    // 2D Array => Collection 1D Array.

    // Datatype arrayName[row][col];

    // Static 2D Array

    int a[3][3] = {
        {20, 25, 35},
        {56, 96, 32},
        {78, 84, 12},
    };

    // int b[5] = {10, 20, 30, 40, 50};

    // a[0][0] = 10;
    // a[0][1] = 20;
    // a[0][2] = 30;
    // a[1][0] = 40;
    // a[1][1] = 50;
    // a[1][2] = 60;
    // a[2][0] = 70;
    // a[2][1] = 80;
    // a[2][2] = 90;

    for (int i = 0; i < 3; i++) // Row
    {
        for (int j = 0; j < 3; j++) // Column
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}