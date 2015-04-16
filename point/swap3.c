#include <stdio.h>

void interchange(int * u,int * v);

int main()
{
  int x=10,y=5;

  printf("Origin x is %d,y is %d,%p,%p\n",x,y,&x,&y);
  interchange(&x, &y);
  printf("Change x is %d,y is %d,%p,%p\n",x,y,&x,&y);
  return 0;
}



void interchange(int *u, int *v)
{
  int temp;

  temp = *u;
  *u = *v;
  *v = temp;
}
