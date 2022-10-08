#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
    int n,i,count,msb;
    printf("Enter the number");
    scanf("%d",&n);
    msb = 1 << (INT_SIZE - 1);
    count = 0;
    for(i=0; i<INT_SIZE; i++)
    {
        if((n << i) & msb)
        {
            break;
        }
        count++;
    }
    printf("Total number of leading zeros in %d is %d.",n,count);
    return 0;
}