#include<stdio.h>
#define INT_SIZE sizeof(int) *8
int main()
{
    int num,index,i;
    int bin[INT_SIZE];
    printf("Enter the number");
    scanf("%d",&num);
index = INT_SIZE - 1;
    printf("%d",index);
    while (index >= 0)
    {
        bin[index] = num & 1;
        if (index>=0)
        {
            printf("%d\n",bin[index]);
        }
        index--;
    num >>= 1;
    }
    printf("converted binary:");
    for ( i = 0; i < INT_SIZE; i++)
    {
        printf("%d",bin[i]);
    }
    
    return 0;
}