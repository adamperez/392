/*
 * File: my_strncpy.c
 * Pre: Takes in two strings and an int
 * Post: Copies first n-characters from string 2 into string 1
 */

#include "../lib/my.h"

//DOES NOT WORK 9/18

char* my_strncpy(char* s1, char* s2, int n)
{
  int i=0;
  int length = my_strlen(s2);
  if(s2==NULL)
    return s1;
  if (n>length)
    {
      n=length;
    }
  if(s1==NULL||s2[0]=='\0'||n<0)
    {
      s1[0]='\0';
      return s1;
    }
  for(i;i<n;i++)
    {
      s1[i]=s2[i];
    }
  s1[i]='\0';
  return s1;
}
