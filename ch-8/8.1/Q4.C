#include<stdio.h>
#include<conio.h>
main()
{
	int a=1;
	int n;

	clrscr();
		printf("enter the number :");
		scanf("%d",&n);

	while(a<=n)
	{
		if(a%2==0)
		{
		 printf("%d ",a);
		}
		a++;
	}
		getch();


}