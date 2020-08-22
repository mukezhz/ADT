#include <stdio.h>
int sumnatural(int);
int main(int argc, char *argv[])
{
  int num = 0;
  printf("Enter the nth natural number: ");
  scanf("%d",&num);
  printf("The sum of %d natural number: %d\n", num, sumnatural(num));
  return 0;
}

int sumnatural(int num){
  if (num <= 0) return 0;
  return num + sumnatural(num-1);
}
