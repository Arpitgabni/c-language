#include<stdio.h>
#include<conio.h>
main()
{

	int a;
	int b;
	int c;
	int d;
	float e;
	clrscr();
	printf("Enter the value of A:");
	scanf("%d",&a);  // 35
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);


	d=a+b+c;
	printf("%d is total mark",d);
	e=d/3;
	printf("%.2f your result",e);
	getch();



}