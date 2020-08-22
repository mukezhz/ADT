#include <stdio.h>
int fibonacci(int);
int main(int argc, char *argv[])
{
  int term = 0;
  printf("Enter the term: ");
  scanf("%d",&term);
  printf("The element at %d is %d\n",term,fibonacci(term));
  return 0;
}

int fibonacci(int num){
  if (num<=0) return 0;
  if (num==1) return 1;
  return fibonacci(num-1) + fibonacci(num-2);
}
