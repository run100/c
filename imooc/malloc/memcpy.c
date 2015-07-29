#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char *str;
  int len;
  int n;

  printf("Please Input String:\n");
  scanf("%s", str);
  printf("Please Input Loop:\n");
  scanf("%d", &n);

  printf("Input Str:%s\nLoop is:%d\n", str, n);

  return 0;
}
