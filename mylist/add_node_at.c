/*
 * File: add_node_at.c
 * Pre: Takes in a node, the head and an int
 * Post: Adds the node at position (int)
 */

#include "../lib/mylist.h"

void add_node_at(t_node *node, t_node **head, int n)
{
  int i;
  t_node *search; //shifting node
  search = *head;

  if(node==NULL || head==NULL)
    return;
  if (n<=0)
    add_node(node, head);
  else
    {
      //add at right location
      for(i=1;i<n,search->next!=NULL;i++)
	{
	  search = search->next; //shift nodes down to prepare for addition
	}
      node->next = search->next; //node that is being added gets pos of search
      search->next = node; // places node
    }
}
