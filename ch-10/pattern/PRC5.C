#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("enter any number:");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					if(a>f)
					{
						printf("%d is max",a);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
			else
			{
				if(d>e)
				{
					if(d>f)
					{
						printf("%d is max",d);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					if(c>f)
					{
						printf("%d is max",c);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
			else
			{
				if(d>e)
			       {
					if(d>f)
					{
						printf("%d is max",d);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
		}

	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					if(b>f)
					{
						printf("%d is max",b);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
			else
			{
				if(d>e)
				{
					if(d>f)
					{
						printf("%d is max",d);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					if(c>f)
					{
						printf("%d is max",c);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
			else
			{
				if(d>e)
			       {
					if(d>f)
					{
						printf("%d is max",d);
					}
					else
					{
						printf("%d is max",f);
					}
				}
				else
				{
					if(e>f)
					{
						printf("%d is max",e);
					}
					else
					{
						printf("%d is max",f);
					}
				}
			}
		}
	}

	getch();
}