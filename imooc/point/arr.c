#include <stdio.h>

int main()
{
	int a=3;
	int b=2;
	int arr[3];
	int *pa = arr;
	pa[0] = 1;
	pa[1] = 10;
	pa[2] = 100;
	printf("arr[2] is %d\n", arr[2]);
	int *p = &a;
	//int *pa = arr;
	pa[1] = 99;
	int i;
	for ( i=0; i<3; i++ ) {
		printf("*pa=%d\n",*pa);
		pa++;
	}

	printf("----------------------\n");
	/* p=&a;
	for ( i=0;i<6; i++ ) {
		printf("*p=%d\n", p[i]);
	} */

	return 0;
}
