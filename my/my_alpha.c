/*
 * File: my_alpha()
 * Pre: No input needed
 * Post: Prints out all the letters in the alphabet (a-z)
 */

#include "../lib/my.h"

void my_alpha()
{
  //using ascii values
  //for loop that prints out the alphabet using the ascii values
  //Using my_str/my_char?
  char i='a';
  for(i;i<='z';i++)
    {
      my_char(i);
    }
}
