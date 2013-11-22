/*
 * File: my_num_base.c
 * Pre: Takes in a number (int) and a "base" (char*)
 * Post: Returns the inputted number in the "base" provided
 *
 */

#include "../lib/my.h"

void my_num_base(int in, char* base)
{
  /*
  int temp;
  int base=1;
  int length=my_strlen(str);

  if (str == NULL)
    my_str("Please provide a value for a base conversion.");
  
  if(in<0)
    {
      my_char('-');
      in=-in;
    }
  for(base=1,temp=in;temp/=length;temp!=0,base*=length);
  
  for(temp=in; base!=0; temp%=base,base/=length)
    {
      my_char(temp/base+'0');
    }
  */

  int r;
  unsigned int e;
  unsigned int u;
  
  if((r=my_strlen(base))>0)
    {
      if(in<0)
	{
	  my_char('-');
	  u=-in;
	}
      if(r==1)
	{
	  while(u-->0)
	    my_char(*base);
	}
      else
	{
	  for(e=1;(u/e)>=r;e*=r)
	    ;
	  for(;e;u%=e,e/=r)
	    {
	      my_char(base[u/e]);
	    }
	}
    }
  else
    {
      my_str("YOUR BASE IS SHIT\n");
    }
}
