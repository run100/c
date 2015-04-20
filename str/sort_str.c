#include <stdio.h>
#include <string.h>

#define SIZE 81 // 字符串长度
#define LIM 20  // 最多输入多少行
#define HALT " "  // 用空字符串终止输入

void sortstr(char *string[], int num);

int main()
{
  char input[LIM][SIZE]; // 读取每行的字符
  char *ptstr[LIM];      // 指针指向字符串首地址

  int ct = 0;
  int k;


  printf("Input up to %d lines, and I will sort them.\n",LIM);
  printf("To stop, press the Enter key at a line's start.\n");

  while(ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0'){
    ptstr[ct] = input[ct];  /* set ptrs to strings        */
    ct++;
  }

  sortstr(ptstr, ct);

  puts("\nHere's the sorted list:\n");
  for(k=0;k<ct;k++){
    //printf("%d");
    puts(ptstr[k]);
  }

}

void sortstr(char *strings[],int num)
{
  char *temp;

  int top,seek;

  for(top = 0;top < num -1; top++){

    for(seek = top+1; seek<num; seek++){
      if(strcmp(strings[top],strings[seek]) > 0){
          temp = strings[top];
          strings[top] = strings[seek];
          strings[seek] = temp;
      }
    }
  }
}
