#include <stdio.h>

int main(){
   int a=5,b=200;
   int *p;// 定义指针变量,可以指向任意一个地址

   //printf("%d %p\n", *p, &a);
   //printf("%d\n",*(&a));
   //

   p = &a;// 取变量a的地址赋给指针变量　
   /*printf("&a=%p, *(&a)=%d\n", &a, *p);
   printf("p=%p, *p=%d\n\n", p, *p);

   p=&b;
   printf("&b=%p, *(&b)=%d\n", &b, *(&b));
   printf("p=%p, *p=%d\n", p, *p);

   *p = 500;// 改变地址中的值,a变量的值也随着改变
   printf("a=%d,*p=%d\n\n",a,*p);


   p = &b;
   b = b + 1;
   //printf("b=%d,*p=%d\n", b, *p);
   printf("&b=%p, *(&b)=%d\n", &b, *(&b));
   printf("p=%p, *p=%d\n", p, *p);*/


   char str[] = "http://www.quanxue.cn/";
   char *ptr = "http://www.51minge.com/";
   char *point;

   point = str;
   point[1] = "Q", point[2] = "X";
   printf("str=%s\n",str);

   ptr[13] = 'M';
   printf("ptr=%s\n", ptr);
   return 0;
}
