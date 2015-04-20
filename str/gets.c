#include <stdio.h>
#define SIZE 20
#define DEF "I am a #defined string.";

int put2(const char * string){

  int count;
  while(*string != '\0'){
    putchar(*string++);
    count++;
  }
  putchar('\n');
  return count;
}

int main()
{
  char name[SIZE];
  char *ptr;

  int cnt;
  cnt = put2("zhangzhw");

  //printf("Input a name\n");
  // ptr = gets(name);
  // printf("name is %s\n",ptr);
  //ptr = fgets(name, SIZE, stdin);
  //printf("%s ? Ah! %s!\n", name, ptr);

  /*char str1[80] = "An array was initialized to me.";
  const char * str2 = "A pointer was initialized to me.";

  puts("I'm an argument to puts().");
  puts(DEF);
  puts(str1);
  puts(str2);
  puts(&str1[5]);
  puts(str2+1);*/

  /*char line[10];
  while(fgets(line, 81, stdin)){
    fputs(line, stdout);
  }*/

  return 0;
}
