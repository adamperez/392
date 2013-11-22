/*
 * Test file for assignemnt 3 (Linked List)
 */

#include "../lib/mylist.h"

int main()
{
  t_node *new_node("hello",);
  t_node *new_node(NULL,);
  t_node *new_node("hi",NULL);

  void add_node("hi",head);
  void add_node(NULL,head); //adds nothing
  void add_node("hi",NULL); // do nothing
  
  void add_elem("test",head);
  void add_elem(NULL,head); // do nothing
  void add_elem("test",NULL); //do ...?

  void append(node,);
  void append(NULL,);
  void append(,NULL);
  
  void add_node_at(node,head,0); //add at head
  void add_node_at(node,head,-5); //add at head
  void add_node_at(node,head,4); 
  
  void *remove_node(head);
  void *remove_node(NULL);
  
  void *remove_node_at(node,head,0);
  void *remove_node_at(node,head,-5);
  void *remove_node_at(node,head,4);

  void *remove_last(node);
  void *remove_last(NULL);
  
  int count_nodes(head);
  int count_nodes(NULL);

  void empty_list(head);
  void empty_list(NULL);

  t_node *node_at(node,2);
  t_node *node_at(NULL,2);
  t_node *node_at(node,0); //return head
  t_node *node_at(node,-1);//return head
  t_node *node_at(node,500);//return tail
  t_node *node_at(node,NULL);
  
  void *elem_at(node,0); //return element at head
  void *elem_at(node,2);
  void *elem_at(NULL,0);
  void *elem_at(node,NULL);

  void traverse_char(node);
  
  void traverse_string(node);
  
  void traverse_int(node);
}
  
