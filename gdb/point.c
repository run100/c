#include <stdio.h>

int main()
{
  //int *p;
  //printf("%X\n", p);

  int x,y,*px=&x;
  x = 10;

  y = *px + 5;

  printf("y is %d\n", y);
  printf("y is %d\n", ++*px);
  printf("y is %d\n", *px++);



  return 0;
}
