#include<stdio.h>
#include<conio.h>
main()
{
	int a=1;
	int n;
	int sum=0;
	clrscr();

	printf("enter any number:");
	scanf("%d",&n);

	while(a<=n)
	{
		sum =sum+a;
		printf("%d\t",a++);
	}
	printf("\n\n");
	printf("sum\t:%d",sum);
	getch();
}