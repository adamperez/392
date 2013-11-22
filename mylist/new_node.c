/*
 * File: new_node.c
 * Pre: Takes in any item (void*) and a new node (t_node*)
 * Post: Creates a node containing the new element 
 */

#include "../lib/mylist.h"

t_node *new_node(void *in, t_node *node)
{
  //xmalloc new node of type void*
  //void in goes in the elem part
  //node goes in next
  //if null, doesn't matter
 
  t_node *new_node = (t_node*)xmalloc(sizeof(t_node));
  new_node->next = node;
  new_node->elem = in;
  return new_node;
}
