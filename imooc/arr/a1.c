#include <stdio.h>

int sum_and_minus(int a, int b, int *minus)
{
	*minus = a - b;
	return a+b;
}

int main()
{
	int a=6;
	int b=2;

	int sum,minus;

	sum = sum_and_minus(a, b, &minus);

	printf("sum is %d\n", sum);

	printf("minus is %d\n", minus);
	return 0;
}
