#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 80

void to_upper(char *);

int main(void){
  char line[LIMIT];

  puts("Please enter a line:");
  gets(line);
  to_upper(line);
  puts(line);
  return 0;
}

void to_upper(char *str){
  while(*str){
    *str = toupper(*str);
    str++;
  }
}
