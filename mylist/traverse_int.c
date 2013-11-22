/*
 * File: traverse_int.c
 * Pre: Tkaes in the list
 * Post: Prints out list of ints
 */

#include "../lib/mylist.h"

void traverse_int(t_node *head)
{
  t_node* node = head;
  my_str("Printing Linked List: ");
  while(node!=NULL)
    {
      my_int(*(int*)node->elem);
      my_char(' ');
      node=node->next;
    }
}
