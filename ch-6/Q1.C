#include<stdio.h>
#include<conio.h>
main()
{

	int a;
	int b;
	clrscr();
	printf("Enter the value of A:");
	scanf("%d",&a);  // 35
	printf("Enter the value of B:");
	scanf("%d",&b);   //6

	if(a>b) // 35>6
	{
		clrscr();
		printf("%d is minimum",b);
	}
	else


	{
		clrscr();
		printf("%d is minimum",a);
	}
	getch();



}