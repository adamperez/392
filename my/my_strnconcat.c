/*
 * File: my_strnconcat.c
 * Pre: Takes in two separate strings and an int
 * Post: Returns new string with first string and first n-characters of second string concatenated
 */

#include "../lib/my.h"

char* my_strnconcat(char* s1, char* s2, int n)
{
  int i=0;
  int j=0;
  int lens1=my_strlen(s1);
  int lens2=my_strlen(s2);  
  if(n>lens2)
    {
      n=lens2;
    }

  char* s3 = (char*)xmalloc(lens1+n+1);

  if(s1==NULL && s2==NULL)
    return NULL;
  if(s2==NULL)
    return s1;
  if(s1==NULL)
    return s3=s2;
  
  for(i;i<lens1;i++)
    {
      s3[i]=s1[i];
    }
  for(j;j<n;i++,j++)
    {
      s3[i]=s2[j];
    }
  s3[i]='\0';  
  return s3;
}
