#include <stdio.h>

void cpystr(char *pa, char *pb) {
  while ( (*pb=*pa) != '\0' ) {
    pa++;
    pb++;
  }
}

int main()
{
  char *pa = "Apple, Samsung, Xiaomi, Smartisan";
  char b[100],*pb;

  pb = b;

  cpystr(pa, pb);

  printf("a is %s\nb is %s\n", pa, pb);
  return 0;
}
