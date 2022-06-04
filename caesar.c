#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{

  // check that there is one command line argument

  if(argc != 2)
  {
      printf("usage:/caesar key \n");
      return 1;
  }
  string key = argv[1];

  //check that the input is a digit

  for(int i = 0; i < strlen(argv[1]); i++)
  {
      if(!isdigit(argv[1][i]))
      {
          printf("usage:./caesar key \n");
          return 1;
      }
  }

  //get plaintext from user

  string plaintext = get_string("plaintext:");

  //convert key to integer

  int k = atoi(key);
  printf("cliphertext:");

  //obtain cliphertext

  for(int i = 0; i < strlen(plaintext);i++)
  {
      if(isupper(plaintext[i]))
      {
          printf("%c",(((plaintext[i]-65)+k)%26)+65);
      }
      else if(islower(plaintext[i]))
      {
          printf("%c",(((plaintext[i]-97)+k)%26)+97);
      }
      else
      {
          printf("%c",plaintext[i]);
      }
  }
  printf("\n");
}