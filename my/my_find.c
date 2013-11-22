/*
 * File: my_find.c
 * Pre: Takes in a string and a character
 * Post: Searches the string for the character, returns the pointer to the character
 */

#include "../lib/my.h"

char* my_find(char* str, char c)
{
  int i;
  if(str==NULL)
    return NULL;
  else 
    { 
      for(i=0;str[i]!='\0';i++)
	{
	  if(c==str[i])
	    return &str[i]; //return rest of string?
	}
    }
  return NULL;
}

