/*
 * File: my_vec2str.c
 * Pre: Takes in a vector of strings
 * Post: Turns the vector into a string (Char*)
 */

#include "../lib/my.h"

char* my_vect2str(char** vect)
{
  char* str;
  int i;
  int length;
  int total;

  if(vect==NULL)
    return NULL;
  if(*vect==NULL)
    return NULL;
  
  for(i=0,length=0;vect[i]!=NULL;i++) //gets length of vector for allocation
    {
      length+=my_strlen(vect[i]);
    }

  str = (char*)xmalloc((length+1)*sizeof(char));  //allocate
  
  /*
  for(i=0;vect[i]!=NULL;i++)
    {
      str = my_strcat(str,vect[i]);
      str = my_strcat(str," ");
    }
  str = my_strcat(str,'\0'); //end string
  */
  
  for(total=0,i=0;vect[i]!=NULL;i++)  //goes through for all strs in vect
    {
      for(length=0;vect[i][length]!='\0';length++,total++) //goes through for every character
	{
	  str[total] = vect[i][length];
	}
      str[total++] = ' '; //space between strs
    }
  
  str[total-1] = '\0'; //ends string
  return str;
}
  
