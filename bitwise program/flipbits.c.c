#include<stdio.h>
int main()
{
    int n,flippedNumber;
    printf("Enter the number");
    scanf("%d",&n);
    flippedNumber = ~n;
    printf("Original number = %d(in decimal)\n",n);
    printf("Number after bits are flipped =%d(in decimal)",flippedNumber);
    return 0;
}