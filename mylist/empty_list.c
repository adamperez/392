/*
 * File: empty_list.c
 * Pre: Takes in the list
 * Post: deletes entire list
 */

#include "../lib/mylist.h"

void empty_list(t_node** list)
{
  if(list==NULL)
    return;
  //DO NOT FORGET TO FREE AS YOU DELETE
  while(*list!=NULL)
    remove_node(list);  //no pointer b/c list would become the node
}
