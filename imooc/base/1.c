#include <stdio.h>

int main()
{
  char buf[512];
  sscanf("123456", "%4s", buf);
  printf("%s\n", buf);
  return 0;
}
