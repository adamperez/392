/*
 * File: my_strlen.c
 * Pre: Takes in a string (char*)
 * Post: Returns length of string, empty strings return 0, null string returns -1
 */

#include "../lib/my.h"

int my_strlen(char* str)
{
  int i=0;
  // check if str is null
  if (str == NULL)
    return -1;
  //check if str is empty
  while(str[i]!='\0')
    {
      i++;
    }
  return i;
}
