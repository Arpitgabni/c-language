#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    int n;
    clrscr();
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	printf("%d",i);
    }
    getch();
}
