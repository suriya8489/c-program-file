#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Get input of the height
    int n;
    do
    {
      n = get_int("Height:");
    }
    while(n < 1 || n > 8);

    //Print desired pyramid height
    for(int i = 0;i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
           if(i+j < n-1)
           printf(" ");
           else
           printf("#");
        }
           printf("\n");
    }

}