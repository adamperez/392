/*
 * File: traverse_string.c
 * Pre: Takes in the list
 * Post: Prints out the list of strings
 */

#include "../lib/mylist.h"

void travere_string(t_node* head)
{
  t_node* node = head;
  my_str("Printing Linked List: ");
  while(node!=NULL)
    {
      my_str(node->elem);
      my_char(' ');
      node=node->next;
    }
}
