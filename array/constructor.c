#include <stdlib.h>
#include "array.h"


void* createArray(int s){
  Array *a = (Array*) malloc(sizeof(Array));
  a->size = s;
  a->arr = (int*) malloc(a->size*sizeof(int));
  a->length = s;
  fillArray(a);
  return a;
}
