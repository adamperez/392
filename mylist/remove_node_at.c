/*
 * File: remove_node_at.c
 * Pre: Takes in the head element and an int
 * Post: Removes the node at post int
 */

#include "../lib/mylist.h"

void *remove_node_at(t_node** head, int n)
{
  int i;
  t_node *search;
  t_node *temp;
  void* ret = NULL;

  if(head==NULL||*head==NULL)
    return NULL;

  search = *head;

  if((n<1) || (*head)->next==NULL)
    remove_node(head);
  else
    {
      //remove from proper location
      for(i=1; i<n && search->next!=NULL; i++)
	{
	  search = search->next;
	}
      temp = search->next;
      search->next = temp->next; //
      //free(temp);
      ret = temp->elem;
      temp = NULL;
    }
  return ret;
}
