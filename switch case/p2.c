#include<stdio.h>
int main()
{
    int month;
    printf("enter the month between 1 to 12");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
         printf("%d month have 31 days",month);
         break;
        case 2:
         printf("%d month have 29 or 28 days ",month);
         break;
        case 4:
        case 6:
        case 9:
        case 11:
         printf("%d month have 30 days",month);
        default:
         printf("invalid");

    }
    return 0;
}