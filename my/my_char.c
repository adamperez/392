/*
 * File: my_char.c
 * Pre: takes in char
 * Post: prints out inputted char
 */

#include "../lib/my.h"

void my_char(char c)
{
  write(1,&c,1);
}
