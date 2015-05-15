#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char *pchar;

   //printf("pchar=%p\n",pchar);
   //

   pchar = NULL;
   printf("pchar=%p\n\n", pchar);


   if (!pchar) {
	  pchar = (char *)malloc(20);
	  if (!pchar) {
		 printf("动态分配内存");
		 exit(-1);
	  }
	
	  gets(pchar);
	  printf("pchar=%p,pchar=%s\n", pchar, pchar);
	  free(pchar);

	  if ( pchar ) {
		 printf("\npchar=%p, pchar=%s\n", pchar, pchar);
	  }

   }
   return 0;
}
