#include <stdio.h>
#define SPACE ' '

int main(void){

  char ch;

  char sch;
  scanf("%c",&sch);
  printf("%c\n", sch);

  ch = getchar();
  while(ch != '\n'){
    if(ch == SPACE){
      putchar(ch);
    }else{
      putchar(ch+1);
    }
    ch = getchar();
  }
  putchar(ch);
  return 0;
}
