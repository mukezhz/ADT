/*
 * Array ADT
 * */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main(int argc, char *argv[])
{
  Array* a =(Array*) createArray(5);
  display(a);
  append(a,100);
  printf("After appending\n");
  display(a);
  printf("%d len\n",getLength(a));
  printf("%d popped\n",pop(a));
  printf("%d len\n",getLength(a));
  display(a);
  insert(a, 7, 50);
  display(a);
  return 0;
}
