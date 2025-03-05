

    #include <stdio.h>

    int cube(int *ptr)
    {
        return (*ptr) * (*ptr) * (*ptr);
    }
    
    void main()
    {
        int size1,size2;
    
        printf("Enter row size1: ");
        scanf("%d", &size1);
        printf("Enter column size2 : ");
        scanf("%d", &size2);
    
        int a[size1][size2];
    
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                printf("Enter element : ");
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }
    
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                printf("%d ", cube(&a[i][j]));
            }
            printf("\n");
        }
    }
    












