#include<stdio.h>

main()
{
    int a[100][100];
    int i,j,r,c;
    int max=0;

    printf("enter the array's row size:");
    scanf("%d",&r);

     printf("enter the array's column size:");
    scanf("%d",&c);
 
 printf("enter array elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d] [%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          if(a[i][j]>max)
          {
                max=a[i][j];
          }
        }
    }
     
     printf("The largest element is:%d",max);

}