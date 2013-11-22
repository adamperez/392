/*
 * File: remove_node.c
 * Pre: Takes in the head
 * Post: Removes head, updates pointer
 */

#include "../lib/mylist.h"

void *remove_node(t_node **head)
{
  //remove head, return head element, update head
  t_node *temp;
  void* ret = NULL;
  if(head==NULL||*head==NULL)
    return NULL;

  temp = *head;
  *head = (*head)->next; //casts head pointer as a node, next doesn't need to be node
  //free(temp);
  //head = NULL;
  temp->next = NULL;
  ret = temp->elem;
  return ret; 
}
