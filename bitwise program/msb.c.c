#include<stdio.h>
#define BITS sizeof(int)
int main()
{
    int n,msb;
    printf("%d",sizeof(int));
    printf("Enter the number");
    scanf("%d",&n);
    msb = 1 << (BITS -1);
    printf("%d\n",BITS);
    printf("%d\n",msb);
    if(n & msb)
        printf("MSB of %d is set(1).",n);
        else
        printf("MSB of %d is unset(0).",n);
        return 0;
}