#include <stdio.h>

main()
{
    // Datatype arrayName[size] = {Elements/Values};

    // a
    //  [10]   [20]   [30]   [40]   [50]
    //  0       1     2       3     4

    int a[5] = {10, 20, 30, 40, 50}; // Static Array

    // a[0] = 10;
    // a[1] = 20;
    // a[2] = 30;
    // a[3] = 40;
    // a[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}