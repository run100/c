#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char *str;
  char *str2 = "121231";
  int len;
  int n;

  printf("st2 is %s\n", str2);

  printf("Please Input String:\n");
  scanf("%s", str);
  /*printf("Please Input Loop:\n");
  scanf("%d", &n);*/

  printf("strlen(str) is %d\n", strlen(str));
  printf("strlen(str2) is %d\n", strlen(str2));
  /* len = 10;
  printf("Input Str:%s\nLoop is:%d\n", str, n); */

  return 0;
}
