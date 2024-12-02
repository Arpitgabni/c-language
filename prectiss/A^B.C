#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter the velyue of a,b:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is max",a);
	}
	else
	{
		printf("%d is max",b);
	}
	getch();
}