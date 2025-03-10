#include<stdio.h>
#include<conio.h>
main()
{       int i,j;
	int n=2;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",n++);
		}n++;
		printf("\n");
	}
	getch();
}