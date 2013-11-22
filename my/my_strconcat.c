/*
 * File: my_strconcat.c
 * Pre: Takes in two separate strings
 * Post: Allocates memory for a new string with s1 & s2 concatenated
 */

#include "../lib/my.h"

char* my_strconcat(char* s1, char* s2)
{
  int i=0;
  int j=0;
  int lens1=my_strlen(s1);
  int lens2=my_strlen(s2);
  char* s3 = (char*)xmalloc(lens1+lens2+1);
  
  if (s1==NULL && s2==NULL)
    return NULL;
  if (s2==NULL)
    return s1;
  if (s1==NULL)
    return s3=s2;
  
  for(i;i<lens1;i++)
    {
      s3[i]=s1[i];
    }
  for(j;j<lens2;i++,j++)
    {
      s3[i]=s2[j];
    }
  s3[i]='\0';
  return s3;
}
