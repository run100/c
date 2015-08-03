#include <stdio.h>

int main(void)
{
  /* 只给指针赋值了指针内存空间，未给变量有内存空间地址, 变量的值会乱分配  */
  int *pt;
  *pt = 3;
  return 0;
}
