#include <stdio.h>

int main()
{
   int i=10;
   int *ipp;
	ipp = &i;

	printf("%p\n", &*ipp);
	printf("%p\n", &i);
   printf("%d\n", *ipp);
   return 0;
}
