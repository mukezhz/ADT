#include <stdio.h>
int factorial(int);
int main(int argc, char *argv[])
{
  long long int num = 0;
  printf("Enter the number\n"); 
  scanf("%d",&num);
  printf("Factorial of %d: %d\n", num,factorial(num));
  return 0;
}

int factorial(int num){
  if (num==0) return 1;
  return num * factorial(num-1);
}
