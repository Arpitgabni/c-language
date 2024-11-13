#include<stdio.h>
#include<conio.h>
main()
{
	int fy,ly;
	clrscr();
	printf("enter the frust year:");
	scanf("%d",&fy);
	printf("enter the last year:");
	scanf("%d",&ly);
	while(fy<=ly)
	{
		if(fy%4==0)
		{
			printf("%d\t",fy);
		}

		fy++;
	}

	getch();
}