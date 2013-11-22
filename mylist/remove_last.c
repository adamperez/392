/*
 * File: remove_last.c
 * Pre: Takes in the head
 * Post: remvoes the last element
 */

#include "../lib/mylist.h"

void *remove_last(t_node** head)
{
  int i;
  t_node *search;
  t_node *temp;
  void *ret = NULL;
  
  if(head==NULL||*head==NULL)
    return NULL;

  search = *head;
  
  while(search->next->next!=NULL) //checks the end of the list
    {
      search = search->next;
    }
  temp = search->next;
  search->next = NULL;
  ret = temp->elem;
  free(temp);
  return ret;
}
