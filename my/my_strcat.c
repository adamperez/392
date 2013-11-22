/*
 * File: my_strcat.c
 * Pre: Takes two strings at input
 * Post: concatenates first string to second string, if enough memory is allocated
 */

#include "../lib/my.h"

char* my_strcat(char* s1, char* s2)
{
  int i=my_strlen(s1);
  int j=0;

  if(s1==NULL)
    return NULL;
  if(s2==NULL)
    return s1;
  
  while(s2[j]!='\0')
    {
      s1[i]=s2[j];
      i++;
      j++;
    }
  return s1;
}
