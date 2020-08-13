#include <stdio.h>
#include "array.h"

int getLength(Array *a)
{
  return a->length;
}

int getSize(Array *a)
{
  return a->size;
}

void display(const Array *a)
{
  printf("%s\n", "Your array:");
  for (int i = 0; i < a->length; i++)
  {
    printf("%d\n", a->arr[i]);
  }
}
