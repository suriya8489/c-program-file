#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    
  if (n & 1)
    printf("LSB of %d is set(1).", n);
    else
    printf("LSB of %d is set(0).", n);
    return 0;  
    
}
