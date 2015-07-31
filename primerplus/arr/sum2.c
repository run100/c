#include <stdio.h>
#define SIZE 10

/* sum函数原型 */
int sum(int *, int *);

int main()
{
  int MONTHS[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int size = 0;
  int total = 0;

  size = sizeof MONTHS/ sizeof MONTHS[0];
  printf("size is %ld\n", size);
  total = sum( MONTHS, MONTHS+size );

  printf("sum is %ld.\n", total);

  return 0;
}

/* sum函数 */
int sum( int * start, int * end ) {
  int sum = 0;

  while ( start < end  ) {
    sum += *(start++); /* 先把指针数据加到total上，然后指针再自增1 */
    /*start ++ ;*/
  }

  return sum;
}
