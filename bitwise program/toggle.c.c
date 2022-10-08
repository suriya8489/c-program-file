#include<stdio.h>
int main()
{
    int n,b,new;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter nth bit to set (0-31):");
    scanf("%d",b);
    new = n ^ (1 << b);
    printf("Number after toggling %d bit:%d(in decimal)\n",n,new);
    return 0;
}