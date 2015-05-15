#include <stdio.h>

void changeValue(int a[]){
       a[0]=2;
}

void change_val( int a[]) {
	a[0] = 6;
}

void change_val2(int *p) {
	p[0] = 3;
}


int main(int argc, const char * argv[])
{
   int a[] = {1, 2, 3};

   int *p = &a[0];
   printf("len=%lu\n", sizeof(int));
	
   int i;
   for (i=0; i<3; i++) {
	  printf("a[%d] = %d\n",i, *(p+1));
   }
	
   change_val2(a);
   int j;
   for (j=0; j<3; j++ ) {
	  printf("a[%d] = %d\n", j, a[j]);
   }


	/*int a=3;
	int *p;

	p = &a;

	printf("%d\n", *p);
	*p = 4;
	printf("%d, %d\n", *p, a);
	a = 5;
	printf("%d, %d\n", *p, a);


	char c=1;

	printf("c=%d");
	*/

    
	return 0;
}
