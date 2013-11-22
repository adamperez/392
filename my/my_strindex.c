/*
 * File: my_strindex.c
 * Pre: Takes in a string (char*) and a character to search for (char)
 * Post: Returns the position of the character, if found; if not, returns -1
 */

#include "../lib/my.h"

int my_strindex(char* str, char c)
{
  int i;
  if(str==NULL)
    return -1;
  else
    {
      for(i=0;str[i]!='\0';i++)
	{
	  if(c==str[i])
	    return i;
	}
      return -1;
    }
}
  
