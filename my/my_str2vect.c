/*
 * File: my_str2vect.c
 * Pre: Takes in a string (char*)
 * Post: Returns the string as a vector, deliniated by spaces
 */

#include "../lib/my.h"

char** my_str2vect(char* string)
{
  //char** ret;  //vector to return
  int i=0;
  int j=0;
  char test; //will test if space or string
  int count=0; //number or strings
  int words;
  int end;

  for(; *(string)==' ' || *(string)=='\t';string++);
  
  for(count=1,i=0,test=1; string[i]!='\0'; i++)
    {
      if(string[i]==' '||string[i]=='\t')
	{
	  if(test==1)
	    {
	      test=0;
	    }
	}
      else if(string[i]!=' ' && string[i]!='\t')
	{
	  if(test==0)
	    {
	      test=1;
	      count++;
	    }
	}
	 
    }
  
  /*
  for(count,i;string[i]!='\0';i++)
    {
      if(string[i]!=' ' || string[i]!='\t')
	{
	  count++;
	}
    }
  */
  /*
  my_str("Word Count: ");
  my_int(count);
  my_char('\n');
  //Above to test if the words are being counted
  */

  char** ret = (char**)xmalloc((count+1)*sizeof(char*)); //malloc for new vector
  /*
  for(end=0,words=0,count=0,i=0,test=1; string[i]!='\0'; i++)
    {
      if(string[i]==' ' || string[i]=='\t')
	{
	  if(test==1)
	    {
	      test=0;
	      ret[count] = (char*)xmalloc(sizeof(char)*(words+1));
	      ret[count++] = my_strnconcat(&string[end],"\0",words);
	    }
	}
      else if(string[i]!=' ' && string[i]!='\t')
	{
	  words++;
	  if(test==0)
	    {
	      test=1;
	      //words=0;
	      count=0;
	      end=i;
	      //my_int(words);
	    }
	  //words++;
	}
    }
  */
  
  for(i=0,j=0,count=0;string[i]!='\0';count++,i=j)
    {
      //looks for first non-whitespace char
      for(;string[i]!='\0' && (string[i]==' ' || string[i]=='\n' || string[i]=='\t'); i++);
      
      //if at the end, break
      if(string[i]=='\0')
	break;

      j = i+1; //compensates for \0
      
      //end of word
      for(; string[j]!='\0' && string[j] != ' ' && string[j]!='\n' && string[j]!='\t'; j++);
      
      ret[count] = (char*)xmalloc((sizeof(char)*((j-i) +1)));
      my_strncpy(ret[count], &string[i], j-i);
    }
  
  ret[count] = NULL;
  return ret;
}
