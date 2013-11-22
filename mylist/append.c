/*
 * File: append.c
 * Pre: Takes in a new node and the head pointer
 * Post: Adds the node at the end of the list
 */

#include "../lib/mylist.h"

void append(t_node* node, t_node** head)
{
  t_node *search;
  search = *head;
  if(node==NULL || head==NULL)
    return;
  
  while(search->next!=NULL) //modify search, not null
    {
      search = search->next; //continues until proper position
    }
  search->next = node; 
  //once out of loop, you are at right position, then you can just place the node at the correct position
}
