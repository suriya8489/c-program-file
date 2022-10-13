
#include<stdio.h>
int main()
{
int a,c;
printf("enter the nuumber");
scanf("%d",&a);
c=a%2;
switch(c==0)
{
    case 0:
      printf("%d number is even",a);
      break;
    default:
      printf("%d number is odd",a);

}
return 0;
}