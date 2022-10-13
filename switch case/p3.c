#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the alphabet \n");
    scanf("%c",&alpha);
    switch(alpha)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
         case 'E':
        case 'I':
        case 'O':
        case 'U':
         printf("\n%C alphabet letter is vowel",alpha);
         break;

        default:
         printf("\n%C alphabet letter is consonant",alpha);


    }
    return 0;
}