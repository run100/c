#include <stdio.h>

void change(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 5;
	int b = 3;
	change(&a, &b);	
	printf("a is %d, b is %d", a, b);	
	return 0;
}
