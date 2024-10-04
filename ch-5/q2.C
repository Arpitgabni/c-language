
#include<stdio.h>
#include<conio.h>
main()
{

	int b,h,d,t;
	int gross_salary;

	clrscr();
	printf("enter the base salary:");
	scanf("%d",&b);

	printf("enter the HRA:");
	scanf("%d",&h);
	printf("enter the DA:");
	scanf("%d",&d);
	printf("enter the TA:");
	scanf("%d",&t);

	gross_salary = (b+h+d+t);
	printf("\n gross salary= %d",gross_salary);
	getch();

}