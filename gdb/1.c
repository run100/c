#include <stdio.h>

int func(int n) {
  int sum = 0;
  int i = 0;
  for ( i=0; i<n; i++ ) {
    sum += i;
  }
  return sum;
}


int main()
{
  int i = 0;
  char *str  = "aaaabbbbcc";
  double a = 99.00;

  int sum2 = 0;
  for ( i=0; i<= 100; i++) {
    sum2 += i;
  }
  printf("1+...+100 sum is %d\n", sum2);

  int sum = 0;
  sum = func(10);
  printf("sum is %d\n", sum);

  return 0;
}
