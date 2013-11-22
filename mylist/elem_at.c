/*
 * File: elem_at.c
 * Pre: Takes in a node and an int
 * Post: Returns the element (void*) at int pos
 */

#include "../lib/mylist.h"

void* elem_at(t_node* node, int n)
{
  int i;
  t_node* temp;
  // return void* @ int 
  if(node==NULL)
    return;
  if(n<=0)
    return node->elem;
  //return node at head?
  for(i=1;i<n,node->next!=NULL;i++)
    {
      temp->next = node->next;
    }
  return temp->elem;
}
