#include <stdio.h>

int main()
{
  const int days[] = {31, 28, 31, 30, 31};
  int index;
  printf("sizeof days is %d\n", sizeof(days));
  printf("siezof days[0] is %d\n", sizeof(days[0]));

  for ( index = 0; index < (sizeof days / sizeof days[0]); index ++  ) {
    printf("Month %d has %d Days\n", index, days[index]);
  }
  return 0;
}
