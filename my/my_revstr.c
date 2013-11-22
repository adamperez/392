/*
 * File: my_revstr.c
 * Pre: Takes in string (char*)
 * Post: Returns reversed string and length of string
 */

#include "../lib/my.h"

int my_revstr(char* str)
{
  char temp;
  int i=0;
  int len=my_strlen(str);
  int end; // length - 1 (gets last post) - i (front char pos)
  int halfway = len/2; //halfway through word

  if(str==NULL)
    return -1;
  for(i;i<halfway;i++)
    {
      end = len-1-i; //gets last spot needed to swap
      temp = str[i]; //first char in temp
      str[i] = str[end]; //swap first char with last char
      str[end] = temp; //replace last pos with first char
    }
  my_str(str);
  return len;
}
