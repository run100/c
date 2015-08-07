#include <stdio.h>
#include <stdlib.h>

int main()
{
  char buffer[200] ;
  buffer = "helll owrld";
  char *pt;
  pt = buffer;
  pt = "hello world";


  printf("pt is %s\n", pt);
  printf("buffer is %s\n", buffer);

  return 0;
}
