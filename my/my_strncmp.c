/*
 * File: my_strncmp.c
 * Pre: Takes in two strings and a number
 * Post: Compares the first string to the first n-characters of the second string
 */

#include "../lib/my.h"

//DOES NOT PROPERLY WORK, COMPARES BUT NOT FULLY (9/18)

int my_strncmp(char* s1, char* s2, int n)
{
  int i=0;
  int length=my_strlen(s2);
  if(s1==NULL||s2==NULL)
    return -1;
  if(n<0)
    return -1;
 
  while((i<n) && (s1[i]!='\0') && (s2[i]!='\0'))
    {
      if (s1[i]>s2[i])
	return 1;
      if (s1[i]<s2[i])
	return -1;
      i++;
    }
  return 0;
}
