/*
 * Test main for Assignment 1
 */

#include "../lib/my.h"

int main()
{
  my_char('x');
  my_char('\n');
  my_char('1');
  my_char('\n');
  my_char('-');
  my_char('\n');

  my_str("Hello");
  my_str("");
  my_str(NULL); //do nothing
  my_char('\n');
  my_str("I love programming");

  my_char('\n');
  my_str("=====");
  my_char('\n');

  my_int(-123);
  my_char('\n');
  my_int(123);

  my_char('\n');
  my_str("=====");
  my_char('\n');

  my_num_base(-12,"0123456789"); // --> -12
  my_char('\n');
  my_num_base(9,"RTFM");
  my_char('\n');
  my_num_base(8,"!"); // --> "!!!!!!!!"
  my_char('\n');
  my_num_base(9,NULL); //error message, no base

  my_char('\n');
  my_str("=====");
  my_char('\n');

  my_alpha(); //should print a-z
  my_char('\n');
  my_digits(); //should print 0-9

  my_char('\n');
  my_str("=====");
  my_char('\n');
  my_str("STRINDEX/RINDEX");
  my_char('\n');
  my_int(my_strindex("hello",'l')); //should return 2
  my_char('\n');
  my_int(my_strindex("hello",'x')); //return -1
  my_char('\n');
  my_int(my_strindex(NULL,'x')); //do nothing?
  my_char('\n');
  my_int(my_strrindex("hello",'l')); //should return 3
  my_char('\n');
  my_int(my_strrindex("hello",'x')); //return -1
  my_char('\n');
  my_int(my_strrindex(NULL,'x')); //do nothing?

  my_char('\n');
  my_str("=====");
  my_char('\n');

  my_int(my_strlen("length")); //return length as 6
  my_char('\n');
  my_int(my_strlen(""));
  my_char('\n');
  my_int(my_strlen(NULL)); //return -1

  my_char('\n');
  my_str("=====");
  my_char('\n');

  char foo[] = "hello";
  char foo2[] = "tested";
  my_revstr(foo); //returns "olleh" and 5
  my_char('\n');
  my_revstr(foo2);
  my_revstr(""); //return 0 and ""
  my_revstr(NULL); //do nothing
  my_char('\n');
}
