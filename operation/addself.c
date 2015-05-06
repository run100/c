#include <stdio.h>

int main(void){
   //int a=100;
   int a;
   printf("Please Input A Number\n");
   //scanf("%d", &a);
   a = getchar();
   printf("a=%d\n", a);
   printf("a++=%d 先取值再运算\n", a++);
   printf("a=%d\n", a);
   printf("++a=%d 先运算再取值\n", ++a);
   printf("a=%d\n", a);
   printf("a--=%d 先取值再运算\n", a--);
   printf("a=%d\n", a);
   printf("--a=%d\n", --a);
   printf("a=%d\n", a);
   return 0;
}
