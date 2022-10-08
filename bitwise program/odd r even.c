#include<stdio.h>
int main()
{
    int n,c;
    printf("enter the value");
    scanf("%d",&n);
    c=n&1;
    if(c==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
    return 0;
}
