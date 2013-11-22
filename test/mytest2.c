/*
 * Test main for Assignment 2
 */

#include "../lib/my.h"

int main()
{
  my_str("my_find:\n");
  my_str(my_find("hello",'l'));
  my_str(my_find("hello",'x'));
  // my_find("hello",NULL);
  my_str(my_find(NULL,'x'));
  my_char('\n');
  my_str(my_find("champion",'m'));
  
  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  my_str("my_rfind:\n");
  my_str(my_rfind("hello",'l'));
  my_str(my_rfind("hello",'x'));
  //my_rfind("hello",NULL);
  my_str(my_rfind(NULL,'x'));
  my_char('\n');
  my_str(my_rfind("raven",'v'));

  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  char strcat1[]="hello\0     ";
  char strcat2[]="world";
  my_str("my_strcat:\n");
  my_str(my_strcat(strcat1,strcat2));
  my_char('\n');
  my_str(my_strcat(NULL,"heyayaya")); //RETURN NULL
  my_char('\n');
  my_str(my_strcat("killah",NULL)); //RETURN "killah"

  my_char('\n');
  my_str("=====");
  my_char('\n');

  my_str("my_strcmp:\n");
  my_int(my_strcmp("adam","sarah")); //return -
  my_char('\n');
  my_int(my_strcmp("adam","adam")); //return 0
  my_char('\n');
  my_int(my_strcmp("bread","add")); //return +
  my_char('\n');
  my_int(my_strcmp(NULL,NULL)); //return 0
  
  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  my_str("my_strncmp:\n");
  my_int(my_strncmp("hello","hell",3)); //return +
  my_char('\n');
  my_int(my_strncmp("hell","hello",4)); //return -
  my_char('\n');
  my_int(my_strncmp("apple","orange",-1)); //return 0 (equal)
  
  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  my_str("my_strconcat:\n");
  my_str(my_strconcat("food","n00b")); //allocate 9, return "foodn00b"
  my_char('\n');
  my_str(my_strconcat(NULL,"n00b")); //allocate 5, return "n00b"
  my_char('\n');
  my_str(my_strconcat("food",NULL)); //return first str

  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  my_str("my_strnconcat:\n");
  my_str(my_strnconcat("hello","world",2)); //return "hellowo"
  my_char('\n');
  my_str(my_strnconcat(NULL,"world",3)); //return "wor"
  my_char('\n');
  my_str(my_strnconcat("hello",NULL,2)); //return "hello"

  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  my_str("my_stdstrnconcat:\n");
  my_str(my_stdstrnconcat("hello","world",2)); // return "hellowo"
  my_char('\n');
  my_str(my_stdstrnconcat("hello","dude",-1)); //return NULL
  my_char('\n');
  my_str(my_stdstrnconcat("hello","dude",6)); //return NULL

  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  char foo[]="hello";
  char bar[]="world";
  char test[]="yes";
  char test2[]="meow";
  char empty[]="";
  my_str("my_strcpy:\n");
  my_str(my_strcpy(foo,bar)); //return s1 as "world"
  my_char('\n');
  my_str(my_strcpy(test,empty)); //return s1 as ""
  my_char('\n');
  my_str(my_strcpy(test2,NULL)); //return "hello"
 
  my_char('\n');
  my_str("=====");
  my_char('\n');

 
  char strntest1[]="world";
  char strntest2[]="test";
  my_str("my_strncpy:\n");
  my_str(my_strncpy(strntest1,"world",2)); //return "wo"
  my_char('\n');
  my_str(my_strncpy(strntest2,NULL,2)); //return null
 
  
  my_char('\n');
  my_str("=====");
  my_char('\n');
  
  my_str("my_strdup:\n");
  my_str(my_strdup("hi")); //allocate new str and copy s1
  my_char('\n');
  my_str(my_strdup("hello earth"));
  my_char('\n');
  my_str(my_strdup(NULL));
  my_char('\n');
  my_str(my_strdup(""));
  my_char('\n');
  
}
