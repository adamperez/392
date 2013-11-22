/*
 * Test main for Assignment 1
 */

#include "../lib/my.h"

int main()
{  
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

  my_int(my_strlen("x")); //return length as 6
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
  
  
  my_str("\nVEC2STR\n");
  //char* vect = (char*)xmalloc(sizeof(20));
  //char** vect = new char*[5]{"I"};
  char* vect[5];
  vect[0] = "I";
  vect[1] = "hate";
  vect[2] = "this";
  vect[3] = "fucking test";
  vect[4] = NULL;
  my_str("=====\n");
  my_str("-->");
  my_str(my_vect2str(vect));
  my_str("<--");
  my_char('\n');
  
  
  my_str("\nSTR2VECT\n");
  //my_str(my_str2vect("   this is    a    test"));
  
  char** strtest;
  //my_str2vect(strtest);
  int i;
  strtest = my_str2vect("     this  is      a fucking   test");
  
  for(i=0;strtest[i]!=NULL;i++)
    {
      my_str(strtest[i]);
      my_char('|');
    }
  
  //my_str(strtest);
  return 0;
}
