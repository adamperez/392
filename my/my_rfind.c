/*
 * File: my_rfind.c
 * Pre: Takes in a string and a char to search for
 * Post: Reurns the last instance of the char by returning pointer position
 */

#include "../lib/my.h"

char* my_rfind(char* str, char c)
{
  int i;
  int pos;
  if(str==NULL)
    return NULL;
  for(i=0,pos=-1;str[i]!='\0';i++)
    {
      if(c==str[i])
	pos=i;
    }
  return &str[pos];
}
