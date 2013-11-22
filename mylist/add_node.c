/*
 * File: add_node.c
 * Pre: Takes in a node and the head of the list
 * Post: Adds the given node at before the head, updates the head element
 */

#include "../lib/mylist.h"

void add_node(t_node* node, t_node** head)
{
  //t_node*: NULL? Add nothing, t_node**: NULL? do nothing  
  if (node==NULL||head==NULL)
    return;
  //add before head
  //update haed after insert
  node->next = *head;
  *head = node;

}
