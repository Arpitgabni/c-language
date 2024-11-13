#include<stdio.h>
#include<conio.h>
main()
{
	long int a,d=0;
	clrscr();
	printf("enter any number:");
	scanf("%ld",&a);

	while(a!=0)
	{

		a = a / 10;

		d++;
	}
	printf("all number is :%ld",d);
	getch();
}