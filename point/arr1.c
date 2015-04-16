#include <stdio.h>
#define SIZE 4

int main(int argc, char *argv[])
{
  short dates[SIZE];
  short *pti;
  short index;

  double bills[SIZE];
  double *ptf;

   pti = dates;
   ptf = bills;

   printf("%23s %10s\n", "short", "double");

   for(index=0;index<SIZE;index++){
      printf("%10p\n",&dates[index]);
      printf("pointers + %d: %10p %10p\n", index, pti+index, ptf+index);
   }

   dates[2] = 99;
   printf("%d %d %p\n",dates[2], *(dates+2), dates+2);

  /*int arr[] = {1, 2, 3, 4};

  printf("%p\n",arr);

  printf("%p\n",&arr[0]);*/


}
