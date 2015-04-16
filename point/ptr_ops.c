#include <stdio.h>

int main(int argc,char *argv[]){

  int urn[5] = {100,200,300,400,500};
  int *ptr1,*ptr2,*ptr3;

  ptr1=urn; // 数组首元素是地址，可直接指向，不加&符号
  ptr2=&urn[2];

  printf("pointer value, dereferenced pointer, pointer address:\n");
  printf("ptr = %p, *ptr1 = %d, &ptr = %p\n",
        ptr1,*ptr1,&ptr1);


  return 0;
}
