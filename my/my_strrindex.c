/*
 * File: my_strrindex.c
 * Pre: Takes in a string (char*) and a letter to search for (char)
 * Post: Returns the position of the first instance of the charater by searching from the back end of the string
 */

#include "../lib/my.h"

int my_strrindex(char* str, char c)
{
  int i;
  int pos;
  if(str==NULL)
    return -1;  
  for(i=0,pos=-1;str[i]!='\0';i++)
    {
      if(c==str[i])
	pos=i;
    }
  return pos;
}
