#include <stdio.h>
#define SIZE 3

int main()
{
  const double days[SIZE] = {1, 2, 3};
  // days[1] = 99.99; error const

  const double * pd = days;

  /* 修改值 */
  // *pd = 22.22;
  pd++;
  return 0;
}
