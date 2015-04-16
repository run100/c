#include <stdio.h>

int main(int argc,char *argv[]){

  int urn[5] = {100,200,300,400,500};
  int *ptr1,*ptr2,*ptr3;

  ptr1=urn; // 数组首元素是地址，可直接指向，不加&符号
  ptr2=&urn[2];

  printf("pointer value, dereferenced pointer, pointer address:\n");
  printf("指针的值，指针指向的值，指针的地址\n");
  printf("ptr = %p, *ptr1 = %d, &ptr = %p\n",
        ptr1,*ptr1,&ptr1);

  // 数组指针加法运算
  ptr3 = ptr1+4; // 地址+4，INT类型4个字节内存单元向前移，数组第5个元素
  printf("\nadding an int to a pointer:\n");
  printf("ptr1+4 = %p,*(ptr1+4)=%d\n", ptr3, *(ptr1+4) );

  // 数组指针向前移一下，urn[1]
  ptr1++;  // 先取值再运算
  printf("\nvalues after ptr1++:\n");
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
        ptr1, *ptr1, &ptr1);

  ptr2--;
  printf("\nvalues after ptr2++:\n");
  printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",
        ptr2, *ptr2, &ptr2);


   --ptr1;            // restore to original value 先运算再取值
   ++ptr2;            // restore to original value

   printf("\nPointers reset to original values:\n");
   printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

   printf("\nsubtracting one pointer from another:\n");
   printf("\nptr2=%p,ptr1=%p,ptr2-ptr1=%p\n",ptr2,ptr1,ptr2-ptr1);

   printf("\nsubtracting an int from a pointer:\n");
   printf("ptr3 = %p, ptr3 - 2 = %p\n",
            ptr3,  ptr3 - 2);

   return 0;
}
