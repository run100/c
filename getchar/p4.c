#include <stdio.h>

int main(void){
   int num[] = {1, 2, 3, 4};
   int *pt;


   pt = num + 1;
   printf("pt = %d, *pt = %d\n",pt, *pt);
   printf("pt-1=%d, *(pt-1) = %d\n", pt-1, *(pt-1));

   pt = num +1;

   printf("%d,%d\n",pt[0], pt[-1]);
   return 0;
}
