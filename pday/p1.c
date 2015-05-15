#include <stdio.h>
void swap(int *a, int *b);

int main()
{
	/* int a=10;
	int b=20;
	swap(&a, &b);
	printf("%d, %d\n", a, b); */

   	/* int a[5] = {33,45,67,34,9};
	int *p, x;
	p = a;
	printf("%d\n", *p);
	printf("%d\n", *(p+1));
	*/

    /* int a[10], *p;

	p = a;

	printf("Please Input 10 Number:\n");
	int i;
	for (i = 0; i < 10; i++) {
	   scanf("%d", p++);
	}
	p = a;

	for (i = 0; i< 10; i++,p++) {
		printf("a[%d] = %d\n", i, *p);
	}*/

    int a[2] = {1, 2};
	int *p;

	p = a;
	
	//p++;
	//int d = *(p++);
	//printf("%d\n", d);
	int i;	
	for (i = 0; i<2; i++) {
	   printf("a[%d]=%d\n", i, *p++);
	}
	return 0;
}

void swap(int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
