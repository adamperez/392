/*
 * File: my_atoi.c
 * Pre: takes in a string (of numbers)
 * Post: returns the string as an integer
 */

#include "../lib/my.h"

int my_atoi(char* strint)
{
  char check=1;
  if(strint[0] == '-')
    {
      check = -1;
      strint = &strint[1];
    }
  int i;
  int ret;
  for(i=0, ret=0; strint[i]!='\0' && strint[i]!='.'; i++)
    {
      ret *= 10;
      ret += strint[i] - '0';
    }
  return ret*check;
}
