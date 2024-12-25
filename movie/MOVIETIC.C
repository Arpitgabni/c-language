#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int n,d,c,total,gst;
	char na[20],movie[20],cinema[20];
	clrscr();
	printf("\n\t\t\t/\\welcom/\\\n");

	printf("enter your name:");
	scanf("%s",&na);

	printf("enter your date:");
	scanf("%d",&c);

	clrscr();
	printf("\n\t*  select cinema \n");
	printf("\n\t press 1 in RAJHANS CINEMA \n");
	printf("\n\t press 2 in RAGINI CINEMA \n");


	printf("enter your choys:");
	scanf("%d",&n);

	switch (n){
			case 1:
			clrscr();
			strcpy(cinema,"RAJHANS CINEMA");
			printf("\n\t\t||RAJHANS CINEMA||\n");
			printf("\n\t* select movie categries ");
			printf("\n\t press 3 in BOLLYWOOD \n");
			printf("\n\t press 4 in HOLLYWOOD \n");
			printf("\n\t press 5 in SOUTH \n");

			printf("enter your choys:");
			scanf("%d",&n);



			switch (n){
					case 3:
					clrscr();
					printf("\n\t\t||BOLLYWOOD||\n");
					printf("\n\t * select movie type ");
					printf("\n\t press 6 in COMEDY \n");
					printf("\n\t press 7 in HORROR \n");
					printf("\n\t press 8 in ACTION \n");

					printf("enter your choys:");
					scanf("%d",&n);


					switch (n){
							case 6:
							clrscr();
							printf("\n\t\t||COMEDY||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 9 in KAKUDA \n");
							printf("\n\t press 10 in STREE \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 9:
									clrscr();
									strcpy(movie,"KAKUDA");
									printf("\n\t\t||KAKUDA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 62 in ROYAL SOFA \n");
									printf("\n\t press 63 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 62:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 63:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 10:

									clrscr();
									strcpy(movie,"STREE");
									printf("\n\t\t||STREE||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 64 in ROYAL SOFA \n");
									printf("\n\t press 65 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 64:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 65:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;


								  }
							break;

							case 7:
							clrscr();
							printf("\n\t\t||HORROR||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 11 in MANDIRA \n");
							printf("\n\t press 12 iN HERETIC \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 11:
									clrscr();
									strcpy(movie,"MADIRA");
									printf("\n\t\t||MANDIRA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 66in ROYAL SOFA \n");
									printf("\n\t press 67 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 66:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 67:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 12:
									clrscr();
									strcpy(movie,"HERETIC");
									printf("\n\t\t||HERETIC||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 68 in ROYAL SOFA \n");
									printf("\n\t press 69 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 68:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 69:
											clrscr();

											printf("\n\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											 total= 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;

							case 8:
							clrscr();
							printf("\n\t\t||ACTION||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 13 in VEDAA \n");
							printf("\n\t press 14 IN MARTIN \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 13:
									clrscr();
									strcpy(movie,"VEDAA");
									printf("\n\t\t||VEDAA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 70 in ROYAL SOFA \n");
									printf("\n\t press 71 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 70:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 71:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 14:
									clrscr();
									strcpy(movie,"MARTIN");
									printf("\n\t\t||MARTIN||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 72 in ROYAL SOFA \n");
									printf("\n\t press 73 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 72:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 73:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;


						  }

					break;

					case 4:
					clrscr();
					printf("\n\t\t||HOLLYWOOD||\n");
					printf("\n\t * select movie type ");
					printf("\n\t press 15 in COMEDY \n");
					printf("\n\t press 16 in HORROR \n");
					printf("\n\t press 17 in ACTION \n");

					printf("enter your choys:");
					scanf("%d",&n);


					switch (n){
							case 15:
							clrscr();
							printf("\n\t\t||COMEDY||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 18 in BROTHERS \n");
							printf("\n\t press 19 in UNION \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 18:
									clrscr();
									strcpy(movie,"BROTHERS");
									printf("\n\t\t||BROTHERS||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 74 in ROYAL SOFA \n");
									printf("\n\t press 75 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 74:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 75:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 19:

									clrscr();
									strcpy(movie,"UNION");
									printf("\n\t\t||UNION||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 76 in ROYAL SOFA \n");
									printf("\n\t press 77 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 76:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 77:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;


								  }
							break;

							case 16:
							clrscr();
							printf("\n\t\t||HORROR||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 20 in DON'T OUT THE LIGHTS \n");
							printf("\n\t press 21 iN BLOOD AND BLACK \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 20:
									clrscr();
									strcpy(movie,"DON'T OUT THE LIGHTS");
									printf("\n\t\t||DON'T OUT THE LIGHTS ||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 78 in ROYAL SOFA \n");
									printf("\n\t press 79 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 78:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 79:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 21:
									clrscr();
									strcpy(movie,"BLOOD AND BLACK");
									printf("\n\t\t||BLOOD AND BLACK||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 80 in ROYAL SOFA \n");
									printf("\n\t press 81 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 80:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 81:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;

							case 17:
							clrscr();
							printf("\n\t\t||ACTION||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 22 in CARRY-ON \n");
							printf("\n\t press 23 iN KRAVON THE HUNTER \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 22:
									clrscr();
									strcpy(movie,"CARRY-ON");
									printf("\n\t\t||CARRY-ON||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 82 in ROYAL SOFA \n");
									printf("\n\t press 83 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 82:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 83:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 23:
									clrscr();
									strcpy(movie,"KRABONM THE HUNTER");
									printf("\n\t\t||KRABONM THE HUNTER||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 84 in ROYAL SOFA \n");
									printf("\n\t press 85 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 84:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 85:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;


						  }

					break;

					case 5:
					clrscr();
					printf("\n\t\t||SOUTH||\n");
					printf("\n\t * select movie type ");
					printf("\n\t press 24 in COMEDY \n");
					printf("\n\t press 25 in HORROR \n");
					printf("\n\t press 26 in ACTION \n");

					printf("enter your choys:");
					scanf("%d",&n);


					switch (n){
							case 24:
							clrscr();
							printf("\n\t\t||COMEDY||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 27 in DHAMAKA \n");
							printf("\n\t press 28 in ANGRY GANESH \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 27:
									clrscr();
									strcpy(movie,"DHMAKA");
									printf("\n\t\t||DHAMAKA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 86 in ROYAL SOFA \n");
									printf("\n\t press 87 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 86:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 87:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 28:

									clrscr();
									strcpy(movie,"ANGREY GANESH");
									printf("\n\t\t||ANGRY GANESH||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 88 in ROYAL SOFA \n");
									printf("\n\t press 89 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 88:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 89:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;


								  }
							break;

							case 25:
							clrscr();
							printf("\n\t\t||HORROR||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 29 in BLACK \n");
							printf("\n\t press 30 iN DEMONTE COLONY 2 \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 29:
									clrscr();
									strcpy(movie,"BLACK");
									printf("\n\t\t||BLACK||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 90 in ROYAL SOFA \n");
									printf("\n\t press 91 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 90:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 91:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 30:
									clrscr();
									strcpy(movie,"DEMONETE");
									printf("\n\t\t||DEMONTE COLONY 2||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 92 in ROYAL SOFA \n");
									printf("\n\t press 93 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 92:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 93:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;

							case 26:
							clrscr();
							printf("\n\t\t||ACTION||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 31 in PUSHPA 2 \n");
							printf("\n\t press 32 iN VIKRAM ROLEX \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 31:
									clrscr();
									strcpy(movie,"PUSHPA 2");
									printf("\n\t\t||PUSHPA 2||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 94 in ROYAL SOFA \n");
									printf("\n\t press 95 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 94:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 95:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 32:
									clrscr();
									strcpy(movie,"VIKRANT ROLEX");
									printf("\n\t\t||VIKRANT ROLEX||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 96 in ROYAL SOFA \n");
									printf("\n\t press 97 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 96:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 97:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;


						  }

					break;

				  }
			break;

			case 2:
			clrscr();
			strcpy(cinema,"RAGINI CINEMA");
			printf("\n\t\t||RAGINI CINEMA||\n");
			printf("\n\t* select movie categries ");
			printf("\n\t press 3 in BOLLYWOOD \n");
			printf("\n\t press 4 in HOLLYWOOD \n");
			printf("\n\t press 5 in SOUTH \n");

			printf("enter your choys:");
			scanf("%d",&n);



			switch (n){
					case 3:
					clrscr();
					printf("\n\t\t||BOLLYWOOD||\n");
					printf("\n\t * select movie type ");
					printf("\n\t press 6 in COMEDY \n");
					printf("\n\t press 7 in HORROR \n");
					printf("\n\t press 8 in ACTION \n");

					printf("enter your choys:");
					scanf("%d",&n);


					switch (n){
							case 6:
							clrscr();
							printf("\n\t\t||COMEDY||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 9 in KAKUDA \n");
							printf("\n\t press 10 in STREE \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 9:
									clrscr();
									strcpy(movie,"KAKUDA");
									printf("\n\t\t||KAKUDA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 62 in ROYAL SOFA \n");
									printf("\n\t press 63 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 62:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 63:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 10:

									clrscr();
									strcpy(movie,"STREE");
									printf("\n\t\t||STREE||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 64 in ROYAL SOFA \n");
									printf("\n\t press 65 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 64:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 65:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;


								  }
							break;

							case 7:
							clrscr();
							printf("\n\t\t||HORROR||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 11 in MANDIRA \n");
							printf("\n\t press 12 iN HERETIC \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 11:
									clrscr();
									strcpy(movie,"MANDIRA");
									printf("\n\t\t||MANDIRA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 66in ROYAL SOFA \n");
									printf("\n\t press 67 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 66:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 67:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 12:
									clrscr();
									strcpy(movie,"HERETIC");
									printf("\n\t\t||HERETIC||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 68 in ROYAL SOFA \n");
									printf("\n\t press 69 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 68:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 69:
											clrscr();

											printf("\n\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											 total= 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;

							case 8:
							clrscr();
							printf("\n\t\t||ACTION||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 13 in VEDAA \n");
							printf("\n\t press 14 IN MARTIN \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 13:
									clrscr();
									printf("\n\t\t||VEDAA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 70 in ROYAL SOFA \n");
									printf("\n\t press 71 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 70:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 71:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 14:
									clrscr();
									strcpy(movie,"MARTIN");
									printf("\n\t\t||MARTIN||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 72 in ROYAL SOFA \n");
									printf("\n\t press 73 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 72:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 73:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;


						  }

					break;

					case 4:
					clrscr();
					printf("\n\t\t||HOLLYWOOD||\n");
					printf("\n\t * select movie type ");
					printf("\n\t press 15 in COMEDY \n");
					printf("\n\t press 16 in HORROR \n");
					printf("\n\t press 17 in ACTION \n");

					printf("enter your choys:");
					scanf("%d",&n);


					switch (n){
							case 15:
							clrscr();
							printf("\n\t\t||COMEDY||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 18 in BROTHERS \n");
							printf("\n\t press 19 in UNION \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 18:
									clrscr();
									strcpy(movie,"BROTHER");
									printf("\n\t\t||BROTHERS||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 74 in ROYAL SOFA \n");
									printf("\n\t press 75 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 74:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 75:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 19:

									clrscr();
									strcpy(movie,"UNION");
									printf("\n\t\t||UNION||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 76 in ROYAL SOFA \n");
									printf("\n\t press 77 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 76:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 77:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;


								  }
							break;

							case 16:
							clrscr();
							printf("\n\t\t||HORROR||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 20 in DON'T OUT THE LIGHTS \n");
							printf("\n\t press 21 iN BLOOD AND BLACK \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 20:
									clrscr();
									strcpy(movie,"DON'T OUT THE LIGHTS");
									printf("\n\t\t||DON'T OUT THE LIGHTS ||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 78 in ROYAL SOFA \n");
									printf("\n\t press 79 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 78:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 79:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 21:
									clrscr();
									strcpy(movie,"BLOOD AND BLACK");
									printf("\n\t\t||BLOOD AND BLACK||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 80 in ROYAL SOFA \n");
									printf("\n\t press 81 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 80:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 81:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;

							case 17:
							clrscr();
							printf("\n\t\t||ACTION||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 22 in CARRY-ON \n");
							printf("\n\t press 23 iN KRAVON THE HUNTER \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 22:
									clrscr();
									strcpy(movie,"CARRY-ON");
									printf("\n\t\t||CARRY-ON||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 82 in ROYAL SOFA \n");
									printf("\n\t press 83 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 82:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 83:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 23:
									clrscr();
									strcpy(movie,"KRABONM THE HUNTER");
									printf("\n\t\t||KRABONM THE HUNTER||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 84 in ROYAL SOFA \n");
									printf("\n\t press 85 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 84:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 85:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;


						  }

					break;

					case 5:
					clrscr();
					printf("\n\t\t||SOUTH||\n");
					printf("\n\t * select movie type ");
					printf("\n\t press 24 in COMEDY \n");
					printf("\n\t press 25 in HORROR \n");
					printf("\n\t press 26 in ACTION \n");

					printf("enter your choys:");
					scanf("%d",&n);


					switch (n){
							case 24:
							clrscr();
							printf("\n\t\t||COMEDY||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 27 in DHAMAKA \n");
							printf("\n\t press 28 in ANGRY GANESH \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 27:
									clrscr();
									strcpy(movie,"DHAMAKA");
									printf("\n\t\t||DHAMAKA||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 86 in ROYAL SOFA \n");
									printf("\n\t press 87 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 86:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 87:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 28:

									clrscr();
									strcpy(movie,"ANGRY GANESH");
									printf("\n\t\t||ANGRY GANESH||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 88 in ROYAL SOFA \n");
									printf("\n\t press 89 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 88:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 89:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;


								  }
							break;

							case 25:
							clrscr();
							printf("\n\t\t||HORROR||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 29 in BLACK \n");
							printf("\n\t press 30 iN DEMONTE COLONY 2 \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 29:
									clrscr();
									strcpy(movie,"BLACK");
									printf("\n\t\t||BLACK||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 90 in ROYAL SOFA \n");
									printf("\n\t press 91 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 90:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 91:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 30:
									clrscr();
									strcpy(movie,"DEMONTE COLONY 2");
									printf("\n\t\t||DEMONTE COLONY 2||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 92 in ROYAL SOFA \n");
									printf("\n\t press 93 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 92:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 93:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;

							case 26:
							clrscr();
							printf("\n\t\t||ACTION||\n");
							printf("\n\t * select movie  ");
							printf("\n\t press 31 in PUSHPA 2 \n");
							printf("\n\t press 32 iN VIKRAM ROLEX \n");

							printf("enter your choys:");
							scanf("%d",&n);

							switch (n){
									case 31:
									clrscr();
									strcpy(movie,"PUSHPA 2");
									printf("\n\t\t||PUSHPA 2||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 94 in ROYAL SOFA \n");
									printf("\n\t press 95 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 94:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 95:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;
										  }
									break;

									case 32:
									clrscr();
									strcpy(movie,"VIKRANT ROLEX");
									printf("\n\t\t||VIKRANT ROLEX||\n");
									printf("\n\t * select SEET  ");
									printf("\n\t press 96 in ROYAL SOFA \n");
									printf("\n\t press 97 in EXECNTIVE \n");

									printf("enter your choys:");
									scanf("%d",&n);

									switch (n){
											case 96:
											clrscr();
											printf("\n\t\t||ROYAL SOFA||\n");
											printf("\n\t *thenkyou for your selection* ");
											printf("\n\t |YOR SEET PRICE IS $4.72 \n");


											printf("\nenter your seet :");
											scanf("%d",&d);

											clrscr();
											 total= 400 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

											case 97:
											clrscr();
											printf("\n\t\t||EXECENTIVE||\n");
											printf("\n\t *thenkyou for your selection*");
											printf("\n\t |YOUR SEET PRICE IS $2.36 \n");

											printf("\nenter your seet:");
											scanf("%d",&d);

											clrscr();
											total = 200 * d;
											printf("\n\n\t\t%d seet is book ",d);
											break;

										  }
									break;
								  }
							break;


						  }

					break;

				  }
			break;


		  default:
				printf("!!INVELIDE CHOISE!!");
		  }

		  gst = (total * 18) / 100;
		  total = total + gst;

		  clrscr();

		  printf("Total Price : %d",total);

	clrscr();
	printf("\n\t\t|===========================================|\t");
	printf("\n\t\t|               /\\  welcom /\\               |\t");
	printf("\n\t\t|-------------------------------------------|\t");
	printf("\n\t\t|                                           |\t");
	printf("\n\t\t|  name:  %s                             |\t",na);
	printf("\n\t\t|  cinema:%s                    |\t",cinema);
	printf("\n\t\t|  movie:%s                             |\t",movie);
	printf("\n\t\t|  date: %d/12/24                           |\t",c);
	printf("\n\t\t|  ticket: %d                               |\t",d);
	printf("\n\t\t|                                           |\t");
	printf("\n\t\t|-------------------------------------------|\t");
	printf("\n\t\t|  total:%d                               |\t",total);
	printf("\n\t\t|===========================================|\t\n");
	getch();
}
