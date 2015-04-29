#include <stdio.h>
void test(int a);
void test_b(int *a);

int main(void){
	int a = 10;

	printf("a=%d,a=%p\n", a, &a);
	
	test_b( &a );

	printf("a=%d,a=%p\n", a, &a);

	return 0;
}

void test(int n)
{
	n = 10;
}

void test_b(int *a)
{
	*a=5;
}
