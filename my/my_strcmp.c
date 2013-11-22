/*
 * File: my_strcmp.c
 * Pre: Takes in two separate strings
 * Post: Returns a number, based if the strings are equal or not
 */

#include "../lib/my.h"

int my_strcmp(char* s1, char* s2)
{
  int i=0;
  
  if(s1==NULL || s2==NULL)
    return -1;
  
  while((s1[i] && s2[i])!='\0')
    {
      if (s1[i]>s2[i])
	return 1;
      if (s1[i]<s2[i])
	return -1;
      i++;
    }
  return 0;
}
