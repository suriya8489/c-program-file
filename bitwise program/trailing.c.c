#include<stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
    int n,i,count;
    printf("Enter the number");
    scanf("%d",&n);
    count = 0;
    for(i=0; i<INT_SIZE; i++)
    {
        if((n >> i) & 1)
        {
            break;
        }
        count++;
    }
    printf("Total number of trailing zeros in %d is %d.",n,count);
    return 0;
}