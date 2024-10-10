#include<stdio.h>
#include<conio.h>
main()
{
	int mark;
	char gread;
	clrscr();

	printf("enter the mark:");
	scanf("%d",&mark);
	(mark>=91&&mark<=100)
		? gread='A'
		: (mark>=81&&mark<=90)
			? gread='B'
			: (mark>=71&& mark<=80)
				? gread='C'
				: (mark>=61&&mark<=70)
					? gread='D'
					: (mark>=51&&mark<=60)
						? gread='E'
						: (gread='F');
	printf("%c",gread);

	switch(gread)
		{
			case 'A':
			printf("\nExcellent work!\n ");
			break;
			case 'B':
			printf("\nwell donr\n");
			break;
			case 'C':
			printf("\ngood job\n");
			break;
			case 'D':
			printf("\nyou could better\n");
			break;
			case 'E':
			printf("\nyou pass\n");
			case 'F':
			printf("\nsoryy,you failed!\n");
			break;
		}
		if (gread>='a' && gread<='f')
		{
		printf("you are eliginle for the next level..");
		}
		else
		{
		printf("plase try again next time");
		}

	getch();
}