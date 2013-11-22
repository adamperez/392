/*
 * File: count_nodes.c
 * Pre: Takes in the linked list
 * Post: Returns the number of items in the list
 */

#include "../lib/mylist.h"

int count_nodes(t_node* head)
{
  int count=0;
  
  if(head==NULL)
    return;
  
  while(head!=NULL)
    {
      head=head->next;
      count++;
    }
  return count;
}
