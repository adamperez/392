/*
 * File: my_digits.c
 * Pre: No input needed
 * Post: Prints out the digits 0 -> 9
 */

#include "../lib/my.h"

void my_digits()
{
  //same steps of my_alpha
  //using ascii values?
  char i='0'; 
  for(i;i<='9';i++)
    {
      my_char(i);
    }
}
