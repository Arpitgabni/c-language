#include<stdio.h>

main()
{
    int size;

    printf("enter noumber of elment:");
    scanf("%d",&size);

    int a[size];
    int n;

   printf("\n\n array input \n\n");
   for(int i = 0; i < size; i++)
   {
     printf("enter element %d :",i+1);
     scanf("%d",&a[i]);
   }

   printf("\n\n array output \n\n",a);
   for(int i = 0; i < size; i++)
   {
      printf("%d\t",a[i]);
   }

   int sum = 0;

   for(int i =0; i < size; i++)
   {
    sum = sum + a[i];
   }

  printf("\n\n");
  printf("array eliment of sum : %d",sum);

  printf("\n\n");
  printf("AVG :%.2f", (float) sum/size);
}