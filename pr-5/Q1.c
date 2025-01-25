#include<stdio.h>

main()
{
    
    int  a[20],i,x;
    printf("enter the value :");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }
    printf("nagative number:");
    for(i=0;i<x;i++)
    {
    if(a[i]<0)
    {
        printf("%d ",a[i]);
    }
    }
}