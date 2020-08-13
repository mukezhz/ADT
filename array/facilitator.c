#include <stdlib.h>
#include "array.h"

void append(Array *a, int num)
{
  if (a->size == a->length)
  {
    int *b = (int *)malloc(2 * a->size * sizeof(int));
    for (int i = 0; i < a->length; i++)
    {
      b[i] = a->arr[i];
    }
    a->size = a->size * 2;
    free(a->arr);
    a->arr = b;
    b = NULL;
  }
  a->arr[(a->length)++] = num;
}

int pop(Array *a)
{
  int tmp = a->arr[a->length - 1];
  a->arr[a->length - 1] = -1;
  a->length--;
  return tmp;
}

void clean(Array *a)
{
  free(a->arr);
  a->arr = NULL;
  free(a);
  a = NULL;
}
