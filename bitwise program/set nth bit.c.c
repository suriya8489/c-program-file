#include<stdio.h>
int main()
{
    int n,b,new;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter nth bit to set (0-31):");
    scanf("%d",b);
    new = (n >> b) & 1;
    printf("Number after get %d bit:%d(in decimal)\n",n,new);
    return 0;
}