#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((i==1&&(j==1||j==5||j==6||j==7||j==8||j==9))||
			   (i==2||i==3||i==4)&&(j==1||j==5)||
			   (i==5&&(j>=1||j<=9))||
			   (i==6||i==7||i==8)&&(j==5||j==9)||
			   (i==9&&(j!=6&&j!=7&&j!=8)))
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
	printf(" \n");
	}
	getch();
}
