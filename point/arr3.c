#include <stdio.h>

int main(void){
 	char a[5] = {'a','b','c','d','e'};
	char (*p1)[5] = &a;

	printf("%p,%c\n", *p1, *(p1+1));
	return 0;
}
