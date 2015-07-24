#include <stdio.h>

int main()
{
	//int a = 10;
	//int *p;
	//p = &a;
	
	char a = 10;
	printf("a的值是%d\n", a);

	char *p = &a;
	*p = 20;

	printf("a的值是%d\n", a);

	char value = *p;
	printf("val的值是%d\n", value);
	return 0;
}
