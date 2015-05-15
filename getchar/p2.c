#include <stdio.h>

int main()
{
   char *ptr = "http://blog.chromev.com";
   printf("%s\n", ptr);

   int i = 129;
   int num[] = {50, 25, 75, 100};
   int *pt1 = &i;
   int *pt2 = num;

   printf("i=%d\n",*pt1);
   printf("num=%p\n", *pt2+1);

   return 0;
}
