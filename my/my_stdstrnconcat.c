/*
 * File: my_stdstrnconcat.c
 * Pre: Takes in two strings nad an int
 * Post: Similar to my_strnconcat, except if int is > or negative that s2, return null
 */

#include "../lib/my.h"

char* my_stdstrnconcat(char* s1, char* s2, int n)
{
  int lens2=my_strlen(s2);
  if(n>lens2 || n<0)
    return NULL;
  return my_strnconcat(s1, s2, n);
}
