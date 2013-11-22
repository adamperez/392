/*
 * File: traverse_char.c
 * Pre: Takes in list
 * Post: Prints out the list using chars
 */

#include "../lib/mylist.h"

void traverse_char(t_node* head)
{
  t_node* node = head;
  my_str("Printing Linked List: ");
  while(node!=NULL)
    {
      my_char(*(char*)node->elem);
      my_char(' ');
      node=node->next;
    }
}
