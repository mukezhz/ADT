#include <stdio.h>
#include "array.h"

void fillArray(Array* a){
  printf("Fill the %d elements\n",a->length);
  for(int i=0; i<a->length; i++) {
    scanf("%d", &(a->arr[i]));
  }
}


void insert(Array* a,int index,int num) {
  if(a->size <= index){
    printf("Unable to insert at that location :(\n");
    return;
  }
  if(a->length < index && index < a->size) {
    a->arr[a->length++] = num;
    return;
  }
  for(int i=a->length; i>index; i--){
    a->arr[i] = a->arr[i-1];
  }
  a->arr[index] = num;
  a->length++;
}
