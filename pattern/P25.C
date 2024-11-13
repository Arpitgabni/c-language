#include<stdio.h>
#include<conio.h>
main()
{       int i,j,s;
	char 'A';
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}
			for(j=i;j<=5;j++)
			{
				if(j%2==0)
				{
					printf("%d",j);
				}
				else
				{
					printf("%c",j+64);
				}
			}

	printf("\n");
	}
	getch();
}