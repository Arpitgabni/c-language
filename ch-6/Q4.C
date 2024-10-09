#include<stdio.h>
#include<conio.h>
main()
{

	int a,b;
	clrscr();
	printf("enter a velue of a:");
	scanf("%d",&a);

	if(a>0)
	{
	printf("possitive number");

	}
	else if(a==0)
	{
	printf("netcheral number");
	}
	else
	{
	printf("nagative number");
	}
	getch();
}