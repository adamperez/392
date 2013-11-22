/*
 * File: add_elem.c
 * Pre: Takes in anything (void*) and the head (t_node**)
 * Post; Adds element 
 */

#include "../lib/mylist.h"

void add_elem(void* in, t_node** head)
{
  add_node(new_node(in, NULL), head);
  //add_node(new_node()) -> creates a new node, then adds the node to list
}
