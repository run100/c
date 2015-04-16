#include <stdio.h>

int main()
{
  /*int p=10;
  printf("%d %p\n",p, &p);
  int val = &p;
  //printf("%d %p\n",*val, val);
  printf("%d",*val);*/

  int * ptr;
  int nurse = 22;
  int val;
  ptr = &nurse;
  val = *ptr;
  printf("%d %p %d %p\n", nurse, ptr, val, &val);
  return 0;
}
