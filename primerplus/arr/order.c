#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main()
{
  int * p1, * p2, * p3;

  p1 = p2 = data;
  p3 = moredata;

  /* 同级，从右向左  <- */
  /* *p1++表示 指针指向的数据加到total,指针再指向下一个值 */
  /* *++p2表示 指针先自增1,然后再使用其指向的值  */
  printf("*p1 = %d, *p2 = %d, *p3 = %d \n", *p1, *p2, *p3);
  printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *(p1++), *++p2, (*p3)++ );
  printf("*p1 = %d, *p2 = %d, *p3 = %d \n", *p1, *p2, *p3);
  return 0;
}
