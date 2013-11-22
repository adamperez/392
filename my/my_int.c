/*
 * File: my_int.c
 * Pre: Takes int as argument
 * Post: Prints given integer
 */

#include "../lib/my.h" 

void my_int(int in)
{
  unsigned int temp;
  unsigned int exp=1;
  
  if (in<0)
    {
      my_char('-');
      in = -in;
    }
  /*  
  while(temp!=0)
    {
      temp/=10;
      exp*=10;
    }
  
  while(exp!=0)
    {
      temp%=exp;
      exp/=10;
      if (exp==0)
	return;
      c=temp/exp+'0';
      my_char(c);
      }
    
    for(exp=1;temp!=0;exp*=10)
  {
    temp=in;
      temp/=10;
      }
  */
  
  
  for(exp=1, temp=in; temp/=10;temp!=0, exp*=10);
  
  for(temp=in; exp!=0; temp%=exp,exp/=10)
    {
      my_char(temp/exp+'0');
    }
  
  /*Gabarro's Correction:
    
    unsigned int u;
    unsigned int e;
    u=in;
    if(in<0)
    {
       my_char('-');
       u=-in;
    }
    
    for(e=1,(u/e)>10; e*=10)
    ;

    for(;e;u%=e,e/=10)
      my_char('0'+(u/e));
    
  */
}
