/*
 * File: my_strcpy.c
 * Pre: Takes in a string
 * Post: Copies the second string into the first string
 */

#include "../lib/my.h"

char* my_strcpy(char* s1, char* s2)
{
  int i=0;
  if(s2==NULL||s2[0]=='\0')
    {
      s1[0]='\0';
      return s1;
    }
  while(s2[i]!='\0')
    {
      s1[i]=s2[i];
      i++;
    }
  s1[i]='\0';
  return s1;
}

