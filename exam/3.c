#include <stdio.h>

main()

{

    int a;

    
        printf("enter number:");
        scanf("%d", &a);
    
    
    printf("%d",a);

    int rev=0;
    int rem;

    printf("\n");

    while (a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }

    printf("revers number is :%d",rev);
}