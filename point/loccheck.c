#include <stdio.h>
void test(int b);

int main(void){
    int a = 2,b = 10;

	printf("a=%d,&a=%p\n", a, &a);
	printf("b=%d,&b=%p\n", b, &b);
	test(b);	
	return 0;
}

void test(int b){
	
    int a = 5;
	printf("a=%d,&a=%p\n", a, &a);
	printf("b=%d,&b=%p\n", b, &b);

}
