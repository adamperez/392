/*
 * File: my_strdup.c
 * Pre: Takes in one string
 * Post: Duplicates the original string into a new memory location
 */

#include "../lib/my.h"

char* my_strdup(char* str)
{
  int len = my_strlen(str);
  char* str2 = (char*)xmalloc(len+1);
  int i;
  if (str==NULL)
    return NULL;
  for(i=0;i<len;i++)
    {
      str2[i]=str[i];
    }
  return str2;
}
