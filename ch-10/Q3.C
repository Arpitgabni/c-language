#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	int j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
