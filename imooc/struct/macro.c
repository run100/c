#include <stdio.h>
#define R 20
#define M int main(
#define N(n) n*10
#define Add(a,b) a+b

M)
{
	int a=R;
	printf("a is %d\n", a);
	
	int  b=N(a);
	printf("b is %d\n", b); 

	int c = Add(a, b);
	printf("c is %d\n", c);
	return 0;
}
