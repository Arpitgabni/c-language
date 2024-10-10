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

	h=b*(10.00/100.00);
	d=b*(5.00/100.00);
	t=b*(8.00/100.00);

	gross_salary = (b+h+d+t);
	printf("\n gross salary= %d",gross_salary);
	getch();

}