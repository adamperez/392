/*
 * File: xmalloc.c
 * Pre: Takes in an integer
 * Post: Allocates memory based in given integer
 */

#include "../lib/my.h"

void *xmalloc(int n)
{
  void *p;
  p=malloc(n);
  if (p==0)
    {
      my_str("VIRTUAL MEMORY EXHASUTED\n");
      exit(1);
    }
  return p;
}
