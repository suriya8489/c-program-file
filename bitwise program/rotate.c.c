#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rotate,Msb,size,t,Lsb,r1;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter number of rotation:\n");
    scanf("%d"&rotate);
    t=n;
    size = sizeof(int)*8;
    rotate %= size;
    printf("After right rotation the values is =%d\n",rotate);
    r1=rotate;
    while (rotate--)
    {
        Msb = (n >> size) & 1;
        n = (n << 1) | Msb;
    }
    while (r1--)
    {
        Lsb = t & 1;
        t = (t >> 1) & (~(1<<size));
        t= t | (Lsb<<size);
    }
    printf("After rigth rotation the value is = %d \n",t);
    printf("After left rotation the value is =%d\n",n);
    return 0;
}
    
    
