#include <stdio.h>
#include "sum.h"

int sum(int  *ar, int n) {
  int i;
  int sum = 0;
  for ( i=0; i<n; i++ ) {
    sum += *(ar+i);
  }
  printf("func sum the size of ar is %zd bytes.\n", sizeof ar);
  return sum;
}

int main()
{
  int s = 0;
  int n = 0;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("the size of arr is %zd bytes.\n", sizeof arr);
  n = sizeof arr / sizeof arr[0];
  s = sum(arr, n);
  printf("sum is %ld\n", s);

  return 0;
}
