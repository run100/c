#include <stdio.h>
#define MONTHS 12

int main(int argc, char *argv[])
{
  int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int index;

  for(index = 0; index < MONTHS; index ++){
    printf("Month %2d has %d %d days. %10p\n", index, *(days+index), days[index], days+index);
  }
}
