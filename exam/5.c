#include <stdio.h>

struct house
{
    int room_quantity,established_year;
    char city[20];
    float per;
};

void main()
{
    

    int size;

    printf("Enter number of house : ");
    scanf("%d", &size);

    // Array of Object  
    struct house s1[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("Enter your room_quantity : ");
        scanf("%d", &s1[i].room_quantity);
        printf("Enter your established_year : ");
        scanf("%d", &s1[i].established_year);
        printf("Enter your city : ");
        scanf("%s", &s1[i].city);
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("room_quantity\t : %d\n", s1[i].room_quantity);
        printf("established_year\t : %d\n", s1[i].established_year);
        printf("city\t : %s\n", s1[i].city);
    }
}