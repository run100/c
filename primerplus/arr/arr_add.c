#include <stdio.h>

/* 给数组每个值添加一个值 */
void add_to(double *, int n, double dn);

void show_arr(const double *, int n);

int main()
{
  double arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = sizeof arr/sizeof arr[0];

  double dn = 22.22;

  add_to(arr, n, dn);

  /*int j;
  for ( j=0; j<n; j++) {
    printf("arr[%d] is %lf\n", j, arr[j]);
  }*/

  show_arr(arr, n);

  return 0;
}

void add_to(double *arr, int n, double val) {

  int i;
  for ( i=0; i<n; i++) {
    arr[i] += val;
    /* *(arr+i) += val; */
  }

  //return arr;
}

void show_arr(const double *arr, int n)
{
  int i;
  for ( i=0; i<n; i++ ) {
    printf("arr[%d] is %8.3f\n", i, arr[i]);
  }
}

