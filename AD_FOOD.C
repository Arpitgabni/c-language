#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int n,d,c,total,gst;
	char na[20],ad[20],food[20];
	clrscr();
	printf("\n\t\t\t/\\welcom/\\\n");

	printf("enter your name:");
	scanf("%[^\n]",&na);

	printf("enter your date:");
	scanf("%d",&c);

	clrscr();
	printf("\n\t*  select your choy's \n");
	printf("\n\t press 1 in BURGER \n");
	printf("\n\t press 2 in PIZZA \n");
	printf("\n\t press 4 in SANDWICHES \n");
	printf("\n\t press 5 in COLD DRINKS \n");


	printf("enter your choys:");
	scanf("%d",&n);

	switch (n){
			case 1:
			clrscr();
			printf("\n\t\t|| BURGER ||");

			printf("\n\t* select your choys ");
			printf("\n\t press 6 in WHOPPER JR VEG BURGER \n");
			printf("\n\t press 7 in CRISPY VEG BURGER \n");
			printf("\n\t press 8 in PANEER ROYALE BURGRE \n");

			printf("enter your choys:");
			scanf("%d",&n);

							switch (n){
									case 6:
									clrscr();
									printf("\n\t\t|| WHOPPER JR VEG BURGER ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 18 in EXTRA CHEESY \n");
									printf("\n\t press 19 in EXTRA CHEES WITH BICOFF CHEESECACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

									case 7:
									clrscr();
									printf("\n\t\t|| CRISPY VEG BURGER ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 20 in EXTRA CHEESY \n");
									printf("\n\t press 21 in  NUTELLA CHEESECACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

									case 8:
									clrscr();
									printf("\n\t\t|| PANEER ROYALE BURGRE ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 22 in EXTRA CHEESY \n");
									printf("\n\t press 23 in TRIPLE LAYER CHOCOLATE CHEESECACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

								   }


			case 2:
			clrscr();
			printf("\n\t\t|| pizza ||");

			printf("\n\t* select your choys ");
			printf("\n\t press 9  in  MARGEHERITA PIZZA \n");
			printf("\n\t press 10 in  INDI TANDOORI PANEER PIZZA \n");
			printf("\n\t press 11 in  CHEESE VOCANO PEPPUY PIZZA \n");

			printf("enter your choys:");
			scanf("%d",&n);

							switch (n){
									case 9:
									clrscr();
									printf("\n\t\t||  MARGEHERITA PIZZA ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 24 in KOREAN PANEER TIKKA GARLIC BREAD \n");
									printf("\n\t press 25 in MAkHANICORN & JALAPENO GARLIC BREAD \n");

									printf("enter your choys:");
									scanf("%d",&n);

									case 10:
									clrscr();
									printf("\n\t\t||  INDI TANDOORI PANEER PIZZA ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 26 in CLASSIC STUFFED GARLIC BREAD \n");
									printf("\n\t press 27 in TACO MEXICANA VEG \n");

									printf("enter your choys:");
									scanf("%d",&n);

									case 11:
									clrscr();
									printf("\n\t\t|| CHEESE VOCANO PEPPUY PIZZA ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 28 in GARLIC BREADSTICKS CHEESY DIP \n");
									printf("\n\t press 29 in CHOCO LAVA CACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

								   }

			case 3:
			clrscr();
			printf("\n\t\t|| SANDWICHES ||");

			printf("\n\t* select your choys ");
			printf("\n\t press 12 in ALOO PATTY SANDWICH \n");
			printf("\n\t press 13 in POTATO CHILLI CHEESE SANDWICH \n");
			printf("\n\t press 14 in PANEER TIKKA  SANDWICH \n");

			printf("enter your choys:");
			scanf("%d",&n);

								switch (n){
									case 12:
									clrscr();
									printf("\n\t\t|| WHOPPER JR VEG BURGER ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 30 in EXTRA CHEESY \n");
									printf("\n\t press 31 in EXTRA CHEES WITH BICOFF CHEESECACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

									case 13:
									clrscr();
									printf("\n\t\t|| CRISPY VEG BURGER ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 32 in EXTRA CHEESY \n");
									printf("\n\t press 33 in  NUTELLA CHEESECACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

									case 14:
									clrscr();
									printf("\n\t\t|| PANEER ROYALE BURGRE ||");

									printf("\n\t* select your choys ");
									printf("\n\t press 35 in EXTRA CHEESY \n");
									printf("\n\t press 34 in TRIPLE LAYER CHOCOLATE CHEESECACK \n");

									printf("enter your choys:");
									scanf("%d",&n);

								   }

			case 4:
			clrscr();
			printf("\n\t\t|| COLD DRINKS ||");

			printf("\n\t* select your choys ");
			printf("\n\t press 15 in COCACOLA \n");
			printf("\n\t press 16 in THAMPSUP \n");
			printf("\n\t press 17 in SPRITE \n");

			printf("enter your choys:");
			scanf("%d",&n);



		  }

}