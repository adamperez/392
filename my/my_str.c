/*
 * File: my_str.c
 * Pre: Takes in a char*
 * Post: pints out char* in order of appearance
 */

#include "../lib/my.h"

void my_str(char* str)
{
  //using my_char
  //some sort of loop that will go through and print each char

  int i=0;
  if (str != NULL)
    {
      while(str[i]!='\0')
	{
	  my_char(str[i++]);
	}
    }
}
