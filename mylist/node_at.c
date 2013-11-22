/*
 * File: node_at.c
 * Pre: Takes in a node and an int
 * Post: Returns the node at the givent place (int)
 */

#include "../lib/mylist.h"

t_node *node_at(t_node *node, int n)
{
  //return value of node at int pos
  int i;
  t_node *temp;
  if(node==NULL||n<=0)
    return;
  for(i=1;i<n,node->next!=NULL;i++)
    {
      temp->next = node->next;
    }
  return temp;
}
