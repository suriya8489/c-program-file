#include<stdio.h>
int main()
{
    int n,b,new;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter nth bit to set (0-31):");
    scanf("%d",b);
    new = (1 << b) | n;
    printf("Bit set sucessfully.\n\n");
        printf("Number before setting %d bit:%d(in decimal)\n",n,n);
        printf("Number before setting %d bit:%d(in decimal)\n",n,new);
        return 0;
}