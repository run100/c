#include <stdio.h>
typedef char *pstr1;
typedef int INTEGER;
#define pstr2 char*;

int main()
{
  pstr1 s1,s2;
  /* pstr2 s3,s4; */
  INTEGER a, b;
  a = 1;
  b = 2;

  int arr[3] = {1, 2, 3};

  printf("arr[0] is %d", arr[0]);

  char name[20];
  name = "aa";
  return 0;
}
